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
// Author: Renato Caldas                                                    *
//***************************************************************************

// DUNE Headers
#include <DUNE/Entities/EntityDescriptor.hpp>
#include <DUNE/Tasks/Context.hpp>

namespace DUNE
{
  namespace Entities
  {
    void
    EntityDescriptor::setLabel(const std::string& label)
    {
      m_label = label;
    }

    void
    EntityDescriptor::setSystem(const std::string& system)
    {
      m_system = system;
    }

    void
    EntityDescriptor::setId(unsigned int id)
    {
      m_id = id;
    }

    void
    EntityDescriptor::setSystem(unsigned int sysid)
    {
      m_sys_id = sysid;
    }

    const std::string&
    EntityDescriptor::getLabel(void) const
    {
      return m_label;
    }

    const std::string&
    EntityDescriptor::getSystem(void) const
    {
      return m_system;
    }

    unsigned int
    EntityDescriptor::getId(void) const
    {
      return m_id;
    }

    unsigned int
    EntityDescriptor::getSystemId(void) const
    {
      return m_sys_id;
    }

    const std::string&
    EntityDescriptor::getLabel(Tasks::Context& ctx)
    {
      if (m_label == "")
        m_label = ctx.entities.resolve(m_id);
      return m_label;
    }

    const std::string&
    EntityDescriptor::getSystem(Tasks::Context& ctx)
    {
      if (m_system == "")
        m_system = ctx.resolver.resolve(m_sys_id);
      return m_system;
    }

    unsigned int
    EntityDescriptor::getId(Tasks::Context& ctx)
    {
      if (m_id == DUNE_IMC_CONST_UNK_EID)
        m_id = ctx.entities.resolve(m_label);
      return m_id;
    }

    unsigned int
    EntityDescriptor::getSystemId(Tasks::Context& ctx)
    {
      if (m_sys_id == DUNE_IMC_CONST_NULL_ID)
        m_sys_id = ctx.resolver.resolve(m_system);
      return m_sys_id;
    }
  }
}
