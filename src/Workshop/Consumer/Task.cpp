// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Workshop
{
  //! Simple task that consumes temperature messages and prints them to
  //! the terminal.
  namespace Consumer
  {
    using DUNE_NAMESPACES;

    //! Entry point.
    struct Task: public Tasks::Task
    {
      //! Task constructor.
      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx)
      {
        bind<IMC::Temperature>(this);
      }

      //! Process temperature messages.
      void
      consume(const IMC::Temperature* msg)
      {
        inf("temperature is %f", msg->value);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
