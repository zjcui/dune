//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace AllianceUAV
  {
    using DUNE_NAMESPACES;

    enum TaskStates
    {
      TASK_BEGIN,
      TASK_UAM_WAIT,
      TASK_PLAN,
      TASK_PLAN_DELAY,
      TASK_PLAN_SEND,
      TASK_PLAN_WAIT,
      TASK_PLAN_TOUT,
      TASK_ABORT_BEGIN,
      TASK_ABORT_DELAY,
      TASK_ABORT_SEND,
      TASK_ABORT_WAIT,
      TASK_ABORT_TOUT,
      TASK_IDLE
    };

    struct Arguments
    {
      std::string uam_elabel;
      std::string plan_name;
      std::string system_name;
      double plan_send_tout;
      double abort_delay;
      double plan_delay;
      double abort_tout;
    };

    struct Task: public DUNE::Tasks::Task
    {
      IMC::EntityState m_uam_state;
      int m_uam_eid;
      TaskStates m_task_state;
      bool m_plan_delivered;
      bool m_abort_delivered;
      Counter<double> m_timer;
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uam_eid(-1),
        m_task_state(TASK_BEGIN),
        m_plan_delivered(false),
        m_abort_delivered(false)
      {
        param("System Name", m_args.system_name)
        .defaultValue("lauv-noptilus-3")
        .description("System name");

        param("Entity Label - Acoustic Modem", m_args.uam_elabel)
        .defaultValue("Acoustic Modem")
        .description("Evologics driver entity label");

        param("Plan Name", m_args.plan_name)
        .defaultValue("uav_alliance")
        .description("Plan name");

        param("Plan Send Timeout", m_args.plan_send_tout)
        .defaultValue("10.0")
        .description("Plan send timeout");

        param("Plan Delay", m_args.plan_delay)
        .defaultValue("120.0")
        .description("Plan send timeout");

        param("Abort Delay", m_args.abort_delay)
        .defaultValue("300.0")
        .description("Plan send timeout");

        param("Abort Timeout", m_args.abort_tout)
        .defaultValue("10.0")
        .description("Abort send timeout");

        m_uam_state.state = IMC::EntityState::ESTA_BOOT;

        bind<IMC::EntityState>(this);
        bind<IMC::UamRxRange>(this);
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
        m_uam_eid = resolveEntity(m_args.uam_elabel);
      }

      void
      consume(const IMC::EntityState* msg)
      {
        if (msg->getSourceEntity() != m_uam_eid)
          return;

        m_uam_state = *msg;
      }

      void
      consume(const IMC::UamRxRange* msg)
      {
        if (msg->sys != m_args.system_name)
          return;

        if (m_task_state == TASK_ABORT_WAIT)
          m_abort_delivered = true;
        else if (m_task_state == TASK_PLAN_WAIT)
          m_plan_delivered = true;
      }

      void
      sendPlanStart(void)
      {
        IMC::PlanControl pc;
        pc.type = IMC::PlanControl::PC_REQUEST;
        pc.op = IMC::PlanControl::PC_START;
        pc.plan_id = m_args.plan_name;

        IMC::AcousticOperation aop;
        aop.setDestination(getSystemId());
        aop.op = IMC::AcousticOperation::AOP_MSG;
        aop.system = m_args.system_name;
        aop.msg.set(pc);
        dispatch(aop);
      }

      void
      sendAbort(void)
      {
        IMC::AcousticOperation aop;
        aop.setDestination(getSystemId());
        aop.op = IMC::AcousticOperation::AOP_ABORT;
        aop.system = m_args.system_name;
        dispatch(aop);
      }

      void
      updateState(void)
      {
        switch (m_task_state)
        {
          case TASK_BEGIN:
            inf("waiting for modem driver to became online");
            m_task_state = TASK_UAM_WAIT;
            break;

          case TASK_UAM_WAIT:
            if (m_uam_state.state == IMC::EntityState::ESTA_NORMAL)
              m_task_state = TASK_PLAN;
            break;

          case TASK_PLAN:
            inf("UAM is online, waiting %0.2f s", m_args.plan_delay);
            m_timer.setTop(m_args.plan_delay);
            m_task_state = TASK_PLAN_DELAY;
            break;

          case TASK_PLAN_DELAY:
            if (m_timer.overflow())
              m_task_state = TASK_PLAN_SEND;
            break;

          case TASK_PLAN_SEND:
            inf("sending plan");
            sendPlanStart();
            m_timer.setTop(m_args.plan_send_tout);
            m_task_state = TASK_PLAN_WAIT;
            break;

          case TASK_PLAN_WAIT:
            if (m_plan_delivered)
            {
              inf("plan delivered");
              m_task_state = TASK_ABORT_BEGIN;
            }
            else if (m_timer.overflow())
            {
              m_task_state = TASK_PLAN_TOUT;
            }
            break;

          case TASK_PLAN_TOUT:
            inf("failed to receive acknowledgement of plan control");
            m_task_state = TASK_BEGIN;
            break;

          case TASK_ABORT_BEGIN:
            inf("waiting %0.2f before sending abort", m_args.abort_delay);
            m_timer.setTop(m_args.abort_delay);
            m_task_state = TASK_ABORT_DELAY;
            break;

          case TASK_ABORT_DELAY:
            if (m_timer.overflow())
            {
              m_task_state = TASK_ABORT_SEND;
              inf("sending abort");
            }
            break;

          case TASK_ABORT_SEND:
            sendAbort();
            m_timer.setTop(m_args.abort_tout);
            m_task_state = TASK_ABORT_WAIT;
            break;

          case TASK_ABORT_WAIT:
            if (m_abort_delivered)
              m_task_state = TASK_IDLE;
            if (m_timer.overflow())
              m_task_state = TASK_ABORT_TOUT;
            break;

          case TASK_ABORT_TOUT:
            inf("abort not acknowledged on time");
            m_task_state = TASK_ABORT_SEND;
            break;

          case TASK_IDLE:
            break;
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          updateState();
        }
      }
    };
  }
}

DUNE_TASK
