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

#ifndef DUNE_ENTITIES_ENTITY_DESCRIPTOR_HPP_INCLUDED_
#define DUNE_ENTITIES_ENTITY_DESCRIPTOR_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE Headers
#include <DUNE/IMC/Constants.hpp>

namespace DUNE
{
  namespace Tasks
  {
    // Forward declaration.
    class Context;
  }

  namespace Entities
  {
    class EntityDescriptor
    {
    public:
      EntityDescriptor():
        m_id(DUNE_IMC_CONST_UNK_EID),
        m_sys_id(DUNE_IMC_CONST_NULL_ID)
      { }

      EntityDescriptor(const std::string& label, const std::string& system):
        m_id(DUNE_IMC_CONST_UNK_EID),
        m_label(label),
        m_sys_id(DUNE_IMC_CONST_NULL_ID),
        m_system(system)
      { }

      //! Set the entity label.
      //! @param[in] label entity label.
      void
      setLabel(const std::string& label);

      //! Set the system name.
      //! @param[in] system system name.
      void
      setSystem(const std::string& system);

      //! Set the entity identifier.
      //! @param[in] id entity identifier.
      void
      setId(unsigned int id);

      //! Set the system identifier.
      //! @param[in] sysid system identifier.
      void
      setSystem(unsigned int sysid);

      //! Retrieve the entity label.
      //! @return entity label.
      const std::string&
      getLabel(void) const;

      //! Retrieve the system name.
      //! @return system name.
      const std::string&
      getSystem(void) const;

      //! Retrieve the entity identifier.
      //! @return entity identifier.
      unsigned int
      getId(void) const;

      //! Retrieve the system identifier.
      //! @return system identifier.
      unsigned int
      getSystemId(void) const;

      //! Retrieve the entity label using a context if necessary.
      //! @param[in] context context to use.
      //! @return entity label.
      const std::string&
      getLabel(Tasks::Context& ctx);

      //! Retrieve the system name using a context if necessary.
      //! @param[in] context context to use.
      //! @return system name.
      const std::string&
      getSystem(Tasks::Context& ctx);

      //! Retrieve the entity identifier using a context if necessary.
      //! @param[in] context context to use.
      //! @return entity identifier.
      unsigned int
      getId(Tasks::Context& ctx);

      //! Retrieve the system identifier using a context if necessary.
      //! @param[in] context context to use.
      //! @return system identifier.
      unsigned int
      getSystemId(Tasks::Context& ctx);

    private:
      //! Entity Id.
      unsigned int m_id;
      //! Entity Label.
      std::string m_label;
      //! System Id.
      unsigned int m_sys_id;
      //! System Name.
      std::string m_system;
    };
  }
}

#endif
