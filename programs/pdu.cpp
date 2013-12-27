#include <DUNE/DUNE.hpp>
#include <Transports/GSM/PDU.hpp>

using DUNE_NAMESPACES;
using namespace Transports::GSM;

int
main(void)
{

  // // for (unsigned i = 0; i < 9; ++i)
  // // {
  // //   data.push_back(i);
  // // }

  // std::string cmd = Transports::GSM::PDU::encodeSMS("351935686448", data);
  // //std::string cmd = Transports::GSM::PDU::encodeSMS("351969349133", data);

  // std::cerr << "AT+CMGS=" << (cmd.size() - 2) / 2 << std::endl;
  // std::cerr << cmd << std::endl;

  PDU::decodeSMS("07915391131213F4040C915391538646840000310190322482400CD8AC361293CD6891A07008");
  //PDU::decodeHex("07911326040000F0040B911346610089F60000208062917314080CC8F71D14969741F977FD07");
  //PDU::decodeHex("07911356131313F311000B926021436587F10000AA0CC8F71D14969741F977FD07");
  //PDU::decodeHex("07916407058099F911000A8170607896200000A71554747A0E4ACF416110945805B5CBF379F85C06");
  return 0;
}
