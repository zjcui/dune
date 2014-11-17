// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Workshop
{
  //! Simple task that produces random temperature measurements.
  namespace Producer
  {
    using DUNE_NAMESPACES;

    //! Task arguments.
    struct Arguments
    {
      //! PRNG type.
      std::string prng_type;
      //! PRNG seed.
      int prng_seed;
      //! Mean temperature value.
      float mean_value;
      //! Standard deviation of temperature measurements.
      double std_dev;
    };

    //! Entry point.
    struct Task: public Tasks::Periodic
    {
      //! PRNG handle.
      Random::Generator* m_prng;
      //! Task arguments.
      Arguments m_args;

      //! Task constructor.
      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_prng(NULL)
      {
        param("Standard Deviation", m_args.std_dev)
        .units(Units::Meter)
        .defaultValue("0.1");

        param("PRNG Type", m_args.prng_type)
        .defaultValue(Random::Factory::c_default);

        param("PRNG Seed", m_args.prng_seed)
        .defaultValue("-1");

        param("Mean Value", m_args.mean_value)
        .defaultValue("25.0")
        .units(Units::DegreeCelsius)
        .description("Mean temperature value");
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_prng = Random::Factory::create(m_args.prng_type,
                                         m_args.prng_seed);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_prng);
      }

      //! Periodic work.
      void
      task(void)
      {
        IMC::Temperature temperature;
        temperature.value = m_args.mean_value
                            + m_prng->gaussian()
			    * m_args.std_dev;
        dispatch(temperature);
      }
    };
  }
}

DUNE_TASK
