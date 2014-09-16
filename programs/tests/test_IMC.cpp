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
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 68ddefd434b1f6c6c8136efbd1ebc509                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.7562844069196349);
    msg.setSource(7594U);
    msg.setSourceEntity(149U);
    msg.setDestination(32487U);
    msg.setDestinationEntity(204U);
    msg.state = 252U;
    msg.flags = 75U;
    msg.description.assign("PSHZTXSOJWNAJSPGIVCBQWHMWXKEGDLRMHFAKAZZMLEIRDROMJXNNYEXHOQLJWPJAVLNKCHHMBUQXDBSTIGORMMYXHODVTPQFCBNUMGGIVWNRHMQSSRUSNQOKDUDBZUWSHTWLIFYVBJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.6304143878911349);
    msg.setSource(40700U);
    msg.setSourceEntity(193U);
    msg.setDestination(23352U);
    msg.setDestinationEntity(223U);
    msg.state = 79U;
    msg.flags = 130U;
    msg.description.assign("OYJEZNEFRDMTSDTICCUZOGUBTHBPWLOBWKQXHVX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.06639693385359002);
    msg.setSource(60846U);
    msg.setSourceEntity(53U);
    msg.setDestination(4639U);
    msg.setDestinationEntity(158U);
    msg.state = 171U;
    msg.flags = 32U;
    msg.description.assign("PQIHXPKZDBACHIHNRXZGGSNXTZSHAVUYEODVTTHANJZWLDOFEFJAWTAOBRWRCQFMPPQCTBKRROMAVNYLTLIMICTKILFSRWAKDMCQOUHVBYEJQMUGKVGRZMSDXWWHCNUDMPJAHJFWGFYLLWKVCIYGUBJCTONZUBYXVYOJICENMXSJIOSKUXBTBIYXDGIDXLQBSBSFJYVLQHQLZUEDEQKYSWRNZSDWFAPUEZNRQGOPJUAL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.1942817894562785);
    msg.setSource(22757U);
    msg.setSourceEntity(56U);
    msg.setDestination(33689U);
    msg.setDestinationEntity(233U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.12701124411721132);
    msg.setSource(906U);
    msg.setSourceEntity(240U);
    msg.setDestination(12366U);
    msg.setDestinationEntity(234U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.6671573668425664);
    msg.setSource(39738U);
    msg.setSourceEntity(74U);
    msg.setDestination(26503U);
    msg.setDestinationEntity(181U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.7094583296211295);
    msg.setSource(3412U);
    msg.setSourceEntity(9U);
    msg.setDestination(36560U);
    msg.setDestinationEntity(226U);
    msg.id = 59U;
    msg.label.assign("TYUUHDDYAXLGFRTRIAECOSQBHQQTQOSJEHIRXLJJWGRDKOVV");
    msg.component.assign("PLJPWLTMQOQEYIRAFPUKOSAUHWSXGSRFCDWVNTDOREKSGBFLCNINQJLEEFQSDMGKKXXBGACSMYFZXWRMLDPMITHPWAYNHCTVRVUMCROUXKNIFEQXTPQ");
    msg.act_time = 10576U;
    msg.deact_time = 62512U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.8770091800072317);
    msg.setSource(61014U);
    msg.setSourceEntity(214U);
    msg.setDestination(24861U);
    msg.setDestinationEntity(109U);
    msg.id = 158U;
    msg.label.assign("XTSUABLKGFPSQGYHEJVHRCUVUHQIKOLUEUYJZSLDXRLAHZKEFGMKSVAAICZWXNIDCJRNDYVVWQESKDXMBZO");
    msg.component.assign("BWLJHWTKBQILYDJVOVCVHMHTDZQAKWCEZRQJSYQAXIRKPSWDAWGRGANKAQFKGINRGXFUCW");
    msg.act_time = 6411U;
    msg.deact_time = 44012U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.5995958130630847);
    msg.setSource(56038U);
    msg.setSourceEntity(38U);
    msg.setDestination(34251U);
    msg.setDestinationEntity(101U);
    msg.id = 151U;
    msg.label.assign("FMOHSLLRCKDRUMLONMYJUGNGPCQWOBEUGQAGWQVZYHSWLOZBERVVDHDSKJNKHOATDMLLNRFUCFQDDBCKKIRLSKSASGLSADKIGOWQP");
    msg.component.assign("MXYILUCTSUOECFNETRUZEBKVVWJEBRFXDNFUUNNQVHRPGQPYEEDBTKAGBWRSZXDHZNFQQHRTFOCYVJLXO");
    msg.act_time = 57704U;
    msg.deact_time = 59026U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.12559875924646646);
    msg.setSource(44865U);
    msg.setSourceEntity(104U);
    msg.setDestination(13258U);
    msg.setDestinationEntity(198U);
    msg.id = 193U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.3688867990570056);
    msg.setSource(53396U);
    msg.setSourceEntity(97U);
    msg.setDestination(38366U);
    msg.setDestinationEntity(37U);
    msg.id = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.5576550786858055);
    msg.setSource(46575U);
    msg.setSourceEntity(237U);
    msg.setDestination(40486U);
    msg.setDestinationEntity(163U);
    msg.id = 78U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.14336501211664032);
    msg.setSource(52830U);
    msg.setSourceEntity(103U);
    msg.setDestination(24271U);
    msg.setDestinationEntity(90U);
    msg.op = 143U;
    msg.list.assign("YJYZNIIFRRRASNUTVHNQZHQVIXAFPZGNKJBTRWKSKPQWDNILZMFJDRLAQFSYBBLGMMQWEKKZBKEEMPFLFHMJUDTFOFRTWVOIVZILHJNUYDTKOKHVQUCUGIRYZWSGMPBVGODEGCYQVZLSWCJLAGCYTAOXHAPLQXYEWWRUEABUVMA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.10825451556756926);
    msg.setSource(5395U);
    msg.setSourceEntity(200U);
    msg.setDestination(26954U);
    msg.setDestinationEntity(200U);
    msg.op = 116U;
    msg.list.assign("FDZXNZMOUYORCVIZTVYKGHFHBXPNZDADIORTIBCPAUJSBOEJAJCQELICLPYCNWQQLOADHWLABYTSPMFVZMAOVWGHEQQKMRKXNMHWULLCGLGBQBTUEINHVFCXVVJDZLFKNHZMRYTJIZJNWYPDUHJECVBUYDKTJSORSDAMEGBXPCLJTEUHVUKPJWSMMAFAGUIWLOXTEFXFKKSNRGYRPPSKZPIQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.7854307572713263);
    msg.setSource(58842U);
    msg.setSourceEntity(174U);
    msg.setDestination(14496U);
    msg.setDestinationEntity(232U);
    msg.op = 195U;
    msg.list.assign("TUQTJNXWIDGIDUWSXMZUPBIPEMGBJNSOUJEAQYNWMNOKBLAVGF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.27380447463987145);
    msg.setSource(19730U);
    msg.setSourceEntity(230U);
    msg.setDestination(21211U);
    msg.setDestinationEntity(142U);
    msg.value = 182U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.30340485342720946);
    msg.setSource(47449U);
    msg.setSourceEntity(72U);
    msg.setDestination(24581U);
    msg.setDestinationEntity(45U);
    msg.value = 73U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.6015891231554239);
    msg.setSource(52154U);
    msg.setSourceEntity(56U);
    msg.setDestination(38391U);
    msg.setDestinationEntity(175U);
    msg.value = 245U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.34896192821866023);
    msg.setSource(35000U);
    msg.setSourceEntity(195U);
    msg.setDestination(8356U);
    msg.setDestinationEntity(203U);
    msg.consumer.assign("HFSJWSADDVWIOKVRRYTFYZYVAGXGCLRCBBMHZOBCAMXOEESWELEQPYXTYDAIMMUV");
    msg.message_id = 29666U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.5420213917643357);
    msg.setSource(30204U);
    msg.setSourceEntity(21U);
    msg.setDestination(34907U);
    msg.setDestinationEntity(122U);
    msg.consumer.assign("TLYXXBLXRYRYIGMKTZCHPNNIJWVVPRDVOIWHKKFRUUNGRBTSVEKQYOYANYADJJEQYZQLF");
    msg.message_id = 8439U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.9081595513595633);
    msg.setSource(58959U);
    msg.setSourceEntity(198U);
    msg.setDestination(47986U);
    msg.setDestinationEntity(17U);
    msg.consumer.assign("AZPDMPIYUNJFUNUSBYOKNQBTADXBMZLQVEJRVJWMCLIXLNGCOMPCRCXIKLYWDRKYKWEGSYUNIGXORMQNCUJXFRHRLGIGLAPAPVFMUADFQPQXGPKEHUMWOSOLSYHWJVLONYDJFGZZHSSFFBTADPEACESTIBLNETICTTJIBYHWNQKXSX");
    msg.message_id = 557U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.5651850494310258);
    msg.setSource(49415U);
    msg.setSourceEntity(81U);
    msg.setDestination(12034U);
    msg.setDestinationEntity(150U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.014339776601373977);
    msg.setSource(56795U);
    msg.setSourceEntity(253U);
    msg.setDestination(8810U);
    msg.setDestinationEntity(79U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.06286352392475425);
    msg.setSource(58981U);
    msg.setSourceEntity(137U);
    msg.setDestination(36920U);
    msg.setDestinationEntity(27U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.7981824684197598);
    msg.setSource(30124U);
    msg.setSourceEntity(41U);
    msg.setDestination(22043U);
    msg.setDestinationEntity(100U);
    msg.op = 72U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.4195556812461474);
    msg.setSource(13014U);
    msg.setSourceEntity(192U);
    msg.setDestination(30524U);
    msg.setDestinationEntity(122U);
    msg.op = 220U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.5134420876322174);
    msg.setSource(57036U);
    msg.setSourceEntity(16U);
    msg.setDestination(894U);
    msg.setDestinationEntity(129U);
    msg.op = 146U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.6368744929287392);
    msg.setSource(24040U);
    msg.setSourceEntity(163U);
    msg.setDestination(11026U);
    msg.setDestinationEntity(223U);
    msg.total_steps = 171U;
    msg.step_number = 137U;
    msg.step.assign("UNRSKGTVHJ");
    msg.flags = 161U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.17245158823872997);
    msg.setSource(52049U);
    msg.setSourceEntity(27U);
    msg.setDestination(13724U);
    msg.setDestinationEntity(224U);
    msg.total_steps = 62U;
    msg.step_number = 165U;
    msg.step.assign("GFMFOQOADYFPBVSBCZHPBADDJPMUOZEWJZMUCTAEBNZGMSUZLMGPZEJWVYHXTBVLHPTJJALAGWRSINUDHCNYWDJDEVFEIQLUIDWSSRDTKQHUFINYHXIHIWEIMKHPLVLWRMCGGORZBHBMRY");
    msg.flags = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.1416424117873072);
    msg.setSource(50505U);
    msg.setSourceEntity(166U);
    msg.setDestination(54612U);
    msg.setDestinationEntity(123U);
    msg.total_steps = 193U;
    msg.step_number = 222U;
    msg.step.assign("QUWMQRSKOZOTEH");
    msg.flags = 213U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.47638880682199547);
    msg.setSource(50979U);
    msg.setSourceEntity(177U);
    msg.setDestination(22436U);
    msg.setDestinationEntity(23U);
    msg.state = 57U;
    msg.error.assign("HVPZHEASXJTSWUZQUIYOZMRPOCEOFOHCVUCEMQTGFKZOEAXYKPUYCDJQCQWLNHIODJVFBSGFTANAYLFNGIQRNJHQWVORDVXKAGKGFXDKDWFPLOGNHZYZMMKSJXHPSHEZMCGFQQYZRSLBWOFWNXMANICCZRIORXSECFPHDRTVJLTIKBUVVYPBLPWYVTTQUEIIBUTBWUS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.839922201984941);
    msg.setSource(53405U);
    msg.setSourceEntity(153U);
    msg.setDestination(35277U);
    msg.setDestinationEntity(74U);
    msg.state = 135U;
    msg.error.assign("VIROLAPZODRTCOGDYJFSJTDYKWVZFGQXLRLUYTEQBJHBSTFIPMMJLZZGUUGAEBEAEPVSLNJMELCBONDIRSDRJTYKXHGXTLQUKFTPKBRFCGEIURNLPECZMQHVYQIQADD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.8678350702686423);
    msg.setSource(19145U);
    msg.setSourceEntity(191U);
    msg.setDestination(37714U);
    msg.setDestinationEntity(63U);
    msg.state = 25U;
    msg.error.assign("VXWLYQGQDBWFFJQCZEAVPFUOLHKXAOBSFGFVINWWAETOIKMVICLRCKKREICNNQNQOUGRDOYNPSDCZLRURIEATXOLACEIACEJMOVPWUGPQXUZGRBKBJGRCHBOFUWSVZQPHD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.03400950867521524);
    msg.setSource(52220U);
    msg.setSourceEntity(42U);
    msg.setDestination(3624U);
    msg.setDestinationEntity(232U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.8314847434645816);
    msg.setSource(58856U);
    msg.setSourceEntity(57U);
    msg.setDestination(32422U);
    msg.setDestinationEntity(193U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.21129764044146404);
    msg.setSource(22912U);
    msg.setSourceEntity(156U);
    msg.setDestination(12729U);
    msg.setDestinationEntity(63U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.8454335166864848);
    msg.setSource(49264U);
    msg.setSourceEntity(204U);
    msg.setDestination(53882U);
    msg.setDestinationEntity(129U);
    msg.op = 181U;
    msg.speed_min = 0.23744167702916796;
    msg.speed_max = 0.009867760290342642;
    msg.long_accel = 0.4461040254382954;
    msg.alt_max_msl = 0.6122785271846739;
    msg.dive_fraction_max = 0.7038758279409159;
    msg.climb_fraction_max = 0.4704742700841291;
    msg.bank_max = 0.6334974981679417;
    msg.p_max = 0.9185344482774792;
    msg.pitch_min = 0.7189899702037638;
    msg.pitch_max = 0.6871093341695774;
    msg.q_max = 0.7701804112674167;
    msg.g_min = 0.5798628087961409;
    msg.g_max = 0.402401140704144;
    msg.g_lat_max = 0.4329177110011496;
    msg.rpm_min = 0.034426438098461465;
    msg.rpm_max = 0.8011989553265803;
    msg.rpm_rate_max = 0.18149719239470352;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.6845879699690393);
    msg.setSource(1063U);
    msg.setSourceEntity(95U);
    msg.setDestination(3634U);
    msg.setDestinationEntity(180U);
    msg.op = 26U;
    msg.speed_min = 0.4901069999686746;
    msg.speed_max = 0.4796854181804333;
    msg.long_accel = 0.038012671901053285;
    msg.alt_max_msl = 0.46016993892193103;
    msg.dive_fraction_max = 0.12002433023524273;
    msg.climb_fraction_max = 0.6512441134697875;
    msg.bank_max = 0.57371348433021;
    msg.p_max = 0.5004014814169874;
    msg.pitch_min = 0.977960714011557;
    msg.pitch_max = 0.5386912949357864;
    msg.q_max = 0.27682217237886075;
    msg.g_min = 0.28492227754286903;
    msg.g_max = 0.3655808384583089;
    msg.g_lat_max = 0.09551159851273838;
    msg.rpm_min = 0.2379297179726868;
    msg.rpm_max = 0.35548316260351165;
    msg.rpm_rate_max = 0.8760302043696931;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.5512977207621336);
    msg.setSource(47658U);
    msg.setSourceEntity(175U);
    msg.setDestination(41693U);
    msg.setDestinationEntity(143U);
    msg.op = 222U;
    msg.speed_min = 0.7529769801519652;
    msg.speed_max = 0.44072663074108853;
    msg.long_accel = 0.8505425916320187;
    msg.alt_max_msl = 0.13771970597528627;
    msg.dive_fraction_max = 0.40617961204411535;
    msg.climb_fraction_max = 0.1390939929059859;
    msg.bank_max = 0.29954627414056445;
    msg.p_max = 0.6564739807714519;
    msg.pitch_min = 0.4650422591934791;
    msg.pitch_max = 0.248592120821311;
    msg.q_max = 0.6046255635719796;
    msg.g_min = 0.5585384081953343;
    msg.g_max = 0.7704895197075935;
    msg.g_lat_max = 0.9729880576228852;
    msg.rpm_min = 0.30341676777210036;
    msg.rpm_max = 0.29159061534359265;
    msg.rpm_rate_max = 0.13399119851508723;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationLock msg;
    msg.setTimeStamp(0.3568490092834139);
    msg.setSource(33332U);
    msg.setSourceEntity(90U);
    msg.setDestination(659U);
    msg.setDestinationEntity(179U);
    msg.op = 78U;
    msg.timeout = 37663U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationLock #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationLock msg;
    msg.setTimeStamp(0.6185598064366291);
    msg.setSource(38643U);
    msg.setSourceEntity(54U);
    msg.setDestination(57296U);
    msg.setDestinationEntity(140U);
    msg.op = 95U;
    msg.timeout = 19602U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationLock #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationLock msg;
    msg.setTimeStamp(0.7917565381827798);
    msg.setSource(25271U);
    msg.setSourceEntity(89U);
    msg.setDestination(18436U);
    msg.setDestinationEntity(209U);
    msg.op = 218U;
    msg.timeout = 2109U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationLock #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityStatus msg;
    msg.setTimeStamp(0.1809855759794361);
    msg.setSource(7165U);
    msg.setSourceEntity(215U);
    msg.setDestination(14499U);
    msg.setDestinationEntity(145U);
    msg.state = 79U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityStatus msg;
    msg.setTimeStamp(0.11489771610686772);
    msg.setSource(49520U);
    msg.setSourceEntity(114U);
    msg.setDestination(57325U);
    msg.setDestinationEntity(88U);
    msg.state = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityStatus msg;
    msg.setTimeStamp(0.9358435317888005);
    msg.setSource(9935U);
    msg.setSourceEntity(134U);
    msg.setDestination(30335U);
    msg.setDestinationEntity(112U);
    msg.state = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityStatus msg;
    msg.setTimeStamp(0.2646476864245739);
    msg.setSource(17908U);
    msg.setSourceEntity(26U);
    msg.setDestination(18893U);
    msg.setDestinationEntity(234U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityStatus msg;
    msg.setTimeStamp(0.22232309949361007);
    msg.setSource(48455U);
    msg.setSourceEntity(232U);
    msg.setDestination(656U);
    msg.setDestinationEntity(101U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityStatus msg;
    msg.setTimeStamp(0.32787312558667514);
    msg.setSource(23545U);
    msg.setSourceEntity(162U);
    msg.setDestination(4078U);
    msg.setDestinationEntity(196U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.8940066244034421);
    msg.setSource(21224U);
    msg.setSourceEntity(60U);
    msg.setDestination(27760U);
    msg.setDestinationEntity(43U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.536736502570066);
    msg.setSource(24571U);
    msg.setSourceEntity(204U);
    msg.setDestination(11785U);
    msg.setDestinationEntity(69U);
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.22325813318441312;
    tmp_msg_0.converg = 0.22298081495130184;
    tmp_msg_0.turbulence = 0.7842966421618774;
    tmp_msg_0.possimmon = 89U;
    tmp_msg_0.commmon = 164U;
    tmp_msg_0.convergmon = 180U;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.2890909892268615);
    msg.setSource(40988U);
    msg.setSourceEntity(204U);
    msg.setDestination(5896U);
    msg.setDestinationEntity(222U);
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 235U;
    tmp_msg_0.request_id = 53281U;
    tmp_msg_0.command = 28U;
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5283861956372117;
    tmp_tmp_msg_0_0.lon = 0.9727088014607095;
    tmp_tmp_msg_0_0.z = 0.4153040217695747;
    tmp_tmp_msg_0_0.z_units = 145U;
    tmp_tmp_msg_0_0.speed = 0.45893596669049064;
    tmp_tmp_msg_0_0.speed_units = 196U;
    tmp_tmp_msg_0_0.custom.assign("TVWUFIJPSKVTMFHAFQJHJUYBEJSSWQJBHGBMMQGNLBPOFIJCRWTDOXIPDNHIVZSEQE");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 18398U;
    tmp_msg_0.info.assign("HARUHWTTIEPAVJSKUPQTWZKBMYCUYXUGBGNHIFMKFPSQTRI");
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.13096667397528217);
    msg.setSource(29442U);
    msg.setSourceEntity(60U);
    msg.setDestination(43794U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.20806610327282538;
    msg.lon = 0.5899502077673496;
    msg.height = 0.9165072648682192;
    msg.x = 0.5342284494209283;
    msg.y = 0.9673117586969424;
    msg.z = 0.9084831424476721;
    msg.phi = 0.2819178709625556;
    msg.theta = 0.08895928605585446;
    msg.psi = 0.12909047326090473;
    msg.u = 0.43342018124098947;
    msg.v = 0.8321194122190809;
    msg.w = 0.9978185380481696;
    msg.p = 0.6539285531828999;
    msg.q = 0.3857949735982834;
    msg.r = 0.4484014548160302;
    msg.svx = 0.6713033143223581;
    msg.svy = 0.8685618551626345;
    msg.svz = 0.9924031973368085;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.6163770087102638);
    msg.setSource(4927U);
    msg.setSourceEntity(166U);
    msg.setDestination(25680U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.8656639449710928;
    msg.lon = 0.4473373065928319;
    msg.height = 0.582053574572129;
    msg.x = 0.19547594225323284;
    msg.y = 0.7549460216124023;
    msg.z = 0.07009056639534073;
    msg.phi = 0.8979581280393197;
    msg.theta = 0.08841767444188431;
    msg.psi = 0.37784299021496315;
    msg.u = 0.4498407778694181;
    msg.v = 0.5078076517739497;
    msg.w = 0.8077805310430336;
    msg.p = 0.263350870061024;
    msg.q = 0.05914878304750326;
    msg.r = 0.6345118736352686;
    msg.svx = 0.7289734179842356;
    msg.svy = 0.9109545543097826;
    msg.svz = 0.9117068562414138;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.15647068711144618);
    msg.setSource(61765U);
    msg.setSourceEntity(68U);
    msg.setDestination(44468U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.7641086549460507;
    msg.lon = 0.25877324153478254;
    msg.height = 0.3140636790325305;
    msg.x = 0.8524247906820772;
    msg.y = 0.42898964174080034;
    msg.z = 0.7211180179130054;
    msg.phi = 0.9148063564306593;
    msg.theta = 0.6124577644557438;
    msg.psi = 0.9071620043713068;
    msg.u = 0.18659619936317084;
    msg.v = 0.4904751112878698;
    msg.w = 0.7424402796738188;
    msg.p = 0.41552686182353205;
    msg.q = 0.8456694460442404;
    msg.r = 0.7512362721371167;
    msg.svx = 0.4770480889397216;
    msg.svy = 0.2662475805513771;
    msg.svz = 0.8290827071122919;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.9356078942989567);
    msg.setSource(59818U);
    msg.setSourceEntity(135U);
    msg.setDestination(34781U);
    msg.setDestinationEntity(233U);
    msg.op = 92U;
    msg.entities.assign("INVZPHBITVWCHYTSYMTEHOVUQOATKPSYHSUOXELURRJFVIOPUHO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.9165205187950622);
    msg.setSource(47876U);
    msg.setSourceEntity(0U);
    msg.setDestination(55835U);
    msg.setDestinationEntity(202U);
    msg.op = 119U;
    msg.entities.assign("PSKTUEDFBPJVKDJEJVT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.03638490850631282);
    msg.setSource(62982U);
    msg.setSourceEntity(164U);
    msg.setDestination(41912U);
    msg.setDestinationEntity(40U);
    msg.op = 203U;
    msg.entities.assign("KBKTVPYZGQMDXXAUAYTVOJVCXUAZNNSZQHEWVHEFJBUDIEDJUJHOFYJAGEBBVXYUSMFYFOLZHORNTXVCLOZJDHNCYEIXDERGYJHAALTXHMIVTSPSGSOESIKBPIONMRAKMKMTBWZDFWZIXPKBPWXROYGZHGBUQHGJRJGPLKFFYKGAOEDPKLCIAQLVHCMRXWCPTONUSSWRWPDFFNPBIJMDTSRQCNML");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.9008285818567612);
    msg.setSource(17447U);
    msg.setSourceEntity(89U);
    msg.setDestination(36512U);
    msg.setDestinationEntity(247U);
    msg.type = 179U;
    msg.speed = 33937U;
    const char tmp_msg_0[] = {-77, -96, 19, -34, -7, 31, -67, -55, 113, -73, -7, -126, -35, 109, -5, -40, -58, 75, -34, -20, -29, -118, -7, 62, -24, -65, 76, 115, -100, -57, 103, -74, -99, 32, 15, 2, -93, 91, 58, 98, -48, -21, -61, -20, -113, 104, 94, 100, -75, -33, -82, -34, -99, -73, -116, -117, -46, 94, 79, 60, 63, -121, -42, -101, 46, 15, -103, -89, 46, -126, 88, -34, -13, -125, -31, 47, 69, -93, -108, 97, -76, -24, -115, 19, -83, 52, -33, -19, 45, -71, 29, -10, -106, -63, -105, -113, 42, -95, 5, 10, 105, -21, -122, 103, 85, 65, 52, 114, -7, 0, 79, -25, 64, 94, 67, -19, -65, 116, 119, 46, 70, 60, 51, -114, 122, 97, -6, 79, 95, -58, -18, -90, -38, 30, -77, -5, 50, -51, -112, -102, 92, 74, 64, 20, -125, 22, 25, 68, -60, -66, 2, 79, -94, -100, -32, 125, 108, -96, 29, 64, -108, -23, 81, 77, -71, -31, -29, -122, -22, 64, -31, -123, -42, 101, 54, 20, 71, 23, 34, 53, 107, 71, 120, 92, -18, 35, -34, -50, 66, -89, -103, 1, 51, -108, -61, -102, -6, 28, 93, -83, -123, -54, 70, 28, -25, -46, 101, -119, 113, -4, -105};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.21559404207414834);
    msg.setSource(5633U);
    msg.setSourceEntity(253U);
    msg.setDestination(59021U);
    msg.setDestinationEntity(124U);
    msg.type = 21U;
    msg.speed = 7109U;
    const char tmp_msg_0[] = {-58, 97, -118, -4, -85, -118, -79, 22, 97, -91, 63, -101, -96, 124, -101, 9, 92, 60, -97, -86, -3, -87, -1, 98, -13, -125, -64, -14, 31, 107, 26, 123, 24, -46, -23, -15, -80, -16, 96, -90, 89, -45, 37, 38, 34, -73, -13, 65, 57, -10, 123, -55, 47, -72, 26, -111, 107, 41, 126, 65, -91, 28, -118, 110, 77, -75, 99, -72, 112, 119, 31, -40, -14, -54, -88, 20, 22, 113, 112, -63, -114, -71, 29, -31, 81, -44, -50, 3, -10, 12, 0, 55, 92, -80, -33, 59, -64, 115, 124, 6, -51, -3, 4, 13, -50, 110, 41, -108, -85, 70, -50, 35, -82, 39, 124, -118, -75, -104, -125, -31, -108, -6, 86, -92, -100, 63, -29, 88, 46, 108, 38, 30, 21, 13, -112, 86, 74, 125, 4, 78, 98, -72, 11, 37, -21, -22, -3, -37, -107, -57, 19, -58, 107, 66, -55, -109, -18, 44, 20, 85, 29, 103, -40, -68, 55, -127, 80, 31, -33, 31, -104, 114, 1, -57, 69, -59, -35, 26, 68, 120, -116, -44, -105, 83, 61, 71, 50, -56, -127, -92, -64, 24, 64, -101, -79, 23, 84, 65, 2, 63, -37, 88, -33, 87, 123, -84, -72, -45, -1, -103, 74, 27, -63, -59, -19, -20, 125, -50, 104, -53, -40, -84, 101, -113, -85, 42, -121, -119, 57, 105, -63, -1, 105, -95, 112, -102, -37, 49};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.5228316731156362);
    msg.setSource(17294U);
    msg.setSourceEntity(43U);
    msg.setDestination(13997U);
    msg.setDestinationEntity(134U);
    msg.type = 90U;
    msg.speed = 58627U;
    const char tmp_msg_0[] = {93, -66, 77, -126, -53, -116, 34, -121, -47, 43, 78, 44, 117, 103, -124, -90, 1, -20, -4, 45, 78, -16, 107, -64, -50, -96, 120, -111, -122, 97, 61, 40, -18, 108, -30, -72, 20, 63, -95, -65, -15, 37, 95, 87, 56, 14, -112, -117, -42, -48, 81, 38, -4, -5, -7, -74, 35, 54, -11, 77, 75, 6, -47, -28, 36, 15, 12, -52, 117, 8, 83, 26, -52, -76, -92, -92, 19, 65, 82, -48, 0, 98, -98, -98, -67, 41, 74, -27, 93, -108, 126, 115, -71, -112, -94, 77, -4, 29, -102, -45, 87, 25, 126, 74, -96, -70, -32, 8, -104, -80, 98, 122, -100, -38, -109, 97, 73, 38, 79, -58, -55, 106, -16, 55, 64, 32, 18, -100, -6};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.04587026892450918);
    msg.setSource(24578U);
    msg.setSourceEntity(90U);
    msg.setDestination(54133U);
    msg.setDestinationEntity(92U);
    msg.op = 151U;
    msg.tas2acc_pgain = 0.4541506040695289;
    msg.bank2p_pgain = 0.560284776197921;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.6334942865707651);
    msg.setSource(52273U);
    msg.setSourceEntity(113U);
    msg.setDestination(9999U);
    msg.setDestinationEntity(42U);
    msg.op = 7U;
    msg.tas2acc_pgain = 0.6221216172125653;
    msg.bank2p_pgain = 0.18637736074146305;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.3433487462896305);
    msg.setSource(8453U);
    msg.setSourceEntity(217U);
    msg.setDestination(15331U);
    msg.setDestinationEntity(109U);
    msg.op = 115U;
    msg.tas2acc_pgain = 0.8892244621927654;
    msg.bank2p_pgain = 0.38649143646427586;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.6434325581759243);
    msg.setSource(18012U);
    msg.setSourceEntity(82U);
    msg.setDestination(63500U);
    msg.setDestinationEntity(206U);
    msg.available = 951660245U;
    msg.value = 134U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.7181957832043331);
    msg.setSource(43991U);
    msg.setSourceEntity(37U);
    msg.setDestination(2871U);
    msg.setDestinationEntity(101U);
    msg.available = 3242112231U;
    msg.value = 246U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.9603948936103672);
    msg.setSource(17888U);
    msg.setSourceEntity(66U);
    msg.setDestination(43548U);
    msg.setDestinationEntity(127U);
    msg.available = 774709026U;
    msg.value = 231U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.03532227589935111);
    msg.setSource(34419U);
    msg.setSourceEntity(134U);
    msg.setDestination(28077U);
    msg.setDestinationEntity(81U);
    msg.op = 38U;
    msg.snapshot.assign("NDOBAWCBQYRUJFSB");
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 191U;
    tmp_msg_0.htime = 0.6052871897837173;
    IMC::LogBookEntry tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 1U;
    tmp_tmp_msg_0_0.htime = 0.6787293218089694;
    tmp_tmp_msg_0_0.context.assign("GPADQVJKJDILHXYDZVJICLUMAVLIAFCOQLGHSXAPQHQWZMROBUCHNXGDXFGTAVRXGMBKBHKLIPBDYEZOCKUCWJTBQTYUCJAOALLTCSZHSJFXRSEPIEEADMVHEMYSYKHDTRUNGOZPCIJFSKYMBGWNJWPYSRFNTSQQKTEQBPEUAUWKQTGHXKXHLZXKNZZSFIXBQGRNNWY");
    tmp_tmp_msg_0_0.text.assign("DEAVBBTKFGBSIEPRMAVVYEMEOJNFWDRAMWWZXNQTYCWOKPTSAIAYQSWFRPDJHPZRLHVQSMDHCFHBQVZNXFLUBOIWXHUYLSUMCDPJMOTZQAKYGLGHBBBRUKZROZOGIJAGXLHMJZCLTRCQQATULGIHASIMOWNPQKDJZXPVQLDGCTWYNPSPENMJRDMECBTSTIWIEKGVLXYVUZNFHCBSILXXSHPEEJKNUXKNFOUEXOFJGKJVOGIFFWCKVY");
    tmp_msg_0.msg.push_back(tmp_tmp_msg_0_0);
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.4070291608672535);
    msg.setSource(61008U);
    msg.setSourceEntity(36U);
    msg.setDestination(32653U);
    msg.setDestinationEntity(25U);
    msg.op = 239U;
    msg.snapshot.assign("MIKEDOBRRZIIKTWYLUBJPTCGVNPPGBCZYJTGAZJOOVPOTXHTMAINCFEAQDLWFTPRJWXVIBINOHBDQNZYSLODWFXOFLNHKUUSWVPEACTXSVRSFPDKLQCZDABKNANBZRGBYXVBGDUSLAHEOHMTTEKMEIGYSDJRXWI");
    IMC::EntityActivationLock tmp_msg_0;
    tmp_msg_0.op = 198U;
    tmp_msg_0.timeout = 28892U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.8517529550101087);
    msg.setSource(56082U);
    msg.setSourceEntity(18U);
    msg.setDestination(52067U);
    msg.setDestinationEntity(27U);
    msg.op = 223U;
    msg.snapshot.assign("JRMTWRAIYPSDAQVRIYUEIKAJSOVSZBNTPVBGLQBWSTM");
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.04156373155337412;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.5351258483923539);
    msg.setSource(57487U);
    msg.setSourceEntity(129U);
    msg.setDestination(38137U);
    msg.setDestinationEntity(20U);
    msg.op = 213U;
    msg.name.assign("CVELLQXZAZUFKIQXUVOGKCHHSDMXOSPTDUFZFRTLJJHHFXKJONOMNBMGFRHDWDZQCACIOGAISWARYIXBETAQQYCRAYNQKMRZWWCHSOSYRLQQGJNXTZBPJMEPGUILIJLPBTBKNUNOYFENDJDVULTCKDEZNSVEXMPDTIKJQFWPRAWLSIVYIVSVXVWYUULGP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.6165962556251052);
    msg.setSource(57000U);
    msg.setSourceEntity(103U);
    msg.setDestination(50866U);
    msg.setDestinationEntity(192U);
    msg.op = 40U;
    msg.name.assign("SPMHSEGPUAEWVSPWMDRFSSNRATIGNDGPAZYAFMYCFOPTJUIGWECGHYRZHCNNLFWQVKQZWIDIKTXMTEUNKLMEOHDGXOGBCMYMWJOXRE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.011444975160866955);
    msg.setSource(25808U);
    msg.setSourceEntity(157U);
    msg.setDestination(35563U);
    msg.setDestinationEntity(59U);
    msg.op = 84U;
    msg.name.assign("DFQREWMPBYMFWBKJVRWCZGCKQIYTPXQYJGGOZFQRBYNOCACEHQEXCSLLDEVGLDNPVCRYFAHHHAOFFJAJKOCYTKHYAPFNGXRSMZZLMPFBSRQXNJKIGRTGLPOT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.7756120422445459);
    msg.setSource(47395U);
    msg.setSourceEntity(59U);
    msg.setDestination(60401U);
    msg.setDestinationEntity(26U);
    msg.type = 84U;
    msg.htime = 0.2808764760743243;
    msg.context.assign("YLRZIITWWIMPCUNCLXTOZKRDGELNQSROGIMYLDUTMZMLEGUVRCEJRTFSJBNFCDVAXMINAFYBKTDEUHHMUTWDQPVSAFTWFXDHDAQRISXTSPVGHWSKOOARUNKMEBHEIJHUCIHQXPKNMCQKGA");
    msg.text.assign("PSWQPPUTMGWCEGTYQVRUOFNHDZMEVUJXMFKAUKKJAVFXONCSQMBJQJHXUYFUJRYPOVIEKEIIZLDBDGPSNSMAALKJARSBOZYCJFIRQWMNEDEWZTOALKSCZNHWMQNOLHBNQVZWMXETADTHEVVTGWDRPOBJRLCIRFUMFHYICFXXBDFRPAT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.2630490484327428);
    msg.setSource(49431U);
    msg.setSourceEntity(223U);
    msg.setDestination(53715U);
    msg.setDestinationEntity(136U);
    msg.type = 34U;
    msg.htime = 0.6525579327777524;
    msg.context.assign("MTHKTHRWLTGWAACIXOIUQXWPFZWQKVSSVRLZYQPGFSAJRJVXXHZYVVCNBFGXCIKRJPJNUANWGYXQWCFSZCBGNNMDMRFDQEQEBVYZLXHKSBTWVITNUBLUQDEZROBYLZQPKHHPYRBMCFLMKTKOALPDIDZURADAPWSGSUDE");
    msg.text.assign("IFSSTLTBNHXAUTKKSUOPUNJUNWIFQBYZBOKBWORYSPUFEGQDWDCELQYAJRBPIJCPTIFRCWNSRLWIYSITOHRDUWXLWHXQHZATUSXXMVCDLPVEXQCEMCVVVFGDJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.5209158008873134);
    msg.setSource(62693U);
    msg.setSourceEntity(21U);
    msg.setDestination(48646U);
    msg.setDestinationEntity(111U);
    msg.type = 193U;
    msg.htime = 0.4246183775058284;
    msg.context.assign("XYONTUAFMYBQEBVFNJHIKDFERFPFGBYXYKZGRPYOUFVBIMDQCSVYAVBVMTMQIWFZNZAQUUDXEJLHAASHKBSWGWHXTVTQNRUJQOTTPPNDHZNYUZXCICJWLZLEKSOMRIP");
    msg.text.assign("KDJPYCNOZWJQRQRADXWJZPXLVJYUXAMGRBIIERWZFPXNRCSSAQIGLWUQBGOLUQMKNEPGVKNAGUNPRIZYDJYCGCZFBZAZVDFNLSSMWZOUVAHDXHPWONWBMBAKCKVXXE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.8675201149533496);
    msg.setSource(38227U);
    msg.setSourceEntity(169U);
    msg.setDestination(33469U);
    msg.setDestinationEntity(174U);
    msg.command = 198U;
    msg.htime = 0.599321094651799;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.28766133065047383);
    msg.setSource(42560U);
    msg.setSourceEntity(154U);
    msg.setDestination(24610U);
    msg.setDestinationEntity(245U);
    msg.command = 4U;
    msg.htime = 0.48269603330653965;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.7516443120781497);
    msg.setSource(42122U);
    msg.setSourceEntity(109U);
    msg.setDestination(11083U);
    msg.setDestinationEntity(119U);
    msg.command = 140U;
    msg.htime = 0.5809651245294731;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 148U;
    tmp_msg_0.htime = 0.5773482490127185;
    tmp_msg_0.context.assign("DMZJSTFTCICWXOQFPDWNVIOCLPGIBJUBMDHARVPKOTASDXUCJZIMAXQRBJWKREENXFBUWDHNAWPNVFTPCEFOEIAZUQZRROOADGGUEQOTKRSBPVZSXKWYQPUFWHSONPJHFNWSYYVDLIYJQMMTMYAPCZIGKMBURXVBEJMRHGETASCASIGFFZYCSLJRLVYCZHLTDOKDI");
    tmp_msg_0.text.assign("YDBNEIKDAYVWUYTABTRVQUBKRRWTOLSRCHBWMWRETAGJFYLAEHPPNMJBVEPYUXCSVFSAUWODJGFVGOPYFVEQNMXXHDIHHBNXGLHIGKCJMQZYQSCCQWDEOENOFPKXZZUWPXFXAABXHMRYCSTVYKVBGRHGVNZZQFGPCXDJQGVIZSLOZZTPIMLJTFDAWLDOMQRBXTMW");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.6373800359779135);
    msg.setSource(50930U);
    msg.setSourceEntity(37U);
    msg.setDestination(63574U);
    msg.setDestinationEntity(240U);
    msg.op = 137U;
    msg.file.assign("PGDKSGHTAUUQNEROJKBFEVCFAKVXBMTMQDRSAUJBSUIHKAY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.3423551549004539);
    msg.setSource(58594U);
    msg.setSourceEntity(198U);
    msg.setDestination(59726U);
    msg.setDestinationEntity(150U);
    msg.op = 8U;
    msg.file.assign("FZENOTOSKZWHZVCUDIYEITXWZODDWAJMPUWSHBMPUWWJHUEQAYXVHNMGSPVNBQFJKTLZLEUTRYGDAEJXXFYNSZXVRYKSFZQEKOUFJRDAEACCRTVLGPJBDIMSWUYRRLPNGAZXHM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.5622333109519179);
    msg.setSource(1642U);
    msg.setSourceEntity(196U);
    msg.setDestination(36964U);
    msg.setDestinationEntity(243U);
    msg.op = 59U;
    msg.file.assign("KZSQDSLHLUCPDTSBQINNTVCWDHSMIPPGRHTUGYPFNTOWVYKSDQXELZMLVIATPCPRELSNRJHOFAJQWGOZRIUDRVPYXVYJHKJRXENLBADQTJWMZIHDSFMZOSMVCFZJKWQVGIYLCYBPOYLGEMFVCNKFNOXUWJUQBGEGWZYRBQDEOOAEAUBUN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.19345896752533054);
    msg.setSource(2172U);
    msg.setSourceEntity(118U);
    msg.setDestination(24079U);
    msg.setDestinationEntity(72U);
    msg.op = 20U;
    msg.clock = 0.9091053452098501;
    msg.tz = -14;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.8284925601447011);
    msg.setSource(58989U);
    msg.setSourceEntity(90U);
    msg.setDestination(24407U);
    msg.setDestinationEntity(43U);
    msg.op = 15U;
    msg.clock = 0.5636997171784893;
    msg.tz = -68;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.1733118978028968);
    msg.setSource(8671U);
    msg.setSourceEntity(27U);
    msg.setDestination(18406U);
    msg.setDestinationEntity(245U);
    msg.op = 96U;
    msg.clock = 0.8719444139789518;
    msg.tz = 39;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.9685165752768883);
    msg.setSource(10537U);
    msg.setSourceEntity(201U);
    msg.setDestination(64335U);
    msg.setDestinationEntity(64U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.13355344791523494);
    msg.setSource(38696U);
    msg.setSourceEntity(187U);
    msg.setDestination(2696U);
    msg.setDestinationEntity(238U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.5722989736124099);
    msg.setSource(39720U);
    msg.setSourceEntity(168U);
    msg.setDestination(41783U);
    msg.setDestinationEntity(193U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.5554599206862144);
    msg.setSource(815U);
    msg.setSourceEntity(85U);
    msg.setDestination(32626U);
    msg.setDestinationEntity(252U);
    msg.sys_name.assign("OXNVPQVTRWFQANIBYRHDAXASAEBQMJLCJLAUVEAEKRBOQKPXQWYTGAVOSDMIXNHF");
    msg.sys_type = 105U;
    msg.owner = 29638U;
    msg.lat = 0.49888266661112757;
    msg.lon = 0.10483868237971683;
    msg.height = 0.25230336717260804;
    msg.services.assign("MXVEBFLVCIUIAKDISUMFCSGKIMSXWGXXKHLULYSJQNNLDNJWYZMDZRTZXQDFRWHRNEBHMOAMYQUXSMFHTPUSREQTQODVORPABHLOYOCSIFYQUEAEPCJSOEOKNNVIXIXRAKLBNJHWIAFDLVYLTWTKUVVGLPZSUKTIPVNDAGMBXQEHYSNXQFEJRFWFKNOCCPEUJJVTDOLRPTMAAJRGQT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.30779107594178734);
    msg.setSource(27682U);
    msg.setSourceEntity(111U);
    msg.setDestination(22182U);
    msg.setDestinationEntity(153U);
    msg.sys_name.assign("LIHJPGNKXMOCWUKLTFUUMDBHJZXMRMPNUFETCWZXTLGDYKFGIEYJJXQEOUNZLOVJSDGJRVAGSFRATNSGHAEVXHDWKLLNBLXRDCFAKCBBNPDZDEHKD");
    msg.sys_type = 213U;
    msg.owner = 33926U;
    msg.lat = 0.15741072887233676;
    msg.lon = 0.7733143068307049;
    msg.height = 0.008198660649325507;
    msg.services.assign("HNYUBVYQOXSQVNVWFFZTYGYMVDUIDEYEQOND");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.4794263906654216);
    msg.setSource(29470U);
    msg.setSourceEntity(93U);
    msg.setDestination(6918U);
    msg.setDestinationEntity(156U);
    msg.sys_name.assign("SFDCUZIMLHOVYLXWTTSAJRAJMMAQOVHTVNUIQHKPSJXOBWOEEDHBNTDKYWRRYIAFYQXXKVZGLMKOJQYRACBJTWTIQXFCJNGELBVZYMCXOZBXKJDRNZDPCRLLNGFFXSRFUZDUNMGHIYMUOAGXQWYCHGDVJSSYXFBERCNZTVIBEGCAPZAHEIAYWMEFFLAZHIMQKVCLQWKWLGUSOOIVPHBJRDQSKNIBUUETUCDNPOUKZVPGEWPFMGS");
    msg.sys_type = 175U;
    msg.owner = 21526U;
    msg.lat = 0.19817780054533318;
    msg.lon = 0.349155034273679;
    msg.height = 0.2658839956893453;
    msg.services.assign("CJWZCYVMVBEAPSDL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.28131637329405035);
    msg.setSource(36398U);
    msg.setSourceEntity(246U);
    msg.setDestination(53187U);
    msg.setDestinationEntity(251U);
    msg.service.assign("WTBFCWWMMFWPJQOPCUGNCNSKDELELESHDQPUUBXXJDQKFPXVFCAUREGNTKTDXWKTZPVRJFPOPLOHNLYMNILHZAYLINLIPKJARDRYXFTHHIEANGXQBQDZWRYMVIZURQETZOBRQHLVFGDOWPMAVOGTJZBCVOGAWBUZIRMYJXCASNYUXSVWCFCNKDYJEKSILMGVMIFHKFBSRRYOUAYCKLIXJKQIEAZVDZTUOZMBHGSXMSHQHJBW");
    msg.service_type = 169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.07989751447879367);
    msg.setSource(6116U);
    msg.setSourceEntity(107U);
    msg.setDestination(12038U);
    msg.setDestinationEntity(67U);
    msg.service.assign("VYNJSHJYAYMUWATQYDSEEUOVIRCRXGOUAQMKFXIIQDIYPWJLZPKNKEFHBNLNAPFMXECJTQZWKXGSPJTNMDUFOQGFRAICHRCMZCOIPCGPMBKLJRWGQZDVJKMEHOMRQBHAFZADWSEYESOZLJHMNBFGGVPHADSI");
    msg.service_type = 195U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.9247420666793147);
    msg.setSource(23679U);
    msg.setSourceEntity(233U);
    msg.setDestination(48736U);
    msg.setDestinationEntity(140U);
    msg.service.assign("TSBHRDZOTOHVJDGCUCBCWMQFFDZBJGINFNOAMYUVERYKKAIOJENGEPXMRIQRRWVLFIZNXYYMLQOMXBPBDGQVOOEVNJNRXNLGNAYVSZQLECYSWUCAUTUEVHXFTQXKYGSHQUXFELPOKEJYUSOHJVCMCKDILRAKSEAIBPXKGTZGGFHITNBQJJSHPDJTSFCWPEZQZSSMNYPDHLUPTMFLBAKWLOABXWWUKHIUWVTCPJZMRZHADRCYFWWQD");
    msg.service_type = 7U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.9351365434991986);
    msg.setSource(56449U);
    msg.setSourceEntity(104U);
    msg.setDestination(22513U);
    msg.setDestinationEntity(205U);
    msg.value = 0.09132193651360054;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.7927792976829197);
    msg.setSource(52874U);
    msg.setSourceEntity(237U);
    msg.setDestination(50351U);
    msg.setDestinationEntity(75U);
    msg.value = 0.6065524543142982;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.5465136117679517);
    msg.setSource(31117U);
    msg.setSourceEntity(222U);
    msg.setDestination(35852U);
    msg.setDestinationEntity(193U);
    msg.value = 0.07380430584944542;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.6742588551951949);
    msg.setSource(14028U);
    msg.setSourceEntity(178U);
    msg.setDestination(53201U);
    msg.setDestinationEntity(22U);
    msg.value = 0.7048769526171116;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.8527254969142308);
    msg.setSource(44772U);
    msg.setSourceEntity(26U);
    msg.setDestination(38479U);
    msg.setDestinationEntity(220U);
    msg.value = 0.8179836203987247;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.07687085045661646);
    msg.setSource(49940U);
    msg.setSourceEntity(44U);
    msg.setDestination(50015U);
    msg.setDestinationEntity(86U);
    msg.value = 0.6214591569129906;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.8638191289271081);
    msg.setSource(54379U);
    msg.setSourceEntity(63U);
    msg.setDestination(28152U);
    msg.setDestinationEntity(61U);
    msg.value = 0.725453859725563;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.7544071844014133);
    msg.setSource(52745U);
    msg.setSourceEntity(234U);
    msg.setDestination(37171U);
    msg.setDestinationEntity(72U);
    msg.value = 0.6859771457623566;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.9159747759037042);
    msg.setSource(34068U);
    msg.setSourceEntity(118U);
    msg.setDestination(32370U);
    msg.setDestinationEntity(175U);
    msg.value = 0.8816362398326879;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.34528129073753);
    msg.setSource(43908U);
    msg.setSourceEntity(210U);
    msg.setDestination(55105U);
    msg.setDestinationEntity(104U);
    msg.number.assign("SQVPUICGTZWHVLFYJZORIURXDMGREUBYKXFCJJQWJKBWHXNFDZJESLKLDAPDOBTSIOAJMMNRAHQTQETGDAKESIQNZJBKDOWUGJUOIQBKGDALXVFAPKESWVNVKJZPJOODBERYKHIVCWRGLEBNOZFHXYLFXHPNRXZFMTVYTXEGUHYIUNVYNQPVICAUIWHXSLLDVPFZZ");
    msg.timeout = 46226U;
    msg.contents.assign("WGRFYUQRUAJHECFTXQIILRNHGIXOWGCLDXBGQOJDEZMOAQZZZCKXTVQDQOVKWBCQVPOBAPMAMZTOYYTFNLDXFRBYIKCMQEUUITLWKVSNBYERIEPEHUDKXHUPGJDGIBMZPYPONHAJUOCBGSSEURYSLDCHQCSYCXEIINVRGAZSVITWVRBTLJWVFBLASFEKRDGWSWMXLAMDWXDJJJSUYAJCWMQNZNSAKFHTVHMRZKUHBFT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.34535172832795247);
    msg.setSource(32735U);
    msg.setSourceEntity(140U);
    msg.setDestination(31027U);
    msg.setDestinationEntity(27U);
    msg.number.assign("FKVVDNPKZEJIWZUAOYBYFLQVNBUBRYDOBGQRAFWQVOQSTNGJPBOXMPJICLZMNIIPMZEOHGKAURVIDKVCASWHRSJQLE");
    msg.timeout = 17683U;
    msg.contents.assign("DJHUFPGYFVGSONQUKRESMRVJKTIXSZBLBNDOCFWKNGZVXVXEUMWCOKODOBOKFYCWHSREPHFYSJETIJTBIQLGCWVBZXNIFERHQPHJBLXXUBJSDZUYNLTREMFUJVXUUAEUCMDGGDGWIDCODJSWWAPBZQCQIAMGJUKYGWZQMTTEGXAWCACLEOIBZMXFTPKPVDZLNEOKBTRAIYLVQVSPYZHHIMWNAKLPSQHRF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.7774318145739633);
    msg.setSource(28281U);
    msg.setSourceEntity(126U);
    msg.setDestination(54534U);
    msg.setDestinationEntity(97U);
    msg.number.assign("ZYUFEMRSUHUYWEGAXPISDSQVTWGCVQFTFFHRGNBEZPHAKLEWUNUOYAAIBDBHFTQIQJKOBIKENOOXCMXMMJNRGMEGAV");
    msg.timeout = 32373U;
    msg.contents.assign("OXYVWARBOSAQIQOEGHRPDYBRYZGKWYQVMKCHNDYJXHHTXJMJFECDRMSVLEVFSWXFSLLZATKUWCILTVUFBVFUCAKDXDQWATDRQBXUQVXPWLTNOKRZNZTVXUAYWIIFGLDZLHX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.8204200272863245);
    msg.setSource(42334U);
    msg.setSourceEntity(228U);
    msg.setDestination(7510U);
    msg.setDestinationEntity(164U);
    msg.seq = 1886284510U;
    msg.destination.assign("GGUDDDBJOFWSUDPJLYVTMNRPYGTZCJJOPPEHWCSIFGBRFIKUACOXHPUTBIRWNEEWFUEHYCOJMDZBUXTKRDLYLNYTOS");
    msg.timeout = 36310U;
    const char tmp_msg_0[] = {-37, 117, -9, 117, 62, -123, -86, 64, -110, 48, 12, -97, 56, -116, -65, 61, -11, -107, -22, -119, -123, -36, -77, -95, 5, 125, -18, 120, -38, -107, -95, -82, 47, 69, 102, -63, 38, -13, -56, 112, -51, -41, 46, 31, 44, 85, 61, -58, 70, -86, 24, -14, -12, 46, 78, 49, 109, -110, 22, -111, -123, -77, 38, -110, -30, -15, -102, 96, -104, 97, -125, -96, 17, -125, 118, 12, 18, -39, -31, -72, -85, -127, -96, 100, -102, 125, 92, -31, -87, -64, -32, -67, 79, -89, -42, -125, 73, -80, 29, -106, -43, 21, 36, 30, 3, 19, -39, -12, -104, -68, 50, -37, -48, -44, 119, -61, 4, 43, 24, 116, 14, 114, -66, -15, 44, -100, 58, -93, 30, 82, -65, -110, -127, -7, 27, 81, -63, -72, 63, -42, 14, -28, 70, -24, -67, 105, -20, -80, 50, 83, -73, -126, 89, -117, -56, 18, -3, 46, -15, -107, -38, 125, -97, -103, -63, 88, -123, 16, 104, -5, -41, 60, 5, -18, 89, 23, 81, -46, -71, 76, 32, 17, -41, -53, 14, -35, 71, -115, 118, -94, 123, 116, -122, -127, 79, -12, -27, 97, -128, 116, 106, -26, 99, 80, -51, 88, 56, 24, -65, -73, 85, 3, -122, -86, 79, 7, 101, -87, -28, 5, 70, 35, 86, -21, -30, 28, -118, 46, 11, -83, 99, -3, 48, 32, 11, 100, 62, -2, -43, 68, -110, -65, 78, -60, 30};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.6613997412246797);
    msg.setSource(60070U);
    msg.setSourceEntity(216U);
    msg.setDestination(57067U);
    msg.setDestinationEntity(113U);
    msg.seq = 2792779718U;
    msg.destination.assign("PWTQRHJAYDPWZVXOPOJNEJEZWDNYMBFUGOXYHUKNMQLXHYDAHISNLQVAPBCHZNGYYKVNMEBODUCVIIDZLKTJSCRMRMIVKTYGUDHGLJGTTVPTLAZEMSKKLBFJEWOPLURQNQJAJMISLOVCPNCKXMPAQVIUAHTIAFFLOJZOQIFZSKVTDDYEWGBCGKJXZBXEQDNWFSKMCETIYDSUAPTVBRXSWRFYFEGXCPWZN");
    msg.timeout = 7231U;
    const char tmp_msg_0[] = {3, -98, 78, -56, -2, 81, -10, 61, -83, 9};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.23005154615360124);
    msg.setSource(45760U);
    msg.setSourceEntity(66U);
    msg.setDestination(17557U);
    msg.setDestinationEntity(125U);
    msg.seq = 1314800843U;
    msg.destination.assign("JUZUKNEYDBKFLTGVVPRPLNZMJRCDKGXOOPRESVHGNJPTFPNJAKSY");
    msg.timeout = 31668U;
    const char tmp_msg_0[] = {-30, -26, -123, 6, 44, 123, 69, -72, -44, -117, -108, -13, -35, -128, -58, 45, -6, 100, -72, 41, 116, -70, 40};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.6834168833969685);
    msg.setSource(37392U);
    msg.setSourceEntity(176U);
    msg.setDestination(62369U);
    msg.setDestinationEntity(231U);
    msg.source.assign("EKEBQJHYWBDKDOKLWTIISSRTTPYNDOPBWOACCLHLQEFL");
    const char tmp_msg_0[] = {-22, -97, 62, 78, 30, -39, -88, 119, -6, -24, -14, 4, 90, -46, -16, 31, 34, 8, -25, -124, 59, -62, 20, 5, 39, 107, -44, -126, -89, -42, -99, -56, 29, -123, 47, -68, -119, -40, -64, 0, -67, 4, -73, 5, -27, 94, 96, -7, -122, 36, 109, -117, 102, -114, -10, 85, 92, -128, -11, 55, 63, 26, -29, -32, -88, 27, -45, -125, 100, 64, 26, -14, 43, 35, -65, 17, -98, 119, 100, 74, 84, 105, 36, -7, -26, -44, -48, -113, 47, -35, -109, 120, 126, -49, 33, 54, 25, -36, -111, 59, -47, -69, 49, 91, -93, 15, -119, 3, -113, -12, 51, -49, 81, -20, 111, -46, 25, -76, 82, 50, 94, 121, -30, 8, 64, 47, 117, 77, -29, 65, -100, 17, 67, 49, -65, -60, 86, -45, 105, -60, -70, 34, 125, -29, 41, -64, -95, 123, -86, -13, 47, 91, -61, -113, -53, 117, -71, 18, 111, -99, -107, 33, -98, 14, 92, 79, 17, -15, 115, 75, -12, 44, -95, -102, -34, 32, -52, -23, 42, -19, 83, -4, -79, -89, 80, -36, -7, 65, -63, 1, 29, 36, 28, 71, 12, 18, 59, -57, -24, 95, 125, 13, -89, 108, 83, 12, -39, 118, 16, 18, 95, -110, 60, 103, 125, -83, -45, -120, 34, -99, -119, -49, 8, 91, -58, 2, -26, -61, 22, -36, -65, -70, 38, -53, -122, 52, -77, -128, 32, -103, 27, -90, -18, -38, -10, -9, 73, 71, -34, 47, -12, -125, -81, 83};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.5468767107562748);
    msg.setSource(45834U);
    msg.setSourceEntity(90U);
    msg.setDestination(44988U);
    msg.setDestinationEntity(193U);
    msg.source.assign("QLGXEETWBPBCFMVLUXXTTKWSWYYHCGKXZDNZCOWMPCYYJXKWJGUVDCPHRBMFOUBPWJFTSNKQQQFBSEHXGOJQHLSWIQDLJOZGEVNKLKVJQV");
    const char tmp_msg_0[] = {-71, -48, -96, 92, -95, 125, -58, 26, -8, 33, -84, -31, 3, 46, 12, 65, 66, -99, 11, 114, 117, -87, 3, -84, 76, 95, -68, 11, -20, -28, 116, -93, 124, -63, 8, 94, -119, 85, -79, 85, -45, 121, -76, -104, 27, -26, -61, -106, 117, 38, 65, 113, -72, 99, 5, -78};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.5493439362936314);
    msg.setSource(21689U);
    msg.setSourceEntity(187U);
    msg.setDestination(58151U);
    msg.setDestinationEntity(179U);
    msg.source.assign("OHTZZAPSLVXEJOHGYIHHFXSCRBMLXJACNBURWEPCYYUVXWRKAPETKMUTKKQDZGGNZTGIMGKIWVKDBLWYNOSOXAMVUGDLXRZTZOFDPGJVUSKS");
    const char tmp_msg_0[] = {-50, 63, 64, 40, -104, 7, 73, -17, -83, -95, -84, 84, -70, -104, -36, 13, -102, 34, -56, -40, -31, 38, 101, 38, -4, 40, -31, -54, 48, -74, 82, 66, 102, -115, 108, 48, -47, 26, 100, -115, -55, -79, 21, 52, -44, 120, -52, -19, -44, 48, 42, 9, 72, 82, 105, -39, 126, 27, 109, 43, 36, 53, 86, -56, -71, -13, 71, -101, -117, 75, 72, 18, -80, -104, -68, -36, -9, -57, -72, -17};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.43388188055692667);
    msg.setSource(62872U);
    msg.setSourceEntity(251U);
    msg.setDestination(46563U);
    msg.setDestinationEntity(240U);
    msg.seq = 2081428853U;
    msg.state = 254U;
    msg.error.assign("SWFUMRNZSLAAMRYYUZHXHCKYYIBYIHLXUFYTPONLTKKMWPVFLXCAF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.0010227612676043663);
    msg.setSource(58375U);
    msg.setSourceEntity(23U);
    msg.setDestination(58898U);
    msg.setDestinationEntity(16U);
    msg.seq = 583133752U;
    msg.state = 176U;
    msg.error.assign("PCCSWIMVIOPNPGBZYPXBFFOYMOHOUBIOLWTSZTCK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.31326457900230653);
    msg.setSource(5108U);
    msg.setSourceEntity(161U);
    msg.setDestination(1158U);
    msg.setDestinationEntity(50U);
    msg.seq = 2109244967U;
    msg.state = 53U;
    msg.error.assign("UBFXDNBWPSKMJXRDK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.8399948928760672);
    msg.setSource(10473U);
    msg.setSourceEntity(125U);
    msg.setDestination(1348U);
    msg.setDestinationEntity(135U);
    msg.origin.assign("RMBIRZIQLHEIMIECGSPQIOAXEZDAJCUWSAJLKQJRXCFLKTDNSDBDYFZLKERKZZOSTKPLMWXFEZFVZXCNJHYSRPYUKEYONWCEGOVNGNNJXMYHCUNXPPUQPECTUKJJYQSDVXSWVFBQAHVBYUQFPJCDAZOHVKNTJQIFPUAVOIWWRQKXMFVTLSOPSBMBUDGFWCDGGURHOLAOIBBZARTYMGVB");
    msg.text.assign("PFJHGCIDVMAITGEOFWBXZMEMARFIFNHDGLOXNBDEKCIWBWJQKGQPBCXKLAIBMTSLSTRUSKIONANUUCOEHQGHYNJVWSSMHSPYDRJJHXJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.29812718693169316);
    msg.setSource(32733U);
    msg.setSourceEntity(230U);
    msg.setDestination(7863U);
    msg.setDestinationEntity(102U);
    msg.origin.assign("VGEEQKRFIIFJWSKPJRFLCPZGPPWYWJJAXBKQ");
    msg.text.assign("OEQROMYWDLFYMBANKCKVRXUBSUXKSWSTKUFQGUVTDYSEZUHOVIIZMEPWAELZJMXENZHTPBGQPIYVTXVHWRATTGOWNDWUILXCLYQHIQWMBCZMGFVHLXIAYDSVCCXLLLRSDYNJKXINZKFIHYJMEQAESRWTJDCSVPDEBAFEHSGAGYWPMFNBDWAUPMTZXOQPKGFIPQHUCZKXRHRBNSRNONJR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.12175970122660995);
    msg.setSource(4197U);
    msg.setSourceEntity(48U);
    msg.setDestination(38324U);
    msg.setDestinationEntity(181U);
    msg.origin.assign("MYMJBMSXNPTJWJREIGHFVADUOFPUEUPQLRSOOZLASHQBBVJFDDFLSCQTHYEOCPPZDIGYMEZWDOCMWFSWCLYALVSGCMWQVZPIUVXRHNMRWORFDFVDYFSBTNGHZXJKUCJOCQAAFXOWROLZOBITJLPJKXXCVTUKNZRTWNRNJQRCPMVAWFGDGEPXAQKBTHSRZNSZHKUEBNYALIBWHGNIKBYKXCAULTIMKVUIGKYHYQBATNTGXEUPIEZYMQQKLD");
    msg.text.assign("TANYKWOEHBQFGXQJQHKMSJKSLZXNTFTLFFVOGCBNGJLMTKPZUAEOIOLFWBFHAXSEWKVLMDWEVFCADOZVWSNOXMDCYKLDYUXFTJCVRDMSBAIHIIWONYJRIZZPYDRPWGWNGQPIDA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.7753609781120636);
    msg.setSource(46737U);
    msg.setSourceEntity(128U);
    msg.setDestination(52402U);
    msg.setDestinationEntity(208U);
    msg.origin.assign("XXKKODZNAPXVFMSEJVZUATUXHJSDNPLOVXPJKTUGNCAWMRFRQXSPOSQCCNUMFKGPIPHCRHZIOYBJEQTRKFTNSHIMRCGNQWLLAFOWWLQXHLSXUPLHIKCAUHVBGUYJRYNLOYEBZNWGAPXDFQIRFAEBCYKZBCYDBOAGZMLVLWSKTTBUMPGJJFEPHGATWVKRXDDHBIUNVAMDCJEIWTBIHWGFVMLUZRSBQWDVZIOQTDNJOTQMFMQ");
    msg.htime = 0.5387184483405515;
    msg.lat = 0.4722298445597707;
    msg.lon = 0.8913274822657873;
    const char tmp_msg_0[] = {-88, 37, -36, -122, 26, -61, -92, 118, -112, -29, 126, 25, 7, -101, 79, 107, 97, 19, 122, -23, 48, -44, 72, 50, -18, 100, -124, 23, -67, 76, 27, 53, 14, -78, 40, -88, -121, -10, 31, 27, -68, -101, -43, -105, -119, 6, -60, 71, -76, 21, -43, -50, -99, -127, -24, 126};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.25875969603345994);
    msg.setSource(15097U);
    msg.setSourceEntity(6U);
    msg.setDestination(8201U);
    msg.setDestinationEntity(97U);
    msg.origin.assign("NPEFTZXCKIEPSMCQXJIOZZFQWRVTCDLQOUSBPFFWZAYSTDDYGQVGDHIHVLJBLDJRYNKHVCPFKLMNMUUPYRFXQKZWONHKTIBAZWCYQGQPGOFJGBUVCEZKSSRTVBGMWDQJAGGHSRUXQNUTAWI");
    msg.htime = 0.4533016726392509;
    msg.lat = 0.36911537866209154;
    msg.lon = 0.044797020549014355;
    const char tmp_msg_0[] = {97, -77, -103, -115, 56, 39, 109, -42, -36, -103, -63, -92, 39, -91, 49, 21, 109, 123, 79, 32, -12, 11, 22, 54, 7, -40, -88, 7, 34, 101, 107, 59, -79, 30, 86, 29, 47, 89, -94, 83, 53, -72, -49, 50, -23, -54, 104, 33, -18, -77, 75, 47, 77, 87, -46, -123, 105, 25, -74, 125, 1, 126, 41, 111, 44, 109, 89, 73, -123, 93, -56, -87, -119, 97, 37, 15, -127, -77, -81, -8, -88, 84, -78, 38, 81, -42, 77, 118, 109, 26, -97, 101, 11, 103, -98, -73, -103, -102, -78, 47, 44, -99, -16, -28, 103, 10, 63, -72, -112, -23, -88, -52};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.06623143344290006);
    msg.setSource(14309U);
    msg.setSourceEntity(163U);
    msg.setDestination(8684U);
    msg.setDestinationEntity(219U);
    msg.origin.assign("CTJHFGKOLKUMSRMVMEOXIFKFPHGITMZHNINWBPKABYMBCVLVYFWCQSYOHSNQNATCUOFEFGPWXAEAJYJWHAKRNJXPJZHZZYZITOIESVQUAUNLBTHZRXOWSCZAWFGBEYYMMDBDICUFILLLNGLNHTKGFDXKXAYRYKATTPOFPIDRGEOQJGMCSUOXSUUSVVTLVCCUPHQQBAVDPYOEXJZWRRDWXBVGJISEZWRDDCNJKDRUWLQRTXVLMPQQDJEGEH");
    msg.htime = 0.2205245760537463;
    msg.lat = 0.8713758261077551;
    msg.lon = 0.7199926989893688;
    const char tmp_msg_0[] = {13, -94, 20, -27, -72, 51, 106, 10, 5, 21, 60, -58, 38, 79, 109, 7, -76, 20, -16, 87, -11, 48, -96, 8, -125, -99, 28, 103, -123, -61, 56, -123, -19, -105, -28, -124, 51, -22, 30, -17, -52, 29, -5, 12, 69, -27, 114, 21, -121, 37, -45, -90, -128};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.49607295867528656);
    msg.setSource(54333U);
    msg.setSourceEntity(159U);
    msg.setDestination(26601U);
    msg.setDestinationEntity(107U);
    msg.req_id = 2626U;
    msg.ttl = 39608U;
    msg.destination.assign("KDZPTXSJELIRNHACSPHOQCTCPLFUMGUNQQYGOZTFGLAXEFOIOTJUFFMVUZTBMYDSSXEIEUOXQXLRWAQBXFVEDPTGRKUTARBVMLWVMHRWQMZRVXJDPCIAGTKIUIJKBLSEBTYWFHZSFCHPYNOWDSTDLCNUEQWHOJSKLXAZKVLYERIOUJXKVBEGJOZVZNRBXGRJIKKHCJKMBGUWYFNDNAC");
    const char tmp_msg_0[] = {-63, -121, 95, -109, 60, -118, -110, 68, -95, 42, -56, 23, 106, -96, -26, 101, -73, -67, -35, -97, -94, -65, 32, 19, 63, 88, 99, 69, 50, -110, -48, -22, -68, -111, -120, 49, 22, 111, 27, 121, 6, -104, -1, 88, -10, -33, 113, 63, -12, -2, 111, -61, 25, 75, 1, 10, 106, 44, 96, 48, -58, 126, -38, -5, -116, 22, -77, 13, -61, -107, 42, -87, -61, -36, -33, -44, 20, -85, -107, -118, -114, 98, -126, 110, 51, -8, 120, -13, -42, -97, 6, 95, -109, 106, 61, -77, 122, 13, 2, 62, 39, -96, 48, 51, 82, -73, -83, 41, -60, -122, -1, 40, -64, -83, -99, -84, 72, 0, -95, 38, 85, -4, 50, 57, 70, 116, -55, -79, 116, -41, 92, 87, 90, 96, 2, 114, -99, 24, 72, -108, -36, 7, -120, -25, 80, -93, 73, -3, 1, -25, 125, 104, -101, 0, -96, 44, 72, 0, 118, 22, -66, 59, -95, -92, 80, 96, -49, 58, 13, 89, 36, -39, 123, -95, 126, -121, -113, -94, 26, -36, -51, -79, 32, 34, 94, -25, 12, -120, -63, -8, 52, -15, -36, 111, -10, -25, 11, 58, -83, 115, 81, -4, 11, -10, -43, 11, -31, -29, 122, -109, -94, -114, 112, 110, 0, 126, 96, -78, -99, 90, -110, -85, -71, -128, -127, 13, -109};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.5832272631507828);
    msg.setSource(22602U);
    msg.setSourceEntity(59U);
    msg.setDestination(5650U);
    msg.setDestinationEntity(30U);
    msg.req_id = 54775U;
    msg.ttl = 4992U;
    msg.destination.assign("EOUCJCANMOKZKTWRBLIBIXURPOIXXLIPPTWFJOSSWQKCXSRODHOIXWXVGMPNWNQBFLAUSGJEMAVFGYLLMSHPWSJJYLYDTUWGODERKBSNZTEFUFEDTNIIEBDAPVLMTZPMPHADRLTAOIQFEKFVUYVMNGSRYQDWYMZHGJAWXCYIN");
    const char tmp_msg_0[] = {72, -78, 121, 34, 78, 30, -68, 112, 10, -45, -16, 54, 105, 63, 88, 85, 125, 35, 90, -17, 35, 18, 89};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.15326068934798376);
    msg.setSource(42902U);
    msg.setSourceEntity(147U);
    msg.setDestination(60614U);
    msg.setDestinationEntity(133U);
    msg.req_id = 27739U;
    msg.ttl = 21958U;
    msg.destination.assign("LRMRWYDEUUTXCFPURNBWJRZDJJCDKQOELFWUELKEUKQPCPFPFALYPFWTOYMQEIVKXQVFXOCBKMPSSTIPAWEZONKSSBLNNZNVKBYSLKTYDHLUGJXDQUXJJRSOTIHPMGQAXHNIJYNBBVXRFECHB");
    const char tmp_msg_0[] = {122, 45, 112, -34, -97, -116, -35, 121, 83, 21, -117, 113, 62, -103, 126, -29, -14, -111, -124, 116, 28, 82, 92, 29, -123, 98, 71, 1, 122, -105, -107, -4, -45, -68, 123, -35, -128, 57, 67, -67, -37, 99, 51, -14, 53, 121, 70, -123, 89, 51, -41, 105, -100, -51, -29, 29, -61, 73, -38, -62, -100, -12, 13, 80, 18, -105, -96, -110, 72, 85, 2, -32, 105, -12, -96, -14, -15, 113, -55, 17, -2, 80, -28, 125, -6, 1, -57, 87, 4, -8, 109};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.7167653616730667);
    msg.setSource(60321U);
    msg.setSourceEntity(114U);
    msg.setDestination(8785U);
    msg.setDestinationEntity(141U);
    msg.req_id = 42571U;
    msg.status = 59U;
    msg.text.assign("YGPGFIRUBIYLZPJCBLXUZCBUBJRWFNCTIOEWNQXWCNJMMQCMZHAYTFXEGDOPIEYTOMAKDGPKHPQCIVKKBRVSUSSRMFXVEUQSFWQMIDJQMEZAFGISLNANHRNNKBJTLZUXYFTNTEHORCXVEVUOHEWFDZTJOWPDWQUDXRYSABL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.9759510213578877);
    msg.setSource(48159U);
    msg.setSourceEntity(31U);
    msg.setDestination(51133U);
    msg.setDestinationEntity(92U);
    msg.req_id = 56034U;
    msg.status = 240U;
    msg.text.assign("FAEUXVHZLFETZHBDYJGNGHMNNRAHMXLPRFOLFTPIAHVKNFJGJIBFLBIRQTUEVXVVKLEPIYVOKGWAYZRBDOMQOAYSPCYBEXPTQDCEMSAMQVUWVMIKJSOCMRGZHCRQGXUCXOOYXBBDMJQISDRKZLLNYKKGWNOGYTHJMKESJXICULTRWETZUFKFCNAOQSSOXNNRWWDPPUEKJDGYNIRQPIQSB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.14497465692831824);
    msg.setSource(48956U);
    msg.setSourceEntity(41U);
    msg.setDestination(28969U);
    msg.setDestinationEntity(197U);
    msg.req_id = 62994U;
    msg.status = 92U;
    msg.text.assign("VKDIRPNXODCBTRWYRMXMNTFSWUFHPZCBZSBUEOIQEDVVILWPZZTYGJSHESHFFQGMKAVLRVHPRYXTRJBTUYCXDVMTRZHGIAOWQCUIKPBKPXOYNEGPQXNUAADNWFJISVRZIHVDKAOETJGDWOJHQLUFJVBXMYJIAQNMHKDAONMTKWLZISNSEOYBZTRQJPPYXCGZILUWLKSUFPEZD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.4329569344354435);
    msg.setSource(22230U);
    msg.setSourceEntity(198U);
    msg.setDestination(33433U);
    msg.setDestinationEntity(44U);
    msg.group_name.assign("DPKJSMAERFUPBJSUTJRAJLAZY");
    msg.links = 1003077873U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.7542249786467892);
    msg.setSource(61348U);
    msg.setSourceEntity(78U);
    msg.setDestination(52339U);
    msg.setDestinationEntity(239U);
    msg.group_name.assign("QFLJTMWQXPAOIKWQMZQNOUYRCOWFRULMYNVXBHCOVGLBCDJOWYCJPVMI");
    msg.links = 1505201868U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.8262216757323663);
    msg.setSource(8721U);
    msg.setSourceEntity(100U);
    msg.setDestination(18901U);
    msg.setDestinationEntity(37U);
    msg.group_name.assign("MHUENXTLDRXPMRCNZISOSVCPNWUVGHNOWDZPBGYLWYALKGMWFYIHQAVDQCKFHXPOCJEYPHKRXXCQTVZDFEQ");
    msg.links = 1321833692U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.2968104500958506);
    msg.setSource(6786U);
    msg.setSourceEntity(14U);
    msg.setDestination(35559U);
    msg.setDestinationEntity(1U);
    msg.groupname.assign("RSSIZTQWURMLWCQJVNCTMFPKIWHUBVXQUPRLAEGCIYZJZONHIHHMUYKFJIXKQBGEUPDFSTIGOAANWXDDYXCKZJLICSBFJFFKVIQJCR");
    msg.action = 1U;
    msg.grouplist.assign("PPHFTXAUSAEQNTIZPJVBVYZPLCORSTUPDOPGDGSJAMAJADQYUMHTGXWKIMCNADCNZSHNZIBJIJCLYYXSQVXHCIJYOWASLRHVO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.8644699190192874);
    msg.setSource(10850U);
    msg.setSourceEntity(191U);
    msg.setDestination(23710U);
    msg.setDestinationEntity(167U);
    msg.groupname.assign("GFTNJYIIUYWKZDTGCVEUHNVENIZXOLZDISMCZSQUJKWQTJKGQX");
    msg.action = 102U;
    msg.grouplist.assign("SVHRLZZBNJNGXLPBSBMIBONQPLGIRFKNRWKTYUAHJJSDEVUTRZPHARHPMNMWSIUKBLXJMFDO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.882662305411557);
    msg.setSource(42583U);
    msg.setSourceEntity(119U);
    msg.setDestination(30200U);
    msg.setDestinationEntity(187U);
    msg.groupname.assign("DNOLVMZTQLLPQQDTESPGRVXWMDOLBKZORQKNHFAMYZUJHKVOWEBBJQJHDYUKPANDUAWZDPLFYHJCMOSGQTNQFFGIWEVEEJYJRRUCZMGAKMSXBNFJRHYBDKCVIBCTDCHBBSWYRIATYXGGTYXWXNACCFRMXKZOIDJHQGCKEAPRZOSRTNMMUFQUEUPWVIVGVGSVBAOZTNSWYUXLIDHCJMFNLHXVTCPUXXEKETP");
    msg.action = 239U;
    msg.grouplist.assign("ZGEHAWCCYSIEIWMPIINSNWRXB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.4858790935525783);
    msg.setSource(20169U);
    msg.setSourceEntity(13U);
    msg.setDestination(535U);
    msg.setDestinationEntity(141U);
    msg.id = 0U;
    msg.range = 0.5401468938814312;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.3751743035871119);
    msg.setSource(62944U);
    msg.setSourceEntity(75U);
    msg.setDestination(34086U);
    msg.setDestinationEntity(207U);
    msg.id = 114U;
    msg.range = 0.6424736189235384;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.9442850458148111);
    msg.setSource(21858U);
    msg.setSourceEntity(82U);
    msg.setDestination(55004U);
    msg.setDestinationEntity(150U);
    msg.id = 42U;
    msg.range = 0.09862638465818752;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.7112472575901808);
    msg.setSource(64753U);
    msg.setSourceEntity(173U);
    msg.setDestination(15271U);
    msg.setDestinationEntity(232U);
    msg.beacon.assign("NABLLNYQCIRPRTGEZAUDYDKJFDXDMUSMDIOFBEIGFMFSVFRWXUBXBW");
    msg.lat = 0.8752207963617792;
    msg.lon = 0.8559660561336108;
    msg.depth = 0.44224517921186135;
    msg.query_channel = 201U;
    msg.reply_channel = 42U;
    msg.transponder_delay = 184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.7126241611018448);
    msg.setSource(4539U);
    msg.setSourceEntity(210U);
    msg.setDestination(49363U);
    msg.setDestinationEntity(216U);
    msg.beacon.assign("UQCUNIEOKZQANXLYRMTWPPQEGRVSLBQZJRHVQJEXJSWPLKKFYMRUGTNXCTDSQFUGBARVZESAHEOTNEUIHZYYJTZ");
    msg.lat = 0.6276278869387459;
    msg.lon = 0.10749775277717899;
    msg.depth = 0.21141336631286423;
    msg.query_channel = 7U;
    msg.reply_channel = 151U;
    msg.transponder_delay = 111U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.5993519954393391);
    msg.setSource(50975U);
    msg.setSourceEntity(204U);
    msg.setDestination(50323U);
    msg.setDestinationEntity(203U);
    msg.beacon.assign("BEQOSFKWAJIRYMMBEVKZCJZRAIJMHLWNCEBSFHAEAXXNTOCGZREUIPCQI");
    msg.lat = 0.1867752546732625;
    msg.lon = 0.33269107727215996;
    msg.depth = 0.5640709124774502;
    msg.query_channel = 198U;
    msg.reply_channel = 192U;
    msg.transponder_delay = 5U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.209653516708874);
    msg.setSource(30238U);
    msg.setSourceEntity(239U);
    msg.setDestination(39472U);
    msg.setDestinationEntity(31U);
    msg.op = 142U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.549242292389244);
    msg.setSource(41148U);
    msg.setSourceEntity(76U);
    msg.setDestination(58685U);
    msg.setDestinationEntity(198U);
    msg.op = 181U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LMEZZRPDGPATPUSBAWUWCAFQNZCIWBZTHXYUUZIEZNMBWIYBMMUQDZHNMFTBDHJNUSIMWLKVGGNHJUBQOSAYGTJEPJYWDVRZYSEQVDOKKQTDCRTARFOQAYNOPLQHAGNFXZWLUAPIYFUFLFHUBOJECXHVEAMXVKJPNLQFKJXZLYSTDIEKMHVTCWYC");
    tmp_msg_0.lat = 0.3102147580553285;
    tmp_msg_0.lon = 0.45342683983951526;
    tmp_msg_0.depth = 0.16312367217800217;
    tmp_msg_0.query_channel = 230U;
    tmp_msg_0.reply_channel = 1U;
    tmp_msg_0.transponder_delay = 231U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.30142155770399914);
    msg.setSource(27673U);
    msg.setSourceEntity(79U);
    msg.setDestination(6133U);
    msg.setDestinationEntity(152U);
    msg.op = 16U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UWJPZPBASKIKZEYPZNVHJMFWQOSWHYUENMEDOTCSVONFNDQZRRZGVIGIVGXUVHEPXTUPDT");
    tmp_msg_0.lat = 0.8531275594493756;
    tmp_msg_0.lon = 0.13809468156728255;
    tmp_msg_0.depth = 0.6609720131301222;
    tmp_msg_0.query_channel = 36U;
    tmp_msg_0.reply_channel = 11U;
    tmp_msg_0.transponder_delay = 104U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.2711311556760483);
    msg.setSource(40792U);
    msg.setSourceEntity(193U);
    msg.setDestination(2022U);
    msg.setDestinationEntity(17U);
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 194U;
    tmp_msg_0.id.assign("NBIYCDARAVHGRYJTARGXFKVGYILBYVPSEKTCXXLGIHHFMGQPOCRBVPTWZXQOYTWTIDRDWBKPYAEZBOCWMFMBNBOUUSWCCPPDBPRSWJHKJFLCLZFDFHXNKQOISDKEGMKLQSFAAAYGXZYHXQDNFETTRTSEZAXNIZXFCUJHNUSMGZJVRIYDMJBOAULFVHOGWQPIMXQWZPQERKMJDOWCJMOUESLGQKEZELEUBASTVIWUUUHVOTIDJRVJPZVY");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CBDZAMGRPCYVUFQQIEPZUUOOITQBIFHQYJIGNMPXVEMLXVSKOQYNZTWTFLKMLIRCUOPCHFSXNZNJVMAZNPOWIPHMMHAULXYFKJSMOBZGXZVSADPOXUYWXRTYTQEJYFVQZEXJUHCBGFYISSSAPWCRBEMXDKXRHEKAJTGSTBKBBJRT");
    tmp_tmp_msg_0_0.value.assign("UUDTWJYJKUHGBVGFFKTMDIDOQAYXSDXKTUGQRLJNJNCUDPBZPYQWZAJIAVXOLRQYTIQJFCMZZYXWSNMAWZOMNACRTGVZHBINHLHLQVMOJDDQKSFEZGFNVAEMZLHURJJRLMQURXONBPUKLNNLGFGFHVEYCSETWWFXKPWKSDCOASKZVWHHIRVICIVEPWXXEEQPBBPIRBHOMCKMBETLPYPHOUTODBQMNXAYRJSYBZR");
    tmp_tmp_msg_0_0.type = 227U;
    tmp_tmp_msg_0_0.access = 39U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.23958013210633122);
    msg.setSource(18394U);
    msg.setSourceEntity(9U);
    msg.setDestination(60574U);
    msg.setDestinationEntity(99U);
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 40312U;
    tmp_msg_0.lat = 0.0764487595522585;
    tmp_msg_0.lon = 0.6088334294961129;
    tmp_msg_0.z = 0.07802599659631826;
    tmp_msg_0.z_units = 0U;
    tmp_msg_0.speed = 0.06021692314776783;
    tmp_msg_0.speed_units = 211U;
    tmp_msg_0.duration = 48948U;
    tmp_msg_0.radius = 0.33948799572327226;
    tmp_msg_0.flags = 242U;
    tmp_msg_0.custom.assign("SHZBILECYAEUDJHAAUIOJYWVFZABEKUNEHDFRGSS");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.8503545321389213);
    msg.setSource(27547U);
    msg.setSourceEntity(116U);
    msg.setDestination(15348U);
    msg.setDestinationEntity(170U);
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("OWNTVKWZJCPIUYCPYGNLUGQXWEMPJAEOPCDFBYBISNIRBSZCDVQMPKQURZSOCDCQATCEYZGVIOREPNSMRGGXQLRYEYLZDHXBIWBUHSXKCXVGPMPHJDUVLDAOTFWHXAMAQTOHZHFA");
    const char tmp_tmp_msg_0_0[] = {81, -70, -6, 12, -1, 54, -62, 114, 91, -102, -44, -75, 17, -30, 62, 38, -74, -70, 62, 117, -55, 88, 48, 76, -116, 71, -62, -122, 15, -88, 32, -3, 45, 125, 112, 48, -125, -112, 31, -12, -94, 82, 34, -48, -105, -36, 88, -13, 90, -19, 107, -79, 14, -45, -124, -60, 15, 68, -112, -99, 23, 2, 46, -93, -10, -5, 120, -43, 97, 76, -73, 54, -107, -4, 79, 83, 110, -72, 16, -123, 38, 97, 118, -91, 5, 114, -26, 84, 73, 96, 72, -11, 101, 108, -127, -96, 16, 121, -101, 15, 91, 7, -94, -37, -65, 97, 99, 43, -35, -51, 34, 109, -36, -17, 68, -122, -34, -28, -63, -39, -88, 88, 65, 40, -120, 92, 69, 77, -114, 109, 75, -114, 108, 38, -87, 80, 7, 46, 64, 47, 85, 12, 113, -54, -24, 67, 30, 115, -85, -28, 41, 102, -52, 46, 16, 104, 13, -62, -64, 4, 80, 69, -10, 102, 27, 68, -121, -63, 66, -20, 87, -9, 54, 79, -116, 110, -117, -31, 117, -7, -75, 53, 21, -51, 114, -92, 24, -95, 82, 47, -65, -124, -64, 88, -109, -9, 7, 98, -25, -17, -128, -127, 75, -47, -47, -43, 19, 108, 104, 8, 95, -18, -95, -104, -20, -35, 72, -110, 37, 19, 80, 20, 52, -38, 57, -25, 102, -121, 61, -99};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.07347789575770824);
    msg.setSource(46681U);
    msg.setSourceEntity(65U);
    msg.setDestination(14239U);
    msg.setDestinationEntity(165U);
    msg.op = 63U;
    msg.system.assign("BJJLPTQBIAWKKMZIOYWCSIDNWKLVHIRWHUGKMOUJPXXWEVKLLZJTUPUFULYAIHBPXEQDSYRATPRBGXNAFZYMVLZAMEPPHFCJGRFVROIMSQENZLTUFKTGDOTUKLHVWJLQMIKTDVEYTDENGFSCCGZGEMADBHXCXFDMSROPUHSKLVCIFOSYRYIQVMYXXJHJNKJTQNQOWHXGPQDFMGWPVQGEZDABSNBVEWWACIQBSDZOOAYNBFN");
    msg.range = 0.27898559688505786;
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("SJJKYSMLFYIGTBNNZYFTRSYPJEQCVZGYENGOICOYLGWZIXRMUXKQYQBEAZICPVRKFBIDEAOWFPDBBNDGHSRLYKFHXZETDTHAGXMOROLMWLTBKPLLKJGWZSOWFGQUOCNMESUNQFXLANHKMWWAGVAPAOESPQARXUMLXXBDENTOEQHKHIPYPSQHJQJDBZTNCITLUNPFFTUKUSOVRJMCJUAZMVZUVESDKCVJTHBUFVWRCAQMG");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UONVBXLEFVCPLQEMFYPECKTFDFAUXHQKVPZZNLWTPKQKPEXVNVEWVEXNLFTNOPLMQLVX");
    tmp_tmp_msg_0_0.value.assign("PSUDRREFQEGFTRHNEITTRFCQDPCSGXRSHYSFWCYZLMYLSLQPBWCJTVGROVX");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.6181418566691299);
    msg.setSource(41532U);
    msg.setSourceEntity(241U);
    msg.setDestination(44668U);
    msg.setDestinationEntity(66U);
    msg.op = 106U;
    msg.system.assign("JEGDDYWTSLKUJRDFEKIZLRFXYEBRCDEGBPPOXXFZKQJUQOUCAPKWTLMVLNISEZWNRTAJRBZNPGFUOEYOXNTCMNXTCQVDMNDIJ");
    msg.range = 0.9202444859289334;
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.8235961163332807;
    tmp_msg_0.y = 0.7387022721897936;
    tmp_msg_0.z = 0.27194727609819047;
    tmp_msg_0.phi = 0.2729360665095347;
    tmp_msg_0.theta = 0.3032630931440201;
    tmp_msg_0.psi = 0.16636270229773753;
    tmp_msg_0.p = 0.5848408253352516;
    tmp_msg_0.q = 0.2591269684568631;
    tmp_msg_0.r = 0.6078199460788473;
    tmp_msg_0.u = 0.5554527969747919;
    tmp_msg_0.v = 0.6931423280305806;
    tmp_msg_0.w = 0.5212339021201756;
    tmp_msg_0.bias_psi = 0.1825228092527975;
    tmp_msg_0.bias_r = 0.43359720829949566;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.6568663017075256);
    msg.setSource(58165U);
    msg.setSourceEntity(11U);
    msg.setDestination(54145U);
    msg.setDestinationEntity(195U);
    msg.op = 215U;
    msg.system.assign("AYWXKJKJHGPHRCSHKFTBTGPORFDGZGEISXHMSYHAWNCZWTCCLROBSHGPBPBKMSGNUCYVPDGRHPOTJOLADQMDDFIYJISKQQYMDWSDSXEZXQJIBVHBENFVQLWVCJXUINYXPLELWTPYEEXUTGDURKSWOMNBTIVGKFLOOOTQZAVZWDWJCFDAEVRQMCFRAMXQACMXFSJRAHTONPYITBMKNULJIKYLYONPZGIVQLJFNXEUKMLUVBAQCEHRNWRABUZZI");
    msg.range = 0.25444951876724164;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9042804305853054;
    tmp_msg_0.speed_units = 23U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.20399816743367316);
    msg.setSource(41941U);
    msg.setSourceEntity(151U);
    msg.setDestination(55157U);
    msg.setDestinationEntity(136U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.05761367383364402);
    msg.setSource(47472U);
    msg.setSourceEntity(54U);
    msg.setDestination(40928U);
    msg.setDestinationEntity(29U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.34661400257589836);
    msg.setSource(32581U);
    msg.setSourceEntity(227U);
    msg.setDestination(29710U);
    msg.setDestinationEntity(160U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.9431049296898486);
    msg.setSource(1667U);
    msg.setSourceEntity(167U);
    msg.setDestination(63485U);
    msg.setDestinationEntity(201U);
    msg.list.assign("FIXWJCUYBNFDJRGVDOXOWCPXLRTRHVKGSZPMFCBZCAVVZIMMKPQKRPSDBBKYDNQAHGMSLJUYRIRIVTICNPONQFUDIFGGRGPXTYWBQSFOVKNEJMNQINFVZAZVUJLHYLQYSOLOZJVKTESWUKUXUDOCXRWQWGPKJWLNXZOPIKWADKTARALGGHXBGNTHHVARDBEMSHSSEJFMOMPYYCCTUWXEYUFCMBJCXABHFOQJNQEIETYBHHUTIWTLAZLQLZE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.637439127302258);
    msg.setSource(7213U);
    msg.setSourceEntity(236U);
    msg.setDestination(42422U);
    msg.setDestinationEntity(210U);
    msg.list.assign("OKBZGBFQIPCOVLXNRTQNOCBDAVAMPD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.534045000750009);
    msg.setSource(27581U);
    msg.setSourceEntity(77U);
    msg.setDestination(16856U);
    msg.setDestinationEntity(234U);
    msg.list.assign("IWOFOOTNCSXJLFOECYGFCC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.5381159016153133);
    msg.setSource(39973U);
    msg.setSourceEntity(234U);
    msg.setDestination(41501U);
    msg.setDestinationEntity(126U);
    msg.value = 22679;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.2891724714051026);
    msg.setSource(52729U);
    msg.setSourceEntity(127U);
    msg.setDestination(5271U);
    msg.setDestinationEntity(83U);
    msg.value = 11656;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.4987096763760551);
    msg.setSource(61610U);
    msg.setSourceEntity(101U);
    msg.setDestination(5389U);
    msg.setDestinationEntity(123U);
    msg.value = 32585;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.8557289923687134);
    msg.setSource(41382U);
    msg.setSourceEntity(12U);
    msg.setDestination(39263U);
    msg.setDestinationEntity(25U);
    msg.value = 0.941769764249215;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.9550519104809799);
    msg.setSource(38428U);
    msg.setSourceEntity(68U);
    msg.setDestination(14565U);
    msg.setDestinationEntity(216U);
    msg.value = 0.5761057163281713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.4714940408364574);
    msg.setSource(61059U);
    msg.setSourceEntity(185U);
    msg.setDestination(14637U);
    msg.setDestinationEntity(158U);
    msg.value = 0.7960722507162441;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.8873692553847862);
    msg.setSource(6002U);
    msg.setSourceEntity(161U);
    msg.setDestination(5549U);
    msg.setDestinationEntity(13U);
    msg.value = 0.10449896658586133;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.01903967476031887);
    msg.setSource(31686U);
    msg.setSourceEntity(208U);
    msg.setDestination(4739U);
    msg.setDestinationEntity(9U);
    msg.value = 0.8124570613739457;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.08891821134394351);
    msg.setSource(30115U);
    msg.setSourceEntity(249U);
    msg.setDestination(29886U);
    msg.setDestinationEntity(230U);
    msg.value = 0.5799678929467503;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.10926541017947988);
    msg.setSource(13495U);
    msg.setSourceEntity(239U);
    msg.setDestination(26000U);
    msg.setDestinationEntity(91U);
    msg.validity = 32031U;
    msg.type = 14U;
    msg.utc_year = 53038U;
    msg.utc_month = 145U;
    msg.utc_day = 84U;
    msg.utc_time = 0.756205425592386;
    msg.lat = 0.8634780973476711;
    msg.lon = 0.9140101703772268;
    msg.height = 0.883068973448369;
    msg.satellites = 162U;
    msg.cog = 0.532247083605089;
    msg.sog = 0.07176184097831473;
    msg.hdop = 0.01177625523778325;
    msg.vdop = 0.354701592911553;
    msg.hacc = 0.8626823278429109;
    msg.vacc = 0.04208432742136825;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.7637798726478668);
    msg.setSource(33498U);
    msg.setSourceEntity(171U);
    msg.setDestination(20447U);
    msg.setDestinationEntity(13U);
    msg.validity = 21599U;
    msg.type = 100U;
    msg.utc_year = 12385U;
    msg.utc_month = 176U;
    msg.utc_day = 91U;
    msg.utc_time = 0.11513748747880415;
    msg.lat = 0.861064914203083;
    msg.lon = 0.5819211433166124;
    msg.height = 0.6014298065190515;
    msg.satellites = 34U;
    msg.cog = 0.1616348674734862;
    msg.sog = 0.2230172227382735;
    msg.hdop = 0.3469758923539912;
    msg.vdop = 0.05779911001708338;
    msg.hacc = 0.2357872667988229;
    msg.vacc = 0.12497939031400351;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.9011248975085886);
    msg.setSource(42040U);
    msg.setSourceEntity(74U);
    msg.setDestination(37408U);
    msg.setDestinationEntity(13U);
    msg.validity = 30875U;
    msg.type = 244U;
    msg.utc_year = 27700U;
    msg.utc_month = 117U;
    msg.utc_day = 135U;
    msg.utc_time = 0.5293783272211413;
    msg.lat = 0.9968413027334198;
    msg.lon = 0.5577355918707473;
    msg.height = 0.9204947140778718;
    msg.satellites = 106U;
    msg.cog = 0.8901802057784254;
    msg.sog = 0.3194437184843373;
    msg.hdop = 0.648005623950125;
    msg.vdop = 0.9187647679775465;
    msg.hacc = 0.7765102511833107;
    msg.vacc = 0.8428460004565275;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.5875737933193586);
    msg.setSource(50384U);
    msg.setSourceEntity(172U);
    msg.setDestination(40669U);
    msg.setDestinationEntity(106U);
    msg.time = 0.47506045212201575;
    msg.phi = 0.4685965715302466;
    msg.theta = 0.4999232274264038;
    msg.psi = 0.21925213364359164;
    msg.psi_magnetic = 0.6414358245681105;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.701197466486961);
    msg.setSource(7095U);
    msg.setSourceEntity(190U);
    msg.setDestination(8758U);
    msg.setDestinationEntity(28U);
    msg.time = 0.32198601165151974;
    msg.phi = 0.9513764521092128;
    msg.theta = 0.07433620696416243;
    msg.psi = 0.24791632807352648;
    msg.psi_magnetic = 0.2701071860911958;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.7190728619449546);
    msg.setSource(22366U);
    msg.setSourceEntity(50U);
    msg.setDestination(54011U);
    msg.setDestinationEntity(170U);
    msg.time = 0.19807999124851716;
    msg.phi = 0.15658826769538425;
    msg.theta = 0.1321827324263274;
    msg.psi = 0.28286656862594406;
    msg.psi_magnetic = 0.08201214957300929;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.8325968595463683);
    msg.setSource(32002U);
    msg.setSourceEntity(105U);
    msg.setDestination(34100U);
    msg.setDestinationEntity(22U);
    msg.time = 0.08323245000678825;
    msg.x = 0.5488085539044724;
    msg.y = 0.45714471002060053;
    msg.z = 0.6422061318187745;
    msg.timestep = 0.5640867114460428;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.11127740686256238);
    msg.setSource(20301U);
    msg.setSourceEntity(126U);
    msg.setDestination(47607U);
    msg.setDestinationEntity(129U);
    msg.time = 0.9153715936725173;
    msg.x = 0.36079820890213776;
    msg.y = 0.037896037999832544;
    msg.z = 0.8097958174278072;
    msg.timestep = 0.2147775133894113;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.818873875125041);
    msg.setSource(40140U);
    msg.setSourceEntity(244U);
    msg.setDestination(16686U);
    msg.setDestinationEntity(57U);
    msg.time = 0.024004389649201485;
    msg.x = 0.9041879942347327;
    msg.y = 0.8037206870603157;
    msg.z = 0.0825196706672533;
    msg.timestep = 0.9616253757370504;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.7942239936630152);
    msg.setSource(33812U);
    msg.setSourceEntity(171U);
    msg.setDestination(8672U);
    msg.setDestinationEntity(140U);
    msg.time = 0.6490327547564313;
    msg.x = 0.17834354296469213;
    msg.y = 0.07245187869374015;
    msg.z = 0.3765983283153117;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.5661418828264841);
    msg.setSource(64600U);
    msg.setSourceEntity(198U);
    msg.setDestination(26765U);
    msg.setDestinationEntity(126U);
    msg.time = 0.48974945243010837;
    msg.x = 0.7660967810576998;
    msg.y = 0.6824231285891468;
    msg.z = 0.7002686717000753;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.9518197980943596);
    msg.setSource(15927U);
    msg.setSourceEntity(124U);
    msg.setDestination(43552U);
    msg.setDestinationEntity(0U);
    msg.time = 0.2733285679491647;
    msg.x = 0.3458591917751582;
    msg.y = 0.27658793725514974;
    msg.z = 0.6890760709536721;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.5246588520553876);
    msg.setSource(14709U);
    msg.setSourceEntity(117U);
    msg.setDestination(26143U);
    msg.setDestinationEntity(131U);
    msg.time = 0.5206220647360432;
    msg.x = 0.09727802632186411;
    msg.y = 0.24139870614810544;
    msg.z = 0.8590596274952443;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.8354919563024826);
    msg.setSource(27553U);
    msg.setSourceEntity(113U);
    msg.setDestination(14767U);
    msg.setDestinationEntity(69U);
    msg.time = 0.734998528839072;
    msg.x = 0.30762889645770075;
    msg.y = 0.5846343978867066;
    msg.z = 0.8875093718157636;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.2122058834430779);
    msg.setSource(55559U);
    msg.setSourceEntity(247U);
    msg.setDestination(55414U);
    msg.setDestinationEntity(244U);
    msg.time = 0.2310870494906756;
    msg.x = 0.7113125497858608;
    msg.y = 0.4326372080572509;
    msg.z = 0.6085404044183841;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.12240191145442825);
    msg.setSource(56621U);
    msg.setSourceEntity(133U);
    msg.setDestination(59851U);
    msg.setDestinationEntity(51U);
    msg.time = 0.6952827980840665;
    msg.x = 0.21517465057012775;
    msg.y = 0.6779068415363878;
    msg.z = 0.21722693293305384;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.8661806053896286);
    msg.setSource(22671U);
    msg.setSourceEntity(163U);
    msg.setDestination(46396U);
    msg.setDestinationEntity(98U);
    msg.time = 0.6424254647821247;
    msg.x = 0.7956252721111616;
    msg.y = 0.45242744174530247;
    msg.z = 0.7015412711560611;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.08016495430529935);
    msg.setSource(63502U);
    msg.setSourceEntity(121U);
    msg.setDestination(42226U);
    msg.setDestinationEntity(162U);
    msg.time = 0.1954413757096095;
    msg.x = 0.6415696493900468;
    msg.y = 0.4340246358158554;
    msg.z = 0.7491796246108133;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.9776505896815705);
    msg.setSource(52501U);
    msg.setSourceEntity(133U);
    msg.setDestination(11073U);
    msg.setDestinationEntity(158U);
    msg.validity = 2U;
    msg.x = 0.5720096449450122;
    msg.y = 0.8201561454739339;
    msg.z = 0.6548735796977596;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.0809169189477611);
    msg.setSource(49150U);
    msg.setSourceEntity(243U);
    msg.setDestination(57210U);
    msg.setDestinationEntity(84U);
    msg.validity = 230U;
    msg.x = 0.9118183132888356;
    msg.y = 0.4983610998321525;
    msg.z = 0.24639062149891544;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.4224412468710941);
    msg.setSource(3847U);
    msg.setSourceEntity(231U);
    msg.setDestination(49971U);
    msg.setDestinationEntity(179U);
    msg.validity = 226U;
    msg.x = 0.2692486338967168;
    msg.y = 0.7428041084588898;
    msg.z = 0.5051684163795216;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.9587733751927117);
    msg.setSource(50662U);
    msg.setSourceEntity(149U);
    msg.setDestination(39577U);
    msg.setDestinationEntity(110U);
    msg.validity = 254U;
    msg.x = 0.5922822082284231;
    msg.y = 0.8303114893059804;
    msg.z = 0.08724347859412462;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.8619056977044565);
    msg.setSource(46765U);
    msg.setSourceEntity(226U);
    msg.setDestination(6979U);
    msg.setDestinationEntity(60U);
    msg.validity = 204U;
    msg.x = 0.21532804895136737;
    msg.y = 0.3693368669493555;
    msg.z = 0.7048133900077629;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.633543124732941);
    msg.setSource(10202U);
    msg.setSourceEntity(85U);
    msg.setDestination(20520U);
    msg.setDestinationEntity(178U);
    msg.validity = 241U;
    msg.x = 0.882776108779581;
    msg.y = 0.6314925026436329;
    msg.z = 0.27003308207620336;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.5558537999759786);
    msg.setSource(29373U);
    msg.setSourceEntity(75U);
    msg.setDestination(13819U);
    msg.setDestinationEntity(54U);
    msg.time = 0.9878882404579126;
    msg.x = 0.9572465051077701;
    msg.y = 0.1597896338959025;
    msg.z = 0.06857289318265247;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.6223773717272978);
    msg.setSource(56600U);
    msg.setSourceEntity(201U);
    msg.setDestination(48165U);
    msg.setDestinationEntity(53U);
    msg.time = 0.6919992970368799;
    msg.x = 0.8669586856829271;
    msg.y = 0.524533975458085;
    msg.z = 0.09865428584352087;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.40986734272318004);
    msg.setSource(24485U);
    msg.setSourceEntity(79U);
    msg.setDestination(13619U);
    msg.setDestinationEntity(11U);
    msg.time = 0.06428557940369029;
    msg.x = 0.31808909975027333;
    msg.y = 0.4087760469575822;
    msg.z = 0.35348033346672425;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.3996807568008949);
    msg.setSource(31494U);
    msg.setSourceEntity(83U);
    msg.setDestination(39236U);
    msg.setDestinationEntity(203U);
    msg.validity = 234U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.48251290298654836;
    tmp_msg_0.beam_height = 0.16445601493768613;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.09033371549772562;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.9876098466376646);
    msg.setSource(56917U);
    msg.setSourceEntity(203U);
    msg.setDestination(12250U);
    msg.setDestinationEntity(92U);
    msg.validity = 139U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6159981747441174;
    tmp_msg_0.y = 0.6131283925152335;
    tmp_msg_0.z = 0.5141745989284934;
    tmp_msg_0.phi = 0.2568914975247787;
    tmp_msg_0.theta = 0.6074578757810452;
    tmp_msg_0.psi = 0.9482603509650324;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.5746735065642089;
    tmp_msg_1.beam_height = 0.12751898714768806;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.07829033623359893;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.2288913197010749);
    msg.setSource(46266U);
    msg.setSourceEntity(190U);
    msg.setDestination(34474U);
    msg.setDestinationEntity(1U);
    msg.validity = 157U;
    msg.value = 0.78095521647668;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.697542930841314);
    msg.setSource(25590U);
    msg.setSourceEntity(180U);
    msg.setDestination(15129U);
    msg.setDestinationEntity(75U);
    msg.value = 0.802613611696454;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.9684395780258508);
    msg.setSource(26859U);
    msg.setSourceEntity(207U);
    msg.setDestination(16627U);
    msg.setDestinationEntity(49U);
    msg.value = 0.013983783524076032;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.37586959778420836);
    msg.setSource(5822U);
    msg.setSourceEntity(120U);
    msg.setDestination(36706U);
    msg.setDestinationEntity(14U);
    msg.value = 0.9399787947759953;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.31329808735317577);
    msg.setSource(38150U);
    msg.setSourceEntity(235U);
    msg.setDestination(60896U);
    msg.setDestinationEntity(115U);
    msg.value = 0.4156376894655911;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.54503827186732);
    msg.setSource(29699U);
    msg.setSourceEntity(123U);
    msg.setDestination(63885U);
    msg.setDestinationEntity(188U);
    msg.value = 0.21487049843421802;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.9459052908921054);
    msg.setSource(61577U);
    msg.setSourceEntity(165U);
    msg.setDestination(27657U);
    msg.setDestinationEntity(166U);
    msg.value = 0.6921307448929691;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.5087599627771157);
    msg.setSource(8177U);
    msg.setSourceEntity(233U);
    msg.setDestination(51288U);
    msg.setDestinationEntity(163U);
    msg.value = 0.49933151124098474;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.06450395883119953);
    msg.setSource(24468U);
    msg.setSourceEntity(108U);
    msg.setDestination(26632U);
    msg.setDestinationEntity(159U);
    msg.value = 0.042085958724134676;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.5539001389530473);
    msg.setSource(20875U);
    msg.setSourceEntity(155U);
    msg.setDestination(20058U);
    msg.setDestinationEntity(77U);
    msg.value = 0.4475924109466123;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.4940117132298788);
    msg.setSource(31030U);
    msg.setSourceEntity(150U);
    msg.setDestination(63768U);
    msg.setDestinationEntity(102U);
    msg.value = 0.6593203060867381;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.7058497632726481);
    msg.setSource(24396U);
    msg.setSourceEntity(105U);
    msg.setDestination(63684U);
    msg.setDestinationEntity(74U);
    msg.value = 0.4430259609854348;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.8402837780428543);
    msg.setSource(65171U);
    msg.setSourceEntity(142U);
    msg.setDestination(41073U);
    msg.setDestinationEntity(170U);
    msg.value = 0.3008795221521421;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.45734941831416354);
    msg.setSource(43211U);
    msg.setSourceEntity(67U);
    msg.setDestination(45238U);
    msg.setDestinationEntity(167U);
    msg.value = 0.44200598560334226;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.3591582818186144);
    msg.setSource(11158U);
    msg.setSourceEntity(158U);
    msg.setDestination(3848U);
    msg.setDestinationEntity(18U);
    msg.value = 0.07516363581095997;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.43406112460391666);
    msg.setSource(38879U);
    msg.setSourceEntity(137U);
    msg.setDestination(54235U);
    msg.setDestinationEntity(128U);
    msg.value = 0.7253199875666643;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.39020650672301893);
    msg.setSource(22086U);
    msg.setSourceEntity(7U);
    msg.setDestination(20504U);
    msg.setDestinationEntity(100U);
    msg.value = 0.14647513701145842;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.7213621276878074);
    msg.setSource(59820U);
    msg.setSourceEntity(41U);
    msg.setDestination(20164U);
    msg.setDestinationEntity(156U);
    msg.value = 0.5663505114313477;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.6764976303973427);
    msg.setSource(5042U);
    msg.setSourceEntity(176U);
    msg.setDestination(7167U);
    msg.setDestinationEntity(138U);
    msg.value = 0.41842232868327345;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.7587656644604093);
    msg.setSource(58306U);
    msg.setSourceEntity(96U);
    msg.setDestination(38448U);
    msg.setDestinationEntity(178U);
    msg.value = 0.25664323834668723;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.2217476497014117);
    msg.setSource(9309U);
    msg.setSourceEntity(115U);
    msg.setDestination(23963U);
    msg.setDestinationEntity(252U);
    msg.value = 0.8285760675013515;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.45250587798309816);
    msg.setSource(2784U);
    msg.setSourceEntity(180U);
    msg.setDestination(27623U);
    msg.setDestinationEntity(83U);
    msg.value = 0.8396720281630273;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.22461599612393846);
    msg.setSource(21542U);
    msg.setSourceEntity(10U);
    msg.setDestination(17949U);
    msg.setDestinationEntity(112U);
    msg.value = 0.7939565881041311;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.19072731510690466);
    msg.setSource(11049U);
    msg.setSourceEntity(19U);
    msg.setDestination(54817U);
    msg.setDestinationEntity(24U);
    msg.value = 0.8491715969302559;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.04839002970410833);
    msg.setSource(6745U);
    msg.setSourceEntity(219U);
    msg.setDestination(58865U);
    msg.setDestinationEntity(55U);
    msg.value = 0.24545139815693673;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.3767645801920978);
    msg.setSource(54098U);
    msg.setSourceEntity(235U);
    msg.setDestination(31223U);
    msg.setDestinationEntity(247U);
    msg.direction = 0.5353096774713205;
    msg.speed = 0.5138157857786331;
    msg.turbulence = 0.9076501434908701;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.7009391992976061);
    msg.setSource(55237U);
    msg.setSourceEntity(155U);
    msg.setDestination(43222U);
    msg.setDestinationEntity(164U);
    msg.direction = 0.621467512155788;
    msg.speed = 0.044082715754862334;
    msg.turbulence = 0.17087265693701226;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.3683135984445205);
    msg.setSource(5216U);
    msg.setSourceEntity(215U);
    msg.setDestination(56056U);
    msg.setDestinationEntity(64U);
    msg.direction = 0.4569944185255568;
    msg.speed = 0.29168022057498155;
    msg.turbulence = 0.48081371704613884;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.06283073628904934);
    msg.setSource(6867U);
    msg.setSourceEntity(252U);
    msg.setDestination(40571U);
    msg.setDestinationEntity(253U);
    msg.value = 0.2525856226420863;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.8192391809482381);
    msg.setSource(50477U);
    msg.setSourceEntity(203U);
    msg.setDestination(35309U);
    msg.setDestinationEntity(62U);
    msg.value = 0.4182465975912564;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.9896469291564277);
    msg.setSource(25952U);
    msg.setSourceEntity(7U);
    msg.setDestination(34127U);
    msg.setDestinationEntity(252U);
    msg.value = 0.5163310355008668;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.6631781744141225);
    msg.setSource(54893U);
    msg.setSourceEntity(49U);
    msg.setDestination(55016U);
    msg.setDestinationEntity(0U);
    msg.value.assign("MTYOFXCKAJVORBNVKGLJWZIZDSERFOWZTILEECWDJBVKSRSYRQEQMOUNFCHIDSBAJQHWMTHLXQLPGINUFKXPLBJVCTDDLHSNITXKLPEQZOPTQJRAUXVJFCKFRHJAHGNHZVLBQOHZPPAOEEGCLUDBAUCEJDDUBAROYSNAVWCYNFEWMFXNTSPGZIEZCBDIRWXOWMSKWKVHGGXTY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.30557004951008626);
    msg.setSource(37637U);
    msg.setSourceEntity(109U);
    msg.setDestination(10144U);
    msg.setDestinationEntity(221U);
    msg.value.assign("PNLJNXJWOLLDNAJWQZEFHNROOSQNYBIM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.8329765711972162);
    msg.setSource(59135U);
    msg.setSourceEntity(171U);
    msg.setDestination(49017U);
    msg.setDestinationEntity(186U);
    msg.value.assign("EHIMJZPGPDLX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.3980783537647046);
    msg.setSource(48934U);
    msg.setSourceEntity(53U);
    msg.setDestination(48308U);
    msg.setDestinationEntity(107U);
    const char tmp_msg_0[] = {-18, 104, -39, -4, 27, 1, -53, -68, 119, 75, -120, -113, -11, -11, 25, -74, 94, 105, -16, 86, 125, -91, 97, -87, 15, -77, 6, -99, -98, 27, 22, 104, 111, -110, 19, 44, -122, 125, -89, 66, -84, 116, -11, 90, -18, -128, 26, -15, 9, 101, -64, 26, -57, -40, 39, 114, 82, -125, 1, 26, -67, 17, -105, 124, -97, 73, 75, -67, 50, 47, 43, 69, 56};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.514029474304071);
    msg.setSource(62303U);
    msg.setSourceEntity(252U);
    msg.setDestination(60973U);
    msg.setDestinationEntity(229U);
    const char tmp_msg_0[] = {-101, 32, -30, -100, 112, 115, -34, 125, -114, -74, 115, 67, 60, 58, -7, 119, 87, -127, 23, -61, -124, 62, -93, -50, -3, -1, 7, -58, -35, 112, -101, 108, 51, 116, 21, 88, 102, -9, 119, 84, -78, 54, 50, -25, -49, -36, 88, -115, 80, -45, 9, 35, -67, 15, -93, 122, 11, -99, -12, -9, 12, 33, -42, -57, 100, -23, -14, 110, -37, -125, 34, -76, 110, -115, 102, 32, -38, 35, -46, 109, -32, -121, -121, 120, 59, 74, 99, -88, -97, -32, 60, 11, 1, 67, -92, -20, -101, -104, 106, -104, 99, -52, -23, -8, 82, -34, 19, 53, -34, 14, 82, -62, -25, 111, 27, 13, -63, -126, -43, 1, 78, 21, 115, -13, 51, 2, 78, 86, -17, -15, -44, 110, 95, -101, -114, -75, -98, 30, -37, -112, -65, -19, -67, -127, 43, -94, 88, -2, 90, 0, -50, -84, -41, 49, 10, 58, 39, 5, -6, -104, 113, 34, 29, -49, -67, -113, -55, 70, -86, -124, 4, 88, -50, 40, 108, 47, -16, -100, -72, 116, 103, 66, -16, 110, 47, 100, -122, -127, 15, 54, -2, 44, 78, -20, 80, 103, 74};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.563795188480324);
    msg.setSource(41951U);
    msg.setSourceEntity(137U);
    msg.setDestination(28977U);
    msg.setDestinationEntity(81U);
    const char tmp_msg_0[] = {27, 103, 13, 35, -77, -104, -4, -81, -40, -65, 71, -37, 1, -31, 53, -121, -81, 52, -17, -67, -110, 1, -104};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.8639548418051988);
    msg.setSource(37368U);
    msg.setSourceEntity(27U);
    msg.setDestination(38253U);
    msg.setDestinationEntity(47U);
    msg.type = 150U;
    msg.frequency = 1089649200U;
    msg.min_range = 56397U;
    msg.max_range = 49539U;
    msg.bits_per_point = 110U;
    msg.scale_factor = 0.21776948760352688;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8198804841808833;
    tmp_msg_0.beam_height = 0.9177077558323818;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-87, 69, -127, 35, 112, -4, -104, 123, 21, 57, -31, -106, -120, -114, -6, 8, -38, 60, -81, 92, 76, 8, 50, -87, 5, 82, 12, -128, -36, -4, 108, -81, -94, 5, 0, 91, -96, 102, -110, 109, -73, 39, -118, -57, 123, -113, -127, -5, -101, -87, -89, -71, 39, -84, -19, -92, -43, -62, -102, -57, -33, -86, 11, 47, -82};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.11301347626577674);
    msg.setSource(51191U);
    msg.setSourceEntity(19U);
    msg.setDestination(49251U);
    msg.setDestinationEntity(61U);
    msg.type = 71U;
    msg.frequency = 1267714303U;
    msg.min_range = 27212U;
    msg.max_range = 20098U;
    msg.bits_per_point = 80U;
    msg.scale_factor = 0.17750044117842356;
    const char tmp_msg_0[] = {77, 2, 76, 40, -113, 104, -65, -39, 124, -14, -4, -78, -96, -116, 86, 118, -27, 91, -23, -114, -88, 106, -53, -1, 9, -72, -75, 9, 103, -62, 44, -87, 53, -40, 83, -72, -95, -40, -91, 80, 77, -43, 37, 117, 52, 100, 56, 35, 106, 67, 1, -24, 72, -31, -32, 67, -36, -9, -51, 88, 1, 50, 5, -93, 63, -7, -41, 18, 43, -10, -100, 79, 16, -14, -32, -122, 41, 19, -93, -82, -97, 9, 8, 42, 12, 3, 116, 7, 105, -85, 101, -42, -66, -88, 121, -120, 13, -13, -77, 76, -92, 64, 61, -53, -11, 4, -37, -42, -84, -92, 61, 60, 6, -107, 38, -119, -50, -3, -19, -118, 103, -59, -50, 89, -66, 55, -61, 102, 101, -48, -33, -71, -40, -114, -84, -48, -98, -35, -82, -88, 100, 51, 88, -106, 65, -27, -74, -8, 116, 27, 3, -78, 2, -51, -55, -31, 0, -19, 40, -39, -18, 43, 46, 70, 124, 17, -74, -120, -6, -78, 80, 36, 66, -6, -79, 109};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.3345337339485066);
    msg.setSource(52257U);
    msg.setSourceEntity(231U);
    msg.setDestination(36703U);
    msg.setDestinationEntity(195U);
    msg.type = 116U;
    msg.frequency = 1053011064U;
    msg.min_range = 42812U;
    msg.max_range = 45919U;
    msg.bits_per_point = 102U;
    msg.scale_factor = 0.49940267628050194;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.3874772674814888;
    tmp_msg_0.beam_height = 0.38959622227519;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {33, 86, 33, 8, -30, -54, -50, 33, -16, 124, -108, -67, 48, -71, -84, -72, 119, 56, -83, 66, 25, -124, 70, 47, -41, 14, -11, 9, -127, 51, -79, -63, 8, 101, 121, 76, 48, -28, 19, 37, 118, -9, 50, 32, 29, 10, -38, -88, 104, -102, 90, -123, -24, 36, 124, 27, -59, -7, 43, 84, -126, -55, -119, -20, 30, 122, 58, -65, 123, 46, -76, -33, -54, 114, 35, -83, -38, 21, 59, -91, 111, -33, -109, 86, -89, -78, -90, 11, 79, -86, 26, -89, 44, 36, 39, -26, -18, -118, 26, -74, 80, -91, 56, 124, -87, -26, 99, -88, -49, -64, 48, -103, 103, -50, 26, 10, 40, 82, 46, 120, 81, 27, -56, 97, -127, 81, 28, 42, -51, 26, 51, 102, 79, -105, -66, -105, -22, -32, 25, 77, 106, -65, -46, -124, -83, -35, 57, -65, -124, 99, -99, 79, -108, -22, 89, 9, 3, 28, -20, 59, -105, -23, -119, 71, -16, 100, 27, 105, 21, -112, 75, -115, -15, 97, -58, 42, 52, -96, 113, 42, -56, 41, 75, -53, 29, -39, 79, -2, 70, -71, 26, -102, -81, 69, 121, 40, -50, -30, 43, 84, 38, 49, -2, -45, 109, -22, -32, -69, 85, 47, -75, 35, 55, -91, 81, 16, -90, 21, 58, -94, -8};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.027347667390896002);
    msg.setSource(34085U);
    msg.setSourceEntity(117U);
    msg.setDestination(41926U);
    msg.setDestinationEntity(91U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.1880371150681891);
    msg.setSource(62447U);
    msg.setSourceEntity(146U);
    msg.setDestination(31377U);
    msg.setDestinationEntity(241U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.6398280245347601);
    msg.setSource(61576U);
    msg.setSourceEntity(166U);
    msg.setDestination(25510U);
    msg.setDestinationEntity(105U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.310115807212597);
    msg.setSource(58419U);
    msg.setSourceEntity(70U);
    msg.setDestination(20905U);
    msg.setDestinationEntity(73U);
    msg.op = 106U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.31644185852159346);
    msg.setSource(23374U);
    msg.setSourceEntity(65U);
    msg.setDestination(53819U);
    msg.setDestinationEntity(214U);
    msg.op = 247U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.9198570723915542);
    msg.setSource(49302U);
    msg.setSourceEntity(104U);
    msg.setDestination(1160U);
    msg.setDestinationEntity(144U);
    msg.op = 91U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.15523894760859136);
    msg.setSource(59432U);
    msg.setSourceEntity(14U);
    msg.setDestination(44136U);
    msg.setDestinationEntity(134U);
    msg.value = 0.8238699988383533;
    msg.confidence = 0.6860132624647559;
    msg.opmodes.assign("FFXBEOTMWFUAGYVXNNWDEXEDAQUGCXBKMTZDGAKZYFVLKRRLMJUPKWRZCQYRFDNZDKRLGRALGOGTTPUIPAVXLARWQTYQIQFCUUBMIDVNZIZNKSQJBBIAQTIKHXWWPLSREOUHGLEHGYOYFEMVOMPRISJEAMGTHDMCVKNVZXPXHJPXHWTDNMOOLFSBHSLWBNYMEJSIJNBBSCNZZWJV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.9431197164733154);
    msg.setSource(619U);
    msg.setSourceEntity(0U);
    msg.setDestination(11505U);
    msg.setDestinationEntity(216U);
    msg.value = 0.6541058118198125;
    msg.confidence = 0.48755909302959544;
    msg.opmodes.assign("JDNQTUGXVFTYYBRHPXTQTGRPTRGWALCQCMSKGEDBRCUOLYAHQMNMDJCKZZXPIRQSMOYHQSFTSWVMPKBIFBBIRIVHEMKUZNEZVJQOXRWLVUEVGHUQDKOUMJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.7146329360740787);
    msg.setSource(61880U);
    msg.setSourceEntity(181U);
    msg.setDestination(53530U);
    msg.setDestinationEntity(253U);
    msg.value = 0.4632405647030451;
    msg.confidence = 0.12623043167439008;
    msg.opmodes.assign("GITVMBNZHBTDOTMYXRDFWITOLPEGFROLTKZOOJNQMWLDKMPXSQTTQEJHZVCVKKUGRIMUZGIFSBUWRZBOSOXSXMAXAYEXMPIOHCYGLQYFXHWZBSVEAJAPCSZLEBZRHNUESLDEIMYTAJCPKJPNKYCNMDVWYHNXXHSJKUSWUNARGYLVWYEJUURAJVEW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.7160378438961066);
    msg.setSource(22780U);
    msg.setSourceEntity(166U);
    msg.setDestination(49337U);
    msg.setDestinationEntity(169U);
    msg.itow = 2180877976U;
    msg.lat = 0.4564747911692505;
    msg.lon = 0.43399259390100386;
    msg.height_ell = 0.27892897911614956;
    msg.height_sea = 0.11572388807216971;
    msg.hacc = 0.8387041796074444;
    msg.vacc = 0.49363043553290786;
    msg.vel_n = 0.9766556896711686;
    msg.vel_e = 0.9878731852994197;
    msg.vel_d = 0.5025078169323169;
    msg.speed = 0.7382117728564087;
    msg.gspeed = 0.3348775019065958;
    msg.heading = 0.6448678739784282;
    msg.sacc = 0.04371920256181194;
    msg.cacc = 0.4289858998841919;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.3264020957007263);
    msg.setSource(5498U);
    msg.setSourceEntity(84U);
    msg.setDestination(9503U);
    msg.setDestinationEntity(120U);
    msg.itow = 1392640082U;
    msg.lat = 0.36928049756381043;
    msg.lon = 0.4380409762165527;
    msg.height_ell = 0.503093679187954;
    msg.height_sea = 0.6338250519538015;
    msg.hacc = 0.4182979331815416;
    msg.vacc = 0.5474041263799226;
    msg.vel_n = 0.3585854609591803;
    msg.vel_e = 0.29168732875213466;
    msg.vel_d = 0.7411680648865772;
    msg.speed = 0.6288665666309073;
    msg.gspeed = 0.1377274959213738;
    msg.heading = 0.7334758816909814;
    msg.sacc = 0.4841160046237608;
    msg.cacc = 0.0032949421093704245;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.4944650038740628);
    msg.setSource(18389U);
    msg.setSourceEntity(86U);
    msg.setDestination(47051U);
    msg.setDestinationEntity(251U);
    msg.itow = 4167805555U;
    msg.lat = 0.36915941104040206;
    msg.lon = 0.24613003122554944;
    msg.height_ell = 0.04060467334918105;
    msg.height_sea = 0.35306374409367436;
    msg.hacc = 0.8366571182120989;
    msg.vacc = 0.6109568760515258;
    msg.vel_n = 0.6402781931402425;
    msg.vel_e = 0.05654072863624382;
    msg.vel_d = 0.30189873614792273;
    msg.speed = 0.46300154921587144;
    msg.gspeed = 0.9344144813637048;
    msg.heading = 0.5046702383432241;
    msg.sacc = 0.46409361993621134;
    msg.cacc = 0.9645437401673015;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.2524238951840827);
    msg.setSource(11937U);
    msg.setSourceEntity(77U);
    msg.setDestination(21989U);
    msg.setDestinationEntity(210U);
    msg.id = 131U;
    msg.value = 0.699219047555591;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.32226720183218416);
    msg.setSource(29564U);
    msg.setSourceEntity(77U);
    msg.setDestination(49704U);
    msg.setDestinationEntity(217U);
    msg.id = 55U;
    msg.value = 0.6964263257760389;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.3357868129950342);
    msg.setSource(10877U);
    msg.setSourceEntity(228U);
    msg.setDestination(37718U);
    msg.setDestinationEntity(35U);
    msg.id = 108U;
    msg.value = 0.3333955277807972;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.03264994591309045);
    msg.setSource(35992U);
    msg.setSourceEntity(160U);
    msg.setDestination(5805U);
    msg.setDestinationEntity(31U);
    msg.x = 0.7710648862676662;
    msg.y = 0.6923716702652148;
    msg.z = 0.5697827685488205;
    msg.phi = 0.8863042959844357;
    msg.theta = 0.40926498411721335;
    msg.psi = 0.6995093412809834;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.8118459380470431);
    msg.setSource(10783U);
    msg.setSourceEntity(247U);
    msg.setDestination(25552U);
    msg.setDestinationEntity(159U);
    msg.x = 0.8080486611535053;
    msg.y = 0.7535592541518529;
    msg.z = 0.6144847287003133;
    msg.phi = 0.79375631811002;
    msg.theta = 0.556589399997942;
    msg.psi = 0.16059244540301765;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.09751796210245323);
    msg.setSource(11733U);
    msg.setSourceEntity(215U);
    msg.setDestination(42148U);
    msg.setDestinationEntity(197U);
    msg.x = 0.5832085697483513;
    msg.y = 0.22236245908992947;
    msg.z = 0.33111016381781455;
    msg.phi = 0.1968067803959742;
    msg.theta = 0.5631266663619986;
    msg.psi = 0.9297343242796398;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.15128653093567657);
    msg.setSource(31714U);
    msg.setSourceEntity(159U);
    msg.setDestination(41470U);
    msg.setDestinationEntity(247U);
    msg.beam_width = 0.25217489010753336;
    msg.beam_height = 0.23481891833509694;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.13703054170205198);
    msg.setSource(50956U);
    msg.setSourceEntity(98U);
    msg.setDestination(46599U);
    msg.setDestinationEntity(19U);
    msg.beam_width = 0.7173967095008553;
    msg.beam_height = 0.5203193578469436;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.5685554714416052);
    msg.setSource(53015U);
    msg.setSourceEntity(82U);
    msg.setDestination(36198U);
    msg.setDestinationEntity(126U);
    msg.beam_width = 0.8215379049964981;
    msg.beam_height = 0.15794496525263269;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.9797782972505872);
    msg.setSource(7756U);
    msg.setSourceEntity(213U);
    msg.setDestination(37521U);
    msg.setDestinationEntity(46U);
    msg.sane = 177U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.09661966189145099);
    msg.setSource(10298U);
    msg.setSourceEntity(21U);
    msg.setDestination(41376U);
    msg.setDestinationEntity(118U);
    msg.sane = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.45694530195709093);
    msg.setSource(42289U);
    msg.setSourceEntity(147U);
    msg.setDestination(169U);
    msg.setDestinationEntity(184U);
    msg.sane = 180U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.24030304405186598);
    msg.setSource(47069U);
    msg.setSourceEntity(11U);
    msg.setDestination(31371U);
    msg.setDestinationEntity(67U);
    msg.id = 177U;
    msg.zoom = 167U;
    msg.action = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.1649886248955973);
    msg.setSource(42296U);
    msg.setSourceEntity(20U);
    msg.setDestination(24703U);
    msg.setDestinationEntity(243U);
    msg.id = 207U;
    msg.zoom = 110U;
    msg.action = 66U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.3939555255338719);
    msg.setSource(34545U);
    msg.setSourceEntity(167U);
    msg.setDestination(6418U);
    msg.setDestinationEntity(191U);
    msg.id = 95U;
    msg.zoom = 120U;
    msg.action = 177U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.7374161754975738);
    msg.setSource(52133U);
    msg.setSourceEntity(148U);
    msg.setDestination(43723U);
    msg.setDestinationEntity(145U);
    msg.id = 164U;
    msg.value = 0.9796932108003409;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.48820579108671314);
    msg.setSource(65510U);
    msg.setSourceEntity(86U);
    msg.setDestination(20673U);
    msg.setDestinationEntity(232U);
    msg.id = 237U;
    msg.value = 0.966450126104877;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.21712613757159627);
    msg.setSource(46910U);
    msg.setSourceEntity(228U);
    msg.setDestination(57505U);
    msg.setDestinationEntity(7U);
    msg.id = 36U;
    msg.value = 0.4877611041463237;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.5233438323360889);
    msg.setSource(50060U);
    msg.setSourceEntity(210U);
    msg.setDestination(58173U);
    msg.setDestinationEntity(203U);
    msg.id = 99U;
    msg.value = 0.6729914074826935;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.7793949616916024);
    msg.setSource(12961U);
    msg.setSourceEntity(132U);
    msg.setDestination(48788U);
    msg.setDestinationEntity(49U);
    msg.id = 7U;
    msg.value = 0.4261604078655862;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.47749617863111316);
    msg.setSource(58570U);
    msg.setSourceEntity(9U);
    msg.setDestination(41419U);
    msg.setDestinationEntity(74U);
    msg.id = 194U;
    msg.value = 0.3762915871383764;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.8738293946777874);
    msg.setSource(58205U);
    msg.setSourceEntity(253U);
    msg.setDestination(8189U);
    msg.setDestinationEntity(236U);
    msg.id = 36U;
    msg.angle = 0.580202437438247;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.6903657376263542);
    msg.setSource(32346U);
    msg.setSourceEntity(65U);
    msg.setDestination(45127U);
    msg.setDestinationEntity(67U);
    msg.id = 192U;
    msg.angle = 0.28996098938758963;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.5279040086037106);
    msg.setSource(46469U);
    msg.setSourceEntity(239U);
    msg.setDestination(16061U);
    msg.setDestinationEntity(17U);
    msg.id = 244U;
    msg.angle = 0.3548782145699152;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.591631742192644);
    msg.setSource(26195U);
    msg.setSourceEntity(138U);
    msg.setDestination(2U);
    msg.setDestinationEntity(95U);
    msg.op = 196U;
    msg.actions.assign("KVNDKNTXKZQUVHIYMXWDQQFPGLETNLRCXBOXQXYPGCSVMWKSVAWNDPJHGHCNPYUTBXBJJBUAFIHWKMVFXKORPQMCDWIVSERIKDJTSQANCTLTXBHGNYQWMRDMHYLFMLOFFAZKUDNGIQEOYLXVAHUUZP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.1285446286227393);
    msg.setSource(46573U);
    msg.setSourceEntity(239U);
    msg.setDestination(17476U);
    msg.setDestinationEntity(23U);
    msg.op = 242U;
    msg.actions.assign("ZCLFPSWPDJMCUZFZDWACSFWNPHUOCGQSSWSVANLZEHIFDKCBEXREWNNRJFXTUOBLOVOHEPDIWHSRYURYBLEXMXMURGYMQIKGQCICGWBPDZZDGXCBTGTGZKAVKRAXVRIPBLMTXSYWTHHQEINYQOGJGFE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.2118080007634675);
    msg.setSource(18950U);
    msg.setSourceEntity(230U);
    msg.setDestination(50607U);
    msg.setDestinationEntity(223U);
    msg.op = 204U;
    msg.actions.assign("AHUEGKFPQOCUQGXNJLWINZVHKAGIUCEFTVYEKWRSXZREDSVCGZRQKDULVXYDBDBOMLCJCBGLXFPWBPUYNAFMYQYOMNZJQIJQSVVBNDRXDKUOGEPOPZJBZEHQXAXCBCUQKZTEMWOUZMMEJOTWWVZOHISSVGHJMHWYSTTRIFSBTJWWDFRKRHTPAAIMYUAALDNNMFPHSRGFKIDBOEXZGYHTSLYTJKAISJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.30764808316420056);
    msg.setSource(18119U);
    msg.setSourceEntity(19U);
    msg.setDestination(60780U);
    msg.setDestinationEntity(177U);
    msg.actions.assign("FADPHXPLEDIJSLVIXYWTMPAQDRCLWSMUDHXSFEWAYRGKVJRKYYBCBISXTQHHZRBIKYFTUJNVSVLZHIZMDNSPQETNGBVGRHOZUJXVCGOWEVTILWNCZHQAOOONSATAKQTOVDLWFYUNVMDIQIEFUASGUQCCXBXXCYCUXMFESTLKWBTIKMJPZMAAYNOEGWKK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.9894215907517455);
    msg.setSource(52290U);
    msg.setSourceEntity(15U);
    msg.setDestination(647U);
    msg.setDestinationEntity(227U);
    msg.actions.assign("ITIKYUHKSXHRXSKUBWVCGFLFRFJQWGHRIDQQBNZQZTLPHIOQCLAQLNDWOOCYIKNHENYSTIJGVYVDJGTFMKKZJDDODPZFRZUORPVYASLEVRXQCHDCMMXPTRXBGSGKEDMYVEOAPDCOUDNLWLUSYEAVSPYVVITFATXJNHBHCPGTMYKHACWNLONQJLBATJQUMXEBOKUUM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.6214774349304705);
    msg.setSource(49850U);
    msg.setSourceEntity(237U);
    msg.setDestination(8848U);
    msg.setDestinationEntity(34U);
    msg.actions.assign("DJCUYUHNSXIZKHUETGXBTTLNGOCNLANMQRAENCFJHQKHYYYZBUSAHTEGGUDWXLCYZSTEBLUCMRBGVCSVFOIBOVKPZFLTGWZMKMSJOTIQJRVWTBAGIIVILQHJXMXOVRQXBDUAVXZZAAYPJWRSEWKQC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.32395018160978173);
    msg.setSource(41730U);
    msg.setSourceEntity(49U);
    msg.setDestination(38012U);
    msg.setDestinationEntity(177U);
    msg.button = 175U;
    msg.value = 119U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.3009803312529944);
    msg.setSource(49624U);
    msg.setSourceEntity(21U);
    msg.setDestination(27470U);
    msg.setDestinationEntity(73U);
    msg.button = 219U;
    msg.value = 92U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.7893569007687992);
    msg.setSource(25583U);
    msg.setSourceEntity(33U);
    msg.setDestination(58520U);
    msg.setDestinationEntity(243U);
    msg.button = 230U;
    msg.value = 241U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.8916008676787398);
    msg.setSource(25902U);
    msg.setSourceEntity(246U);
    msg.setDestination(42877U);
    msg.setDestinationEntity(214U);
    msg.op = 188U;
    msg.text.assign("BXGDLRAVWTYESYJPXPIFVOXBQEEJKPWQCOXCGCFMRIZOFMARILDZTDUMNNGLPEJGEMUFBMTSVQCVUGLKJSLUCTAHTLVHBVBDQMMLHAVYZAZLEBCYDXVRSWINMHEIXCUKYYXADFODARQDRUDHPZZMWNFSHJYEWCRIWTLOQA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.006944984775185903);
    msg.setSource(24764U);
    msg.setSourceEntity(170U);
    msg.setDestination(12414U);
    msg.setDestinationEntity(86U);
    msg.op = 195U;
    msg.text.assign("SSSHJDJSEGUNZZGKMUHARJLPEWDTUHONCYAZSIDGWELAKXZEUILSBCEMDBSDHTMBUNYQVITYCJCVNBOPJXKMQFQMNYSDXYTVIXJAUI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.3327681221981772);
    msg.setSource(7412U);
    msg.setSourceEntity(137U);
    msg.setDestination(16858U);
    msg.setDestinationEntity(79U);
    msg.op = 201U;
    msg.text.assign("CJLLKPPGGAESMFQCOFXBDOSXRBYNBHENOBJHLDDCWZADXLNLHWMLFNSZM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.07186470688252122);
    msg.setSource(61302U);
    msg.setSourceEntity(24U);
    msg.setDestination(63385U);
    msg.setDestinationEntity(126U);
    msg.op = 2U;
    msg.time_remain = 0.03312893580694121;
    msg.sched_time = 0.5236119416914465;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.8242847701883617);
    msg.setSource(54903U);
    msg.setSourceEntity(74U);
    msg.setDestination(38954U);
    msg.setDestinationEntity(8U);
    msg.op = 59U;
    msg.time_remain = 0.6431022242497128;
    msg.sched_time = 0.23823975582148138;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.6438688975261575);
    msg.setSource(54969U);
    msg.setSourceEntity(77U);
    msg.setDestination(61655U);
    msg.setDestinationEntity(32U);
    msg.op = 181U;
    msg.time_remain = 0.06822971693488733;
    msg.sched_time = 0.4414003375334494;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.6090767271314981);
    msg.setSource(40730U);
    msg.setSourceEntity(108U);
    msg.setDestination(26199U);
    msg.setDestinationEntity(27U);
    msg.name.assign("UQZPLAYRBCIDHQGWJIMAMOHNRNWBSVRVXEKWPXCRYWXSPWKXFIMUGOZDXZKXQVCMFVEHDTVAWZGNNGOWLPUQDUTMCQZVOAILDAJYZPYIQSGLJENRTDYUWQCJHLJYBKVHKXKFMSLPXFJSRGLGVLIDOXYEHRSIWMATVCHTXCBEJOMRWROEUCNPPULUHMGFSNZKQKBNBEFBFEVKIFLUZBRTITQHPOFCDNADYCBKNJTEBTGJDAFZS");
    msg.op = 172U;
    msg.sched_time = 0.36281939331710433;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.11140999157797415);
    msg.setSource(1898U);
    msg.setSourceEntity(4U);
    msg.setDestination(13507U);
    msg.setDestinationEntity(166U);
    msg.name.assign("ZLLLLNSBRSCZLYBMCBTYFKKUOGZEYDZCSNEZJIUTTQQCCSOYWLBEFLWHZJUVSZCODFMAGFWZEQEPDHKURPQINXTXOUCDXAGGCQVYIJGIPQTMWAGFPDGBVREHBHXNUIPCTVBWGNYFJKTXEPXSJHJFUVKWMAJMPAMFXHWQRUKSZJNDRJDHXEASGVKTNEUYVQWOYPLPJOLHUFGMOOVRDDRZNHKIYKLXORTWYRDAAIMSSAIBVAK");
    msg.op = 151U;
    msg.sched_time = 0.7405391500730998;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.8411515437895067);
    msg.setSource(14249U);
    msg.setSourceEntity(156U);
    msg.setDestination(24537U);
    msg.setDestinationEntity(54U);
    msg.name.assign("PYBEVLMNQWSCYMVXZKAFFRQYTSZKZETMTYLTKOFPGPQAEJYUVEZXUKKIQEDUZCMFLINUHHJCSDBZIFHTLPXAEIVMNOR");
    msg.op = 92U;
    msg.sched_time = 0.6380234936125913;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.0302911114671629);
    msg.setSource(5004U);
    msg.setSourceEntity(214U);
    msg.setDestination(23533U);
    msg.setDestinationEntity(174U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.7658752091935954);
    msg.setSource(326U);
    msg.setSourceEntity(152U);
    msg.setDestination(4679U);
    msg.setDestinationEntity(154U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.22812613900197254);
    msg.setSource(63406U);
    msg.setSourceEntity(147U);
    msg.setDestination(38208U);
    msg.setDestinationEntity(251U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.7086481447710231);
    msg.setSource(589U);
    msg.setSourceEntity(192U);
    msg.setDestination(16112U);
    msg.setDestinationEntity(128U);
    msg.name.assign("QMLOJDSBYDLFQPHYXZSULIMAHIYKFPRAZKSORTRCCWASHOCEBSEKMBHMTNJZV");
    msg.state = 118U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.2792553233615448);
    msg.setSource(19997U);
    msg.setSourceEntity(162U);
    msg.setDestination(26737U);
    msg.setDestinationEntity(183U);
    msg.name.assign("OZHDMKTHEUEDNVCXKLKYTKCQMIBWIGUIZXPSHPYMZJURLQTTGECGJOGZTDFSIROVACDDOWNOGBQRXBUFCLFNSDUAXMWJJHZCVUHTJIBJYMLCXFVXHZUWHAQXNVPNFBKSYYIOGHEJQKEGYFSREPLVGAPJXGNIMMUPI");
    msg.state = 11U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.903767264159934);
    msg.setSource(64639U);
    msg.setSourceEntity(102U);
    msg.setDestination(11292U);
    msg.setDestinationEntity(71U);
    msg.name.assign("URSJIXUHQRVIPWRNODCDBKOSSESVEOEBMFVAQKAYZHTOGFBAGLLRHJCJUUKCXQQPXAHMYIMCIQTVNOLDDSPAZWOVZFLNUPCHRBTERDYBNCJBDFIFFVXKXTMTAMXNCKXHTGODVEGJBRQWMUWGEQQJXABIMNRFWEAOXPMFDNYZKYZIWTLJTWTVJOYZXZGDHZVE");
    msg.state = 61U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.3733388056692376);
    msg.setSource(31799U);
    msg.setSourceEntity(167U);
    msg.setDestination(37097U);
    msg.setDestinationEntity(159U);
    msg.name.assign("DAPLEVIHOOGVZI");
    msg.value = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.4035843139460471);
    msg.setSource(17957U);
    msg.setSourceEntity(101U);
    msg.setDestination(58061U);
    msg.setDestinationEntity(61U);
    msg.name.assign("AEMIGPTYXJSZKALNCXRFTGVUKKQDLQMFFLGKWHAEHUBXHSQOZMWCUTEUHVVOKTJDABFUMUYTOCECZDOSHNRTHQECPACPXBXSNEIOWVNWVIVPWHYDAUCKUJQBHSWWKYOFUZRVBRXGTEKDJMVBADREZBSXZKGSDHITPRQEAOBUJRBFPCTKLLIJLOTNGDYFWLVJDWVGFYANQLLNRMXGIPZBIMOZJSDNJOZXGFIQ");
    msg.value = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.6758878835092231);
    msg.setSource(47085U);
    msg.setSourceEntity(87U);
    msg.setDestination(23017U);
    msg.setDestinationEntity(83U);
    msg.name.assign("ARAEISEBBFEKIHRVXGKIFESNAHEAVOBIYLCUPLMLEBNCZNOXOWOOQZDMATYLWXKXGRYEBKSFJWYMUGOAPGGJACCWLMSYPDOLCSRZHYCWVRBSVFKTBGNCTIXRVGILZJXXOIQLJMUEHPQPNTEDINBGJNIFOTQWFXWATQUDNJRPXDMMFVJQPDEFAZTZJPLYVAYQHC");
    msg.value = 102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.4219394729784205);
    msg.setSource(55139U);
    msg.setSourceEntity(155U);
    msg.setDestination(37308U);
    msg.setDestinationEntity(44U);
    msg.name.assign("GVGAZTUEECBIRKMBNEJYFWWDAIVYTQFXXZOIFRULHACVDEQDOFKMWOOOBFVLHSXBVVUYDEKPALROIJQITVKXYMFIVSNCSXCTMGNIALQYESREDTJTNWOQXVZSJTCWZAMLFDBXBXHUSWWZHFJXQMLBWPQXTQKIZGPLJSWNPCBAPZRJGHPKEDGHMOCIMSBBRJRQNOKNVCFMZDZFURKUN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.30963884939174);
    msg.setSource(45525U);
    msg.setSourceEntity(81U);
    msg.setDestination(31441U);
    msg.setDestinationEntity(144U);
    msg.name.assign("WVOKRWJKPRUCKQDHGBFEZVFBTOGEVZBFQYGJWKKLDVPJURDNXZJZOMOVCIDNSIMXCDHCOQYNWLTXSCOJQMWZUSSMZRZRXAQGEGDXOTBAVLJMICYTOZEAMHBKQETGLYNUIQNILMBFHNHYVKOTPCUUJLIGAPSKFURSPHBAEQMXNYL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.5172589469958296);
    msg.setSource(34572U);
    msg.setSourceEntity(183U);
    msg.setDestination(27942U);
    msg.setDestinationEntity(132U);
    msg.name.assign("WOSDSUKCYEFFBCRWHVEFVMTELODEJXHETSOMNYKELVPSFQREMZHNHGMQLZJGYDIIYRVZLWFTHUTGWSZFBTCSVVXJXRUXIHPWAQITLADDFNEBIBUZWSWTPCRNLPUXKAMVUMZQLCWJUKTARCO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.9025717099553892);
    msg.setSource(54552U);
    msg.setSourceEntity(22U);
    msg.setDestination(54242U);
    msg.setDestinationEntity(222U);
    msg.name.assign("BYDXNULETIPHKMDJBVYCTYJQSNPSLSHAAQMKBMEQUHAKXXVXTNGILLSTNMWDDOEWFPVGAEXRMNWZBTGFOKWIOKUXRZC");
    msg.value = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.8002520014117754);
    msg.setSource(5139U);
    msg.setSourceEntity(175U);
    msg.setDestination(7446U);
    msg.setDestinationEntity(244U);
    msg.name.assign("TXONPYPYPINVMPLONUMLUXYFBRKOALIJXIVWQUCNZKZFHTJHCTZQHSDPGPNAPSERMHDKSZVOVYVBBIYMWFFMDXSZVSZRQAWVQRULHGITKGCRUDZYNGWILWRUEODITRXBATZMZQPQWWEKHEDIHDRRHJQWUUTFNFKAGEXXWDBGKTVJOXTXCPYAGQKVCNFSBMIBJMADJLFCYQNOKEPLSOOKSVTGAUJNXAERFBIYFULCJZODBHAJEBCECMJLG");
    msg.value = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.13946655828994325);
    msg.setSource(53149U);
    msg.setSourceEntity(233U);
    msg.setDestination(23885U);
    msg.setDestinationEntity(123U);
    msg.name.assign("AYQRUZEAIJKZRXDOJHDEFLWZACXPLUMSXNDUTVNPBBGRGYBWGPKRMRLPEICOOLWCSFABFQLBEPVCXOYHLAHVKTGIXFHIJEGFINIHVYYDMOBBLGNCTRGHSWNOQOSICKSJFTFQWZFTUMOWHNSQXDEOMZGV");
    msg.value = 126U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.4997402806080292);
    msg.setSource(52846U);
    msg.setSourceEntity(141U);
    msg.setDestination(57079U);
    msg.setDestinationEntity(155U);
    msg.id = 172U;
    msg.period = 2620448019U;
    msg.duty_cycle = 1259997567U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.8895156456933885);
    msg.setSource(16146U);
    msg.setSourceEntity(236U);
    msg.setDestination(53278U);
    msg.setDestinationEntity(22U);
    msg.id = 240U;
    msg.period = 3552712923U;
    msg.duty_cycle = 592482169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.3089711822531461);
    msg.setSource(5058U);
    msg.setSourceEntity(100U);
    msg.setDestination(5565U);
    msg.setDestinationEntity(78U);
    msg.id = 114U;
    msg.period = 4037586459U;
    msg.duty_cycle = 673143282U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.4863701401230289);
    msg.setSource(8092U);
    msg.setSourceEntity(18U);
    msg.setDestination(55692U);
    msg.setDestinationEntity(50U);
    msg.id = 166U;
    msg.period = 4182216651U;
    msg.duty_cycle = 470197052U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.7121743670268923);
    msg.setSource(62314U);
    msg.setSourceEntity(58U);
    msg.setDestination(49510U);
    msg.setDestinationEntity(146U);
    msg.id = 108U;
    msg.period = 3066615152U;
    msg.duty_cycle = 1487700367U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.0364911785841362);
    msg.setSource(18288U);
    msg.setSourceEntity(162U);
    msg.setDestination(9990U);
    msg.setDestinationEntity(156U);
    msg.id = 170U;
    msg.period = 720002024U;
    msg.duty_cycle = 701279241U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.05964601739230457);
    msg.setSource(1090U);
    msg.setSourceEntity(161U);
    msg.setDestination(52115U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.8280670828901737;
    msg.lon = 0.06043090227238601;
    msg.height = 0.8530217133606973;
    msg.x = 0.19164072053288606;
    msg.y = 0.001953516962560964;
    msg.z = 0.7120281221725326;
    msg.phi = 0.6681871349024537;
    msg.theta = 0.6309945435708216;
    msg.psi = 0.43647112204494554;
    msg.u = 0.5361621388130147;
    msg.v = 0.8074555620499847;
    msg.w = 0.0026449291538386266;
    msg.vx = 0.5564967840472715;
    msg.vy = 0.42452824740561945;
    msg.vz = 0.4991557769938768;
    msg.p = 0.525051894289106;
    msg.q = 0.905677739405121;
    msg.r = 0.17130042289284542;
    msg.depth = 0.08618265542761894;
    msg.alt = 0.36429424493666807;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.42287290725578486);
    msg.setSource(35356U);
    msg.setSourceEntity(23U);
    msg.setDestination(24228U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.7653271955886637;
    msg.lon = 0.6374925576779572;
    msg.height = 0.4232989056949066;
    msg.x = 0.5879123937416555;
    msg.y = 0.7673622574058809;
    msg.z = 0.5642458058566274;
    msg.phi = 0.6778249525240683;
    msg.theta = 0.2435389182815173;
    msg.psi = 0.6236602931005102;
    msg.u = 0.759536963439076;
    msg.v = 0.5655679204318903;
    msg.w = 0.5008361296949311;
    msg.vx = 0.5732382378836053;
    msg.vy = 0.05053685029818389;
    msg.vz = 0.7634424843371286;
    msg.p = 0.07209746208282863;
    msg.q = 0.5418356063000535;
    msg.r = 0.9185758979540115;
    msg.depth = 0.4970324593493912;
    msg.alt = 0.14173822552501503;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.0075333599386805394);
    msg.setSource(58157U);
    msg.setSourceEntity(243U);
    msg.setDestination(20458U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.9887387841049939;
    msg.lon = 0.6893113275344027;
    msg.height = 0.5922834869229285;
    msg.x = 0.22131274261237766;
    msg.y = 0.8504994565525936;
    msg.z = 0.8099029368565274;
    msg.phi = 0.7284830919808031;
    msg.theta = 0.2009018884507986;
    msg.psi = 0.7934375823100236;
    msg.u = 0.2456253569989495;
    msg.v = 0.29066310719973953;
    msg.w = 0.9567273104144296;
    msg.vx = 0.598286757208958;
    msg.vy = 0.2887437626926571;
    msg.vz = 0.8747354025373236;
    msg.p = 0.026850774186481075;
    msg.q = 0.9446109001387868;
    msg.r = 0.4120466994998061;
    msg.depth = 0.08857202530959818;
    msg.alt = 0.9724206166318331;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.4295638647586145);
    msg.setSource(14645U);
    msg.setSourceEntity(111U);
    msg.setDestination(61436U);
    msg.setDestinationEntity(125U);
    msg.x = 0.6581254139523606;
    msg.y = 0.5711114764081496;
    msg.z = 0.5973047428651777;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.11896044637730574);
    msg.setSource(20012U);
    msg.setSourceEntity(199U);
    msg.setDestination(5440U);
    msg.setDestinationEntity(5U);
    msg.x = 0.6429098394337195;
    msg.y = 0.7141309876004834;
    msg.z = 0.0972295926537372;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.9990166267379019);
    msg.setSource(34455U);
    msg.setSourceEntity(135U);
    msg.setDestination(22879U);
    msg.setDestinationEntity(185U);
    msg.x = 0.9427064646444989;
    msg.y = 0.6144270115258577;
    msg.z = 0.03357228237304366;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.7540336860743936);
    msg.setSource(14536U);
    msg.setSourceEntity(84U);
    msg.setDestination(54136U);
    msg.setDestinationEntity(124U);
    msg.value = 0.5287402420416544;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.6615190985156354);
    msg.setSource(32644U);
    msg.setSourceEntity(8U);
    msg.setDestination(9372U);
    msg.setDestinationEntity(131U);
    msg.value = 0.71091696993143;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.9846058108275724);
    msg.setSource(17227U);
    msg.setSourceEntity(13U);
    msg.setDestination(28374U);
    msg.setDestinationEntity(180U);
    msg.value = 0.3116518818847632;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.28586283112496147);
    msg.setSource(5630U);
    msg.setSourceEntity(125U);
    msg.setDestination(50104U);
    msg.setDestinationEntity(1U);
    msg.value = 0.5630545380940736;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.0752167063584217);
    msg.setSource(54485U);
    msg.setSourceEntity(193U);
    msg.setDestination(24137U);
    msg.setDestinationEntity(207U);
    msg.value = 0.5769979344628787;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.7938558435382047);
    msg.setSource(34984U);
    msg.setSourceEntity(139U);
    msg.setDestination(39997U);
    msg.setDestinationEntity(81U);
    msg.value = 0.5941396020339659;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.9574494766877909);
    msg.setSource(53022U);
    msg.setSourceEntity(27U);
    msg.setDestination(37103U);
    msg.setDestinationEntity(37U);
    msg.x = 0.318277498787792;
    msg.y = 0.3161995722146862;
    msg.z = 0.2058287391875614;
    msg.phi = 0.7646612097179767;
    msg.theta = 0.10723509468113768;
    msg.psi = 0.06470837340083724;
    msg.p = 0.11989726094334363;
    msg.q = 0.4795445009943683;
    msg.r = 0.5074010715933513;
    msg.u = 0.3953663853719557;
    msg.v = 0.04975690293564261;
    msg.w = 0.8592919824320048;
    msg.bias_psi = 0.5728453370316222;
    msg.bias_r = 0.32372409949585534;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.2102612702957528);
    msg.setSource(58750U);
    msg.setSourceEntity(234U);
    msg.setDestination(26237U);
    msg.setDestinationEntity(61U);
    msg.x = 0.7699410216366392;
    msg.y = 0.29348651878519516;
    msg.z = 0.6990012644367897;
    msg.phi = 0.6762453762340155;
    msg.theta = 0.7051951238911629;
    msg.psi = 0.2616966112440008;
    msg.p = 0.673576422052035;
    msg.q = 0.019656539369257153;
    msg.r = 0.3008351625579454;
    msg.u = 0.31326114521052184;
    msg.v = 0.840443803257751;
    msg.w = 0.8252023955574552;
    msg.bias_psi = 0.8330676805683478;
    msg.bias_r = 0.841049813888765;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.09573268860903417);
    msg.setSource(12926U);
    msg.setSourceEntity(54U);
    msg.setDestination(46138U);
    msg.setDestinationEntity(164U);
    msg.x = 0.8772518686117291;
    msg.y = 0.5153346255262374;
    msg.z = 0.4044842996178072;
    msg.phi = 0.3525683162195574;
    msg.theta = 0.2009059678486922;
    msg.psi = 0.2527824030250665;
    msg.p = 0.8229838849093407;
    msg.q = 0.06216123823742148;
    msg.r = 0.5331958107054284;
    msg.u = 0.23338586791582172;
    msg.v = 0.41521368885808696;
    msg.w = 0.25046985105425357;
    msg.bias_psi = 0.7823925592633519;
    msg.bias_r = 0.2328974448022776;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.07936163673293095);
    msg.setSource(14410U);
    msg.setSourceEntity(46U);
    msg.setDestination(16194U);
    msg.setDestinationEntity(198U);
    msg.bias_psi = 0.1420657312523509;
    msg.bias_r = 0.20624923375854043;
    msg.cog = 0.2880046856204249;
    msg.cyaw = 0.34107698808076126;
    msg.lbl_rej_level = 0.25843482421972175;
    msg.gps_rej_level = 0.42947167224845617;
    msg.custom_x = 0.39328075289151143;
    msg.custom_y = 0.9258443502006038;
    msg.custom_z = 0.4941860955994448;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.308463687901562);
    msg.setSource(30132U);
    msg.setSourceEntity(113U);
    msg.setDestination(16474U);
    msg.setDestinationEntity(151U);
    msg.bias_psi = 0.06369486684503478;
    msg.bias_r = 0.6874693617312893;
    msg.cog = 0.12913205925783677;
    msg.cyaw = 0.4790399386177018;
    msg.lbl_rej_level = 0.06564371594293694;
    msg.gps_rej_level = 0.3558558236499969;
    msg.custom_x = 0.10831022109442745;
    msg.custom_y = 0.5813970675359639;
    msg.custom_z = 0.026220469686918713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.08718773618166353);
    msg.setSource(8450U);
    msg.setSourceEntity(160U);
    msg.setDestination(41163U);
    msg.setDestinationEntity(199U);
    msg.bias_psi = 0.9434018006394017;
    msg.bias_r = 0.6908729064153094;
    msg.cog = 0.6792525829557354;
    msg.cyaw = 0.8150782748661008;
    msg.lbl_rej_level = 0.5595998018122051;
    msg.gps_rej_level = 0.39366614500270547;
    msg.custom_x = 0.05363711273156102;
    msg.custom_y = 0.18687702995924882;
    msg.custom_z = 0.6271346214433465;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.25069744704492436);
    msg.setSource(3422U);
    msg.setSourceEntity(81U);
    msg.setDestination(43867U);
    msg.setDestinationEntity(87U);
    msg.utc_time = 0.21253681414161507;
    msg.reason = 248U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.14092828978717775);
    msg.setSource(25638U);
    msg.setSourceEntity(136U);
    msg.setDestination(7348U);
    msg.setDestinationEntity(98U);
    msg.utc_time = 0.378502683202271;
    msg.reason = 145U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.4412204159372658);
    msg.setSource(47625U);
    msg.setSourceEntity(194U);
    msg.setDestination(57361U);
    msg.setDestinationEntity(149U);
    msg.utc_time = 0.2634973338862062;
    msg.reason = 24U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.24943798612334211);
    msg.setSource(31507U);
    msg.setSourceEntity(178U);
    msg.setDestination(57391U);
    msg.setDestinationEntity(246U);
    msg.id = 219U;
    msg.range = 0.5310995846428187;
    msg.acceptance = 31U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.31503895420231065);
    msg.setSource(4320U);
    msg.setSourceEntity(242U);
    msg.setDestination(47465U);
    msg.setDestinationEntity(142U);
    msg.id = 139U;
    msg.range = 0.7971397554557732;
    msg.acceptance = 248U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.7254623742570872);
    msg.setSource(53667U);
    msg.setSourceEntity(154U);
    msg.setDestination(2807U);
    msg.setDestinationEntity(174U);
    msg.id = 20U;
    msg.range = 0.104921929622525;
    msg.acceptance = 79U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.2319928586795461);
    msg.setSource(27065U);
    msg.setSourceEntity(72U);
    msg.setDestination(32856U);
    msg.setDestinationEntity(8U);
    msg.type = 126U;
    msg.reason = 143U;
    msg.value = 0.8112335465796708;
    msg.timestep = 0.4856259748629628;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.9226565955024899);
    msg.setSource(47314U);
    msg.setSourceEntity(172U);
    msg.setDestination(33917U);
    msg.setDestinationEntity(138U);
    msg.type = 252U;
    msg.reason = 225U;
    msg.value = 0.1452828420596909;
    msg.timestep = 0.37760133847414357;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.2813975871725134);
    msg.setSource(2881U);
    msg.setSourceEntity(185U);
    msg.setDestination(21749U);
    msg.setDestinationEntity(242U);
    msg.type = 172U;
    msg.reason = 61U;
    msg.value = 0.23195036353697673;
    msg.timestep = 0.2603996979402976;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationReset msg;
    msg.setTimeStamp(0.170744828318099);
    msg.setSource(39371U);
    msg.setSourceEntity(185U);
    msg.setDestination(6379U);
    msg.setDestinationEntity(168U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationReset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationReset msg;
    msg.setTimeStamp(0.17738994228811877);
    msg.setSource(35199U);
    msg.setSourceEntity(135U);
    msg.setDestination(16814U);
    msg.setDestinationEntity(165U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationReset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationReset msg;
    msg.setTimeStamp(0.626265548944912);
    msg.setSource(63530U);
    msg.setSourceEntity(229U);
    msg.setDestination(20435U);
    msg.setDestinationEntity(213U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationReset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.46246634802349074);
    msg.setSource(4855U);
    msg.setSourceEntity(53U);
    msg.setDestination(17945U);
    msg.setDestinationEntity(195U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IPMDCIZNQLEEYBDSCATJEEKLUETQJPYEWKFPNWFYVDERRLSEPKXIGZQVNMMLORSLCEGTJQDXVKVUIWDASINUXBCLYHYAGWUNRLGNUCHUVQZFZMLRXXWYPJCKOYPXUYKBUMMHCFWQVBXGXUFIYTTZZMOKOOAZARSAMCVJVLSIZHSDXUQSHJHNJKHCDAWGOBXDGBAGYFBOMRZNGHQREWNWCNFIBAF");
    tmp_msg_0.lat = 0.2204253819349905;
    tmp_msg_0.lon = 0.5532096994814536;
    tmp_msg_0.depth = 0.9649037576622691;
    tmp_msg_0.query_channel = 103U;
    tmp_msg_0.reply_channel = 80U;
    tmp_msg_0.transponder_delay = 57U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5822012794987667;
    msg.y = 0.7423251273376134;
    msg.var_x = 0.44689423734770817;
    msg.var_y = 0.4896979473009244;
    msg.distance = 0.25707395249350784;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.6119912182289856);
    msg.setSource(16669U);
    msg.setSourceEntity(173U);
    msg.setDestination(21522U);
    msg.setDestinationEntity(252U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TJVVLNGOOEVQNHDMSMEKWYVMDLHGYQKQPVHDGARSCMDZLCJHUGTYKIEACKAKLPOCVZSNIXLFKUBDCYBIMUHNIBPTCZQMGGFZMEWFOYOJADRLNYTINFBWBDQMEHJPPVHZSHFESKTVYBLDJRQFUPZGLRJYTMJNXEHAIRBOWWTUSYGHMLR");
    tmp_msg_0.lat = 0.7057871278625103;
    tmp_msg_0.lon = 0.30648549064198705;
    tmp_msg_0.depth = 0.12333079302930416;
    tmp_msg_0.query_channel = 62U;
    tmp_msg_0.reply_channel = 175U;
    tmp_msg_0.transponder_delay = 218U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2182825440535684;
    msg.y = 0.42382088247514527;
    msg.var_x = 0.27687453332104073;
    msg.var_y = 0.5818396491530468;
    msg.distance = 0.5104344792280249;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.47493024947537);
    msg.setSource(29259U);
    msg.setSourceEntity(209U);
    msg.setDestination(5247U);
    msg.setDestinationEntity(144U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LAJNCYGMVUBDZQANCATPSGDPRBOOJDRYYXCGWRUIJUDWZROOTLMWNHWFZWWXIFNCVSYEZVJONIGOFAQYCOIFSQOWHVMZEWVBDYKXFSESBBMFRTESQXGGSDSJXTDPNJPCHLZRUYJQFLYRURIKLPBUL");
    tmp_msg_0.lat = 0.06432551988398028;
    tmp_msg_0.lon = 0.839270863034163;
    tmp_msg_0.depth = 0.09029301699937553;
    tmp_msg_0.query_channel = 143U;
    tmp_msg_0.reply_channel = 95U;
    tmp_msg_0.transponder_delay = 35U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9863502615026224;
    msg.y = 0.3308387968183901;
    msg.var_x = 0.6702690252086413;
    msg.var_y = 0.5236630037840455;
    msg.distance = 0.21642170951779682;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.9165073120613788);
    msg.setSource(52992U);
    msg.setSourceEntity(114U);
    msg.setDestination(16318U);
    msg.setDestinationEntity(149U);
    msg.state = 221U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.27364165846540134);
    msg.setSource(52903U);
    msg.setSourceEntity(35U);
    msg.setDestination(51117U);
    msg.setDestinationEntity(49U);
    msg.state = 240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.22085332710273253);
    msg.setSource(10468U);
    msg.setSourceEntity(221U);
    msg.setDestination(9457U);
    msg.setDestinationEntity(115U);
    msg.state = 93U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.9350244866626312);
    msg.setSource(38493U);
    msg.setSourceEntity(23U);
    msg.setDestination(1286U);
    msg.setDestinationEntity(138U);
    msg.x = 0.20940397565640678;
    msg.y = 0.4497448937380123;
    msg.z = 0.7767235491596933;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.29945526162668046);
    msg.setSource(35368U);
    msg.setSourceEntity(4U);
    msg.setDestination(41488U);
    msg.setDestinationEntity(82U);
    msg.x = 0.06692074670624615;
    msg.y = 0.17213813780254228;
    msg.z = 0.8845382280489186;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.16471359644189043);
    msg.setSource(11853U);
    msg.setSourceEntity(12U);
    msg.setDestination(52792U);
    msg.setDestinationEntity(176U);
    msg.x = 0.27682561849912024;
    msg.y = 0.438667477879535;
    msg.z = 0.544527806641544;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.5104677486305227);
    msg.setSource(10569U);
    msg.setSourceEntity(107U);
    msg.setDestination(31776U);
    msg.setDestinationEntity(110U);
    msg.value = 0.3600336989466679;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.21987097828058222);
    msg.setSource(56512U);
    msg.setSourceEntity(114U);
    msg.setDestination(10810U);
    msg.setDestinationEntity(125U);
    msg.value = 0.8589366418665438;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.2674429917807244);
    msg.setSource(12380U);
    msg.setSourceEntity(240U);
    msg.setDestination(34575U);
    msg.setDestinationEntity(2U);
    msg.value = 0.42433742926225504;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.49164637350759854);
    msg.setSource(41888U);
    msg.setSourceEntity(4U);
    msg.setDestination(41580U);
    msg.setDestinationEntity(219U);
    msg.value = 0.7486646099060782;
    msg.z_units = 16U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.7547513354963185);
    msg.setSource(42757U);
    msg.setSourceEntity(80U);
    msg.setDestination(44634U);
    msg.setDestinationEntity(181U);
    msg.value = 0.4661306263417251;
    msg.z_units = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.8387743452203605);
    msg.setSource(4120U);
    msg.setSourceEntity(233U);
    msg.setDestination(44423U);
    msg.setDestinationEntity(119U);
    msg.value = 0.9361367756399543;
    msg.z_units = 222U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.8005620768335285);
    msg.setSource(34734U);
    msg.setSourceEntity(230U);
    msg.setDestination(46851U);
    msg.setDestinationEntity(7U);
    msg.value = 0.036479188494624726;
    msg.speed_units = 104U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.7170129822630518);
    msg.setSource(20298U);
    msg.setSourceEntity(78U);
    msg.setDestination(59980U);
    msg.setDestinationEntity(195U);
    msg.value = 0.7634693526589941;
    msg.speed_units = 108U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.39698509313084895);
    msg.setSource(2072U);
    msg.setSourceEntity(78U);
    msg.setDestination(58687U);
    msg.setDestinationEntity(134U);
    msg.value = 0.942459902054714;
    msg.speed_units = 179U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.4117612343088308);
    msg.setSource(37146U);
    msg.setSourceEntity(86U);
    msg.setDestination(8402U);
    msg.setDestinationEntity(67U);
    msg.value = 0.8709097752933486;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.12274043199698381);
    msg.setSource(13420U);
    msg.setSourceEntity(79U);
    msg.setDestination(16384U);
    msg.setDestinationEntity(29U);
    msg.value = 0.04257378932801781;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.22749058656398646);
    msg.setSource(52650U);
    msg.setSourceEntity(101U);
    msg.setDestination(20027U);
    msg.setDestinationEntity(233U);
    msg.value = 0.920751395059702;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.5821075065003416);
    msg.setSource(33347U);
    msg.setSourceEntity(28U);
    msg.setDestination(8135U);
    msg.setDestinationEntity(122U);
    msg.value = 0.8597955607970813;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.9167250989505711);
    msg.setSource(41957U);
    msg.setSourceEntity(195U);
    msg.setDestination(57992U);
    msg.setDestinationEntity(170U);
    msg.value = 0.0732233227112844;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.10172830858003845);
    msg.setSource(6468U);
    msg.setSourceEntity(30U);
    msg.setDestination(40433U);
    msg.setDestinationEntity(237U);
    msg.value = 0.7174145914262874;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.1454225854541904);
    msg.setSource(18761U);
    msg.setSourceEntity(146U);
    msg.setDestination(48351U);
    msg.setDestinationEntity(47U);
    msg.value = 0.09567078781583682;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.0170996843977147);
    msg.setSource(99U);
    msg.setSourceEntity(22U);
    msg.setDestination(52283U);
    msg.setDestinationEntity(157U);
    msg.value = 0.4090782975651248;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.5391467076642188);
    msg.setSource(48767U);
    msg.setSourceEntity(222U);
    msg.setDestination(47946U);
    msg.setDestinationEntity(125U);
    msg.value = 0.04696597760126264;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.9669520294377894);
    msg.setSource(52342U);
    msg.setSourceEntity(70U);
    msg.setDestination(9060U);
    msg.setDestinationEntity(229U);
    msg.path_ref = 3659624913U;
    msg.start_lat = 0.408587726917777;
    msg.start_lon = 0.8343730942246717;
    msg.start_z = 0.32844736584183676;
    msg.start_z_units = 117U;
    msg.end_lat = 0.5714251758707053;
    msg.end_lon = 0.8976664078367926;
    msg.end_z = 0.33858545526257855;
    msg.end_z_units = 224U;
    msg.speed = 0.428148660645303;
    msg.speed_units = 243U;
    msg.lradius = 0.10892552209689332;
    msg.flags = 38U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.5360964911504823);
    msg.setSource(23324U);
    msg.setSourceEntity(87U);
    msg.setDestination(48423U);
    msg.setDestinationEntity(136U);
    msg.path_ref = 1798313539U;
    msg.start_lat = 0.17206340153282362;
    msg.start_lon = 0.05965169474103371;
    msg.start_z = 0.3606053355805865;
    msg.start_z_units = 41U;
    msg.end_lat = 0.8416914278631967;
    msg.end_lon = 0.8051500096137612;
    msg.end_z = 0.2957023566131446;
    msg.end_z_units = 254U;
    msg.speed = 0.2297642016437228;
    msg.speed_units = 144U;
    msg.lradius = 0.24586188601483872;
    msg.flags = 154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.7910663537644076);
    msg.setSource(62151U);
    msg.setSourceEntity(84U);
    msg.setDestination(60554U);
    msg.setDestinationEntity(16U);
    msg.path_ref = 1911684944U;
    msg.start_lat = 0.2876439166363932;
    msg.start_lon = 0.09088811421693799;
    msg.start_z = 0.9491312637004714;
    msg.start_z_units = 89U;
    msg.end_lat = 0.7988625744857517;
    msg.end_lon = 0.5904145517422849;
    msg.end_z = 0.3729724546242369;
    msg.end_z_units = 143U;
    msg.speed = 0.9626225903777254;
    msg.speed_units = 40U;
    msg.lradius = 0.7357688241736523;
    msg.flags = 223U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.29170646480308526);
    msg.setSource(32428U);
    msg.setSourceEntity(54U);
    msg.setDestination(42515U);
    msg.setDestinationEntity(171U);
    msg.x = 0.2580419704338003;
    msg.y = 0.34738900502423753;
    msg.z = 0.4057285798811895;
    msg.k = 0.08875931851584262;
    msg.m = 0.9887097251502812;
    msg.n = 0.43495440484248005;
    msg.flags = 248U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.4612011638336273);
    msg.setSource(32765U);
    msg.setSourceEntity(192U);
    msg.setDestination(64215U);
    msg.setDestinationEntity(207U);
    msg.x = 0.17756848126496327;
    msg.y = 0.6828953124750976;
    msg.z = 0.9413986758072584;
    msg.k = 0.5398864279828772;
    msg.m = 0.013479605715137288;
    msg.n = 0.5260171431011957;
    msg.flags = 123U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.20740250416327888);
    msg.setSource(41295U);
    msg.setSourceEntity(158U);
    msg.setDestination(34802U);
    msg.setDestinationEntity(129U);
    msg.x = 0.18228325100502074;
    msg.y = 0.04009610438211508;
    msg.z = 0.5318135237370408;
    msg.k = 0.431666654546924;
    msg.m = 0.3281894373391422;
    msg.n = 0.9134329767316702;
    msg.flags = 24U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.9011715964124064);
    msg.setSource(51258U);
    msg.setSourceEntity(58U);
    msg.setDestination(37059U);
    msg.setDestinationEntity(81U);
    msg.value = 0.12564413185915646;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.6848166911638202);
    msg.setSource(40472U);
    msg.setSourceEntity(217U);
    msg.setDestination(61268U);
    msg.setDestinationEntity(190U);
    msg.value = 0.4390491706049834;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.1499311152400733);
    msg.setSource(2765U);
    msg.setSourceEntity(198U);
    msg.setDestination(39542U);
    msg.setDestinationEntity(170U);
    msg.value = 0.05335654138920354;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.723408560033093);
    msg.setSource(13629U);
    msg.setSourceEntity(9U);
    msg.setDestination(3851U);
    msg.setDestinationEntity(32U);
    msg.u = 0.9359721856222767;
    msg.v = 0.1756959521525444;
    msg.w = 0.3592428688778071;
    msg.p = 0.6641659415017114;
    msg.q = 0.24630402127402928;
    msg.r = 0.27998938765343406;
    msg.flags = 113U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.8548534294700085);
    msg.setSource(508U);
    msg.setSourceEntity(123U);
    msg.setDestination(50801U);
    msg.setDestinationEntity(112U);
    msg.u = 0.8159045082080921;
    msg.v = 0.4816309994429657;
    msg.w = 0.029340666594959153;
    msg.p = 0.7839751113378395;
    msg.q = 0.870375423754999;
    msg.r = 0.767657230530001;
    msg.flags = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.11927123028841446);
    msg.setSource(50521U);
    msg.setSourceEntity(109U);
    msg.setDestination(39510U);
    msg.setDestinationEntity(227U);
    msg.u = 0.2990644656692183;
    msg.v = 0.08329470201064892;
    msg.w = 0.9237870770080682;
    msg.p = 0.147780846861284;
    msg.q = 0.25671777908839;
    msg.r = 0.7867246438657349;
    msg.flags = 101U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.14290501682842505);
    msg.setSource(21780U);
    msg.setSourceEntity(125U);
    msg.setDestination(3427U);
    msg.setDestinationEntity(168U);
    msg.path_ref = 420707988U;
    msg.start_lat = 0.5978395485742027;
    msg.start_lon = 0.7269322539279464;
    msg.start_z = 0.5150878411594525;
    msg.start_z_units = 147U;
    msg.end_lat = 0.4032381033014387;
    msg.end_lon = 0.8896338399673789;
    msg.end_z = 0.7779403197438064;
    msg.end_z_units = 221U;
    msg.lradius = 0.9441016012785827;
    msg.flags = 59U;
    msg.x = 0.8343849978181863;
    msg.y = 0.1907658500049214;
    msg.z = 0.6853973424501401;
    msg.vx = 0.9999390071366205;
    msg.vy = 0.5692680156304638;
    msg.vz = 0.848053268974711;
    msg.course_error = 0.17907072420680203;
    msg.eta = 25210U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.5377688621287455);
    msg.setSource(7457U);
    msg.setSourceEntity(67U);
    msg.setDestination(32029U);
    msg.setDestinationEntity(147U);
    msg.path_ref = 1190953531U;
    msg.start_lat = 0.18536659235438568;
    msg.start_lon = 0.15105951031029186;
    msg.start_z = 0.012549708914848412;
    msg.start_z_units = 182U;
    msg.end_lat = 0.8030826081758112;
    msg.end_lon = 0.4929115567001865;
    msg.end_z = 0.465487186359282;
    msg.end_z_units = 95U;
    msg.lradius = 0.5220854362849526;
    msg.flags = 165U;
    msg.x = 0.31351899185705545;
    msg.y = 0.10350831096504676;
    msg.z = 0.7156214545259438;
    msg.vx = 0.4723225358627605;
    msg.vy = 0.3257979884333001;
    msg.vz = 0.80549710271821;
    msg.course_error = 0.9627307351954866;
    msg.eta = 31800U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.8901198312377818);
    msg.setSource(38145U);
    msg.setSourceEntity(105U);
    msg.setDestination(61494U);
    msg.setDestinationEntity(14U);
    msg.path_ref = 2641403469U;
    msg.start_lat = 0.9410470041923384;
    msg.start_lon = 0.8159987775418677;
    msg.start_z = 0.011687161626085074;
    msg.start_z_units = 187U;
    msg.end_lat = 0.9398915696851897;
    msg.end_lon = 0.09037196769713896;
    msg.end_z = 0.12977087480133598;
    msg.end_z_units = 1U;
    msg.lradius = 0.7535698413393555;
    msg.flags = 175U;
    msg.x = 0.5135618144655884;
    msg.y = 0.5351323272764266;
    msg.z = 0.7071292702068789;
    msg.vx = 0.42407622418056645;
    msg.vy = 0.8398328115252449;
    msg.vz = 0.5852945789357124;
    msg.course_error = 0.5517349836517059;
    msg.eta = 45205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.870865672039094);
    msg.setSource(26903U);
    msg.setSourceEntity(98U);
    msg.setDestination(60450U);
    msg.setDestinationEntity(222U);
    msg.k = 0.6399763271460306;
    msg.m = 0.5432598712402733;
    msg.n = 0.6062951012050503;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.45266597266887465);
    msg.setSource(25378U);
    msg.setSourceEntity(169U);
    msg.setDestination(24874U);
    msg.setDestinationEntity(142U);
    msg.k = 0.9938830084422414;
    msg.m = 0.6445651921743484;
    msg.n = 0.13703360607434434;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.9426343430319591);
    msg.setSource(55155U);
    msg.setSourceEntity(176U);
    msg.setDestination(2818U);
    msg.setDestinationEntity(166U);
    msg.k = 0.5880413168239197;
    msg.m = 0.8225581540544924;
    msg.n = 0.7523049889372472;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.6550560848976027);
    msg.setSource(9731U);
    msg.setSourceEntity(217U);
    msg.setDestination(25016U);
    msg.setDestinationEntity(216U);
    msg.p = 0.8717960549155822;
    msg.i = 0.667359334198981;
    msg.d = 0.7445287776126931;
    msg.a = 0.08046318082877502;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.33689975471145006);
    msg.setSource(19808U);
    msg.setSourceEntity(72U);
    msg.setDestination(41286U);
    msg.setDestinationEntity(228U);
    msg.p = 0.36109572968546966;
    msg.i = 0.5822481709797172;
    msg.d = 0.8714506133027505;
    msg.a = 0.04837326460595215;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.05504165837916708);
    msg.setSource(55442U);
    msg.setSourceEntity(133U);
    msg.setDestination(36138U);
    msg.setDestinationEntity(25U);
    msg.p = 0.14105017291565702;
    msg.i = 0.2784982442778705;
    msg.d = 0.5701333917344771;
    msg.a = 0.5073728308539321;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.5063723138040439);
    msg.setSource(65340U);
    msg.setSourceEntity(108U);
    msg.setDestination(59808U);
    msg.setDestinationEntity(152U);
    msg.op = 68U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.451019173994856);
    msg.setSource(14236U);
    msg.setSourceEntity(200U);
    msg.setDestination(33229U);
    msg.setDestinationEntity(118U);
    msg.op = 95U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.8997105512840282);
    msg.setSource(38994U);
    msg.setSourceEntity(121U);
    msg.setDestination(44815U);
    msg.setDestinationEntity(188U);
    msg.op = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.7301072232584728);
    msg.setSource(20717U);
    msg.setSourceEntity(198U);
    msg.setDestination(49070U);
    msg.setDestinationEntity(42U);
    msg.timeout = 63747U;
    msg.lat = 0.34517497873795655;
    msg.lon = 0.7157757243454627;
    msg.z = 0.19470729361047057;
    msg.z_units = 164U;
    msg.speed = 0.7182607203441121;
    msg.speed_units = 215U;
    msg.roll = 0.3204897010000265;
    msg.pitch = 0.13170985737232632;
    msg.yaw = 0.34554917691095277;
    msg.custom.assign("YRHDHOZKLSGRDAIDYSWMPJBSATABVEXVFNDQVTOBHU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.42593429355875345);
    msg.setSource(47581U);
    msg.setSourceEntity(38U);
    msg.setDestination(28351U);
    msg.setDestinationEntity(95U);
    msg.timeout = 33899U;
    msg.lat = 0.9833003923745814;
    msg.lon = 0.8659953884184188;
    msg.z = 0.4048034087725695;
    msg.z_units = 153U;
    msg.speed = 0.09924580593944021;
    msg.speed_units = 172U;
    msg.roll = 0.784082314804163;
    msg.pitch = 0.35546468754410643;
    msg.yaw = 0.5755775303527473;
    msg.custom.assign("FUJGTDMLQEWAOFTQXMCKVFLNLTDEPPINPWVHZQOTAGQMMZUHSUTHELQEAQEZGEJZIDIRKIUGYKRSKKTHNXLWEZKSVZPSMOGGBYCTCXIZYHRNJVSBRCBTFEUQLENBPDRQWWCAAWOMYXJVBO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.19067994500714702);
    msg.setSource(59009U);
    msg.setSourceEntity(237U);
    msg.setDestination(61660U);
    msg.setDestinationEntity(25U);
    msg.timeout = 47847U;
    msg.lat = 0.939899275070441;
    msg.lon = 0.8467935346059033;
    msg.z = 0.7715826939686172;
    msg.z_units = 23U;
    msg.speed = 0.12651588941990677;
    msg.speed_units = 249U;
    msg.roll = 0.911288371784541;
    msg.pitch = 0.21887044088378638;
    msg.yaw = 0.28338602976700955;
    msg.custom.assign("OJTZWCQJZFFAVLWGKKESXCYYGPNNICQXPVWCQEJPMLTFIMLBJRNSYWRMFRNHHGRDDYXDUZOBNLTJRDIHXEHTYAUAVNIHOATICFAXWSLMEGWKUAFEJPBCBJIUGZKYCQHDCBKEQUSVTJKZNVPLHUYRHCLUOYRJKPGVTZLMBAVHRUMBUXEZAOIMZOYTVJMSQPDLGKLEZPBVKPDDTIAIIGXQBTQFNFOSVWEHGPXKSFRDNMCZXEMQF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.18246674078487457);
    msg.setSource(11849U);
    msg.setSourceEntity(134U);
    msg.setDestination(13537U);
    msg.setDestinationEntity(17U);
    msg.timeout = 45443U;
    msg.lat = 0.046498265985170484;
    msg.lon = 0.5707474880471023;
    msg.z = 0.8029914166228076;
    msg.z_units = 119U;
    msg.speed = 0.6173087104649468;
    msg.speed_units = 114U;
    msg.duration = 32783U;
    msg.radius = 0.38303042394363773;
    msg.flags = 95U;
    msg.custom.assign("NBEJUJSNPTDXPVBWUICARWBLCOTQDDFOZUGPDWXUTWPBOAATNMGNVGTSERFZGAKZFWCHDCMEHTOXPUVMGZIEJMJHCLKIILJXWNALJSFONWJINKTTOKVQBIHWGLKPQKCXKZQIYGRFQZNHQWYZOVAVXISVJQYBHTRMEIUJXQEEUYRFRXDEBQUBEROCHNHKKGSAXBGRYSDTJMKOCDLWPYHVFEVX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.07391961819870518);
    msg.setSource(59536U);
    msg.setSourceEntity(47U);
    msg.setDestination(4042U);
    msg.setDestinationEntity(67U);
    msg.timeout = 17260U;
    msg.lat = 0.28521248452683723;
    msg.lon = 0.7536485347347278;
    msg.z = 0.48985103787391426;
    msg.z_units = 107U;
    msg.speed = 0.2623247545036568;
    msg.speed_units = 124U;
    msg.duration = 65313U;
    msg.radius = 0.861459228759421;
    msg.flags = 170U;
    msg.custom.assign("SEVFDLRDIAHUEKYQIPHYVFDQBALTFUEPAKMNCIQWTKZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.23136742668650845);
    msg.setSource(32380U);
    msg.setSourceEntity(5U);
    msg.setDestination(52735U);
    msg.setDestinationEntity(251U);
    msg.timeout = 30974U;
    msg.lat = 0.3327042063133723;
    msg.lon = 0.2362354181147266;
    msg.z = 0.8163466824429763;
    msg.z_units = 158U;
    msg.speed = 0.7221144173546991;
    msg.speed_units = 222U;
    msg.duration = 8486U;
    msg.radius = 0.7108589180370511;
    msg.flags = 154U;
    msg.custom.assign("CVVWRKIZRTZMKQSSLDIWUGSYKXELAENQBREPJCNZYNGBQHMEDPDPTMJCWENYXXWQGOCQOIMUTJVAPLJZYECNPVZGVDRSWDHIPUOHQOJMQBNFMKRHXUOKOXNTLQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.5216991913419369);
    msg.setSource(11624U);
    msg.setSourceEntity(206U);
    msg.setDestination(38971U);
    msg.setDestinationEntity(174U);
    msg.custom.assign("WYTPEQPPBJPAXFENCIPCDLGEDMBKIPWJYZFLFWHOYHQLJTIMJTWWKRCEACVPSHDRZTHPBSLSZMEDBQBUQXXNINQLFTYHOZHKZZLRDSXCFAGWFURTUNBOILQKZKHFZEGJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.8195556293906113);
    msg.setSource(29744U);
    msg.setSourceEntity(152U);
    msg.setDestination(61345U);
    msg.setDestinationEntity(147U);
    msg.custom.assign("FURCBDWQQGPUPSTHVHGSKKZALGYQMJMXADAKDNRTOLTNSFCEXQPJLHBNGKLJEXSMYQYKISZWUFNWRFBJMIKISENAMMGSLDAJRMBCEPUDCWFQXTOTYAKYISIZVIRMTIVLIBEVDPQRWDOTWAMHZSVGUEXPVWOVUNDR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.26461582605727896);
    msg.setSource(17993U);
    msg.setSourceEntity(237U);
    msg.setDestination(43779U);
    msg.setDestinationEntity(22U);
    msg.custom.assign("PQCJXXYMELSKXPEIRLLJTTGIQOZKJCBUIREWMHBMMCJKDDSLQSOEVVDCAKBABQRKXRNPSPRSHNQYJCBBXMZXPTCVVBJCNOAIHDCNKTYHLQBTZTVCLIDAGWUGQEHLABNTSDEROYUMOUZTFALWZPNWJGHTGDJDUXZZHPDGAFRXKYGUOLYWSBOOGIIPNZMXWEVFDUFVNHVWYIFQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.5579823183216208);
    msg.setSource(43553U);
    msg.setSourceEntity(161U);
    msg.setDestination(57894U);
    msg.setDestinationEntity(55U);
    msg.timeout = 2887U;
    msg.lat = 0.10816764463700712;
    msg.lon = 0.6693162121648407;
    msg.z = 0.4852543284826508;
    msg.z_units = 206U;
    msg.duration = 48966U;
    msg.speed = 0.378238337704487;
    msg.speed_units = 252U;
    msg.type = 39U;
    msg.radius = 0.980750739369738;
    msg.length = 0.9165060779741461;
    msg.bearing = 0.8515601473714907;
    msg.direction = 157U;
    msg.custom.assign("JQHKQDXUORLTSMYHJWWTOMWMRYEVSIZLMGHLHEBLPGFDVGIOCQVXKKGTZDWXMSZQROUCQBQWFTDTDYUNOGNAUOJBCPBEENUFKRLDSOHDGRYXQUPBJAYCGYPUXKVFVLTMYVVRNIBUGCDFPTEYZKIAHTXMESIARFAIQAZWVAQIZJAVPPBNSAYTYJUHNLMZPHGDHKUSBOJCORCC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.9323333080980782);
    msg.setSource(46047U);
    msg.setSourceEntity(74U);
    msg.setDestination(2583U);
    msg.setDestinationEntity(52U);
    msg.timeout = 50102U;
    msg.lat = 0.7844442895117529;
    msg.lon = 0.16897015145929917;
    msg.z = 0.7179268570413864;
    msg.z_units = 140U;
    msg.duration = 8541U;
    msg.speed = 0.6762687321525318;
    msg.speed_units = 130U;
    msg.type = 188U;
    msg.radius = 0.6930540460610739;
    msg.length = 0.9691204114430487;
    msg.bearing = 0.28837529088030844;
    msg.direction = 106U;
    msg.custom.assign("WWVDSCEGSYATBWSGFSGINMXNPBWXOYYEZOMGKEVI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.06934774229575136);
    msg.setSource(45444U);
    msg.setSourceEntity(12U);
    msg.setDestination(8103U);
    msg.setDestinationEntity(15U);
    msg.timeout = 33172U;
    msg.lat = 0.9715614364912643;
    msg.lon = 0.3885318485887822;
    msg.z = 0.3350028446934902;
    msg.z_units = 98U;
    msg.duration = 26577U;
    msg.speed = 0.11186898280904156;
    msg.speed_units = 72U;
    msg.type = 111U;
    msg.radius = 0.35086478571441504;
    msg.length = 0.7732564400747092;
    msg.bearing = 0.7692559718581895;
    msg.direction = 254U;
    msg.custom.assign("LPWZEQCMJDXPUJXTURTJGKYFMRY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.5548313257695358);
    msg.setSource(34237U);
    msg.setSourceEntity(159U);
    msg.setDestination(43426U);
    msg.setDestinationEntity(135U);
    msg.duration = 54996U;
    msg.custom.assign("EYOVEITSMXLCVUGDQMLKKDGLKCWOMTETWKVFYJJIRGSJPHWSFTJXEMOGXDQKZAQFKMRZBPSKTZJSYPACDGRVABNKYLBBWPVXYOHX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.6570911030709052);
    msg.setSource(29869U);
    msg.setSourceEntity(177U);
    msg.setDestination(56876U);
    msg.setDestinationEntity(73U);
    msg.duration = 61396U;
    msg.custom.assign("LTWCBRYTVTMSBXUVKZPYRDBRRFPOCXTEMFSEQWOHAHAYZEIOPLNQFEXKRFXOBJERPRFPQDDLAKMSIFEPVTCZKZHQYNSYPZJIJSOJKDOVECXHDDOCEJVZUGUIYLAOXCQVNCYVCDTULXQLZIEMUMSINDUG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.5723093862694778);
    msg.setSource(54524U);
    msg.setSourceEntity(47U);
    msg.setDestination(960U);
    msg.setDestinationEntity(103U);
    msg.duration = 27225U;
    msg.custom.assign("OWSIQTLZNAQJTCUCZARAPFXBYQEQJXVRKEGMVTNFTUBLHGYSFLIEHBLJQHWNGZVQCQKGDMSTWCCXKJREDHMZDLUFPIWAKUIPDCZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.8146255362277848);
    msg.setSource(25264U);
    msg.setSourceEntity(41U);
    msg.setDestination(18449U);
    msg.setDestinationEntity(71U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.3240836270601455;
    msg.control.set(tmp_msg_0);
    msg.duration = 13381U;
    msg.custom.assign("VYMLOUXUWDDFITBBQSMBVNJZAOEUWTDENSLKSAJIPDARPLRPLTRCJSHFTWYIJLASEHVVZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.8100849387817484);
    msg.setSource(54446U);
    msg.setSourceEntity(39U);
    msg.setDestination(60873U);
    msg.setDestinationEntity(126U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.83769886035051;
    msg.control.set(tmp_msg_0);
    msg.duration = 44988U;
    msg.custom.assign("NWFNSNCBMLGYUONODHZVIXRCMURJHUJIEDKPFTKZDRIBAAXYOOALBUDZEJYBJMJLWKWPYQMRKGDXVFPEPWYNXSMVQQFTETDTRVFATQFPLSCQADSBYEASNTOGHXCERBLGRDHUKZLWXVXUYEKKVJUAQVIGWNCKCVQGONMTSFZFOLMEGICFPUXZGOHBVIHXWCMAPABTXLOZKUJNJBUSELTYGYSZIPNIJCFGOPWK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.6179252169363912);
    msg.setSource(43770U);
    msg.setSourceEntity(192U);
    msg.setDestination(1857U);
    msg.setDestinationEntity(184U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.16893355751910266;
    msg.control.set(tmp_msg_0);
    msg.duration = 19260U;
    msg.custom.assign("SEVQUNUYMENWYBAXXGUCVJPIRIOFPKQYPOBHVISDJKUCTZRIGNECRPCCCIEKXOXPOOVNQOZHMTAULBGSIJDXDKSFPMTFETPUKQLSLEGUQZOBQBVFZQZCNYQTWBPYNEFNKMWVBHHDFTYEWKICWCWWSRWZRTNSHKRFEALSXNIJBZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.5203949159604094);
    msg.setSource(31419U);
    msg.setSourceEntity(64U);
    msg.setDestination(32729U);
    msg.setDestinationEntity(206U);
    msg.timeout = 71U;
    msg.lat = 0.19646192662937256;
    msg.lon = 0.4701778748165414;
    msg.z = 0.5000433090950829;
    msg.z_units = 4U;
    msg.speed = 0.9116042909516697;
    msg.speed_units = 200U;
    msg.bearing = 0.29740694261448775;
    msg.cross_angle = 0.9387702649684413;
    msg.width = 0.5992606181585654;
    msg.length = 0.1347899069140892;
    msg.hstep = 0.588729946195044;
    msg.coff = 204U;
    msg.alternation = 3U;
    msg.flags = 148U;
    msg.custom.assign("ETFEVCYMCESHYXWUZFYZKQCIZCYDMYMSWNILBJQWSTHJZUHEPYSHKRZIGEFMCOQVXVTMWJSQXSTCRTILJEDACFIVJAPRLKBFXQKRRIUOHKOFZMJOBDLFKLNZRGIVUYKRBOEMAANGNJWPNFUZNNDJTUABNJOKCBRCOBIAPXPKFDYQWXNZTEU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.9730529145911447);
    msg.setSource(62857U);
    msg.setSourceEntity(183U);
    msg.setDestination(47107U);
    msg.setDestinationEntity(253U);
    msg.timeout = 55896U;
    msg.lat = 0.7785949139176684;
    msg.lon = 0.3299118604203516;
    msg.z = 0.07485692248752962;
    msg.z_units = 201U;
    msg.speed = 0.19597438616586949;
    msg.speed_units = 97U;
    msg.bearing = 0.9091941867021482;
    msg.cross_angle = 0.47499521958896185;
    msg.width = 0.2927259754921474;
    msg.length = 0.4162062826847335;
    msg.hstep = 0.7524109866397554;
    msg.coff = 199U;
    msg.alternation = 111U;
    msg.flags = 223U;
    msg.custom.assign("JYGFRXFOUONJCUPJTZIPMSJGFANEZWQMSKLQUAORWXIKPMMWWNKUHIADNSAXAQTGCS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.6805277262213764);
    msg.setSource(23289U);
    msg.setSourceEntity(51U);
    msg.setDestination(45775U);
    msg.setDestinationEntity(219U);
    msg.timeout = 39197U;
    msg.lat = 0.8655615195065804;
    msg.lon = 0.9183108919696;
    msg.z = 0.8382441459404419;
    msg.z_units = 119U;
    msg.speed = 0.9087710004655375;
    msg.speed_units = 69U;
    msg.bearing = 0.4416221095082089;
    msg.cross_angle = 0.8724189430505581;
    msg.width = 0.2220563377919157;
    msg.length = 0.7547659035690482;
    msg.hstep = 0.10743410592291369;
    msg.coff = 162U;
    msg.alternation = 158U;
    msg.flags = 193U;
    msg.custom.assign("BESIVTKZBAFPFFTBLSHIGFFAMHZIFIDEXJJNZDVWGTBFNOOOLMYNRITVSTNURZDANXCPLQIRIMRFUJTJJLPAWKMWSWWIOCNKMHEGQYRVIOKRCKZLEWVLGKUXOOBWUMRBVRSACPEOHYPBDNLTDDQGUZQEFEZMSUBMDENMCGBYZNOLPEJQASCXVGLJKKRTDQYXVSPVGTEJXWHXQTDXFAWZXPVUCHYUPGHYIUJAQYSZJYPCB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.12627031629249208);
    msg.setSource(22793U);
    msg.setSourceEntity(161U);
    msg.setDestination(42592U);
    msg.setDestinationEntity(122U);
    msg.timeout = 27280U;
    msg.lat = 0.17091365866264152;
    msg.lon = 0.9493994665308286;
    msg.z = 0.1057980012937243;
    msg.z_units = 140U;
    msg.speed = 0.7368305339940195;
    msg.speed_units = 37U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.48293348903745914;
    tmp_msg_0.y = 0.7247267644593476;
    tmp_msg_0.z = 0.49737600186261477;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("APEFTFTYUZZJPWSDXDXQAPHOESVUQALCJFZIEDHYILDY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.068653548748695);
    msg.setSource(16733U);
    msg.setSourceEntity(119U);
    msg.setDestination(37271U);
    msg.setDestinationEntity(185U);
    msg.timeout = 23797U;
    msg.lat = 0.238066388558828;
    msg.lon = 0.8189836164797675;
    msg.z = 0.41621506076638326;
    msg.z_units = 128U;
    msg.speed = 0.9699192661510796;
    msg.speed_units = 97U;
    msg.custom.assign("WKBTPVEHLNPCEARZVPRIOBOTXVXVRZWIEUQSQMGDTSHEKEFWWJUNPBACKUXCFVGMMRPOHCCTDPUOGSMLFYYBHDTCNCVNWGKGUFDCOJPJFANQKONBLGIITRDIXHRVEFZJTSYSBFVYZJQMATTMVLRNHZRKAUJZBHBLOGFJRLEZLHGKDAPKHMYYKQUBPFIBIDDAWSLIRXXMZGMCDYWEQGAOZQJUPFNIWWQTOVNK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.6434924850177953);
    msg.setSource(29737U);
    msg.setSourceEntity(94U);
    msg.setDestination(41136U);
    msg.setDestinationEntity(194U);
    msg.timeout = 39679U;
    msg.lat = 0.6651836682813247;
    msg.lon = 0.6801334727428089;
    msg.z = 0.3362777681118566;
    msg.z_units = 50U;
    msg.speed = 0.21662575132542528;
    msg.speed_units = 218U;
    msg.custom.assign("VHOMQFMYDSOGKKVJPTDBCPQLBIZOOTVYZUOLYADUNHLGZJEXRIWUCPKTYJZTLKVEKAYUBNPPWVFDONUEMIVUBCXBIWZTCBEBGPOFQHJVOQBQMMKHSAYZIBNQXZSXAZDMLWRHBULQRGEJFLWQHGGPRSVPYTUDWYFFHFAVSUTRSZEEWFMRWDIZJYFTNATAWKCCCMHJDKPMQCJNNRHFTXLEMYIRRJGXIAQDA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.6903684556057091);
    msg.setSource(3121U);
    msg.setSourceEntity(76U);
    msg.setDestination(63955U);
    msg.setDestinationEntity(160U);
    msg.x = 0.2814248743702866;
    msg.y = 0.16181240888873283;
    msg.z = 0.409283667958411;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.03529531260890584);
    msg.setSource(49844U);
    msg.setSourceEntity(113U);
    msg.setDestination(51362U);
    msg.setDestinationEntity(79U);
    msg.x = 0.806013189725869;
    msg.y = 0.42074305354939656;
    msg.z = 0.5299774209194371;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.45768685051428726);
    msg.setSource(3237U);
    msg.setSourceEntity(87U);
    msg.setDestination(64669U);
    msg.setDestinationEntity(36U);
    msg.x = 0.24609289933710754;
    msg.y = 0.41285863679898205;
    msg.z = 0.5975093111993945;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.07166220039730364);
    msg.setSource(47777U);
    msg.setSourceEntity(5U);
    msg.setDestination(63766U);
    msg.setDestinationEntity(97U);
    msg.timeout = 60576U;
    msg.lat = 0.6479369837346725;
    msg.lon = 0.9565718920283282;
    msg.z = 0.5364096475028803;
    msg.z_units = 97U;
    msg.amplitude = 0.3521444059096034;
    msg.pitch = 0.23980506375813782;
    msg.speed = 0.7650311292561564;
    msg.speed_units = 152U;
    msg.custom.assign("FNYLJZTSVTBLSJERCTDGJHGZYEATAHPHWIRIOXVNRVPYZWPZEQCCCSQLQBZSWAJWFAOMNZLBSSPKEO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.9255271626047528);
    msg.setSource(60375U);
    msg.setSourceEntity(11U);
    msg.setDestination(4309U);
    msg.setDestinationEntity(85U);
    msg.timeout = 45163U;
    msg.lat = 0.7617906393789924;
    msg.lon = 0.8828011098562843;
    msg.z = 0.3857620838058968;
    msg.z_units = 202U;
    msg.amplitude = 0.3944696205571572;
    msg.pitch = 0.44941045746968544;
    msg.speed = 0.9960373056741783;
    msg.speed_units = 144U;
    msg.custom.assign("REYWQHKYVCIKXSMOJTXMFZVDGSOWDTAWLWNJFRKVBAMYSAVPAGMU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.9382013173355155);
    msg.setSource(12769U);
    msg.setSourceEntity(31U);
    msg.setDestination(11629U);
    msg.setDestinationEntity(165U);
    msg.timeout = 33606U;
    msg.lat = 0.16633384391089534;
    msg.lon = 0.3630534832169814;
    msg.z = 0.0459479285637211;
    msg.z_units = 150U;
    msg.amplitude = 0.11990265692630575;
    msg.pitch = 0.6469224986597737;
    msg.speed = 0.17107622199340378;
    msg.speed_units = 128U;
    msg.custom.assign("RKDPHHWUVBKNUETJLATNNHRASXCEDUTRUONVWQKXFCSTCDBDTJJBHGXCVIPCQRXBGRFQCVHHBSANSOKLFEOEZNZMCNPHPPDEZVPJTNATVMYSMEAQHGMAIWWYZOCLJYYYOLCYJXRZVUIXHJITLOIIXFOISXMYOUKPEMWDSANDMZLLKXJHYOEPZSPUCBZQGGFPAIFUDVQWGKLJF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.08896442697625018);
    msg.setSource(44623U);
    msg.setSourceEntity(38U);
    msg.setDestination(62643U);
    msg.setDestinationEntity(48U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.25000200093069236);
    msg.setSource(2591U);
    msg.setSourceEntity(133U);
    msg.setDestination(40779U);
    msg.setDestinationEntity(151U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.6865288287437216);
    msg.setSource(55231U);
    msg.setSourceEntity(3U);
    msg.setDestination(60343U);
    msg.setDestinationEntity(185U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.6725740184317238);
    msg.setSource(53592U);
    msg.setSourceEntity(208U);
    msg.setDestination(57974U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.4959554810996556;
    msg.lon = 0.38407196105065344;
    msg.z = 0.15496551259310165;
    msg.z_units = 127U;
    msg.radius = 0.35237326136737745;
    msg.duration = 31515U;
    msg.speed = 0.3107026149374815;
    msg.speed_units = 141U;
    msg.custom.assign("SABWGDNLZQLXWYRBBGVHLSECWYGVPSRZXUIGLKBQCSOUWYNWWVMEPQJXEFIGCYAKMMTLVWYAQYZPKXIPGMKOEAKFMQHPRYQCEVLVVMKHDFFSPVJYRCOGIAXRAIQBELSLMHKJTIFMOESCFJTZXNTOCJHAAJNJDDTNRGRSUUHFCFDTTUD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.08126792426372464);
    msg.setSource(30576U);
    msg.setSourceEntity(11U);
    msg.setDestination(5172U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.9134631773392017;
    msg.lon = 0.7422240350795904;
    msg.z = 0.8972643739417311;
    msg.z_units = 235U;
    msg.radius = 0.4736124089252878;
    msg.duration = 46746U;
    msg.speed = 0.7652195044271682;
    msg.speed_units = 180U;
    msg.custom.assign("OMPIERIJKKFPDXVSRDQSMBXCMZVAKOVXRWQNCNXEVCEIXNNZXNGRODTWDM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.8004790386699228);
    msg.setSource(21200U);
    msg.setSourceEntity(192U);
    msg.setDestination(11582U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.47136558873016576;
    msg.lon = 0.8108068970407574;
    msg.z = 0.2644255416879743;
    msg.z_units = 9U;
    msg.radius = 0.8574687138128873;
    msg.duration = 40692U;
    msg.speed = 0.3189805187029955;
    msg.speed_units = 138U;
    msg.custom.assign("FBEKVPAISSHAVRHUWAVUYPLFRMWRPIICAAWRHFUMWNC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.04473619565723064);
    msg.setSource(4664U);
    msg.setSourceEntity(56U);
    msg.setDestination(47198U);
    msg.setDestinationEntity(107U);
    msg.timeout = 7025U;
    msg.flags = 8U;
    msg.lat = 0.22296691117174872;
    msg.lon = 0.7365526267721095;
    msg.start_z = 0.5240470998921077;
    msg.start_z_units = 94U;
    msg.end_z = 0.20684381362160353;
    msg.end_z_units = 29U;
    msg.radius = 0.9037597401924488;
    msg.speed = 0.9962914430103843;
    msg.speed_units = 130U;
    msg.custom.assign("SAIUWGASBMTVNXUOFREFQXFIKXBTOASIMJLDSARMQGOSGOJZETGRLVDZCHTTYUYGMOPEDMLDTBPXRCQFDOJIYRKBWBFCLTYCPUYCIGWBHC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.3226071087780863);
    msg.setSource(24753U);
    msg.setSourceEntity(60U);
    msg.setDestination(26632U);
    msg.setDestinationEntity(240U);
    msg.timeout = 43323U;
    msg.flags = 36U;
    msg.lat = 0.8165823235397908;
    msg.lon = 0.8123924754883526;
    msg.start_z = 0.8921637581458172;
    msg.start_z_units = 148U;
    msg.end_z = 0.640879433133993;
    msg.end_z_units = 86U;
    msg.radius = 0.5649721308193788;
    msg.speed = 0.18111689334661307;
    msg.speed_units = 211U;
    msg.custom.assign("MZRVVZVGYJKCZWCMFGVGSJDGQHMAOPKFMEHBUELCDYZSFYTYXZCAMSDGFSLOLXJQTHXVWPEVRUBGIICLGORUDDNGPHQJQUXPWPNNFMAHDDNAYEYALSXPRIEGWFKLKLOHVZKXHUMBFRVBSXTUZXWRQZMNIRQZKAAKHPIOOWDEFH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.9110628652212327);
    msg.setSource(65251U);
    msg.setSourceEntity(202U);
    msg.setDestination(39137U);
    msg.setDestinationEntity(94U);
    msg.timeout = 50397U;
    msg.flags = 219U;
    msg.lat = 0.4810031374271293;
    msg.lon = 0.5751534238248607;
    msg.start_z = 0.4840896811478007;
    msg.start_z_units = 199U;
    msg.end_z = 0.641005574673373;
    msg.end_z_units = 49U;
    msg.radius = 0.5988953517014282;
    msg.speed = 0.30190873603513646;
    msg.speed_units = 101U;
    msg.custom.assign("CQVYUGRRFBAPHIJCSOJLRCPJKIBUGKYZYDDBFXNLUKCHQKFTTNRYVDUAYIMOWFNVZWAIHUCENYZTDHQJEKKGFUSAWNISMFYOTIFHXXCBMUCLEKJSMMRONHAWKWBRXQGEUMEQKLYNVPZZXSZXHPMIURFTQZZONCGTWHQPCTYV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.9113800636896792);
    msg.setSource(51029U);
    msg.setSourceEntity(139U);
    msg.setDestination(26287U);
    msg.setDestinationEntity(173U);
    msg.timeout = 44552U;
    msg.lat = 0.9924145336180957;
    msg.lon = 0.35692288955731744;
    msg.z = 0.8134405791411347;
    msg.z_units = 159U;
    msg.speed = 0.7257399531174172;
    msg.speed_units = 152U;
    msg.custom.assign("RYJCMGSKVDAZVYCOPAYXRQOPVHQXFYBAITYYUFEQDILQBPTHONJCZFOUDGGBTITYPNUAJPZNJOVLZXSWMXANMWKFJCXEDLGPKZSEQMWNTBZHEPYGZM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.8486176845686283);
    msg.setSource(65056U);
    msg.setSourceEntity(4U);
    msg.setDestination(39998U);
    msg.setDestinationEntity(99U);
    msg.timeout = 26563U;
    msg.lat = 0.21790393799784558;
    msg.lon = 0.16311156877374589;
    msg.z = 0.9187311872369339;
    msg.z_units = 211U;
    msg.speed = 0.11461508030044076;
    msg.speed_units = 147U;
    msg.custom.assign("EVEZWKIYFDAMJXKCEKQSOXVKWJBDLIULLTAYMDBWGBSTTKJXPRNMQBFMIYIESMOWCHZSFYVSZNNCVAGMXWSHYUAOHAZVQQLNSZJTNVJTUKUZTSNDGCXAQCZBWRTUIGCKKLJRVFUWUPADQED");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.7225255042872192);
    msg.setSource(63635U);
    msg.setSourceEntity(79U);
    msg.setDestination(43030U);
    msg.setDestinationEntity(165U);
    msg.timeout = 23151U;
    msg.lat = 0.7629980910693109;
    msg.lon = 0.471028086702608;
    msg.z = 0.5442169136166843;
    msg.z_units = 65U;
    msg.speed = 0.3020450805801749;
    msg.speed_units = 196U;
    msg.custom.assign("OKVSEINYFTWAIDMOZTLEGTYMPYVARIEHFBGHLOUPPKGAPCCZAHSVSTCSZVCTEMFRNQIGONTMOIQHHDIBPSZALUWBLFXBZVXSQHRZTCGDAFYAXELJBUUNFILMBDQZZROINGXNKYRJLKLWYPDIYCSVSTRFFTBLKNBGFWUZYQDQYRARBFPO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.6994784647216047);
    msg.setSource(35948U);
    msg.setSourceEntity(229U);
    msg.setDestination(26992U);
    msg.setDestinationEntity(195U);
    msg.x = 0.19464492919927057;
    msg.y = 0.048013190910708436;
    msg.z = 0.09751216556207476;
    msg.t = 0.31528836210558575;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.4719148672999951);
    msg.setSource(6748U);
    msg.setSourceEntity(50U);
    msg.setDestination(19317U);
    msg.setDestinationEntity(69U);
    msg.x = 0.4497496302912922;
    msg.y = 0.27081450619641423;
    msg.z = 0.7348536788873894;
    msg.t = 0.2785065988315749;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.3599771518890109);
    msg.setSource(43461U);
    msg.setSourceEntity(22U);
    msg.setDestination(49498U);
    msg.setDestinationEntity(217U);
    msg.x = 0.5147096875953695;
    msg.y = 0.1863416204474757;
    msg.z = 0.8784269419575356;
    msg.t = 0.5172813560516842;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.9081210922006808);
    msg.setSource(30636U);
    msg.setSourceEntity(116U);
    msg.setDestination(42434U);
    msg.setDestinationEntity(208U);
    msg.timeout = 64824U;
    msg.name.assign("YIWMCTRZMISYUBBYMNWGOSHVEXOHDEGKDRZVXUTTVPVURPWKJVVUUNEPFEOBUTQBLXQXEYFWJPTEKSXDHAARMFAMAOLKODKHFBFQLZIZFLALOJHYXNGQGDCWPEJISKWUCNSIOUIKRZPPATBTVQVXWHRPIDDFQHMQJNPB");
    msg.custom.assign("GLBJOWHPWEZRZEKLPHAJULKRYHUVGDFNDBKLNXQQAFMMWONLAITSFCJNFGTTSBKUSEDYXRISMNUFDEIXGPJVI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.8692757676309685);
    msg.setSource(12377U);
    msg.setSourceEntity(47U);
    msg.setDestination(29796U);
    msg.setDestinationEntity(175U);
    msg.timeout = 58686U;
    msg.name.assign("LOPGBINDIFTRJANURAMYTKSJIFAXCUIXGIZNADECURZRQHPQLQMTQZHVFMSZOYYLUGHHQLHZKXUPVONSKYBDGFWGKKROXOXSIOPNCLEVMIWSVUGPGCXVALBVHWSDPFQUN");
    msg.custom.assign("YEFXROJOMJLMFGBBQNFLQIPVBEKFYNHOLVWPHMAICJGRFNPSHCKOKNZEFTCMJWLFRKJTETBAJRSRQVICSOPBJNQXEKPDCQQDXFNDSIUAXDGKDVEKNYYWJQWOZAXZTLSMWBASZHUYQG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.8491160235769254);
    msg.setSource(64029U);
    msg.setSourceEntity(230U);
    msg.setDestination(22573U);
    msg.setDestinationEntity(23U);
    msg.timeout = 47579U;
    msg.name.assign("EYZNIVNQLDRHMUHLBHBBXKXROZCPUJLVEKJPIWKBEGMRYMYTWALEUFEKCWOXSVQGWJDRQPYMECDOQCRA");
    msg.custom.assign("RRLWXPMFUKLZWVLRXKNYUHQEDHOBYGFRMXAYFFSVGUPZDHYUZAMFGSTYFWQZCSCHQXPKKFLXJBISHJIISENQMHJGBVTLATDZCRSOALTXPFHGDYSUEGERSXZBJNYXQT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.30076321013643803);
    msg.setSource(53317U);
    msg.setSourceEntity(51U);
    msg.setDestination(42676U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.289045446548889;
    msg.lon = 0.4923961145421968;
    msg.z = 0.30512615419923894;
    msg.z_units = 67U;
    msg.speed = 0.7459552872637564;
    msg.speed_units = 137U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 61358U;
    tmp_msg_0.off_x = 0.43088251948407075;
    tmp_msg_0.off_y = 0.8495954901750163;
    tmp_msg_0.off_z = 0.8295938664164938;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.2578228673261139;
    msg.custom.assign("YLRWAIIATDGYTFZHDK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.3869972032507748);
    msg.setSource(48207U);
    msg.setSourceEntity(212U);
    msg.setDestination(25334U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.9034670196847482;
    msg.lon = 0.24100451017402913;
    msg.z = 0.3997712694231823;
    msg.z_units = 39U;
    msg.speed = 0.7679671835162938;
    msg.speed_units = 245U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.21479065611756187;
    tmp_msg_0.y = 0.2594392695014549;
    tmp_msg_0.z = 0.1262852686721122;
    tmp_msg_0.t = 0.1220582809234434;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.6422305225497386;
    msg.custom.assign("KYFCQYHLCBWDORUHYLBAREHMNGUNQTKICKYNKWFVXXRPGEUYELBFNUAHMJSOODYCXROFBWNGUICCPWQUATXOGAN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.8382676428434435);
    msg.setSource(63472U);
    msg.setSourceEntity(98U);
    msg.setDestination(61033U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.6021026546579044;
    msg.lon = 0.07445338795174405;
    msg.z = 0.1814670549750187;
    msg.z_units = 178U;
    msg.speed = 0.5352429434975209;
    msg.speed_units = 94U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7292072007094551;
    tmp_msg_0.y = 0.9508535332791646;
    tmp_msg_0.z = 0.4392396006820509;
    tmp_msg_0.t = 0.12535778203922332;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.025850294803687612;
    msg.custom.assign("CBQLHDKGDHOGGHZMNUNOOWLGVOEKLKMSISXJFNTYLKQFSJKGUCSXKIJAUAMHAWZCVXBBTZLJPUZQGYIAQCFVEQXURWTESIIXDFXHJKJEKIORBDWOBTPYXZTRPTVDVJTASNRWCEXCZIMVMJFYDCVVAHEWQUQSQTXHUYHLCYAXTG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.36599479079542474);
    msg.setSource(14996U);
    msg.setSourceEntity(208U);
    msg.setDestination(10194U);
    msg.setDestinationEntity(243U);
    msg.vid = 11293U;
    msg.off_x = 0.9110924469280952;
    msg.off_y = 0.9683228536824927;
    msg.off_z = 0.24326681941764294;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.811935155135968);
    msg.setSource(59333U);
    msg.setSourceEntity(114U);
    msg.setDestination(54810U);
    msg.setDestinationEntity(9U);
    msg.vid = 8844U;
    msg.off_x = 0.275721571582097;
    msg.off_y = 0.32018132686953804;
    msg.off_z = 0.45991305762241164;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.5329495571310738);
    msg.setSource(19268U);
    msg.setSourceEntity(157U);
    msg.setDestination(13046U);
    msg.setDestinationEntity(172U);
    msg.vid = 53438U;
    msg.off_x = 0.21975411605509798;
    msg.off_y = 0.47367104932179194;
    msg.off_z = 0.5465955630800331;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.597529277343142);
    msg.setSource(42774U);
    msg.setSourceEntity(95U);
    msg.setDestination(33006U);
    msg.setDestinationEntity(100U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.8277164642152982);
    msg.setSource(57734U);
    msg.setSourceEntity(170U);
    msg.setDestination(48852U);
    msg.setDestinationEntity(12U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.4220919653978634);
    msg.setSource(59384U);
    msg.setSourceEntity(91U);
    msg.setDestination(53986U);
    msg.setDestinationEntity(68U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.799524239466096);
    msg.setSource(7728U);
    msg.setSourceEntity(161U);
    msg.setDestination(27422U);
    msg.setDestinationEntity(98U);
    msg.mid = 7938U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.4031442077371925);
    msg.setSource(17645U);
    msg.setSourceEntity(185U);
    msg.setDestination(22216U);
    msg.setDestinationEntity(152U);
    msg.mid = 42414U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.032640585906724806);
    msg.setSource(63245U);
    msg.setSourceEntity(216U);
    msg.setDestination(11762U);
    msg.setDestinationEntity(242U);
    msg.mid = 4162U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.8864978451202283);
    msg.setSource(28489U);
    msg.setSourceEntity(146U);
    msg.setDestination(57634U);
    msg.setDestinationEntity(118U);
    msg.state = 122U;
    msg.eta = 20447U;
    msg.info.assign("SEUXCYLYPEDWCKMPEBTXUUBSNDHGBFQLHXNJXYIBROFAJAKXDBFUHDYNLVQVYMTVSWJXZSVECSPIWUJJPQROKTTXKUGVUAIQROTBZYQHRTNZRTRLGOIQUVMHVWCFDYWHPKAHNFCMLBVEJQASRNNDGITGAJLSRLYKVDOCZZPSCXJCMMKPEFZQJYXNNZGGOZDLQKRDSGHBWEZBTGLATDNRCWLFVHECOOEWMHFBPZWM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.15730599170909);
    msg.setSource(62766U);
    msg.setSourceEntity(218U);
    msg.setDestination(39762U);
    msg.setDestinationEntity(77U);
    msg.state = 209U;
    msg.eta = 48460U;
    msg.info.assign("PNDGZUEHKLNDCZNBCSFHFZWGAQQVQLCMJCWPCUVXPMTWVBJXIDPPZOBSLURPHUBFDMJYHQASDJSJCKOYPHNAXCQFGKWDYZXTCTGRHDYMBUMJVFKGRJLKRNXSOFXLEHIK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.9792640056572415);
    msg.setSource(52137U);
    msg.setSourceEntity(235U);
    msg.setDestination(45193U);
    msg.setDestinationEntity(140U);
    msg.state = 16U;
    msg.eta = 52608U;
    msg.info.assign("MVSJTTSUFEKQRXKTOBBCFEBCDATSBPJOEMFTKXIDOPHBUEAWGZVPEJFQDRPISRZPOTWMFJMUVUYAHCABRCQQONMIDVXTSDMYLJHFKBGRANHUYCZYCMQEKLYKNWLCBZWVEJOXUQGHVFIILRZYKZQMLSRVEXVOGPWGIKZJVFXUJNGCGSXPOBNDIUYHDGYNBRWWHTINQEIWSW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.7787238533075256);
    msg.setSource(18842U);
    msg.setSourceEntity(198U);
    msg.setDestination(64252U);
    msg.setDestinationEntity(206U);
    msg.system = 23402U;
    msg.duration = 20242U;
    msg.speed = 0.12280457211519813;
    msg.speed_units = 95U;
    msg.x = 0.4941976758610216;
    msg.y = 0.2728258519417214;
    msg.z = 0.19279502379866864;
    msg.z_units = 0U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.5466542877419515);
    msg.setSource(22303U);
    msg.setSourceEntity(41U);
    msg.setDestination(23115U);
    msg.setDestinationEntity(110U);
    msg.system = 3440U;
    msg.duration = 47197U;
    msg.speed = 0.806175263327924;
    msg.speed_units = 144U;
    msg.x = 0.43251460433102795;
    msg.y = 0.9523315814103306;
    msg.z = 0.20883320346908907;
    msg.z_units = 2U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.7754754446432164);
    msg.setSource(5273U);
    msg.setSourceEntity(240U);
    msg.setDestination(16069U);
    msg.setDestinationEntity(188U);
    msg.system = 6741U;
    msg.duration = 62407U;
    msg.speed = 0.1540341815904238;
    msg.speed_units = 92U;
    msg.x = 0.27838363812226075;
    msg.y = 0.10201931517902041;
    msg.z = 0.6358205006601069;
    msg.z_units = 125U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.5579724296124284);
    msg.setSource(27662U);
    msg.setSourceEntity(74U);
    msg.setDestination(6295U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.9403434531466865;
    msg.lon = 0.466447494194679;
    msg.speed = 0.5111003134689966;
    msg.speed_units = 238U;
    msg.duration = 32383U;
    msg.sys_a = 38393U;
    msg.sys_b = 42637U;
    msg.move_threshold = 0.6686561579578533;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.05339411137412231);
    msg.setSource(52817U);
    msg.setSourceEntity(97U);
    msg.setDestination(5149U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.0313979844800204;
    msg.lon = 0.35203971382959376;
    msg.speed = 0.5128194706591083;
    msg.speed_units = 209U;
    msg.duration = 33258U;
    msg.sys_a = 14237U;
    msg.sys_b = 33084U;
    msg.move_threshold = 0.25082322153691616;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.27596040426339097);
    msg.setSource(47219U);
    msg.setSourceEntity(168U);
    msg.setDestination(56076U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.8400062562572489;
    msg.lon = 0.295312359616266;
    msg.speed = 0.7923777046190984;
    msg.speed_units = 170U;
    msg.duration = 48993U;
    msg.sys_a = 18803U;
    msg.sys_b = 1214U;
    msg.move_threshold = 0.5108990113691237;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.46337735092902543);
    msg.setSource(7414U);
    msg.setSourceEntity(119U);
    msg.setDestination(57838U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.26443837878137777;
    msg.lon = 0.5328319155239275;
    msg.z = 0.7320151014515365;
    msg.z_units = 52U;
    msg.speed = 0.03707122860520551;
    msg.speed_units = 175U;
    msg.custom.assign("XNBDTMBLFRZFLWOGEAEGWUOHNJLMCQKJPTDLLOIVFQTJTZYUAFYUBHOXBWZWKXKKASASNSABFODRVJQIRYKGFFNEEJCAITDXCGVBXKVPVMWRYCOUIXSBUFXVSIAAUZTWSPGQMUTLZYCDTZVRYSKPMJPEGEHIBHXHEIJXOMDTFMBFZLNRUXWCROIQDNISHPPHGYAEQQENMGMNHDUIKELQDPLHLRTCVBQQKRCVZZJN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.43265694285655765);
    msg.setSource(38480U);
    msg.setSourceEntity(17U);
    msg.setDestination(8856U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.7726035551954308;
    msg.lon = 0.4886884846720483;
    msg.z = 0.815561371930776;
    msg.z_units = 229U;
    msg.speed = 0.8529693512675776;
    msg.speed_units = 80U;
    msg.custom.assign("EZFGEHVZSZXSDSAVMBKKKJXYTVPJACPEHTNMQGRUQNFNIWWGUMMLIIOYDBDAFTUDQJCTDCPDJCFRHFGFZHVNXJKWWWHSN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.021193689782545766);
    msg.setSource(24942U);
    msg.setSourceEntity(102U);
    msg.setDestination(20285U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.6753114267441647;
    msg.lon = 0.931444998435991;
    msg.z = 0.7517914950742056;
    msg.z_units = 155U;
    msg.speed = 0.6743046754452628;
    msg.speed_units = 187U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.4311860056887845;
    tmp_msg_0.lon = 0.89273883774271;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LBHRYSJODHXYAYAXHFWCFPEDPDXWJRIZYVIJDGDMDINHIVQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.1044358364108442);
    msg.setSource(957U);
    msg.setSourceEntity(228U);
    msg.setDestination(29217U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.12259622142548499;
    msg.lon = 0.500257004869713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.30045269328947);
    msg.setSource(5873U);
    msg.setSourceEntity(140U);
    msg.setDestination(37592U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.9871253933187327;
    msg.lon = 0.5240733679200679;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.9859862307208752);
    msg.setSource(50501U);
    msg.setSourceEntity(84U);
    msg.setDestination(8521U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.8205903086956263;
    msg.lon = 0.6987534131388282;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.12080648485925327);
    msg.setSource(51444U);
    msg.setSourceEntity(97U);
    msg.setDestination(30480U);
    msg.setDestinationEntity(194U);
    msg.timeout = 65147U;
    msg.lat = 0.8244684571560117;
    msg.lon = 0.8241260742738387;
    msg.z = 0.8053548144895104;
    msg.z_units = 13U;
    msg.pitch = 0.9170329669093644;
    msg.amplitude = 0.4628205682065354;
    msg.duration = 40676U;
    msg.speed = 0.004497197541133757;
    msg.speed_units = 249U;
    msg.radius = 0.6440554714112339;
    msg.direction = 111U;
    msg.custom.assign("FXIYRQNMWHCTZOHMBPBNISXLDTBRFSOUFHIPNMGAVJDSLBLSPDBFXLKVOJFCVXKHRSFCPIPIYAIWJJQCLYYQOXTUOEGGXOEPFMGHWVIKHNUUCJDDTIUQYVNEGLEVCFOTKUP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.9396321852469057);
    msg.setSource(42243U);
    msg.setSourceEntity(229U);
    msg.setDestination(64055U);
    msg.setDestinationEntity(132U);
    msg.timeout = 22187U;
    msg.lat = 0.19214604902205878;
    msg.lon = 0.21558681618439246;
    msg.z = 0.9414346129807466;
    msg.z_units = 40U;
    msg.pitch = 0.5669609508758429;
    msg.amplitude = 0.8790390566753339;
    msg.duration = 19786U;
    msg.speed = 0.7503353561590617;
    msg.speed_units = 199U;
    msg.radius = 0.3755017950349425;
    msg.direction = 159U;
    msg.custom.assign("BFMCPQQBLAVTJEZLOOJKTAEXFLXPWIRMSTOOKBLWVHKPVZGGIPCEXFFVHDMAIAFUNWSPTMVHUNVDCYVFOIYPYWGUCSUXJQB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.9155758502551049);
    msg.setSource(32813U);
    msg.setSourceEntity(216U);
    msg.setDestination(50271U);
    msg.setDestinationEntity(120U);
    msg.timeout = 44788U;
    msg.lat = 0.7365977680252633;
    msg.lon = 0.06403803034794298;
    msg.z = 0.8843064408055709;
    msg.z_units = 26U;
    msg.pitch = 0.3033636966417237;
    msg.amplitude = 0.3659940035126604;
    msg.duration = 54595U;
    msg.speed = 0.028883028796727772;
    msg.speed_units = 243U;
    msg.radius = 0.7727987860504347;
    msg.direction = 57U;
    msg.custom.assign("ZJTBOMTAHYELEGRXWRMNYBDYZDAELNCZDHXPMQGOKSFEYVLKBKJPWRSDBHSWYCCSWIWUXAZCRRRNNZEIJPCNXXHYTQUJHZVODQZFINYDIHVCHMFFPZUVWIWLVK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.1917551326306931);
    msg.setSource(34297U);
    msg.setSourceEntity(87U);
    msg.setDestination(53292U);
    msg.setDestinationEntity(58U);
    msg.formation_name.assign("TRCTIDWITEAITGCSSRNKDMUHDKLYVLOYCSSLMBFQDCTJDXYPZUHXUQWMPYGAEYXMHXJQZRUXITDHNFIMKUUXKQEHYBBQUQRXGACGBVGSAWCDVCDBAGPZHZHJQKRALLONCONPFCNVURFVAGLZPKWRJODODLZUUOSVZFPQBKOLMVYLEVJYJSZNEIHRSPJELPIFOIZNTZWIMAMXENIRBRACSOJTWNKQKGHWXTYQYFBPVBTE");
    msg.reference_frame = 41U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 10614U;
    tmp_msg_0.off_x = 0.6681754857746286;
    tmp_msg_0.off_y = 0.5864817657693648;
    tmp_msg_0.off_z = 0.12540303805643616;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("JXNHGFEIHRZKTMVJZAEPQFYXOVOHFQKJQCJAZSQCXDPZMOZNKHBHZSAQKFZGMCXYJRLTUAORRUYIBQDRPGUNDBKEWPVOYDXTAMWWIVAJHEIBNYWTAUPENORBIWIIVBNOTCGAYBEZYP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.19557825514545868);
    msg.setSource(55255U);
    msg.setSourceEntity(27U);
    msg.setDestination(25379U);
    msg.setDestinationEntity(136U);
    msg.formation_name.assign("ZIDTICVTROECPQQUTIFBNGKFKJOXEBIVYJINLAHWYMDSPPQGKHVODZLXEYRAXNKUUJOSWGDFZJWCFLQENTDFXUDMFGNRJRRCEVZLKYAWHCGQYWMMUKWOARKOZQUEEMLOBFYCVPXTSLICSXIBAHLOEZCNTLHRGWHWPJFSVORQHTTAIADMYDNLBRYZXANRXIADEBPBYJOSBWLGVIKVKPUMXCSTNWESATZVUMBJF");
    msg.reference_frame = 189U;
    msg.custom.assign("QHDSKTNXJEGFJXLBXOHLMEDCAKZQPKSFUQTLYXQQECFYCOHMMTZMFXBJXPVGYRAGNHEMPFSBOMVTORGYDGFEARCWLHOPEOBOIJXPQRWWFJXKVXOINXTRUBFOHLVSPAPVLMKRTGMKHWJDITNSBDFVCUI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.32655831122293755);
    msg.setSource(25426U);
    msg.setSourceEntity(235U);
    msg.setDestination(47385U);
    msg.setDestinationEntity(37U);
    msg.formation_name.assign("HHJWDJKLXESMTUJOHQPRRYXJGIMRYMHZYTXDYWULWLIZVMXBZGXCEHOZZYGKUUROCJXZAFWWRAYUTYYVJMJKDNXSRVKBNQCGGSNPLJFHPWOVOANVNDVBFNBPZPVIHUTB");
    msg.reference_frame = 57U;
    msg.custom.assign("KXJOHXAIHMWWHETOROWXOORVUVRTZAVOKMOHYXPBYUKHEDQBGYPSABVYKNKJNASGGIJDLQKHMHLVEIFUBAUOSWZNUGFFNUWSGFBIUNKBCLDKALYRTBGYHCTQJNIPZXYXZFZSCRDGPTVVBAFCRAYQNESMJZNMLDPTOPALXLJMJTQFMCWXUQHECMRLJEQYBVTVRIILLSBWKFDDSJACZEMPGZPZZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.3119785808847607);
    msg.setSource(30902U);
    msg.setSourceEntity(4U);
    msg.setDestination(8639U);
    msg.setDestinationEntity(184U);
    msg.group_name.assign("QVDOIOMCMZNUTGPZJFUSNVQFPLISYAFQMGICMVGKQMDCIAZZUGBLOUYRODORSVALJFNHEQUMJSYUEASLXBLCHKGRJOYYZHZJWJNWXQAGYUEZFWMQIPERVVCPUFBXHCJDAIFDYIQTMNNVKFFRXHEQWXPGKSVWELBLMCDTRTESHRNPNHZPDCJYKGKWKNGVRWDOLWBVINOIXSX");
    msg.formation_name.assign("KTRNFUGEPJNECTLXTYZDVTUUGRVOMGZJLXLIZPIYAFNXDNVTMTJZBAOW");
    msg.plan_id.assign("FBSBRJBYEYOIXHNDNJAZLYNQBVDRJFUTKZXUXWTFEGDEDPOHBCMCHIBETVHOZYRUJLBITNDDTFTOZLOVTXALIJVLVASSQNPYCCQGBUPFLPVHGFJUSKNHMERXMMYPZIW");
    msg.description.assign("ODDNIWRNMLVGJLRVNRFBIJEYDLWWDZCIWSFBESTTKVGBCLJTKOAMCCHYFERUHNXLYWJPOBQEHMURUQDNABTXKJFYZTWIHTYCBMQKEOPIMKWOFXUKR");
    msg.leader_speed = 0.7159605311351322;
    msg.leader_bank_lim = 0.47874242616793505;
    msg.pos_sim_err_lim = 0.959862080836924;
    msg.pos_sim_err_wrn = 0.39642129043122276;
    msg.pos_sim_err_timeout = 54191U;
    msg.converg_max = 0.9645116683811304;
    msg.converg_timeout = 2151U;
    msg.comms_timeout = 22786U;
    msg.turb_lim = 0.6864782913207076;
    msg.custom.assign("KZXWUXCIMKNIFXGQBEVGGGRTYWDMMSMOCQUJIWRVMXSLJCAKDLZUSIINJVFNYIFOHKDHLCHFAERETQSXAWPZZUOIJVDGELWLZUKHDLAFJCUUDLSZHYBFPKVABSDWEJLMISQSATGXHSMAVOUZPPQBLYVTTDHNJHWJTYRYYDKXFPACOCRTHAGOJOBVRPNBGJNBDONVQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.7407208677104835);
    msg.setSource(60974U);
    msg.setSourceEntity(63U);
    msg.setDestination(62196U);
    msg.setDestinationEntity(76U);
    msg.group_name.assign("YKNVRAHAVQPEGOIKHQZHGMSFUYHOBOIPLWKUKEKVQASDLOQBAUTMAZTPHWSAGAIZVKTZWXNWXE");
    msg.formation_name.assign("KMUOQTAVIDPZPPYJPXHCBWDHKQZNRUBAUREFKWPJCVSUGMCSFTXLNNARGJEYLXSSAR");
    msg.plan_id.assign("LERHVNQSZOJKSARUZBHFHTRCINXPTITGBSYSWDDOKCNJEHOCDQCKBBBBIGMUVNJIUPOZRARJSLYXRXQUEEIFXFNSLYUMNVZJCMZPUA");
    msg.description.assign("GPOJOQYLVNWKOPKNSEKCVQAEWNZKOSYMSGDIVUTZGBWEZNLZSQNQRBLFKSBKGXEEJATTAVTJQISZPLEHISADD");
    msg.leader_speed = 0.9097077580894047;
    msg.leader_bank_lim = 0.061013733905630474;
    msg.pos_sim_err_lim = 0.7280593867616242;
    msg.pos_sim_err_wrn = 0.3141843066115092;
    msg.pos_sim_err_timeout = 12417U;
    msg.converg_max = 0.22650901491929176;
    msg.converg_timeout = 48630U;
    msg.comms_timeout = 43478U;
    msg.turb_lim = 0.2711698091582222;
    msg.custom.assign("OFKFXLCQSBMBXILAD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.8844450371649122);
    msg.setSource(18260U);
    msg.setSourceEntity(165U);
    msg.setDestination(28419U);
    msg.setDestinationEntity(57U);
    msg.group_name.assign("VKDUYIBIVDEGYPQLSZXAYINDLOKNPJARRDKLXZUEWQPKSUFZWORYJVXHMWNPHHCQAAMTXQGSOUW");
    msg.formation_name.assign("GQPMCKWKGNWYDNBKDOASLERSUFMUXSJGCSIPDJYKNSWVVDFSNBKKEQMNVHUXQJAHVSNAYBRJITUUPBBPMIMZNWPOOGIRLLTC");
    msg.plan_id.assign("QHBPXDGYZEWWILZFSJNTVCVKCJKIKQEXUAZPTTHYVEGFNMUWUKAHKIMWKJZESFDOITACBZEOGXUFPUHJCKSICFGBSLDMWOUTKMVQEUWYGIDPUTJWHALQDNSJPQRLBBUGNVBBCMIYGRMWKTPNJIRXJLBFHYXYHXCIOPSARCCBZQZRWRDQRSASLAGZHYOJEASNTXHXNFVYDQYVGPXNSIOQLOJLLMMXODAEZMONGOCQHNLYWKTPDR");
    msg.description.assign("PMOPDZKVWSKIEXCOJVJUGEVPRJZLFTDBNMTTWXDVGVUBIIAKJLEQFZVRKDOMBRNYBDUSSVQORSWKMSTRHRDGIANFLZHEHLAHPJKYYTTMOBNTSXLGKQDNQOGGKAMYJHMXUHFLRBFCCYPOUMWIXXOLFZJHFUCUBVENNAQOQIAMEYCSFWHCYCEGDUGRBZQQBWXEKSIACHYKGZYPUUQC");
    msg.leader_speed = 0.5010281474157491;
    msg.leader_bank_lim = 0.11962363892780792;
    msg.pos_sim_err_lim = 0.05759541842582494;
    msg.pos_sim_err_wrn = 0.06311130855371372;
    msg.pos_sim_err_timeout = 22096U;
    msg.converg_max = 0.8501025888957863;
    msg.converg_timeout = 38629U;
    msg.comms_timeout = 39320U;
    msg.turb_lim = 0.6398742598895152;
    msg.custom.assign("POYWDCBGCKPQKEJRLGWQLKSPVHSEWNHJCITDRTJVUHYHFAMFJYKGWEMMQPSUAPAVWRSNYBIQQMOTBLNBLLABNRYZDFXHBPFXMVGMHAOXY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.35775787769034395);
    msg.setSource(65470U);
    msg.setSourceEntity(8U);
    msg.setDestination(61809U);
    msg.setDestinationEntity(254U);
    msg.control_src = 5280U;
    msg.control_ent = 31U;
    msg.timeout = 0.7500687455800492;
    msg.loiter_radius = 0.10860164665235938;
    msg.altitude_interval = 0.08367558801258468;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.4659417946601302);
    msg.setSource(12132U);
    msg.setSourceEntity(25U);
    msg.setDestination(5831U);
    msg.setDestinationEntity(246U);
    msg.control_src = 31581U;
    msg.control_ent = 146U;
    msg.timeout = 0.12071439195172884;
    msg.loiter_radius = 0.6210022341440189;
    msg.altitude_interval = 0.7379437789928983;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.07745683789060287);
    msg.setSource(33536U);
    msg.setSourceEntity(75U);
    msg.setDestination(62707U);
    msg.setDestinationEntity(229U);
    msg.control_src = 39334U;
    msg.control_ent = 170U;
    msg.timeout = 0.7445733996303119;
    msg.loiter_radius = 0.778761940154863;
    msg.altitude_interval = 0.766422197516285;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.24311135402520767);
    msg.setSource(22252U);
    msg.setSourceEntity(33U);
    msg.setDestination(14907U);
    msg.setDestinationEntity(169U);
    msg.flags = 254U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7427621046493654;
    tmp_msg_0.speed_units = 75U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5249371412754941;
    tmp_msg_1.z_units = 53U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9454957031226114;
    msg.lon = 0.16430092369981764;
    msg.radius = 0.9779006905432911;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.9377023835314313);
    msg.setSource(26011U);
    msg.setSourceEntity(242U);
    msg.setDestination(6410U);
    msg.setDestinationEntity(218U);
    msg.flags = 252U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8598683534846059;
    tmp_msg_0.speed_units = 166U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.06854462266873906;
    tmp_msg_1.z_units = 1U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2728331643727733;
    msg.lon = 0.9457995629342548;
    msg.radius = 0.5062194269153643;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.9513132031191683);
    msg.setSource(40002U);
    msg.setSourceEntity(212U);
    msg.setDestination(41369U);
    msg.setDestinationEntity(122U);
    msg.flags = 1U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8776643789821165;
    tmp_msg_0.speed_units = 23U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.10607799059125711;
    tmp_msg_1.z_units = 12U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5177299999853676;
    msg.lon = 0.36059419871625153;
    msg.radius = 0.6906027297965598;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.5304831896201039);
    msg.setSource(36053U);
    msg.setSourceEntity(65U);
    msg.setDestination(12808U);
    msg.setDestinationEntity(177U);
    msg.control_src = 19150U;
    msg.control_ent = 160U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 217U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.564693153083528;
    tmp_tmp_msg_0_0.speed_units = 240U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8941586401086554;
    tmp_tmp_msg_0_1.z_units = 95U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9149798731041032;
    tmp_msg_0.lon = 0.23911345015855046;
    tmp_msg_0.radius = 0.4037799093188069;
    msg.reference.set(tmp_msg_0);
    msg.state = 118U;
    msg.proximity = 62U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.6240141135037773);
    msg.setSource(1679U);
    msg.setSourceEntity(9U);
    msg.setDestination(58936U);
    msg.setDestinationEntity(80U);
    msg.control_src = 63996U;
    msg.control_ent = 215U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 1U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4923721596960956;
    tmp_tmp_msg_0_0.speed_units = 117U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5005765615005262;
    tmp_tmp_msg_0_1.z_units = 234U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.4161723352917628;
    tmp_msg_0.lon = 0.7585500329677777;
    tmp_msg_0.radius = 0.3344380331400699;
    msg.reference.set(tmp_msg_0);
    msg.state = 228U;
    msg.proximity = 201U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.5599938121028842);
    msg.setSource(34374U);
    msg.setSourceEntity(195U);
    msg.setDestination(60657U);
    msg.setDestinationEntity(19U);
    msg.control_src = 13733U;
    msg.control_ent = 143U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 228U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5291679989898213;
    tmp_tmp_msg_0_0.speed_units = 36U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.1933910985500823;
    tmp_tmp_msg_0_1.z_units = 181U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.2174415383767635;
    tmp_msg_0.lon = 0.8557786074282986;
    tmp_msg_0.radius = 0.9008760730242052;
    msg.reference.set(tmp_msg_0);
    msg.state = 84U;
    msg.proximity = 0U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.43551979701827936);
    msg.setSource(37921U);
    msg.setSourceEntity(174U);
    msg.setDestination(39278U);
    msg.setDestinationEntity(161U);
    msg.ax_cmd = 0.5786034484169664;
    msg.ay_cmd = 0.82507537917091;
    msg.az_cmd = 0.6395670215669819;
    msg.ax_des = 0.6803942365192905;
    msg.ay_des = 0.947532732564207;
    msg.az_des = 0.3170796848992946;
    msg.virt_err_x = 0.37668182575561115;
    msg.virt_err_y = 0.7849900075055479;
    msg.virt_err_z = 0.06469882183285569;
    msg.surf_fdbk_x = 0.4441151476969598;
    msg.surf_fdbk_y = 0.08843462323974516;
    msg.surf_fdbk_z = 0.11697096551355068;
    msg.surf_unkn_x = 0.340431804724166;
    msg.surf_unkn_y = 0.15616097396491713;
    msg.surf_unkn_z = 0.06648642365147861;
    msg.ss_x = 0.2747204955927165;
    msg.ss_y = 0.24943993330672964;
    msg.ss_z = 0.2639730338266504;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("QGHBRICTWACFWGAARFBQLIEOLSIHDZRQIYIYSVADSVEQTJFBDRNYBETOKRPWNCWRPEVEKJIGXTBLOXHMWVWJCESEZURDCVDNUNLAZLGQGLXVSKSCELWVFTOUBTPJYYGFBFYZDTWAFPPYDUDFALFKHFMIPZRHPXWVXMPMYXCGTOAQWMKUJNUGKGSOBMVKAUSODNGHMTZKNYVZIQALDMPUOJTXKSH");
    tmp_msg_0.dist = 0.01238780474353296;
    tmp_msg_0.err = 0.5750730137932358;
    tmp_msg_0.ctrl_imp = 0.31701735777202245;
    tmp_msg_0.rel_dir_x = 0.9659270636734296;
    tmp_msg_0.rel_dir_y = 0.9203935051121422;
    tmp_msg_0.rel_dir_z = 0.19560171610344346;
    tmp_msg_0.err_x = 0.9710798468500182;
    tmp_msg_0.err_y = 0.6929793563193781;
    tmp_msg_0.err_z = 0.3251760804722438;
    tmp_msg_0.rf_err_x = 0.4573988130372646;
    tmp_msg_0.rf_err_y = 0.429877036458157;
    tmp_msg_0.rf_err_z = 0.8258819647588013;
    tmp_msg_0.rf_err_vx = 0.9967868613058217;
    tmp_msg_0.rf_err_vy = 0.36988794468343766;
    tmp_msg_0.rf_err_vz = 0.23944101758418213;
    tmp_msg_0.ss_x = 0.2892193953377139;
    tmp_msg_0.ss_y = 0.2472912695422269;
    tmp_msg_0.ss_z = 0.9293188764198781;
    tmp_msg_0.virt_err_x = 0.5141925587799179;
    tmp_msg_0.virt_err_y = 0.826989679067041;
    tmp_msg_0.virt_err_z = 0.7415077105198605;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.3244205832410155);
    msg.setSource(3295U);
    msg.setSourceEntity(163U);
    msg.setDestination(6188U);
    msg.setDestinationEntity(203U);
    msg.ax_cmd = 0.5769307013534986;
    msg.ay_cmd = 0.85314977534179;
    msg.az_cmd = 0.6781339378954977;
    msg.ax_des = 0.17189558978885322;
    msg.ay_des = 0.536956517897486;
    msg.az_des = 0.9398220651861241;
    msg.virt_err_x = 0.6521999601744362;
    msg.virt_err_y = 0.46560536766506977;
    msg.virt_err_z = 0.4518649772539517;
    msg.surf_fdbk_x = 0.5808462835652624;
    msg.surf_fdbk_y = 0.2497617081787199;
    msg.surf_fdbk_z = 0.936778278056544;
    msg.surf_unkn_x = 0.26034172207461925;
    msg.surf_unkn_y = 0.20957145784315778;
    msg.surf_unkn_z = 0.8081702367878277;
    msg.ss_x = 0.0796811826922742;
    msg.ss_y = 0.149403519307168;
    msg.ss_z = 0.7030662817813024;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.5241156125837897);
    msg.setSource(19933U);
    msg.setSourceEntity(225U);
    msg.setDestination(65192U);
    msg.setDestinationEntity(204U);
    msg.ax_cmd = 0.0046480207523672545;
    msg.ay_cmd = 0.3895825414365349;
    msg.az_cmd = 0.8066041449022401;
    msg.ax_des = 0.4480591694908802;
    msg.ay_des = 0.5835884863871849;
    msg.az_des = 0.7938247609813096;
    msg.virt_err_x = 0.10021497374018995;
    msg.virt_err_y = 0.8287281128572914;
    msg.virt_err_z = 0.980839204407584;
    msg.surf_fdbk_x = 0.5363796570834153;
    msg.surf_fdbk_y = 0.380212279935603;
    msg.surf_fdbk_z = 0.5742064508293068;
    msg.surf_unkn_x = 0.7850986343735548;
    msg.surf_unkn_y = 0.950021256788185;
    msg.surf_unkn_z = 0.22411828864670402;
    msg.ss_x = 0.21466793537421813;
    msg.ss_y = 0.7582494377165594;
    msg.ss_z = 0.7629198645403192;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("JLCHUNCWFGQMHQPSLBOXJCFKDFTKSHSXKVTLPZVZBFYBWIXGVVEUWSEKVBFOHYRRRPYDOLNGEVZDVECFZUHITKUL");
    tmp_msg_0.dist = 0.46782341573734476;
    tmp_msg_0.err = 0.035619260234020844;
    tmp_msg_0.ctrl_imp = 0.4674162552879845;
    tmp_msg_0.rel_dir_x = 0.021107224609907216;
    tmp_msg_0.rel_dir_y = 0.28190039058267824;
    tmp_msg_0.rel_dir_z = 0.8926904208736556;
    tmp_msg_0.err_x = 0.6013572765126087;
    tmp_msg_0.err_y = 0.6054410980960235;
    tmp_msg_0.err_z = 0.18184695528895944;
    tmp_msg_0.rf_err_x = 0.0016269470613277104;
    tmp_msg_0.rf_err_y = 0.6178664989566687;
    tmp_msg_0.rf_err_z = 0.3537147120230678;
    tmp_msg_0.rf_err_vx = 0.12298373884128277;
    tmp_msg_0.rf_err_vy = 0.7782596393295919;
    tmp_msg_0.rf_err_vz = 0.302810015256729;
    tmp_msg_0.ss_x = 0.35968615594103914;
    tmp_msg_0.ss_y = 0.837578015756498;
    tmp_msg_0.ss_z = 0.0710807235917742;
    tmp_msg_0.virt_err_x = 0.8004190739583024;
    tmp_msg_0.virt_err_y = 0.2628471937277418;
    tmp_msg_0.virt_err_z = 0.042229143224428056;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.34595599921007625);
    msg.setSource(17662U);
    msg.setSourceEntity(71U);
    msg.setDestination(7716U);
    msg.setDestinationEntity(56U);
    msg.s_id.assign("ZYZLINXSNQWCMLMSYSSQVLBAKXSEPQUCXJNRTTMHVLSPIWONDHHUQCPVZDIHJOGWCKNLWWRMNFNZIUNGROVDEEVCZAOWKZBZXYFRJXSSIFJRRJPOHFQSAPFXTBMQAZGLGUHKGDLVEMEYMCPOBXRYVVYBEORVMTOICUUXGDJCDKOWNPKLEXQFAJBVTIGMAFBBQDFHBKAPCBYXHHUPFUUQTDKKFSEWRLKQJYIAYZPCW");
    msg.dist = 0.2361819561471673;
    msg.err = 0.8299692943496018;
    msg.ctrl_imp = 0.2637233029677797;
    msg.rel_dir_x = 0.9829816388973506;
    msg.rel_dir_y = 0.29001384350567183;
    msg.rel_dir_z = 0.15316456477953988;
    msg.err_x = 0.6211955165926797;
    msg.err_y = 0.3631787055520276;
    msg.err_z = 0.5729721267824894;
    msg.rf_err_x = 0.1727600960155501;
    msg.rf_err_y = 0.5554978304818792;
    msg.rf_err_z = 0.2888429827493002;
    msg.rf_err_vx = 0.8023860690897633;
    msg.rf_err_vy = 0.8172148803904412;
    msg.rf_err_vz = 0.4798984927272212;
    msg.ss_x = 0.6417368285730627;
    msg.ss_y = 0.48494393084777454;
    msg.ss_z = 0.647904976293269;
    msg.virt_err_x = 0.39491221646036045;
    msg.virt_err_y = 0.8571700980987181;
    msg.virt_err_z = 0.9583698086273167;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.7547854313195035);
    msg.setSource(3512U);
    msg.setSourceEntity(98U);
    msg.setDestination(14167U);
    msg.setDestinationEntity(174U);
    msg.s_id.assign("GPDNEUFAJMLXYLNUFQDZLUBZVJOTYWNPOWVAMCBOEGZPTPXVUBOOYRTYFFUZNYSQHLQKPHPVFBHGQWALTJVUUEBBTSMZDHIWMCABVTTCWWJSKGKGPKSTQMCEDJMZNLFRXOCFVCVOIVCKXHRRTWXYNOHIHKRSHQIOEVIIYAEAZIDAWIBAKFZBJZCNDMOEXICILRC");
    msg.dist = 0.9574586974976793;
    msg.err = 0.4086020347734606;
    msg.ctrl_imp = 0.5280765894345114;
    msg.rel_dir_x = 0.6348440811786419;
    msg.rel_dir_y = 0.7788344937110578;
    msg.rel_dir_z = 0.13365476900976447;
    msg.err_x = 0.3858287941711688;
    msg.err_y = 0.6186713793171424;
    msg.err_z = 0.43732425822797893;
    msg.rf_err_x = 0.6581047113935525;
    msg.rf_err_y = 0.16294564030986214;
    msg.rf_err_z = 0.3190356443768587;
    msg.rf_err_vx = 0.9925852126046449;
    msg.rf_err_vy = 0.919042094502495;
    msg.rf_err_vz = 0.872680679124256;
    msg.ss_x = 0.9663161930354176;
    msg.ss_y = 0.8779590299989598;
    msg.ss_z = 0.7966820739248122;
    msg.virt_err_x = 0.04398647245312959;
    msg.virt_err_y = 0.4957638373492329;
    msg.virt_err_z = 0.09317209322067876;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.9876876065391658);
    msg.setSource(51688U);
    msg.setSourceEntity(18U);
    msg.setDestination(62732U);
    msg.setDestinationEntity(11U);
    msg.s_id.assign("CLREIHXSMOFYAQBZURQIBLKOYCUPSOLVIZOLKIJPBYXWYTTUNEWADXVPLMKVUZFGAAPSSEMPFOHWRTXQSMQFZNBDJNWLFXEBCJDEZPVTYCXCIAEQPGJNEMMVFYPKQHHDUYSDRHEGCCKAHRHDNTCRFJZXSFRDZQNPHUOYCBDLZBAWHGARRGUDZMVA");
    msg.dist = 0.38939007541342263;
    msg.err = 0.5742539664064736;
    msg.ctrl_imp = 0.8170038491755285;
    msg.rel_dir_x = 0.5806859732259492;
    msg.rel_dir_y = 0.4376737531000082;
    msg.rel_dir_z = 0.2439902599349284;
    msg.err_x = 0.6869374844874803;
    msg.err_y = 0.2945941747111319;
    msg.err_z = 0.6158502923619715;
    msg.rf_err_x = 0.35779656580121166;
    msg.rf_err_y = 0.3325252947697328;
    msg.rf_err_z = 0.7176684956257642;
    msg.rf_err_vx = 0.8658295164698788;
    msg.rf_err_vy = 0.2967209141374656;
    msg.rf_err_vz = 0.11485077163852386;
    msg.ss_x = 0.37210306498302725;
    msg.ss_y = 0.887854127156503;
    msg.ss_z = 0.4252013037251864;
    msg.virt_err_x = 0.42295205109504896;
    msg.virt_err_y = 0.13146705147557436;
    msg.virt_err_z = 0.426993415578397;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.5052130237936727);
    msg.setSource(18259U);
    msg.setSourceEntity(224U);
    msg.setDestination(9012U);
    msg.setDestinationEntity(86U);
    msg.timeout = 1219U;
    msg.rpm = 0.20765283017530023;
    msg.direction = 69U;
    msg.custom.assign("KPGRHUDFRXUITKVNAADXEWRINGXUEJXCLRCTTSSEXHSTIWPWTYFFHTPLGHXUCNFNYJHJTWFNLPSMCREZUGXNIUQBWAROWPJODJSLJCAEYQLKMTDLSMYPOTOFOWKQAUZCHBOTJQRZBOHVVKHRDBAKCSDEBQYRIGDZZQVPAPXBVHGXYEKKSMMALK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.3057141098989019);
    msg.setSource(62123U);
    msg.setSourceEntity(238U);
    msg.setDestination(24663U);
    msg.setDestinationEntity(189U);
    msg.timeout = 5150U;
    msg.rpm = 0.36804535899162105;
    msg.direction = 76U;
    msg.custom.assign("AVTJRVEMLPZAPPRUSUIXSQBMQBTXHLCCFAZLIWXLEWQQYRWVWYPCMHMKTGGOPDDZVEGXFLMXRQFFHHIBQUPUNPIXA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.4221516949160996);
    msg.setSource(25910U);
    msg.setSourceEntity(102U);
    msg.setDestination(57636U);
    msg.setDestinationEntity(75U);
    msg.timeout = 64185U;
    msg.rpm = 0.6760538083459399;
    msg.direction = 252U;
    msg.custom.assign("SGRJFREBMEQBECOTCWHEVQPWDNRFAGKXBHNNVLTCUHGMCYTLTYYHIYAEW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.4813846881547754);
    msg.setSource(63513U);
    msg.setSourceEntity(122U);
    msg.setDestination(47986U);
    msg.setDestinationEntity(139U);
    msg.op_mode = 19U;
    msg.error_count = 187U;
    msg.error_ents.assign("DUTVUTOXWQXERHSHIJKDVSTBYPKPWFKVQQFPMUSJGIVKEGVGTBQQVPNGVWHVJODMGZILKUPEKPLNFCZMGMHWVZPSRKKAAMDXL");
    msg.maneuver_type = 19899U;
    msg.maneuver_stime = 0.279072273819317;
    msg.maneuver_eta = 55562U;
    msg.control_loops = 1442279980U;
    msg.flags = 238U;
    msg.last_error.assign("JYRRDFHAKVBQWYNXDQLHGLVNZDSPPFOQGRKGSUVOCCLBIAQNERHELIJYJLJOSYRPXKRAIAAJTBXIVE");
    msg.last_error_time = 0.26734819101240626;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.8708238997850305);
    msg.setSource(4356U);
    msg.setSourceEntity(75U);
    msg.setDestination(6120U);
    msg.setDestinationEntity(221U);
    msg.op_mode = 235U;
    msg.error_count = 174U;
    msg.error_ents.assign("QZOUTXTFJJDFQPSEPHSPAHWRQYAVEBUXCHPRWIMQHNCGMDYUYIKLOCPGTRKIXJSAKZXIREUMIXAODJEGNCVKKGIGJEXDKSKZZCIBHWUMHWESTPQLYONVDAFSCBHFDQLOCSUDTDXNFYXNTLBRVWM");
    msg.maneuver_type = 34177U;
    msg.maneuver_stime = 0.5711032535117306;
    msg.maneuver_eta = 16896U;
    msg.control_loops = 2088444511U;
    msg.flags = 61U;
    msg.last_error.assign("SBJTIRFEZVJ");
    msg.last_error_time = 0.3271246471949153;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.14230206049861638);
    msg.setSource(27745U);
    msg.setSourceEntity(76U);
    msg.setDestination(20021U);
    msg.setDestinationEntity(126U);
    msg.op_mode = 27U;
    msg.error_count = 22U;
    msg.error_ents.assign("NHRMEQZTNEIKBZPSQALUNIAHPVUZVUUGXCGQOCCGSXCWBHYBDNJHUEGNSFKLPHMWGKTEUPMAUCZCNOKYXMUFWJJMBSOM");
    msg.maneuver_type = 55387U;
    msg.maneuver_stime = 0.9004355422527258;
    msg.maneuver_eta = 39007U;
    msg.control_loops = 2655633548U;
    msg.flags = 118U;
    msg.last_error.assign("AMUDDKVXQNLWAJCXSPQSZUHUSJPRIMDEAPNESYMGFOYJAPQZZYBBTOULEAYUQSYIDLPCRSOVIFFXCZPITGXRLNKFLHEFGTQUUHIVQWMISNOILYHDNCHBGMXHLRTBZJADEQDAJWWOYTYJTXUACMKICEWHBWMTWVYLVQCQXIHNPVJRYUZSGKPOWGVRKTFF");
    msg.last_error_time = 0.2779409684468679;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.9722477540544033);
    msg.setSource(1559U);
    msg.setSourceEntity(142U);
    msg.setDestination(43057U);
    msg.setDestinationEntity(148U);
    msg.type = 221U;
    msg.request_id = 23649U;
    msg.command = 154U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 63905U;
    tmp_msg_0.lat = 0.7685057777615024;
    tmp_msg_0.lon = 0.19000093433766452;
    tmp_msg_0.z = 0.6153752758884504;
    tmp_msg_0.z_units = 44U;
    tmp_msg_0.speed = 0.431791126322982;
    tmp_msg_0.speed_units = 119U;
    tmp_msg_0.bearing = 0.5682532931871502;
    tmp_msg_0.cross_angle = 0.8301938526396476;
    tmp_msg_0.width = 0.9564837936948537;
    tmp_msg_0.length = 0.4502363706888256;
    tmp_msg_0.hstep = 0.9847478096750036;
    tmp_msg_0.coff = 27U;
    tmp_msg_0.alternation = 246U;
    tmp_msg_0.flags = 244U;
    tmp_msg_0.custom.assign("RUQMIHSLFFOGOHDJENOLPJFPZVZZQILPNGUTNNECKJIQZVGZYVOLNNVRTFIMXXYSOXHRLEUAVGCRGAWDOMVYNHCWGRBYURAEBGEBXKZISZKJESQNNBWITXUWCEGUYSAMWOK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 9494U;
    msg.info.assign("ZTTEMHSOQARGQANFXFRAXYPWMYTNDDENLBSPRGSAJAMLZRYJUUIQESSTLMEOOCQCLPXCRWAVFGWTIHZMCTJVKXUCGVQQKFL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.05048318727610257);
    msg.setSource(31789U);
    msg.setSourceEntity(85U);
    msg.setDestination(45128U);
    msg.setDestinationEntity(212U);
    msg.type = 17U;
    msg.request_id = 12818U;
    msg.command = 194U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 65459U;
    tmp_msg_0.name.assign("KIDXOHGULEUJEUMHRFVOFCZLVJNPMRQOWJGCXPTPRSFPYQVHGHFDJHCTIQRUIECFSXGFAOUWADIBFKDRBGZQKLGMTYCOZPPUNATNWITETGLNCXZKOKTLXSXEJCBISBQVMIYIEJLBBRCGSKNUGVFRNFZQKKODVEDHIKYYXLHOPBILNMMZAPAJJSVUQYRBNWWXGPHQWMMHRASSNCSHTXDZDJAVO");
    tmp_msg_0.custom.assign("ETQCGENEARIBYOOZCUYXABTJKZBOTEQVDCUSEMPMFLEPBBRGMZGBITLHBOYOKFSMTOJBJPDOZVJZTDPPLIKLJWZXLPFPWESKFNELSKRLHWXDUHQMRWNVWXGSHIFWXEAUVFDHOQGVPVHINBVZIAPWYFJURMRSYNCGGDUMFAIKXZRTCLYXAAWKNOFIPHCMQNMDQZXAJJWCQTQDSUALLNYSFURGXKVCBQUIMTYHR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 58269U;
    msg.info.assign("DHZCAQENNXPZVGQGXCZQDZHMNMMWNDGXAVUBSMBDKCXLBMRUEQYHXUKABIGYDSVPRPLALNZFHLBCKJSHWVLMKLTRUKPLSSTOTFYXHVSGRJAUVWCIRXOREJDUOUIACOBBPRZNHTGTXEABFOKCYZJBAYJNKQWHMQIGYMEOQECJWK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.5213045519904805);
    msg.setSource(59067U);
    msg.setSourceEntity(142U);
    msg.setDestination(32305U);
    msg.setDestinationEntity(192U);
    msg.type = 237U;
    msg.request_id = 789U;
    msg.command = 84U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.9904074530466712;
    tmp_msg_0.lon = 0.1290922174921706;
    tmp_msg_0.z = 0.925046634482536;
    tmp_msg_0.z_units = 191U;
    tmp_msg_0.radius = 0.9163087165313436;
    tmp_msg_0.duration = 48772U;
    tmp_msg_0.speed = 0.5774623853158388;
    tmp_msg_0.speed_units = 210U;
    tmp_msg_0.custom.assign("BYCQNPZKDKWGWGMACNOQDFJNYMDMUIQAHVXLWIODZNYGHZBCEHIWM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 47208U;
    msg.info.assign("HZVDMIQGKBXCRTNUSDERXXIVQDSLBIRRJGYYWTFDRJOTOMQRVYFCZPCBOHGCNLZEXKIJLZXUBJLIKU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.1556611160657343);
    msg.setSource(46719U);
    msg.setSourceEntity(60U);
    msg.setDestination(59463U);
    msg.setDestinationEntity(178U);
    msg.command = 155U;
    msg.entities.assign("YDLEDMLOWPMQAFDBUGYTNGRHZHCTQVTXDAC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.2901380627520038);
    msg.setSource(59861U);
    msg.setSourceEntity(9U);
    msg.setDestination(45726U);
    msg.setDestinationEntity(57U);
    msg.command = 48U;
    msg.entities.assign("UORTBVPFMUQIXKTPHYKNBUYILLFRBGEJBIGTSAHWVICNBDZAIE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.7915309449523328);
    msg.setSource(17511U);
    msg.setSourceEntity(134U);
    msg.setDestination(15025U);
    msg.setDestinationEntity(72U);
    msg.command = 99U;
    msg.entities.assign("YWWWKESJJRKUNKDBBVOUFZAISVJIWGKZEEMGRQAJZRSKGWLSAIQEQLTTUOXUQXMTBKWGDBGLNLRSFMFCVYKDHTHMGNNFVPTWTIONUPWCIZJYLMSHKQOGXRZVOUEVBSQHPRJBBVLUXGKBVFCHYMEXSNKGAJPCOFALRPAYEPLWCYFAHDIXCDIOEFXVDTQRBCZZDFJNDSXWDPXNCNAJVEQMOCMHZUO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.20094875300450343);
    msg.setSource(23952U);
    msg.setSourceEntity(162U);
    msg.setDestination(17505U);
    msg.setDestinationEntity(167U);
    msg.mcount = 51U;
    msg.mnames.assign("DZDSZKFAIXNYFEZWMJJECVLUHBTAJZNXNOPOUKAAHXQHVYWO");
    msg.ecount = 170U;
    msg.enames.assign("IZVBIETTKCSSEBKNZPOKJIXGYDXYFQJUWVDECPDARWENFRHT");
    msg.ccount = 235U;
    msg.cnames.assign("RDIFCHCXNBJOQASSENSNAVRUXAQHPOLESWLDTTDNYYLGALNZSMDUSCJBMAKOVZYOKIVCKWQKVBXZFZRENWHZJGILXVKYDJIJMLHWPOWJUEEG");
    msg.last_error.assign("MDQDDVRSCFNUNYJHXWJQOVYAUZETJSUQLOLBNJAIHMIZTORAPNIACHPMANVFAAQICGLWVDGNBXUMKOPMMTZLKUBPMRUKMCVDGGVPEJSFJSSCBXOKBYHXWSBWKLJFWURGKBZWXSOILNYYDDTYGOPXRAPSLGFHHSEMHZKYIGIPWRIOGOFKDJUWEVD");
    msg.last_error_time = 0.7579285142314834;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.43729105046298444);
    msg.setSource(40071U);
    msg.setSourceEntity(7U);
    msg.setDestination(20374U);
    msg.setDestinationEntity(27U);
    msg.mcount = 19U;
    msg.mnames.assign("PRTZWQGXAIJSYJWPQFTVCKCOLZYQBYWAFDVGOPMZBVLZEUZGGULNYVMRVWEKRICKVKIDLTTUSYSOPZSJLJQTYYMKSGGNVMZFAVFNJECSXEODHXUMEIBIKFUAISNYJUGTDPIFQTW");
    msg.ecount = 57U;
    msg.enames.assign("TIJCKPRFWVCYYQZZEVBRQPTXVDIEILHAKAGUIOLKZHAFTQPQSACBQIZDNSTUFKNHQXBAXJVBUPCIAVMQHMVLHJECUHZJWUGGYWAFPYJMRVSMSJOEZPTRHUNMLWAVMDUGONSJ");
    msg.ccount = 192U;
    msg.cnames.assign("QDHKXJARDGSPFZQKMNVGAPUDKVFTQHSPIAEXAJYSBJQOCESJCUJZOODFPMOOVMX");
    msg.last_error.assign("SPJXGNXHWBPQTORAODIJBKILCYRKZXTANOMEORGYXPWWLXEKJPZDJYRWEGKIIADXEJCBKHBEWJBSQNATBIOMGYICQHWRPMLFUANVLCGVBYZCZUFTAPQTHVFVTJHMZQND");
    msg.last_error_time = 0.2828891280878001;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.4423751723137348);
    msg.setSource(45758U);
    msg.setSourceEntity(106U);
    msg.setDestination(19857U);
    msg.setDestinationEntity(157U);
    msg.mcount = 137U;
    msg.mnames.assign("BILUFRODICWMKDXFHZJIBNYMRSOPBQSVEGHTCPMONPPOQYBOEKSBCZKCQAAJLQDLYYRAWZKTLKNNSYWSQIRPZVNVXDMXVUBOGEXW");
    msg.ecount = 211U;
    msg.enames.assign("QUGCVAKVQHEROYVSRXNLFBWCTOHMLNYPIJTZISPCXNDKDEXGKARTJPNMTEIQASTMQVOPZYZLBDHTRAGVFLIKGHIBXVBLWYXMBNZVXAKZBZTRPQUQJQWGBSGTCOOJEAHEOGRJFKIUCDDAOEWLQR");
    msg.ccount = 218U;
    msg.cnames.assign("LJOMUGCTLUOQTKCUKSUSECTRKHODYUVLOTTIDVYFGNNQGYMNMXWZEQALDESCGHRNVPWPNHFEXWRYSDWTRKVEEKJUUHXXOAPZTDUVAALBRFKSWCBYZUEAPXRBINRWYHZLYOMTMVXLBHCGTQJFJFFUCCHAQMJIXLZSBXDBDDSSOAJSQIXIDWHPZVMYJFMJITIRWFQILHMFGVMPPADENKGQNPCBEAGFKZVPOZYISANVGZQYJ");
    msg.last_error.assign("LSBKKMAPUCRSWZWIYSVGUKKVFUPTOSSVDQMNOFATVPRPAPDGJCPYIDXCXPIJUTXCWGRYZRYAICGMMBDLNGFMLNHQSEJPRQTNHITMMYNENVGEFYBPJGASKALQDMNUIOWBVOPYZVDRKGCMHDCQRZWVEKTBLQAZJHWXDZNSVHJYJBIOZFGFKYUQHUECX");
    msg.last_error_time = 0.9802430291421634;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.028208747376680998);
    msg.setSource(16130U);
    msg.setSourceEntity(245U);
    msg.setDestination(4658U);
    msg.setDestinationEntity(5U);
    msg.mask = 243U;
    msg.max_depth = 0.2538175109494981;
    msg.min_altitude = 0.9320989617490745;
    msg.max_altitude = 0.35272943485001973;
    msg.min_speed = 0.7048020252939572;
    msg.max_speed = 0.4395739323667196;
    msg.max_vrate = 0.06600886838174158;
    msg.lat = 0.23568917842684067;
    msg.lon = 0.3666251652733601;
    msg.orientation = 0.27101821165738926;
    msg.width = 0.4238492941739075;
    msg.length = 0.5751673454625928;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.09788126711273726);
    msg.setSource(29238U);
    msg.setSourceEntity(182U);
    msg.setDestination(58892U);
    msg.setDestinationEntity(199U);
    msg.mask = 15U;
    msg.max_depth = 0.5867439897914645;
    msg.min_altitude = 0.3258159230874017;
    msg.max_altitude = 0.7287656967526618;
    msg.min_speed = 0.3749401162675342;
    msg.max_speed = 0.38712893395258363;
    msg.max_vrate = 0.30001976110516415;
    msg.lat = 0.6925986044732949;
    msg.lon = 0.31717225050676756;
    msg.orientation = 0.2175056193651791;
    msg.width = 0.43403186654887405;
    msg.length = 0.591975265547609;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.11621685412079252);
    msg.setSource(58821U);
    msg.setSourceEntity(157U);
    msg.setDestination(16072U);
    msg.setDestinationEntity(225U);
    msg.mask = 69U;
    msg.max_depth = 0.22308717019642588;
    msg.min_altitude = 0.40179267799772733;
    msg.max_altitude = 0.860235275749739;
    msg.min_speed = 0.39161514028087085;
    msg.max_speed = 0.7952395614709848;
    msg.max_vrate = 0.42722183545372494;
    msg.lat = 0.26335245696642184;
    msg.lon = 0.6234149020898353;
    msg.orientation = 0.41127888233069143;
    msg.width = 0.03614470804002601;
    msg.length = 0.22850657516944317;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.002253715899136477);
    msg.setSource(64013U);
    msg.setSourceEntity(193U);
    msg.setDestination(42721U);
    msg.setDestinationEntity(235U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.9716293912149064);
    msg.setSource(19103U);
    msg.setSourceEntity(53U);
    msg.setDestination(57662U);
    msg.setDestinationEntity(1U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.8449651118113279);
    msg.setSource(46799U);
    msg.setSourceEntity(98U);
    msg.setDestination(12287U);
    msg.setDestinationEntity(232U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.8264814626767406);
    msg.setSource(35019U);
    msg.setSourceEntity(61U);
    msg.setDestination(33248U);
    msg.setDestinationEntity(164U);
    msg.duration = 8568U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.23691131719588954);
    msg.setSource(11071U);
    msg.setSourceEntity(1U);
    msg.setDestination(43924U);
    msg.setDestinationEntity(114U);
    msg.duration = 63466U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.5092879130812746);
    msg.setSource(14731U);
    msg.setSourceEntity(137U);
    msg.setDestination(20125U);
    msg.setDestinationEntity(93U);
    msg.duration = 12404U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.6211527781325958);
    msg.setSource(35183U);
    msg.setSourceEntity(234U);
    msg.setDestination(30878U);
    msg.setDestinationEntity(3U);
    msg.enable = 50U;
    msg.mask = 2255637292U;
    msg.scope_ref = 2523790953U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.3698905975775877);
    msg.setSource(26116U);
    msg.setSourceEntity(65U);
    msg.setDestination(7848U);
    msg.setDestinationEntity(115U);
    msg.enable = 72U;
    msg.mask = 760385098U;
    msg.scope_ref = 1712513945U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.16926082530073527);
    msg.setSource(55079U);
    msg.setSourceEntity(94U);
    msg.setDestination(54280U);
    msg.setDestinationEntity(175U);
    msg.enable = 10U;
    msg.mask = 4033725225U;
    msg.scope_ref = 2451981403U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.11684776273763764);
    msg.setSource(51206U);
    msg.setSourceEntity(25U);
    msg.setDestination(48692U);
    msg.setDestinationEntity(218U);
    msg.medium = 7U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.3891012544559377);
    msg.setSource(34598U);
    msg.setSourceEntity(147U);
    msg.setDestination(5944U);
    msg.setDestinationEntity(106U);
    msg.medium = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.7253529713929099);
    msg.setSource(34742U);
    msg.setSourceEntity(176U);
    msg.setDestination(57423U);
    msg.setDestinationEntity(38U);
    msg.medium = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.26428928963093623);
    msg.setSource(54068U);
    msg.setSourceEntity(96U);
    msg.setDestination(21379U);
    msg.setDestinationEntity(192U);
    msg.value = 0.42131922489172235;
    msg.type = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.7304136561898206);
    msg.setSource(11105U);
    msg.setSourceEntity(38U);
    msg.setDestination(25969U);
    msg.setDestinationEntity(126U);
    msg.value = 0.1545036383172299;
    msg.type = 45U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.07066916297018033);
    msg.setSource(18044U);
    msg.setSourceEntity(248U);
    msg.setDestination(5583U);
    msg.setDestinationEntity(34U);
    msg.value = 0.5534749997169955;
    msg.type = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.16800227695395775);
    msg.setSource(53216U);
    msg.setSourceEntity(2U);
    msg.setDestination(1280U);
    msg.setDestinationEntity(101U);
    msg.possimerr = 0.5266665454828776;
    msg.converg = 0.779621943021252;
    msg.turbulence = 0.9414409226915966;
    msg.possimmon = 141U;
    msg.commmon = 50U;
    msg.convergmon = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.4308473229656018);
    msg.setSource(42880U);
    msg.setSourceEntity(203U);
    msg.setDestination(18826U);
    msg.setDestinationEntity(7U);
    msg.possimerr = 0.49097518224047054;
    msg.converg = 0.33157816843033305;
    msg.turbulence = 0.3299748938816315;
    msg.possimmon = 171U;
    msg.commmon = 6U;
    msg.convergmon = 97U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.47070434365327285);
    msg.setSource(29146U);
    msg.setSourceEntity(160U);
    msg.setDestination(39712U);
    msg.setDestinationEntity(30U);
    msg.possimerr = 0.5004663025697261;
    msg.converg = 0.8507037134800091;
    msg.turbulence = 0.7899087725637385;
    msg.possimmon = 240U;
    msg.commmon = 23U;
    msg.convergmon = 226U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.6294556085814452);
    msg.setSource(61670U);
    msg.setSourceEntity(38U);
    msg.setDestination(40313U);
    msg.setDestinationEntity(32U);
    msg.autonomy = 87U;
    msg.mode.assign("YKMYYPELWRHMBJJNRCPLZDCCBXISSAKHOXVOXBHIIOUSMNCNUIEAVEOEQYMMXXOHNJBOTZDCBLYFZU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.10592648093063028);
    msg.setSource(29957U);
    msg.setSourceEntity(247U);
    msg.setDestination(15050U);
    msg.setDestinationEntity(126U);
    msg.autonomy = 57U;
    msg.mode.assign("SVGMTJJQPEQHUKCLXTZAEABWESMZKSBBQVIDRZDSYHSMZHUYTRNZMKACDSHPJRLFPIEYWZRGJZANLCNXXGKCCHYLCYKMMUNTOWDGXOFOSWUNRRTUUCUKXQTTOAEVLQHBPQSCGIWMWLYVLLOFOCEMHWGXDZNVKUPIVEJDNRTYDNJOMBJOSTAVDGYJZXQBPWWKXUREOIUGFBYAYALHKTJFQRFBMIAQXHPEPDREVAXQCZWSGFBFIGIVVFFJN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.45066816741448146);
    msg.setSource(17584U);
    msg.setSourceEntity(200U);
    msg.setDestination(8397U);
    msg.setDestinationEntity(128U);
    msg.autonomy = 2U;
    msg.mode.assign("VUVSNKLFBHLPSHORKSKDGEZDUUNGULWCSBZEIVHTNVUQUPVMFEZHUKSEWHAFCXSZJZWQQGMTTMBOJWIQVBXINVSYNHRFXYOFBGBCMJCJZJMPYAOOPSIXQGZKDKDFZGPIFS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.9892320585220905);
    msg.setSource(45337U);
    msg.setSourceEntity(252U);
    msg.setDestination(21245U);
    msg.setDestinationEntity(117U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.012812575438154061);
    msg.setSource(50618U);
    msg.setSourceEntity(73U);
    msg.setDestination(32910U);
    msg.setDestinationEntity(3U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.9306538351537537);
    msg.setSource(63810U);
    msg.setSourceEntity(106U);
    msg.setDestination(51348U);
    msg.setDestinationEntity(92U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.5973988482856188);
    msg.setSource(64437U);
    msg.setSourceEntity(26U);
    msg.setDestination(23350U);
    msg.setDestinationEntity(236U);
    msg.plan_id.assign("OZJRFJDKZXXBYRNHBLNOTDNEASVWBYMLOWTNQWEW");
    msg.description.assign("HEGCFQMZPIETBO");
    msg.vnamespace.assign("DDQSMVJUYTNPQLMXEONOIARSHYGKYJVOEDILPETG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZSJRECZIDGOVEGTHQQVPZOEWJPNEEUFRLKOVTREKNAIIGZAXSZUENYGPWNKYTXQUQBVHQSNJGFDGDICNLHRHYPOMKFFEIJOBRQBZBLERQVMYHIRCUYVYLASTUAECXBRAQFUIZJDGJXBVNMMDDSLSNXCTVWPKUQUCODUMKYF");
    tmp_msg_0.value.assign("EZCUNCYOJJBDWGPRGKED");
    tmp_msg_0.type = 206U;
    tmp_msg_0.access = 207U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ZVDBQCHNHWDAYKQYILDSCEUOKXVMHXL");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("FIMKYQFEMQLQIIRZVVYZVBTUVUDQAHWLFGLFTEPVAHIVJHMYDGJGZYTIRNABGJBKRCRASBQSDWPQBNMQKJEUCPVBNWWEWUPWXDZWLPEIWYVUYCXYJDIMOEZQPSOLXNNODFUGBHCCRXOIMLAJYDMHOZJSCGLHXADTXZWKLOVRZCFXOXKTLEGSNIBCRUNJEBHPQGAJWXFPMOBKENADKLFXENPAUZRHKFFQCRZOONTTAMDHCSSYMPUSHTRJSSY");
    IMC::CompassCalibration tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 11536U;
    tmp_tmp_msg_1_0.lat = 0.03731419384477075;
    tmp_tmp_msg_1_0.lon = 0.928581333341964;
    tmp_tmp_msg_1_0.z = 0.29335750052144094;
    tmp_tmp_msg_1_0.z_units = 106U;
    tmp_tmp_msg_1_0.pitch = 0.8094587869863633;
    tmp_tmp_msg_1_0.amplitude = 0.4027779340374069;
    tmp_tmp_msg_1_0.duration = 59542U;
    tmp_tmp_msg_1_0.speed = 0.3157194049184888;
    tmp_tmp_msg_1_0.speed_units = 131U;
    tmp_tmp_msg_1_0.radius = 0.10030677878302563;
    tmp_tmp_msg_1_0.direction = 192U;
    tmp_tmp_msg_1_0.custom.assign("VDINHFBZWVNDEDHJAMYBZIEMXMNWTJROATOAKHLTFLPGZAAWBCICALVQWXSCXJRDPPYZLVGGYUPXLOCURVDTKWRIQNRLYTGZSBRVSHPWFTEVPQZHZOQELHKJECCXSIGWAEBMSZSSVOSIQAAWLBMFQGYRHWMJFORUNSXUQBXUCZZYESPYFDTEDJJHLXTLQMOYHMVINNNGDOGIHWRJKBUYIMAVG");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::SetThrusterActuation tmp_msg_2;
    tmp_msg_2.id = 237U;
    tmp_msg_2.value = 0.8200847820515125;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::LowLevelControl tmp_msg_3;
    IMC::DesiredPath tmp_tmp_msg_3_0;
    tmp_tmp_msg_3_0.path_ref = 1261089518U;
    tmp_tmp_msg_3_0.start_lat = 0.3737823541461439;
    tmp_tmp_msg_3_0.start_lon = 0.5684311101441896;
    tmp_tmp_msg_3_0.start_z = 0.8540920240971739;
    tmp_tmp_msg_3_0.start_z_units = 77U;
    tmp_tmp_msg_3_0.end_lat = 0.9243546494950489;
    tmp_tmp_msg_3_0.end_lon = 0.49377080450932287;
    tmp_tmp_msg_3_0.end_z = 0.22056418566480418;
    tmp_tmp_msg_3_0.end_z_units = 163U;
    tmp_tmp_msg_3_0.speed = 0.5952166396502532;
    tmp_tmp_msg_3_0.speed_units = 79U;
    tmp_tmp_msg_3_0.lradius = 0.38942204765025423;
    tmp_tmp_msg_3_0.flags = 181U;
    tmp_msg_3.control.set(tmp_tmp_msg_3_0);
    tmp_msg_3.duration = 18526U;
    tmp_msg_3.custom.assign("VJHIBKYFOWTDTJMXDYVWNMJDNSMJDYFFRIQQQ");
    msg.end_actions.push_back(tmp_msg_3);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.5311866410498769);
    msg.setSource(44230U);
    msg.setSourceEntity(208U);
    msg.setDestination(49249U);
    msg.setDestinationEntity(81U);
    msg.plan_id.assign("CEFJVHPMYVYRKRFGZQCUZLXICJYQEOWVXPXRBYWXUFHMHWNSDUNTABYSZDEIMYPEDJPHULADJYBTDLCMPRPWARCCOYATBTYNLKRQNCGDMMXCGEDQNLBWXAPROGGNFTCAQLNGRZVKINJZEVOUATQRLFIFXKWIYUXMJGQFKTIQWLZHVEFOPSHIIJSAKJGVTHIZDPQULZSESTOVZKUAOLSOUMBJKOBFDWDGBVG");
    msg.description.assign("EVSKCJADSNDERURFYYEISPRCHEEMZMFQZUMQTSKBUKCUWBELHQSZOLPUKOWRPQGHFOVUHFNFYUOHPZYRAIEIXXIZCTAVRAPGWQGJWXBYLJQGMESJUNIWDITCHGCRBOGNWAUPFXVSDDQXTLIKTEMXLEYVKZAAOMSDTURVOXAPBDZDNNCJOPGFFOTKFXTVNBBKIYPIXIZBTNFWVLAWLCTKZQHLWAMMRMDVGKHLBJQGVYQ");
    msg.vnamespace.assign("ZYOQWLRFSZOUMCSJJXBHZFIQHOBXFRVFJXDYTHIEIEMCVMFKWVA");
    msg.start_man_id.assign("DXRKJILTOYOQPXTBUWLZSMOQSIKHPTDWOBHHUIQ");
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.3374431205394437;
    tmp_msg_0.x = 0.20716425018043538;
    tmp_msg_0.y = 0.25712504745930187;
    tmp_msg_0.z = 0.16603781566586828;
    tmp_msg_0.timestep = 0.1272897241447848;
    msg.start_actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.8694167120777546);
    msg.setSource(54032U);
    msg.setSourceEntity(86U);
    msg.setDestination(55686U);
    msg.setDestinationEntity(88U);
    msg.plan_id.assign("PMSNCHOAMBTDRBJGBCHLMDNSAQRRAXGYTVLQYNXEMWCCHUOYFUVIFEVZOEQVTWIILJFTFDFOUXBGGEBDNOCUQJSHIJSBZEQGDKEKOGLUNVCPLZXQRMZUVULTLXCS");
    msg.description.assign("BFRYEMNBHHHNWXJILVYQHVQIVGYWKXBIVRVCWDOKWGUDQTMMFLUZFEQBULHSQDPUJAWKGSAWCCMZPYCRODEIZXSXVJMPDHANQSWNZJOTCVDDIANCTPFMWQWIUHBLPFBOFXSRZRKTZXHZECIUXLNYTRGRREFDPCQJNNGULGAOTAQOLGMJAVXNXAUMHMVDMJQUWPTHBKYYIOEIBDZSPKLORYTEVZCSJBUSTIPTG");
    msg.vnamespace.assign("MAQFLXMWCAHYVWESQEDZREWNJCDIFUZKATSNVXYESZRDHADZIXDRXCUZYPXEDXOPUCWGGUKPEOHHQRRBBBRKYLXSRVZZFVGGLAGBKLHHGIJYHJBSFBUJM");
    msg.start_man_id.assign("JCDIZDAQRZHTBYTZUFVHOJILFKHHCWWINAKFLVARMLNYFCMBMUQOPKMMPUQWXQDIBNMYSWVUTQBTVSDIFUFXRAZLTJKTHAWQJUOPGZUKQDVDGCJEOGAWEPKXCYLDGGPBBSCRLAAPEUVDLWEYMOFXOJQKYRYOYGITOTTHPKNANOLHUECSLRVEISPMBKBENIXGFFVRNRRXXOCZXTPBWZQBXIESNDURMMGGAJZDVIEJHJZXLYNCVSSHFE");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("YGAQJONAHSGIOFPPKFCMJ");
    tmp_msg_0.dest_man.assign("NFDTXQWNHEWLSBHQOVGKMCRARSUICFVDAJIJEXAXGSGEMOVNJPYYMIMOSUFAFVVYLOQERYNUACEDPDTYHXRDLVKPBZSBWZ");
    tmp_msg_0.conditions.assign("HZZJMYQEOVDVADBNRBCEHUFCSQUXKXVWAFSADWYLGNGYJYYWOBDDLUGPOIYMVNXQBXRSZVYIURMWBFPJHSTMHCFZPOSIGGTFSQXCXWAJURKPMSKVQHHITDOAWQZNPBGHSKOAQIEDMJTVUXNUHKJALZPFETKZKRMS");
    msg.transitions.push_back(tmp_msg_0);
    IMC::RelativeState tmp_msg_1;
    tmp_msg_1.s_id.assign("WOTWUDNQEKBZWEBYXAQCXVKNYMYCJORPSTKNRPRVGRNIIKLANLVFJBHCOMLNSIOZRZDGLQNLYPFDYCKUXDQBGXSJXQZQHROABAXASZMYTAFBSUJGFTXCXPFPMPFGINYGQFDWVCGTIHOPKRUMXZBLBLTJUGMKKQKELWSFMYOGUVHTGVMFJZPHFSDQIWWKVLZAXU");
    tmp_msg_1.dist = 0.6106266035843302;
    tmp_msg_1.err = 0.4508002938963114;
    tmp_msg_1.ctrl_imp = 0.5765325834909192;
    tmp_msg_1.rel_dir_x = 0.36453832576722767;
    tmp_msg_1.rel_dir_y = 0.005703825548072361;
    tmp_msg_1.rel_dir_z = 0.6461142413050223;
    tmp_msg_1.err_x = 0.3477774148876379;
    tmp_msg_1.err_y = 0.4637762012663956;
    tmp_msg_1.err_z = 0.4169423103589569;
    tmp_msg_1.rf_err_x = 0.20345692555952954;
    tmp_msg_1.rf_err_y = 0.36943210614180444;
    tmp_msg_1.rf_err_z = 0.24927986734762142;
    tmp_msg_1.rf_err_vx = 0.710679388489986;
    tmp_msg_1.rf_err_vy = 0.5075078335048326;
    tmp_msg_1.rf_err_vz = 0.18911022652493414;
    tmp_msg_1.ss_x = 0.31337284186075653;
    tmp_msg_1.ss_y = 0.12748611007722677;
    tmp_msg_1.ss_z = 0.18390098461888582;
    tmp_msg_1.virt_err_x = 0.3013275196789299;
    tmp_msg_1.virt_err_y = 0.05118780496407893;
    tmp_msg_1.virt_err_z = 0.9939651692309177;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::IdleManeuver tmp_msg_2;
    tmp_msg_2.duration = 46106U;
    tmp_msg_2.custom.assign("FQLYQVLJMKQJSZNUEKDTBRAUABKZABBINUBYPIPTEJDYFSHZGCCVMKQSXCSOKTXJUAORTIFQBWLYRWCKBLMPDWAMLFUQKEZRFPYAREWPCXFNDVFVYOBDXSGOROCRHKASGIX");
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.8562511584467741);
    msg.setSource(13987U);
    msg.setSourceEntity(48U);
    msg.setDestination(61356U);
    msg.setDestinationEntity(197U);
    msg.maneuver_id.assign("CMVOZVQFLIXXTXRZOVJQQMDVTEUVCNGTFDZIYXTJQULHBZNCKPWMLWPPOKOOGJABOJSGAAGNLMOXLIOQSPCANBIWOFXGBNSJUGNKWVGUDKAZLKAFZJTHSCCSYYRPQUGPHMPBHSBSMJKCTQREFMWZGVTTWLPRYP");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("OXWWZPWMTDNORASIUPZUXFLRKQBJLRGLHMKQTKOCKCTYDBKBV");
    tmp_msg_0.formation_name.assign("RUSZIJTLPAWPGNVVJYZEXXYLOFBTYRRNEDJQRQGZCLZMWIJMBZPXFJEDPCQWIUHYAGKKOM");
    tmp_msg_0.plan_id.assign("AZLRRPRJRRHNYQIMDFNNEZOAVXBRXWDGAHKSJOQIICWLQVUBYVTLCJCOIVTKFPJTKTNOAUWOBHGDPGEHEOPWXCFZTUESESALUBFFMEWXFRSXHEZOCZZKZGZAPIXKUNDPWLLHQAXBKMBMMDNSLXUCJJZTOQLKFWRHIPWGDYRNJOECUCXLADFZNNTIWXCYDGKNRDFYGVOJUYQQEIWQBCKVFYKSVGJVQVHBY");
    tmp_msg_0.description.assign("JRUTHBXAJBEBOBVQXPHJTCRFJENOCKWEUPTARDWMKDNRNTJKYFYHZZWPVVYSWUQORSSDGLHWBDIOXJFDCNQQHCCVTRRFTSYRTBBZZXZJSDVBGDJTUAHVIXUGYSDLARDJNVLPPGNOVMMCUPQSZNEQWKZWGGADYXFQECMEIYZNFFCXLWORXULPBSEGQSALZOOKAUKIJLOGPWZPYMXGLECPM");
    tmp_msg_0.leader_speed = 0.9766723620251481;
    tmp_msg_0.leader_bank_lim = 0.024628310201191494;
    tmp_msg_0.pos_sim_err_lim = 0.9126280832156646;
    tmp_msg_0.pos_sim_err_wrn = 0.10831356781408708;
    tmp_msg_0.pos_sim_err_timeout = 22504U;
    tmp_msg_0.converg_max = 0.2852080338847788;
    tmp_msg_0.converg_timeout = 26255U;
    tmp_msg_0.comms_timeout = 49545U;
    tmp_msg_0.turb_lim = 0.5297353785231156;
    tmp_msg_0.custom.assign("WBXDYJVBQSFKKTCYPPQLTCMFVFPRGRMSGJVWYJKVUGAXYVYBECZHVUCQPDXASALOISMOVEZAAPBAAAGNMD");
    msg.data.set(tmp_msg_0);
    IMC::QueryEntityState tmp_msg_1;
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.9318453227967614);
    msg.setSource(4822U);
    msg.setSourceEntity(148U);
    msg.setDestination(32638U);
    msg.setDestinationEntity(80U);
    msg.maneuver_id.assign("UZSQSSGXHJAOIEHPPVQWFCALEUNEBJGNHGKUZSFJLGSDOCIMSCLAIKWAXWFDQCGOMURQQYSKXPMRNFAPAZQGYLGOYQWPIZCTWRVTYEXRBFOBOETMNXCTMIFEQBVZKLBPYXTFZXRGHCRNUWCLHIQECAMWBMBSCXVDBHPBUOV");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 24461U;
    tmp_msg_0.lat = 0.48033497408534054;
    tmp_msg_0.lon = 0.21439596385178317;
    tmp_msg_0.z = 0.7656755014523926;
    tmp_msg_0.z_units = 6U;
    tmp_msg_0.duration = 58492U;
    tmp_msg_0.speed = 0.8184714412804134;
    tmp_msg_0.speed_units = 155U;
    tmp_msg_0.type = 152U;
    tmp_msg_0.radius = 0.5657657979181788;
    tmp_msg_0.length = 0.5220509865219697;
    tmp_msg_0.bearing = 0.13016721792899855;
    tmp_msg_0.direction = 35U;
    tmp_msg_0.custom.assign("CJXALPFXTQNWKWRRQLVUOOBRUJJLGLSXLIQKVTKBKDYGJCQSVNMJHUTBSQDVBEFQWWDGCZMETSRZLGBXXLZROGAMIIZCTDQUCWZIEVXSBTKGYADDDFKFFWZVGVOAFIPGWUUHNIDSJJECIEFIXKPAWKFURRBCYTLOHOEMNSKYMTYJNXBOAIHENHXPSAWZOJRJBNYQHNHZDOCMGPQYHPURGZNP");
    msg.data.set(tmp_msg_0);
    IMC::FollowPath tmp_msg_1;
    tmp_msg_1.timeout = 49970U;
    tmp_msg_1.lat = 0.027179855242509543;
    tmp_msg_1.lon = 0.17808210521017165;
    tmp_msg_1.z = 0.5019784837564735;
    tmp_msg_1.z_units = 179U;
    tmp_msg_1.speed = 0.42139831614424883;
    tmp_msg_1.speed_units = 88U;
    tmp_msg_1.custom.assign("YAPAKNXYHYDTOKKKTNQCZUWHALTYAAVDSWJFBEJTZLUAPYJTREFEFMSLZIFFLKEOQVUQMNEUGBRJGCDVLPIGJVJTBWRCSFFBUBGGVOXURRPNGSBDOKCQXYNMZWEQHTVODSTWICRQNJXB");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::TrueSpeed tmp_msg_2;
    tmp_msg_2.value = 0.20073779847028617;
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.7539715935520882);
    msg.setSource(25036U);
    msg.setSourceEntity(98U);
    msg.setDestination(902U);
    msg.setDestinationEntity(77U);
    msg.maneuver_id.assign("EDOYIYMCAKEJVGNHHDYFDDJINQURQOEYMLHZONXTMAWPUOGXPHXVRPJLCHKQTZTIMKPUNSRHOZFSZWXWJNIRWSTCJTNBZFCIXLXFD");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("DYHNGZGVOOQTXNPXMAFOGKHWJQTVQGBQEMTCPYILNOZLKJAOPBZHIUXUGPPNIZTMPPRHFQNVSRLMOUIMUBQSASAHJXCBCJIEWPUIGUEMOCRZYGYFIEOMLAVWBUSSEHFOA");
    tmp_msg_0.formation_name.assign("GSBNYEPQLZXPCQ");
    tmp_msg_0.plan_id.assign("DZRCLDSIJYUCZAONZXWWKOFHGPBCFBGMZZVDEEUBKQPJ");
    tmp_msg_0.description.assign("XHSQFZVWBYJGUXIBURLFENLWEKHVDRIQVDNBDUFLDLDRDMHMWXAGPRNOHRZGOCRWFKTYYDTQCHWPBXETOAJZQUGLBLHXU");
    tmp_msg_0.leader_speed = 0.4357467759637844;
    tmp_msg_0.leader_bank_lim = 0.8847901992911256;
    tmp_msg_0.pos_sim_err_lim = 0.6022367457661593;
    tmp_msg_0.pos_sim_err_wrn = 0.28272662004409066;
    tmp_msg_0.pos_sim_err_timeout = 31967U;
    tmp_msg_0.converg_max = 0.3629070835767063;
    tmp_msg_0.converg_timeout = 32853U;
    tmp_msg_0.comms_timeout = 19910U;
    tmp_msg_0.turb_lim = 0.1301087897718961;
    tmp_msg_0.custom.assign("BPWKINVONNVVQRAHLCTZINCJBQRZVNBYQPVTSDZOFEBMJPCFJYAKRRSVJXCKNMZXSYXPRDCAMOLRDUKARKYEXSMULKJLGUWEYAODTHWHIVTCEEIITABZBADXZHMUYCUFDOOSKGOPXYHGADWWDZJXPKIKBPBUFDWBFHJVHNTGLXCXRQVJFYDNFIQCQOURQGFUHEUMSPWSZWMTEZOLFMWJSGZQICQTLEHMEBGGGVTSIYIEJGOX");
    msg.data.set(tmp_msg_0);
    IMC::FollowSystem tmp_msg_1;
    tmp_msg_1.system = 62917U;
    tmp_msg_1.duration = 55430U;
    tmp_msg_1.speed = 0.06635575115524506;
    tmp_msg_1.speed_units = 64U;
    tmp_msg_1.x = 0.379682666539885;
    tmp_msg_1.y = 0.284239697478872;
    tmp_msg_1.z = 0.21426946982500916;
    tmp_msg_1.z_units = 123U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::CpuUsage tmp_msg_2;
    tmp_msg_2.value = 97U;
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.5079391873554184);
    msg.setSource(9214U);
    msg.setSourceEntity(207U);
    msg.setDestination(51919U);
    msg.setDestinationEntity(151U);
    msg.source_man.assign("GGYIMZUWRXQRGPAUUMZJLODPUCTYFVBISSCBSLMZDFKIHWNXOYCRWVJDBFKEIILFSABKLPRJKZKPRNTYUEMZVMSBXLAQYOIYCYNGNFGFXOKEITOQFJALVQWDBMYAPBTWKWNWUIZEPQTNETCJAGTXHCHKRXSOLJVHUXMEHBUNCQWUDJAPOISEGCUXDFRTMRZYGPWGAGDQXIJSQMVNCBWLAXHLAQKVJQTJYPMPCBOSOZHDEEHD");
    msg.dest_man.assign("SPZXGBDGFZIEEWLUCBBUMMHFEMQKOBSCAVIEWRHJYRTBVJQHINOGWTENIFPNJLJWMSNR");
    msg.conditions.assign("IHBRESVHSSQMFWIGHOFCDODRMTLRZPEVWAQJALZWPKVYUVCYWIOPZQNNALEJGOZPKNGTNBGMXAENFGPULXWMRBZDMYXCEGKDJAQYSPCVAQPWRQBBVRNPLETDFNUQSYTEXKZWDHQJWVRXITWEJXOPCRJRQSKZUNCLILCVIIUOKDYXZUSUGTCOAM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.07305603305511876);
    msg.setSource(31864U);
    msg.setSourceEntity(36U);
    msg.setDestination(51368U);
    msg.setDestinationEntity(243U);
    msg.source_man.assign("GLVQJPQSDDQFTHBWRCHLBDGEAKYGNUZTJCFWGAIPEIWPBFGSPVXRYNOKHCSNBXIEMKFQRLKVVTIWZDXWONMNEFGDYYPYHZNVEMHLXRYOFCUDTCEDXRDHQULTMHAYQUJWJROMZMUXBMWQHODLPACBMDLJQYVMIRPFJFASTQROVFWGOJTSTIIZOEIUFHCABZEKLKBANLAJLYATRGWMSKKWGXUJOXSTXSZVNCCXOUPKQUNGB");
    msg.dest_man.assign("VOABQQYCNTUGUOOJVF");
    msg.conditions.assign("UKWJJWSMRUXYEDFFPOGEZPSVEGAPMUHVTFEAOSZUYHHSXZXVLIZEHAOCRYLDSKTWCNYWILINFVJXBGKFRNDISLTBYPPGIWOOHWYQIXRGJPDGCPAWQZYMBDYMCKHBMTBOLOQWDGUHLGJPBZKNPJUQTKGTFEEFSZNQAFLROBVHECLQOEVINSQQEKBFCKTCBRBJOZSLSFWLX");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("WOPJBLDWIHFFC");
    tmp_msg_0.formation_name.assign("UMHYWLJRUQHTEYRSZTBDBHKVVHDJDUEYFPNFUCDQPVHLUXDQTFLWBMCGIXOBCJMTOPNFCUKMWGOKGPAJIWOWZXCNGIAKGDZTTKGZSLQYQQWVCIDOFLBYDSQXIKVZJIHCEOALBESIUBZWKVNETOKFEBJXLBAORRMYVUGCVLAFQZPVAIPATMMYRRMXSRWDZJAANBEQJSNGGPSTZ");
    tmp_msg_0.plan_id.assign("ORZNKKWZTBUEBIUFIQCUGVIRWFGEQVRNHMTHZNQHCRXWPLDGOATRXKMLGWIKTFXWDOKSOJDGDEAJSMQJMHLSJGPFASHLDZWBFGUESPGQITUYXMVXRRDNFPOLBUABP");
    tmp_msg_0.description.assign("CPCUXLSQNOXLIEOEYVHZIINOLECZGWUMDTFQITGY");
    tmp_msg_0.leader_speed = 0.7837111068446404;
    tmp_msg_0.leader_bank_lim = 0.15252298860223457;
    tmp_msg_0.pos_sim_err_lim = 0.34892264523652194;
    tmp_msg_0.pos_sim_err_wrn = 0.27634563996476735;
    tmp_msg_0.pos_sim_err_timeout = 15582U;
    tmp_msg_0.converg_max = 0.18636276274166896;
    tmp_msg_0.converg_timeout = 25291U;
    tmp_msg_0.comms_timeout = 21611U;
    tmp_msg_0.turb_lim = 0.5396650454550579;
    tmp_msg_0.custom.assign("ECRVCYUDHBTRMFONXGWUDPNOUNWTJSWJXXKFZNTGHWHDQHJLXZQYUQDTDLBQHMBKPLNAQFCETZHREZEGZMCTRNXMEITPLLYRAVRJUYELWMKOEFTYNBCOGEJNJKQKMXGVSIRFLAQDXHMHICOIVGOXIBDOUXWZVAOYBFGZRUCUBTQLDEKSBZVAWTIANKBPHPFPVKFLARKPCOSOSGFVQHLWMPMVUPAJS");
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.5499324336920699);
    msg.setSource(3068U);
    msg.setSourceEntity(200U);
    msg.setDestination(6196U);
    msg.setDestinationEntity(162U);
    msg.source_man.assign("DJASIPTYWRWXBOOMSCPNWNAPLJREDLBHRXMFCHMAZGNIJNGDHVNLFEBVZUTDKAQ");
    msg.dest_man.assign("YCSHMHGGSIAQSDICUHGQGJTRQLKAJVDNIAYCPZENWOUKRFUERDHJAMZTIGANSPFGCOYEKJZEFTBFEZUXRVXQTT");
    msg.conditions.assign("TFFHWUCLOHPUOIIVDYUHPDIGBTNMTJIOLXEGBYYVJSWEOFRUIJWXQZVURPKUKISQYKIMECMAOWYUXQRITREKFHRTLZTGDMBZLXVDZLANWACDQKNJLTSGCGJUKVPBRVCDANFSGTLCYAVPRQFHKWYTAEPQJLNZDSDMNBRDNEGPMCXEBMOPKOXLABEIZGZXZQSXWQCNVMJFOTJAFM");
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("PGWOSWLDJFKMVQVXHUMUBIBAXMCKTWOIZWHHKGRUPWHTPEKPSHZPDIVONNIBYLIDFZNIGEDXEQRCGKDSDDJVQVFRBSYTJYEPZAVFOUSTMRNBOWQFBAAKDRRGNGXYLQLISMOLBMATUGUHSONUSLRXRDQYLDQALURFJFMXUIPZGGWNJXPTYJCZCZVTZCKJYMTPIHJXVOENHKFOBCYHVLAHI");
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.5226977371755984);
    msg.setSource(61754U);
    msg.setSourceEntity(103U);
    msg.setDestination(57696U);
    msg.setDestinationEntity(217U);
    msg.command = 90U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UACNGWCFZCYXHZZLILUDEBNVEPEHJBCAHPMWQMFDGKDAKAKZBOLWSDVZQESDHEHFIAFCMQIRT");
    tmp_msg_0.description.assign("CQALTLOAGAKNIBRKFZBPJLCPRWSQYVDGMALFHVW");
    tmp_msg_0.vnamespace.assign("KUEWOCYUXVYOQQJFWRRZAJBLFYKFHWRJRHMNLMYHXNC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YMXNXGNEVCSRWUIHKNIJPERFBVERIBJFZZCSRNOACTMUCBEMFDFBQPLXGAKJMHVD");
    tmp_tmp_msg_0_0.value.assign("HQMJWWVICEEBWISIBELZWRPOTHAJTKGMBIZRWBCHDVAJRREJHZYPKFGJDJNNOZSSYYFMMMXOXYRKTVFXSLUEGOGUYKJAAGLBPSCCDYCXKLXJGNODVHBEPOOKAAKTTBRSPQXRQARXNNPZVXUHOQBSFYZHWHUZEYUPRMGFHFWIIUMTULITLTDVRWAJOVABCMLKDLNKHDYGMQPDDCCZCVSXFNTEQMQFLFQGUIOKGIYLQEWSUUJXWNCEQNAVP");
    tmp_tmp_msg_0_0.type = 249U;
    tmp_tmp_msg_0_0.access = 111U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OELGLWRBJQNHAVMTZCNDNWIADTLRMJXFBQPMOUXLPYRSVDYOGBZFJWCXMNAKQICFOINDOHYZYYULWGHRXFEXHHTPZZYGNNOPKCDKBNZSWVSNUCDPRRUJKCBIITRQZZNBDGTQWVMJTIEVPTVCACMPQUQHGIPFESSEKPFHWKDUUXLTGW");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("RHKXTVUILEJZSHPSFRTDWFPSVXCXMMRXIFOGUFNEDYANFKOAJSPIWCCMFFMWPUPKUWGCVDYZMPYYAPQJTRPFSOQCUZLYERQZTAMLKPSVMLTYGBWWHOIGYCBRBBPIQDEONQROWVSOGYKMHWLNEJLKLYAJHRGTXIOTIMVNNZBTQVQBOTSWAUZQNYCXDSXWAKFXGBECQSALAODHIKBZBJEITJLXFVJUNGUGMALDDVZEINBGRVXZCDCHEZKQUHRDN");
    tmp_tmp_msg_0_1.dest_man.assign("LOWNTLCTDHUGBQMVASKUAWOXWYJXZJKNWNAAVVPAMHODRPRJOSQLHTDCRCXSQTKIIYQXERMMGMNYUBYLHIFOWMTAFNBTEXDBROPFKIGDYHCGJTXLRQCUDVIZSPUYAEDYSVHKUGEOQSVFPKCQTSQENNJIBJWGNZGMULJPBJJWLMXECXBKQIHEVUQZZDVLOBSVIGALUMHKCGFFLDHTPNBYYVKPENYEEDZOAU");
    tmp_tmp_msg_0_1.conditions.assign("TBVGTLCJQIHUUUSHRKRPOAJHKZJLQOFZYDASBRTMRFMNVWCWLYACKSTVGCNQTGTJJLOSVOGXGEDRWNBHQXNTMHUYUODOJ");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::ManeuverControlState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.state = 223U;
    tmp_tmp_msg_0_2.eta = 46409U;
    tmp_tmp_msg_0_2.info.assign("CATOLXCCYVMQHNOFNKSVHPBSXICQHDVZDCYKOWANCJQMHBOUJOVZIASFYIEUGEXUDWMLLWLGSCAIFJUTXLYEXBAJJFYRGJRDEMNSXDFVCNYBTBKJNBKKMPQXWMUHRZKQEYVZHDTAFRZFZEZVOHSGCEFZFSCXEVBHQFLAEKBLONGBJMASZPP");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.12577708461438053);
    msg.setSource(51201U);
    msg.setSourceEntity(59U);
    msg.setDestination(37931U);
    msg.setDestinationEntity(207U);
    msg.command = 15U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JNTEIVSQCXZFRUPNLZBJXXTSQIJHSWXPKBTUKCBJWLATMEHREZDJ");
    tmp_msg_0.description.assign("NIWCHNASMRBOOWWYMAQJUVZTBQKOGLUASVUHSGPUTPCDYXMMCQRHFZRUMICEKNHLJRLTFOVMJIQXBALULLWRZWSVZJHVEUZUFFIPQXETPAFTAIIJYVWPKKNTAPFEGLGDCNCONLRLMCNNYKBHBQDJXAXCSYXVDTMEHRUEDSGBZIQQMWFVPYJVKXOGDAFRIBOWQDJNSAUBCKJXGXEXYWFZYPSSDOEROQPEHIPZNKBD");
    tmp_msg_0.vnamespace.assign("HIDRFYBEBWQDWFAXHMIVVMCKBGHJJKQPKRESPNTMXALXXDNISPZFLCSCVGIYCRADPYRJKMLLEOLVUSPOJVUVZWKXQJXM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GOZQAPJFHAYRMKAEKXDRVLJUIJSOYIGNWNCOUKANBMHBZUXLLSQJPKEGFKWOXROTPLGXMYLXJMBPZGTXXPTCOASRNOBFKTHOUWBIZCDCQAVRUSVDCEMFWVJQZHDWRIBKZMWCBHNEGITALQSZICNDIDNRFVVSUCDDQKFDLWVHCHOMBJI");
    tmp_tmp_msg_0_0.value.assign("KFEVTNZCQQPJGGKHF");
    tmp_tmp_msg_0_0.type = 216U;
    tmp_tmp_msg_0_0.access = 134U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JIOJXOTODBGMKJIQUAPTGVMYWGXHHBTJZRBWTTSPVLSAKLALQDIXOXYECOOBGZRUCGYGKLAHPNDQBYKVHORLSIDK");
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.05589037697019317);
    msg.setSource(39813U);
    msg.setSourceEntity(187U);
    msg.setDestination(45807U);
    msg.setDestinationEntity(173U);
    msg.command = 191U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HBPYXUNHQPIDTSTETDEQQNMCURUJOUBRORGIGWFOPSNZVXOBNMZDZSIDDYHSKXBKEJEZVEYXPIHMQTSFMGTZAJMVKHUNMWFUCPIPQEVCGIUEFLWXALWSRFPVZCTPUFRIVB");
    tmp_msg_0.description.assign("QDTJJGSKTUTHLQQREKEFEXVRZIZDGPCOBULFBUHNAPHQC");
    tmp_msg_0.vnamespace.assign("PNPIOJVGOPJAHUMIKGAMXBAVWWEKZGFQGPSKSLXHKFBZUDYWUVXMMNRQYTARBPHWRCTMXADQGHPYNDTOJQFYOKNIJKHTITVZKDSE");
    tmp_msg_0.start_man_id.assign("RBUWESLSBRBCMOYAFNZNKLYZBXQAFGTRXAFJPHMDPLWQEWUGUZFSYRDEJLMVNQVKQFNMBVISDCHKROVALDDYVVNYLPUIXOTMKEOCEGXAPLZEYPSHFLAIDZWMWCFGCYGGZCTXONIJHAMJRPJYBTXGNDCIHAKTZGNBVHIKKCBOBJK");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("XJAXXRGZLKUDO");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_0_0;
    IMC::DesiredSpeed tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.value = 0.9972590121993895;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed_units = 29U;
    tmp_tmp_tmp_msg_0_0_0.control.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.duration = 57395U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("YKYVMDAIRZWJNBTRFWZRKJTFZPWQUQTQOSRIYHSKSCKOWKEKUIGTGXCGMSZXNBGZAICDUQIAHXBEUOTWRVWEDAPAMEVXNMEEYLUTMYHNUZOEHFFPQLKPGYWHMOJDRXXCMITQXSXBLPNCDGRFLHFDUGDADQSHGVJMUONCAYVRVKBWASUHYFBXLCMIUWZKNFABLJPFEPSCMPWKBZDIYIZOJVCEAOJQ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::EntityList tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.op = 24U;
    tmp_tmp_tmp_msg_0_0_1.list.assign("ZQJYESIKAJXNTLVKIHAFCQBMSYUINFATCPHCGHXLGXCOJUDRI");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.duration = 18594U;
    tmp_tmp_tmp_msg_0_0_2.custom.assign("QDTLEMEJWKSYVJZEAHJRHHDOXJVVVSHDXOYCZTHSNIXEKXUSOYCSJEQCZTULPAEPBBGSNNDVDYGMFWIQBNBDGHKFBVAZWKZMRUWPTLQAHGMMIXAPGNIOYBYTXWRTJAUPZNRAL");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::WaterDensity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7701008788252514;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::GetOperationalLimits tmp_tmp_msg_0_2;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.5185916282583812);
    msg.setSource(36289U);
    msg.setSourceEntity(128U);
    msg.setDestination(63787U);
    msg.setDestinationEntity(117U);
    msg.state = 115U;
    msg.plan_id.assign("KQLKLDOZTBYIRELIFLQTOZLSKRALSQWWMNFYTXMDGCPCIYBQYQNYBPVDAGUJNKMAQTJWIKDKBPZCRWZRLUDBHXVIOXKUHIUQLPDLFHAHQODVYCGFMS");
    msg.comm_level = 134U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.2992314378649512);
    msg.setSource(26140U);
    msg.setSourceEntity(154U);
    msg.setDestination(6557U);
    msg.setDestinationEntity(199U);
    msg.state = 39U;
    msg.plan_id.assign("FHQZPQQJHKNQZFZNCQSZEELBEAXFCPWKRECFUWKNIYMXXOIJOACOVPYXLPFSHTLLXSMMYYSOJUDWDNCUSZEHGBVAMFBAPXZNBYZLJROWRKCSYGUTVELFCVDHUVSBOUNTPSGZIDWHIGLHGEYNKTWKBYXOBNHPXCLAZTUXFMRQACIALIZOJRMLMSBTRGRDGDUHPOMGGAYHKAWE");
    msg.comm_level = 212U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.8103788160240785);
    msg.setSource(40376U);
    msg.setSourceEntity(240U);
    msg.setDestination(49072U);
    msg.setDestinationEntity(80U);
    msg.state = 111U;
    msg.plan_id.assign("JHVEEIARZJETOLBIOUBWQSCEIQGKIFDQROQEXLYVKFLSPFMAGEDPUVOWTHVYJANTNFPKHBXYXQVSXYLIXKMFUOISGHXCWLASPXCQVZSZI");
    msg.comm_level = 155U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.5874309621516578);
    msg.setSource(59207U);
    msg.setSourceEntity(169U);
    msg.setDestination(1793U);
    msg.setDestinationEntity(152U);
    msg.type = 159U;
    msg.op = 143U;
    msg.request_id = 11990U;
    msg.plan_id.assign("WXNTLBNYNELTDIYPZGREKPURSLFHTLCVIKXHULEZS");
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.7058862068627986;
    tmp_msg_0.lon = 0.9569619085238625;
    tmp_msg_0.depth = 0.04738899134612318;
    tmp_msg_0.roll = 0.6832748801489843;
    tmp_msg_0.pitch = 0.035861173280592906;
    tmp_msg_0.yaw = 0.09448865910937965;
    tmp_msg_0.rcp_time = 0.022299362712900117;
    tmp_msg_0.sid.assign("IATNLWSXSVAIGOFCREURPOTMSJSWGFVKOCNZWHWYKPCVPIZMOAQAMKFIPUARJKTHIGEPJHPOMJNIBDBELZLZTIZIBYYGBTVWQOSYIZUO");
    tmp_msg_0.s_type = 57U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XEYJPAXMTERCUIURJJQGTUNRPSGAJKPNZOVTYYUNFMDOBOWJLIWDWGENMSRWGAXPUQVMTGEOTCQNCBILRHHEXBSSKMDYBFJQVQAGBHHFKGXLYHZXIEVOAGZODAFHCUKNDLKSAZQQYWHRVQKYBJSCTSWRUGCDIEEVECUTOIZFWAWOELDFDSBMYKLNLKQLHCUBBMMKTZPPVZHFMHXOWJAXSXFKLPDMIFRPNUVIQZPYND");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.6706671300840586);
    msg.setSource(45079U);
    msg.setSourceEntity(193U);
    msg.setDestination(11465U);
    msg.setDestinationEntity(112U);
    msg.type = 132U;
    msg.op = 175U;
    msg.request_id = 52089U;
    msg.plan_id.assign("TBYZEEPQCGOUHPIJQVXXZMSDHQXAJVGSJAPAIZXDJZUGCBPFBWGTSLNAYCNYRKEELXUNZQMKIIRBZDLSJSKVSIXJDRSUELCKLDVUOKXWMLUFQVDYTMYHZKIKJHJWODMABQEDHADHAGPTGEBGRPEKANHOBFRZGHVNZECWNGWVIINUMFODAUHLWUVXCTFWPOKSOCMYWSFPTKTOSOOBMRQFN");
    IMC::AcousticSystemsQuery tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XDGQPSWYIFSPICMMLEFDNFXGZUYGQFTZLJHZXGRXSFIRMSYYQSTTILNWZKIBFAUUAFUFTVKAQOIRTPNTEQUBJBJBVOTMHHCRGVEGMWHJSEEJQWKVBOFPRCMOWFLDUWOAPYAONMZMGIQJXRLXBXGVPNCZYZHLHAWRVVDQSEANSZBASIVYDVDZNOHCNBUOCJYGQMHZBOTDUTCH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.7257467340011227);
    msg.setSource(28036U);
    msg.setSourceEntity(51U);
    msg.setDestination(42591U);
    msg.setDestinationEntity(91U);
    msg.type = 11U;
    msg.op = 213U;
    msg.request_id = 11483U;
    msg.plan_id.assign("OTVJTGPLMBRDLUFOAZIZNJYHSBHGWKVGXPWMTWIRIXPQEQITGDTMCTQRXJWGMSOXKDKNUYDYULATMQONBFQNFKFEEPOECBUDDFBLJHJYSQNEFSVI");
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 232U;
    tmp_msg_0.period = 2754856758U;
    tmp_msg_0.duty_cycle = 1866319548U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XPNQVXIOKKAALJISJXLEPADCQYKIYFDVWKQADLTSJUFRCNCVEKOFBHSSTNPKAJMGEFNJQACQXBLWHTOBAXUGZHCRHLLBKTZMKJZETAGAEXCZWFIDUEHVHYNRSUCNIFRMRBDMGMYMGTSQYEGFOJIONNPCE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.7506244273545263);
    msg.setSource(57155U);
    msg.setSourceEntity(123U);
    msg.setDestination(21592U);
    msg.setDestinationEntity(180U);
    msg.plan_count = 58479U;
    msg.plan_size = 3973992103U;
    msg.change_time = 0.2588559595789729;
    msg.change_sid = 52160U;
    msg.change_sname.assign("UUONABRTRUVSHVOHSCQRKEOGVITZLLAKSMWUVBKWLCJVTPRPZYQRLWKABAUEQ");
    const char tmp_msg_0[] = {-46, -15, -94, -98, -26, 22, 0, -1, 14, -19, -117, 55, -14, 10, 89, 27, -20, -84, -127, 0, 66, 22, 56, -76, 68, -111, 28, 64, -1, -127, 14, -4, 27, 89, 83, -28, 18, 40, 120, -35, 9, 48, -67, -43, -101, -128, -60, 38, 11, 55, 34, -98, -93, -67, -47, -59, -119, 85, 112, 61, 71, 30, 15, -5, 106, 119, 63, 69, -11, 19, -12, 91, -77, 57, -91, 40, -101, 74, 80, 18, -84, -123, 96, 62, -12, 50, 52, -34, -13, -8, -122, -121, -83, 60, -3, -22, -65, -120, -19, -22, 7, -32, -44, 51, -99, -41, -42, 106, -96, -14, -43, -16, -35, -120, -26, 61, -14, 75, -77, -95, 61, -11, -101, -128, -48, 58, 70, -65, -128, 80, -8, -25, -112, -33, -90, 91, 90, 1, 18, 43, 59, -108, 110, -14, -107, -116, 97, -30, 47, 18, 8, 119, -7, 5, 107, 123, 19, 0, 6, -94, 110, -22};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.9486224359455332);
    msg.setSource(5862U);
    msg.setSourceEntity(121U);
    msg.setDestination(20835U);
    msg.setDestinationEntity(236U);
    msg.plan_count = 22903U;
    msg.plan_size = 3159284045U;
    msg.change_time = 0.8205873807514177;
    msg.change_sid = 29938U;
    msg.change_sname.assign("DRMRVDYVAWQIEJHOTKAOXRSTZGOUHDIMHAWZWJEVYBCJBFQJWLARGTGYPLHMQTJCZKTOKBYGONNNDPXWZBMWGZMENGEQHDNWFZGKEKTXAZIVTQVIVSTYTAFXDRMOJOBOFQBNULEZSEFPXRIIICDRCZPYHMVLCQLUXJYTDCNZAFAFPIOLPSSPLNYRMFHQUXULUWDSCEPQRAUVKM");
    const char tmp_msg_0[] = {94, -64, -27, -38, -121, -57, -12, -44, 62, 7, -123, -55, 62, -28, 58, 42, -102, -41, -21, -66, -27, 27, -99, 63, 101, 122, -8, -69, 69, 66, -36, 12, -5, 14, -35, 109, -103, -64, 14, -71, 75, 112, -60, -50, 112, -38, -106, -6, 19, -62, 107, -90, -98, 67, 106, -29, -8, -111, 107, 3, -103, 1, -93, 58, -32, -107, -39, 118, -87, -97, 42, 96, -5, -111, -22, 35, -69, -37, 93, -36, 60, -63, -124, -2, 8, -29, -12, -97, -94, 52, -127, -6, -44, -123, -95, -81, 106, -109, -124, 116, -128, -82, 124, -58, -7, 124, -30, 3, 43, -49, -114, -98, 93, -75, -28, 3, -12, 98, 124, 2, 47};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("DASFLZCTQYCNSDKMLTQIIJDYKIDHKSTSPSXVXDOMQGFZQXEUHFNMKAABONDPMIRFIVZKUBUM");
    tmp_msg_1.plan_size = 60388U;
    tmp_msg_1.change_time = 0.4566307292946865;
    tmp_msg_1.change_sid = 14593U;
    tmp_msg_1.change_sname.assign("YEQOKEUDTNHZKRAHSXBJ");
    const char tmp_tmp_msg_1_0[] = {24, 39, -91, 4, 120, 43, -18, -89, -50, -126, 49, 105, 94, -20, -26, -61, -92, 121, 39, 76, -54, 108, -45, -12, -109, 124, 94, -86, -71, -102, 98, 8, 37, -21, 51, -32, 17, -89, -105, -89, 114, -115, 125, -68, -42, 102, 5, 55, 84, -63, 12, 73, 65, 75, -51, -33, -26, -71, 6, -85, 5, 15, -101, 113, -125, -26, -124, 28, 84, 30, 99, 10, -18, -28, -15, 4, 64, -55, -81, -119, 118, -115, 50, -16, 52, 125, 29, -38, 66, -60, 1, 31, 51, 71, 94, -104, 47, 32, 41, -6, -87, 108, 118, 19, -85, -17, 31, -89, 103, -80, 82, -126, 23, -102, -12, 92, 59, 43, -76, -86, 24, -80, 30, 106, -101, 69, 2, -51, -79, -38, -85, 94, 94, 58, -3, 126, 91, -28, -21, -2, -8, 83, -77, 18, 102, -12, -2, 32, 84, 100, 50, 66, 110, -122, 96, -36, -123, -16, 24, 48, -117, -111, 78, 9, 122, 49, -64, -20, -32, 100, -20, -18, -106, -68, -50, 116, -54, -34};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.04892085887317521);
    msg.setSource(41883U);
    msg.setSourceEntity(239U);
    msg.setDestination(19144U);
    msg.setDestinationEntity(6U);
    msg.plan_count = 7247U;
    msg.plan_size = 2939239928U;
    msg.change_time = 0.5190291111274624;
    msg.change_sid = 59769U;
    msg.change_sname.assign("NWELSTJVZNECTYHCLCNXIBIGRJLYQUJGVZTFQMRSKMLQTDIRVRWTBZXSFFRYUHCDWXHTBWMQVQUUKXMEGVWYFXKVADYNAJSGQZJOMAUXDOELPEIFZLVGQZAOBYKHAMBPPOQHZPWFUYSGIXDFCLDOKHNBIRRKZNFJIOBDCPVSWNIMMEVKJBGAOFTZNTSJEDGOKAUXQKSYOUILFPGVHHRKAWZUCGLRLBEPMOQWACSYDTXJRWH");
    const char tmp_msg_0[] = {79, -77, -127, -78, 36, 28, 101, 94, -40, 84, -116, 69, 13, 86, -60, -94, -75, -65, -75, 45, 41, 11, 18, 35, 24, 115, 5, -28, 77, -108, 88, -100, -125, 120, -100, -60, 35, -10, -59, -107, -2, 51, 118, -115, -107, -9, 37, -80, -51, -60, 74, -99, 33, 107, -112, -96, 122, -63, -76, 20, -119, 95, -22, 107, -32, -102, 31, 9, -16, -16, 75, -56, -121, 38, 47, -53, -4, -124, 84, 12, 83, 123};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("VWDYAYCBXDHMAUWIVMAPJMVDHEYOZVSISEETXKDZPBGOBVDXHMNLGJSLCFUMSEWQJLBPEFRMYVAOSLNTGUAXPSRDOHPQCOKGXGAIKCZYNINICBXRTBQFCEMZTXCABXESUDOLYOUFAFHKAHWFNPIWMHWJGRPIUMITZAUCNWBLBOXWMSFVRFRPFKQHLIORDPSLNUNYQVQJBGREE");
    tmp_msg_1.plan_size = 12936U;
    tmp_msg_1.change_time = 0.3607383416354466;
    tmp_msg_1.change_sid = 57235U;
    tmp_msg_1.change_sname.assign("ALGOEOFPMUMBHPPFYWXQULGEUWQUTRXYIPCQIRLPAZOGIAKRWRNAKFKZSQGTMVORJSPTBBBILVSWNJOCXWSRALMXYBXICGZGSKCZEFWYJNJOBZZUUQNRPTNBLFPFYSKQS");
    const char tmp_tmp_msg_1_0[] = {-30, -94, 43, -104, 54, -38, -59, 37, 42, 12, 123, -20, 16, -54, 108, 66, 48, 108, 108, 50, -70, 108, -11, -75, -96, 99, 36, -80, -95, 18, 82, -109, 99, -119, 126, 57, 121, -72, 38, -97, 99, -27, -13, 10, -4, -39, 117, 113, -21, -107, 45, -26, 119, -5, 75, 13, -112, 68, 1, 122, -58, 49, 27, 41, -47, -22, -17, 93, -107, 92, -101, -11, 20, 109, -100, -11, 3, -52, 65, 84, -99, 22, -34, -25, 103, -99, 110, 117, 32, 100, 91, 74, 115, -16, -97, 10, 81, -32, -56, 111, 116, 65, -75, 94, -107, 22, 81, 42, -110, 6, -42, 27, -74, 31, 94, -62, -8, -56, 107, -116, 120, 26, 59, -59, -74, 16, 17, -66, 77, -39, 16, -92, 47, 62, 8, 60, 2, -15, -63, -60, 67};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.11924584938424165);
    msg.setSource(50792U);
    msg.setSourceEntity(121U);
    msg.setDestination(60952U);
    msg.setDestinationEntity(229U);
    msg.plan_id.assign("XYEPHJQLKWPSYWQEAQLJNWRHIUFKVJDWDDFZFWYOVAQDJAIERZHMMUOXLXNPPSHKRXUBNDVTBBXOOOWKPVEMGSYSFXLNCMRBPTPYSYTHIMCPZTUBXJQQGCVINSOVJKOJALIQRYBTEQZRFPXZFGUGATCINSNDEYGSR");
    msg.plan_size = 17468U;
    msg.change_time = 0.5995982339401423;
    msg.change_sid = 25692U;
    msg.change_sname.assign("YNGNGPDJQKUCYFIQMOOTTAPFTNVAQBDPNIFMWROIUBUWUJLBALSFHZINERPMVDCPXMYSBYXZBEMXPSIBGZIJZOGDJXDGIKWIQRQAOBBHAHTTSFKWCLGMNVSBXGRTWZQFYJNWAWFRCXPMULRATKIQVVIAONKPRLEVUOSHMZNKRFDCHPSCLXXXTHDVUQWDRYPHCXLGASDEHGLKO");
    const char tmp_msg_0[] = {19, 69, 2, -3, 5, -15, -5, 112, -37, -106, 102, -69, -112, -81, -86, -103, 69, -84, 100, -49, -37, 22, 25, -97, -33, 106, 52, -121, 83, -107, 89, 67, 98, -122, 90, -23, -12, 29, -91, 49, -22, 114, -18, -117, 71, -92, 26, 69, 49, -10, -15, 85, 32, 96, -49, 121, -76, -51, -72, 36, 74, -110, 62, -99, 24, -84, -6, -123, -21, 12, -99, 77, -41, -109, -63, -79, 126, -44, 4, -25, -127, 94, -20, 20, 69, 9, 80, 116, 64, 111, 103, -50, -111, -96, 58, -99, -101, -69, -100, 0, 35, 124, -31, -61, 8, -18, -18, -112, -82, 55, 79, 63, 97, -33, 31, 97, -124, -29, -46, -99, 56, -5, 67, 8, 28, 83, -73, -79, 111, 33, -62, -64, -80, 50, -105, -41, -128, -82, 63, -49, -94, 50, 61, 7, -28, -96, -19, 98, -117, 45, 3, 117, -44, -113, 13, 112, 100, 90, -105, 89, -35, -29, 113, 25, -104, 25, -119, -65, -53, 32, 21, 11, 42, -58, -110, -4, -98, 101, 126, 33, -43, 39, -23, 81, 41, -38, -19, -97, -92, 97, -82, -26, -48, -86, -7, -19, 90, 57, 22, -125};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.6923481061053528);
    msg.setSource(31077U);
    msg.setSourceEntity(236U);
    msg.setDestination(40332U);
    msg.setDestinationEntity(141U);
    msg.plan_id.assign("HFQJYGMTUBNLVWNECMXZPOLSJWFJDHKBHBKXYAJLUNZXNMIQEGODRPXABSLHQQDYIJUALSROWDMSKAUHDQMFOGZCVEWYGZDBCDBBAISCITQTTRZJOCHIIGJKQNPTXWZCXISMNRGIXAKQEVFYORVVPADCVJRCMLAOEJUUTZPUXDFPRDWFYSOVEOWEMVZKBFMSWYOCKSWNZQUSFPYCJKEVTMELPIT");
    msg.plan_size = 21976U;
    msg.change_time = 0.8570646270111973;
    msg.change_sid = 6915U;
    msg.change_sname.assign("XBBKCGPIYUIJHMAXTIDMPXWPRANFHEMKQDKQZEPCANXKACEJXRFUSJDTUWRDJLB");
    const char tmp_msg_0[] = {125, 75, -28, 100, -109, -58, 28, -16, -22, 88, -3, 112, -78, 65, -63};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.680768848265088);
    msg.setSource(62093U);
    msg.setSourceEntity(66U);
    msg.setDestination(50204U);
    msg.setDestinationEntity(52U);
    msg.plan_id.assign("GMAPNYTQULMGWXIJKAIQHLGARVJHJPSQSJKDOEMLCIPGEZBWCPVQZPTBQCOFKWDAXDWQXUYSRFZDREAMFVNMHTZDKPDXUDZHRQSRYQNUSO");
    msg.plan_size = 51889U;
    msg.change_time = 0.055727370563262824;
    msg.change_sid = 47810U;
    msg.change_sname.assign("HLQCBZBCMHCISZKGKZSEFVLQWPNUJFUNPYBPHNLIGTLTEWWAREFKLRCNZBKVFCLNFKTYTMXWPDQWKROFJHGOJDPBGQOMRTABVMKPSDEEHBIJPMEZWFAGUBLBMAGXZUQJISTMAPYTYHYSLEUTRKDRAYSVIRUVDSOYWQUIEVQLNGTWVJMYHKCLRITXOJYIZDXX");
    const char tmp_msg_0[] = {86, -118, 116, -68, 44, -58, -104, 13, 28, -90, -126, -22, -67, -26, 2, -74, -16, -90, 81, -4, 71, -36, -52, -16, -41, -107, -100, -32, 77, -38, 12, -115, 108, -26, 83, 92, 71, -111, 99, 124, -122, -122, 109, 93, 49, -55, 67, -89, 94, 101, -124, -104, -43, -105, 8, 125, -15, -2, 74, -23, 9, -12, 44, 120, 106, 79, -2, -95, -107, -94, 123, 23, -100, 119, 97, 120, 101, 48, 62, -35, -60, 5, 40, -73, 78, -110, 123, 4, -20, 33, -66, -105, 20, -19, -104, 71, -101, 57, -117, -106, 123, 38, -95, -90, -125, 57, 8, 87, -91, 29, -63, 48, -96, -120, 21, 102, -101, 112, -17, 94, -51, 54, 58, -106, 118, 9, 117, 27, -96, -91, -89, 48, -106, 121, -109, 51, 55, 85, -42, -46, 72, -49, -36, -66, 0, 95, -105, 80, -26, 123, 72, 59, -86, -15, 24, -93, 45, 122, 44, 9, -106, 110, -19, -28, 74, -116, 116, 81, -107, 42, 118, -97, 97, 86, 31, -60, 77, 86, 48, 111, 28, 27, -39, -47, 102, 54, 74, 94, 98, 87, 12, 77, -112, 29, -52, -56, -51, 46, -89, -119, -8, -69, 51, 71, 61, -26, -120, -126, 110, 89, -83, 41, 14, 49, -17, -80, -57, 49, -15, -59, -111, -118, 112, 86, -52, 114, -62, 119, -21, -109, 97};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.9331427711572199);
    msg.setSource(5785U);
    msg.setSourceEntity(250U);
    msg.setDestination(24213U);
    msg.setDestinationEntity(147U);
    msg.type = 186U;
    msg.op = 222U;
    msg.request_id = 51968U;
    msg.plan_id.assign("WHPLELRONYUQSPGJRDHWBXHAOSUCTMEPLIQFHYYUCBORQKDZJUQTFUHIZSLFXJDFOBPAHBUHMNEOZKXDMLQCFFIYEHUOIVREZNEC");
    msg.flags = 50198U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ACTQQYSLSGIAWAWCGQVRJHBKNOKSRDSYAMJW");
    tmp_msg_0.lat = 0.4792752792453324;
    tmp_msg_0.lon = 0.5785991184876499;
    tmp_msg_0.depth = 0.8016684978570339;
    tmp_msg_0.query_channel = 171U;
    tmp_msg_0.reply_channel = 63U;
    tmp_msg_0.transponder_delay = 213U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XLCNAGGRRRTYTZZEJNKEJITTULOHAFJGEISTDYHTYBDOKRNXMMKXSQVEONWNTQXPKJVOXQYIUKLFINDHPWASJJLAXZZEYRBKMSDIIVSHBKREXCCRLOVWQYAPVAXAVHMWVCQSCXYFSPPJGBBZOWZFKOOUQDLTPYNSHPMVINTKYJRKWZWVVQNBFBWBDECPQDFATGIJDILRZUEHUMHUCCQPHOGWBDMEZGGMUUGLME");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.23424994937889565);
    msg.setSource(50228U);
    msg.setSourceEntity(173U);
    msg.setDestination(44636U);
    msg.setDestinationEntity(210U);
    msg.type = 18U;
    msg.op = 59U;
    msg.request_id = 19804U;
    msg.plan_id.assign("XZKFZDGSBUYSNHXEWTCSFWMLHTCIWDSRGADYTPJXBFBHBSUNBSVHLXTSUCUTYZBXIPODAQWSDZOGMQUJWEVMDCRMRRYPQEQZOTPHRPFYLIRWQFDE");
    msg.flags = 42995U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 11U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7694300172738706;
    tmp_tmp_msg_0_0.speed_units = 146U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5050226560453661;
    tmp_tmp_msg_0_1.z_units = 184U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5252182776409687;
    tmp_msg_0.lon = 0.6697514905259312;
    tmp_msg_0.radius = 0.8220028443098825;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DMUZWLBISIAHBQBVTMWGUHVGHBMQACRGKAOFZXPKJFHKPAHFDOAWNIPRUVGLQU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.05590191086366447);
    msg.setSource(4323U);
    msg.setSourceEntity(68U);
    msg.setDestination(29291U);
    msg.setDestinationEntity(238U);
    msg.type = 252U;
    msg.op = 191U;
    msg.request_id = 54152U;
    msg.plan_id.assign("FPUQXAEZWQQZZXUDGTALWNIFRRLSFQIMVPQVOOWOOFHBJKTTENZUNAXZVAOTNJKDTUJIMPZKHDRKSCCUYYCVUYIQYUEAFDNFDEMACXKWGJGBZJNISTXMBVERVPYLYKFEQYMKGCBMMECRJLUXPWFADHXFYLWCDHSKASSPYURGYJSHBQGBBVIECKFLVGHVGZG");
    msg.flags = 31012U;
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 193U;
    tmp_msg_0.period = 3623712122U;
    tmp_msg_0.duty_cycle = 402699740U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RHCLABXCQYSYQIMDVFIBEHKZFMIIQAAMZJOMXMSGTXJENBKGODXETDGLKXHZLVMICEZBUHPNWKHBJHYBBOHVSFHNDKQVDSPACPWTFZGUHJE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.039578475826839044);
    msg.setSource(3323U);
    msg.setSourceEntity(100U);
    msg.setDestination(40535U);
    msg.setDestinationEntity(225U);
    msg.state = 186U;
    msg.plan_id.assign("BTCYYBCDXBCYLCOZYVSPWUIUQXOOCOROJZSSBWYFBCAEMJFPBIESRUWJHOMGEKZNHRFAZMEIXWXPTMJSZQLRIKAGZBBLTRRQAZQHPJKLALSVPQGHTQDDKLMUKWELZSYRCUMXQNJBJQUGVDSXTHHZYFPHGTAAARCIWNNFEXFPWDQTOOVDDOITNMKXCEHXARDEDIIJMVSUKKNAGNVNZITYHODKNUFFLPUYMPIFLPXGE");
    msg.plan_eta = -1130402604;
    msg.plan_progress = 0.8972513720668096;
    msg.man_id.assign("PHYMABXNZRKHFLKYWRATQXKTCOTKPHGOSCLCJRYWBEJILFVDPYJMYEGKSZRZ");
    msg.man_type = 32533U;
    msg.man_eta = 642641710;
    msg.last_outcome = 225U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.45874071117789994);
    msg.setSource(18842U);
    msg.setSourceEntity(84U);
    msg.setDestination(3472U);
    msg.setDestinationEntity(193U);
    msg.state = 121U;
    msg.plan_id.assign("WZGKYQCGMRQBYFVUFCOEHPRHLIKNCTJITCXYWWRSINBRWWAXHNLXJPOIBTFUHOJFMEBXGPDKXSUTDFQVZWRAQGFLLYVEVRLIFZUJWMODHAHSGLRAVAFCWWKE");
    msg.plan_eta = -631887503;
    msg.plan_progress = 0.6945059396190469;
    msg.man_id.assign("DNWNDGVCLEZVPSUADYXHTT");
    msg.man_type = 24456U;
    msg.man_eta = -1436365054;
    msg.last_outcome = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.7726076613086715);
    msg.setSource(35309U);
    msg.setSourceEntity(76U);
    msg.setDestination(30704U);
    msg.setDestinationEntity(53U);
    msg.state = 23U;
    msg.plan_id.assign("FIVGQDMYEIIPCEWLURUGLXXSBVXKUKIJYIRE");
    msg.plan_eta = -2071015978;
    msg.plan_progress = 0.5599764826764856;
    msg.man_id.assign("ZZOYUSUNFLCEWBGVDXQVLXZDRSXURAYGNAHKNVQMNJLYWAWQCSQXLDVHONALBMQZXJBAOEURZKEQNWTVIJSISJVTVRTCPPLTXARDOCTOMUXBPIFGQRCBIKTHVWBRYKHGWPNI");
    msg.man_type = 64166U;
    msg.man_eta = -2077080623;
    msg.last_outcome = 229U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.4148003778438859);
    msg.setSource(7580U);
    msg.setSourceEntity(192U);
    msg.setDestination(38198U);
    msg.setDestinationEntity(241U);
    msg.name.assign("AJNUCKFAWULJGDTVARBJDMVKCJOZYJOMLTBNNJPBKLMXMFVCXNZLZXQRDZFNRWUMIVLGQFKMBJZMLGHVSDSSYXPDRXQOOJSTPYYUOFLDLVMGRDCWYEQCRCXVBBIIPZSTSGUZWGKEZINXQHEREYHIWQHSGISRBCKWGEZFDJYHFNNHTXTHFDPNDAHWYOPTAKQMRU");
    msg.value.assign("GUGUZVNZAFKMGHHDXJ");
    msg.type = 188U;
    msg.access = 1U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.31696703863679554);
    msg.setSource(24764U);
    msg.setSourceEntity(36U);
    msg.setDestination(41227U);
    msg.setDestinationEntity(132U);
    msg.name.assign("VHRMUMIOVSMAXQMGUESKYQRKZHPUFVLOTTTYMLIKMYCWVZHYHOBRGLUWSGZTIMSJLTAKJDKPXPFANGQUYCZYUMCOPEBKCNWZNBTHKEOWBVZXNYPDOAZVGEDFQHPJUTCNDHFGJJLUNASPSTBEFBAYQMICAVNCPSHJIPEOYQLDSFELDROWKXXGZRVNWGHGTENENCLABXELOSFUFPRXWOJMVDQRJXIRWWRB");
    msg.value.assign("HFGTWNSBNIKBSVLIOPWOGUXRFXTQLGXIEPUJLCCDESQYHFTSYNOENUQQKEAVPBDVE");
    msg.type = 9U;
    msg.access = 36U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.6842032202329852);
    msg.setSource(15831U);
    msg.setSourceEntity(122U);
    msg.setDestination(17778U);
    msg.setDestinationEntity(92U);
    msg.name.assign("VIBFOCMYXKVEFQPRCBAQEUSUHDDSMIHWOFWWJYNTVJBVIZPXUXGQPSRAEFKGVOJBEHLWBFUXFKGRQPSJUYETNDWUKRKQYSECDIHELRAZVLGZVRVYBGYOHICQLHIBYXFJTLZYNDSVLAGJLWNCRFTXTAQXZIXKHCLOFGIWSTGZRAJCWODUPUOMZJ");
    msg.value.assign("VDVRRVOYOUSNVMPLPTFRNADUKMYHMBGXRRNKSEIPJVEUPUVBFWYBQFRTETJZRJEHDRLYN");
    msg.type = 67U;
    msg.access = 162U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.26446639145946627);
    msg.setSource(55456U);
    msg.setSourceEntity(254U);
    msg.setDestination(55215U);
    msg.setDestinationEntity(121U);
    msg.cmd = 71U;
    msg.op = 187U;
    msg.plan_id.assign("JHYOONYXKFCTOEDYARMPLEZUXWBQAJJFGZDRATPOYBXSVGWLSLHXI");
    msg.params.assign("UDWYWPUETBYTCQDIKFJHZQXGVZSEUJKALBSZDYTDRFIQCRIHGDCFSHEHJMXOMKGGHMXRVJGOSIZBCBCDNCHFAMZPKATZYPXQMELLXGNIAAGJAEBHUYTRBYFIFTXOLSPDWXRBSRAOOBYIMKGNJPNJV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.759170062996426);
    msg.setSource(34128U);
    msg.setSourceEntity(101U);
    msg.setDestination(27517U);
    msg.setDestinationEntity(235U);
    msg.cmd = 135U;
    msg.op = 38U;
    msg.plan_id.assign("KBZJGXBUGODEJWXLYTRNNHCXQOVUHPEMIRPK");
    msg.params.assign("LUOYNKKIHARKFWXMCMHLNKEOBQTCUIOLYFMTQDQTQZWPXIOIFVUBVHBSWPPVYVURHRRDOWWVAXCGZBNYPAATKLNXOCATRUDIWXMYZLCYQYXUBCQDSTGVKZCMISFEFJXOEMIDCZGHLDGPWTDEUNRTUGDJTDBQPKRIWKSXUTGFEQXZSNERDLEBBLQJHAUNEPJMEJOBFIGJAAZESQVFLVOHOYWXFPANZRCRVZHMYSMHBPSIJAJPKSGHG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.31730323294662177);
    msg.setSource(21316U);
    msg.setSourceEntity(181U);
    msg.setDestination(49807U);
    msg.setDestinationEntity(48U);
    msg.cmd = 237U;
    msg.op = 221U;
    msg.plan_id.assign("IKULLVBGCZJHTXMKGEOSHURGNTLWECZSYKUWQGXZBBIRVMHVTXUASENJPFUWBOBEMXSPRUESFJBPBINOCOPYXMTCHTUYNZXOFHWADAXEELMEJKEKLAYJXOIAQIPROQKWVTNMSVNIFVBITASKUJZDMCVDHWDIGXLOGCLRNYVHDDWY");
    msg.params.assign("YVVDNFIKDSUBVCYCNXTRUNYZTPWZAVJDCPYNMZRIFALRJLRXPODCZXOFMAUDKDHGNWLKDHZHMZKZOIWJDEJYSEIBRTBNDMLKSZNXCQUUVHTWDUJFJGPWGP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.5284091144622861);
    msg.setSource(58987U);
    msg.setSourceEntity(196U);
    msg.setDestination(2229U);
    msg.setDestinationEntity(242U);
    msg.group_name.assign("AXWNTHUAGJOMTILAEIMDPSXHBOFJSOYXJMIFJZGGDUFCGMXFBGTJWCBHOKCDPWYULVCTVYCLBPATPRENPJUHAEFTCO");
    msg.op = 114U;
    msg.lat = 0.10789139297962924;
    msg.lon = 0.892202270027278;
    msg.height = 0.018827124381073257;
    msg.x = 0.015621106669648221;
    msg.y = 0.19164066753425035;
    msg.z = 0.6371001709425897;
    msg.phi = 0.27421324110163126;
    msg.theta = 0.7352225190498474;
    msg.psi = 0.17809304957965222;
    msg.vx = 0.7118734774348263;
    msg.vy = 0.5792816374988168;
    msg.vz = 0.6181491507363664;
    msg.p = 0.2829745872795316;
    msg.q = 0.5293192052938936;
    msg.r = 0.826217898330646;
    msg.svx = 0.9174563652282116;
    msg.svy = 0.4785165371214988;
    msg.svz = 0.45313325393841586;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.2497565361662608);
    msg.setSource(25141U);
    msg.setSourceEntity(19U);
    msg.setDestination(22376U);
    msg.setDestinationEntity(160U);
    msg.group_name.assign("CXCCSZLTOEWWLVOSJDWACEURYHTTGARQUYRIKLCZTXPOJUDODRVSFSBXWJSYKIFYRDECCWTSFHQZIZSVBQRFDBARPNEUAMBRTGNONKVAIOGQUCZHHIBIJRKVYYWPDBMPUYEODASNYTITVXMKPMOZFTFMGNWXRHIDNKGUJXEXFALAKAYHJSQLPQMIDNQDLLKUCGFHPCIELTFAGVKJNX");
    msg.op = 229U;
    msg.lat = 0.11960845355755678;
    msg.lon = 0.1032168946618861;
    msg.height = 0.7577412923393614;
    msg.x = 0.17503215221031154;
    msg.y = 0.35172013964789295;
    msg.z = 0.9540398609850105;
    msg.phi = 0.8421092370112913;
    msg.theta = 0.08700084446014145;
    msg.psi = 0.31973468881258504;
    msg.vx = 0.8039673922176711;
    msg.vy = 0.9278919780053827;
    msg.vz = 0.7658181163469399;
    msg.p = 0.3136222423494992;
    msg.q = 0.6559865662951255;
    msg.r = 0.8027881904018596;
    msg.svx = 0.3831221871503683;
    msg.svy = 0.2543201635370471;
    msg.svz = 0.937726148269067;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.3351491984778846);
    msg.setSource(56895U);
    msg.setSourceEntity(230U);
    msg.setDestination(15614U);
    msg.setDestinationEntity(62U);
    msg.group_name.assign("ARPPSYULISYJDHXRNQRLNOYPGOUYLYGIMKOYUHTAQMVEVJYIJZSTIEHLFRPKJWRDRFMXCMXLKXIQJNEUVZPECCUQHUVJQOBNNUEZZGMPGMDBTFJSDSFMSTTKWXISOPKYBBNFNKOUGEHXOWFSQKIFJHTWXCZAFDEWKDPFSKLZLHZGOOJRVUACBRZGNTUMXEQGQTR");
    msg.op = 80U;
    msg.lat = 0.44314979104184116;
    msg.lon = 0.49448268273862683;
    msg.height = 0.48900743403861324;
    msg.x = 0.000292562079714731;
    msg.y = 0.2458921888911948;
    msg.z = 0.2593239401105639;
    msg.phi = 0.8736047079175255;
    msg.theta = 0.5384115748270222;
    msg.psi = 0.19756484951067532;
    msg.vx = 0.1506084275044547;
    msg.vy = 0.9721685138066949;
    msg.vz = 0.36440267287857775;
    msg.p = 0.0005842644743250247;
    msg.q = 0.6892320542387861;
    msg.r = 0.9489439303383179;
    msg.svx = 0.6372175141897753;
    msg.svy = 0.9368432777661714;
    msg.svz = 0.7460179034340185;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.6136500659724361);
    msg.setSource(37319U);
    msg.setSourceEntity(170U);
    msg.setDestination(7588U);
    msg.setDestinationEntity(31U);
    msg.plan_id.assign("BOICAOAIATDPLGVZHFGNLZRHZBOKRAXKCZDTGJUCILJJJVVQOHHDWETMKEWUMZOOKEMUYTSNQDIJXFKYMRCPCDXEQHZBGTLPTILAPNSCQLTAQXQFWUNSCXTCWKFQWZVYBMIJFFFGAWGMSEPUYEPXWDLIJXKEZAMZKRBYRGQEGMVRIVYIYDXGSJPSJVWTFPHQDNNHRVSMBZYPUICBFCBRUBVWXHLOHLBSURDOXVGN");
    msg.type = 53U;
    msg.properties = 180U;
    msg.durations.assign("KXKZYRJZGQBALZEOWHXYBZNXMNCSAUCNLSMSUOSFMLUUUWFBBMQYRIGNQVUZDRXXKUXVXOGKOMDKMSEDWPUCDHYNRLGPIHGJHHWRFTYTZGOYLLTDOSQULZNPMQKLOANTTZGVRLGSECRCWJVUSAXPOWXQAIZQMBFEWCETYTHJZJFHIODKD");
    msg.distances.assign("DAGYIQOVGOMJXBAFVJTKLTLUHQECBLVLIGFMFTIJZQIWNAAYYONGHZDSGZPQCOCPURBWNKRLYGOVJLSXDORLZSVEDAHJITRIPUEZLKXYXCPEIBTQBICAJMTSPBJFDWBTYYLUPQFV");
    msg.actions.assign("TOIFJZCSBNQQZGVBHCAVWPEGINILQYKNMFRPRQBHQAXCPORSWLFEWDXSFDGPMQCXIIDLEROZXODVJBGVPQHJIGXIYLEHUDIBPSOSNCJKENWLRRGULCMJHDKUOOUTQDUMKYEWYDNMTYLEJSKAFZAVPXSCUTZBWXNFLOEKULVJIEYYAZTBCWNASOGBVZVKPWCRZVPVGHYDHNAKKXMUMCTMNIQFTRSHXEBALDUZJYTHYR");
    msg.fuel.assign("TSCXDCJUERMSIJUBJIKDEPRMLZCWZHZLISYVMDMMHQANYIJOLRTOMKWSRUYAUDBYNAWZTQXVFTBPMIYPXNHNKKEGUFGNDNTZBCBPOQAQLHMLQXNXUGEEVMNUFGWELLIAA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.906626748529831);
    msg.setSource(15599U);
    msg.setSourceEntity(220U);
    msg.setDestination(12555U);
    msg.setDestinationEntity(4U);
    msg.plan_id.assign("JWSCSHLPXILUQTRJGOTZRBQNFHKXZAFKDQURSOQQFWBGSXUCQZRTQIVFWYPQEIRYVMMOLV");
    msg.type = 101U;
    msg.properties = 197U;
    msg.durations.assign("QMGWKEIZREKTHBVDKWJJ");
    msg.distances.assign("RDUOCOINQMVSZYBEEWJWQEVNMHQNHXZQIKQWDDRYONZGJGMATEUUBHYALLPTURBFIHVSFQFKXYUIWJXDHGYTNFHECZGIASVILDHXVFIKFGHKXBSNPZOAQWLRMALPIGP");
    msg.actions.assign("UYUSQLXTJRQXMPUUXIRHIUMEGNLOLIGZKVTTTGZXGCQPVFLJPIKWWVBAGEBDEKWHYUVILHWRSYUIHFQLAHCDOMIFCKTBSRXAANQOHMNOITMYYAZNFJNZOFCSDYVWCVZDGWBZEXWBEKEFBJRLSCGJLPSHEAZUJVOOLFJTTXAKHCZFTHRJVNPPWIDKXFUAPTNGBQOJRDJQKBFVXSCQYRWDEMUMIKPYQXNOBPPSMK");
    msg.fuel.assign("GMKAUNECUIQMERBXWWNEHZZTJQFFSSNNIZMCLTLKCWQSIYMLXZTSIOETOXZJJXELYYDOEITGGGSGVDOVPFVMTOVWSAJPFOAWYCTCQJHFHOVBBWNOGHBVADXHUZCVKFHRBHFLTBZQWZTNADPRVLUUJKXMJIVYCUPKUBRXHIGG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.6288443931501996);
    msg.setSource(15383U);
    msg.setSourceEntity(160U);
    msg.setDestination(49412U);
    msg.setDestinationEntity(102U);
    msg.plan_id.assign("XIGSBHRYHGINPXVLKGJUVVHUCAKLNQLQHLADKYCMKCJKIUALJVMABFJFZRYIRBP");
    msg.type = 26U;
    msg.properties = 249U;
    msg.durations.assign("FGBUDZVYYYGVASQOQWCUVOIPTLROJQLWEFQSCJHMLLFQRWXOYOBIEYOXGTNSVMZSPRFYNZYIOBRFFAFYKZUUBMZWSNUVSQXDPCNCWXB");
    msg.distances.assign("EAEBKGHNJRUKWVVEPQNTEYAZGBSZWYLMGLSBCHUFCJRBKHW");
    msg.actions.assign("DNZUUGQITLXIHPMRVYCZJZANQMRKBYJIOUJBYWLSKDVTVROGYKVOSUFWOWKNFHGTVGECLJVCHJOLMPSTCKRMPEPZBYFMKWAIGTKCWAEGBPGVRLXDBFNFGNQMBFOVIJWNMWGMSIUVYPFXCHZSOSKLAKWIRFLHOLFELMJU");
    msg.fuel.assign("QYZZHOWTKGFTFSFQSVUAYOENPNGOAHAKJSBELDAIUBBSNDKTATMRIAKZOJCWZZIRLOTKNKNSCIVIJKTMWXIHHJXJYEOHMVBQPMFXVXWNRUBLZDLMQLIGYSSXVEUFYDYBNIYFNCPEUIDYCUDDSANMPQTHHCCUOEBMMAGCYXEBKWRCUXAQRBRQXMPUAJWSGOHCZGVQQPJPFWWXFLQNZPFLJWV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.951661853837585);
    msg.setSource(27392U);
    msg.setSourceEntity(39U);
    msg.setDestination(8352U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.8105569170810181;
    msg.lon = 0.726719596813049;
    msg.depth = 0.32421661505340404;
    msg.roll = 0.3394659309361199;
    msg.pitch = 0.5235394914984268;
    msg.yaw = 0.19767422973549076;
    msg.rcp_time = 0.17752534499705508;
    msg.sid.assign("UZLTBVAAFQWYLQDGJOWETGIBRYKLWQUOWNYHFDKPCAPMOZCCHRBHKXHLQSARPZTESVKUJEMNTNLAXTYJDKAOKPWMXSX");
    msg.s_type = 21U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.3626129514899594);
    msg.setSource(19220U);
    msg.setSourceEntity(41U);
    msg.setDestination(35980U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.21291019662978616;
    msg.lon = 0.2141322494152953;
    msg.depth = 0.4347500481532959;
    msg.roll = 0.6715305496837937;
    msg.pitch = 0.3593286107847714;
    msg.yaw = 0.1006577613578209;
    msg.rcp_time = 0.046060831842980376;
    msg.sid.assign("IATXXJEINIFPPGTFNDOYZVBYZVYCMGMMTSQELBBFXKSTXGHMNWLDILTMJOZUQUEUWZGKWDAKAOWHTJUSORCTEXDFVCYQPPILWGLCSVSCOZXOSXMMQFJPAOOGPAOYANUP");
    msg.s_type = 188U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.3999789050948157);
    msg.setSource(45027U);
    msg.setSourceEntity(254U);
    msg.setDestination(51294U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.7753253981306933;
    msg.lon = 0.16241982501002294;
    msg.depth = 0.4345887378290353;
    msg.roll = 0.26630634398301267;
    msg.pitch = 0.6829896850966545;
    msg.yaw = 0.5670013521707384;
    msg.rcp_time = 0.4712355269444899;
    msg.sid.assign("VTAZGERSDBSYLGVYIPXKTEHAPJWDEZREMQTBPHUTYNZMSJRKHJTLBQCPLXPFCFFRYLUAZGMKBLLHIGDYOWVXTSSFCPFOWYAQKRNWLWJGHSYRUVDQJMXVMSINJGDAIKQOWKCOEJHQOJSHUHQGELWCNZXC");
    msg.s_type = 97U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.37188838320296946);
    msg.setSource(63769U);
    msg.setSourceEntity(239U);
    msg.setDestination(24659U);
    msg.setDestinationEntity(243U);
    msg.id.assign("HCTDVSHAIZSTJFVOXRXTRORIWYAZTGKOQCNVMKLAWXVZQQENTJUPFZIZJCWAPETPCKDWMMGQYLXFUEKSDCERRQGJUMREHMHYSKBDRXHZDXVJLITGBZTUZYAPNRJIUOLVQMFDINBPFPFVBX");
    msg.sensor_class.assign("GCRBELEDBDTIVISAJGZRWTRWNPXQDOXKHJAMFNCYTVSKJEOCFOHTIPLCHCORQJOVCWGUIEXTMYHUYRXQGFACQATITQZYUVVEVXSBWAHPSZQWVNZKYHRRMWAFNIKQLLRBUXVMJGSUZGXEDLDXVLPFJOFPQKAFAQJBUGESZDNAUNMGGN");
    msg.lat = 0.8984978087098558;
    msg.lon = 0.8461697936839918;
    msg.alt = 0.3339262567605492;
    msg.heading = 0.4822850898033074;
    msg.data.assign("CRODDEPYTELFCJSPHUQDGKQIMLWRDQCBORWIKGYXUMJEDLMDPRUIJPQGIGJHYAWHQIGTKCDOADPZFMGGVBPZUWQVAWQSASOOATKQXPVSHIUVTZEMRNFVHUZCAJPFXQJSUHYTELSJSZRLWVMOAYRYNNKXEKHLIHPLCXRKKAOZBZRFOLWJYHTBLTDAENXVEZDEBJPGNC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.7843299759843676);
    msg.setSource(29641U);
    msg.setSourceEntity(147U);
    msg.setDestination(9333U);
    msg.setDestinationEntity(17U);
    msg.id.assign("IAULXXHLCKSFYHEBSAWRACRMWEOPPHJBBQUYLHPZFUEG");
    msg.sensor_class.assign("LKXSEHPVMCQRPYTKFEUFVOJDQFUFVWUF");
    msg.lat = 0.9758150101497787;
    msg.lon = 0.21164070904759857;
    msg.alt = 0.5205667664834955;
    msg.heading = 0.94967858347162;
    msg.data.assign("MSCNTPLQGRXTQPRDCEWOFEDAHCYCAVVKDHMRTIJAQRQQTGHXBJJDJKALCNDLTODKYXYWSVIOYGSEPJBHBVQEZWVZKULSOWUCIVIWMH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.3421587412564323);
    msg.setSource(764U);
    msg.setSourceEntity(16U);
    msg.setDestination(15409U);
    msg.setDestinationEntity(251U);
    msg.id.assign("AWCHTYGBGHXCTMKSWXONQABHJPRDDFYVPWRJTZPNRWISSSIRDADVYTBFQSOSQOYVVUZRQDUYEARXQPAWXGMUXQKNNYAGMZMTEJZHDCGKRLLMCOVLIZMOJAQTFPBVEERKHSLUDOOTOQEPFKGLYXWHFALGDNWBIIVBOPNZBICZELFUTCFUYMNKMBVXAGQZUCELPPSNZL");
    msg.sensor_class.assign("YMBPNRPQEDGVZKPXFFGJMZKYNKLFYXAYRXVDDZKIFOONZLALEMTRTGPWXSEANYGEQCHWCMBBMDPWMRQGUYJKWPCSVBXCWWBJRJ");
    msg.lat = 0.5864722798686812;
    msg.lon = 0.8738636192853291;
    msg.alt = 0.40880610069835144;
    msg.heading = 0.567681013116231;
    msg.data.assign("IWSJRKKRNIZKMJWCPXQTVEZAMNDHCBROWBRSJSKCVSDJZRTOBUOYZQYXMKDJZEURHOKEHJXLODDQBYVINTLYZXXGVGEUFXAFUGXENYZIPESCEYWDZBILCLHEKRNATPOMLTBWDLBSJLEQIWNAUPTNVRTAOTAPVWFHSPOYFUCPNWUMQHPNBLFUDVBFGMRPQKMYTFFQAUIOCGIFZXLQMGAWFQGNYJTKML");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.4055169957306156);
    msg.setSource(23234U);
    msg.setSourceEntity(234U);
    msg.setDestination(26568U);
    msg.setDestinationEntity(137U);
    msg.id.assign("TIZAYSTXBDLSTD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.17051286272845778);
    msg.setSource(46233U);
    msg.setSourceEntity(72U);
    msg.setDestination(44451U);
    msg.setDestinationEntity(116U);
    msg.id.assign("IOZLFQJZEIDXBTVEDLBFWSYOEAYVHVSGNDKXOBNSITKXAPZZEPMIUNUKCKBOYVXFOYM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.6624445993974728);
    msg.setSource(10117U);
    msg.setSourceEntity(85U);
    msg.setDestination(59557U);
    msg.setDestinationEntity(69U);
    msg.id.assign("XKRULGDAPBUKPEMWNKZHQDQYTVULEOZAMDRIXLYGDIMAMEEDDWVVNSUSYJJGTQMICSLCITVDBFJGSJZKOWFLRKQWNUNECBROHPUMPFNAZLGKQDJSBBAGOOFPEAOECYFKCPNPAXWATSVEXTDJIRDZJUJBOQFQXIRYQMTXOCIFWZPVYFMUGLOHGYIJHMXZFVKSBVTKXZQMVLY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.5055283965091785);
    msg.setSource(16606U);
    msg.setSourceEntity(38U);
    msg.setDestination(55360U);
    msg.setDestinationEntity(141U);
    msg.id.assign("BALCEAGOTVBIGFUQTNHXDRMZFDOXMRCUMRWFZEKVUVZHYOVHBLQCHPFWUBLLOJUQNZODOTJTYSRLFULBYGPKNPHCPGSEXRWWHZLAQCFQAYWHYVVBEJPMHDTKJRCVUGSAXMLCWKPTCQZXEYUWNITCXAMDDJJXSPGSEUBNSOPMMNWBZIDIEKSTJOYCKQEYDNHXRYURDKBPYITGBFVMZQQIVNAQFREGNKJEMGOPJFOXTHSILVLIASF");
    msg.feature_type = 167U;
    msg.rgb_red = 35U;
    msg.rgb_green = 216U;
    msg.rgb_blue = 191U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.9856910846492904);
    msg.setSource(1589U);
    msg.setSourceEntity(108U);
    msg.setDestination(25513U);
    msg.setDestinationEntity(0U);
    msg.id.assign("MOFGJZKHXOIKZOPAWEAGHPUSOITYQZIZPOKYOYHSOWEAVJUEGWZYRTLTIHCFWMRAVARHNMJZFBFYENNBVHXCUNVAGGDEXRLQDQRBDNSQMWCXDQKCDDRFJRVZSWLMTYSNDVPGDMXOXPJCWHUIBKWUULEXXBKIFQYHXKZTTNFSXYQGECIBIRQUJTCFPKKFABVWPQUTALJNCFBNHPRTIMLYYLJPSOAEHDSGR");
    msg.feature_type = 253U;
    msg.rgb_red = 168U;
    msg.rgb_green = 57U;
    msg.rgb_blue = 204U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.6525260681778796;
    tmp_msg_0.lon = 0.546731246738251;
    tmp_msg_0.alt = 0.9294209422909215;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.48010018995269776);
    msg.setSource(64533U);
    msg.setSourceEntity(211U);
    msg.setDestination(3020U);
    msg.setDestinationEntity(52U);
    msg.id.assign("JIBEQSPKYTRDFHJIGNVBNNBIJGSEEWBVMAXUEONZFBVSAKDCRZWUZXJDWKQWSYPPWVQRPOMJOTRHOJGRLUQXXYEIABROUSEMSHXHZRTJZSODVJTUHBMKGNUBFYLMSCMADYCMDIFGAWYKXTRJAFNUKTZIAGRBLXQEFMAZDQZOGWONHQSY");
    msg.feature_type = 186U;
    msg.rgb_red = 107U;
    msg.rgb_green = 134U;
    msg.rgb_blue = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.3680574079030381);
    msg.setSource(61995U);
    msg.setSourceEntity(211U);
    msg.setDestination(53120U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.12673579648048328;
    msg.lon = 0.460338329909468;
    msg.alt = 0.09617268648676347;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.5151860693622518);
    msg.setSource(37298U);
    msg.setSourceEntity(254U);
    msg.setDestination(20708U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.4726298002680114;
    msg.lon = 0.562326148579677;
    msg.alt = 0.0656939457409137;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.9426690324984239);
    msg.setSource(8288U);
    msg.setSourceEntity(62U);
    msg.setDestination(59601U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.7346356836631265;
    msg.lon = 0.7835310516003787;
    msg.alt = 0.7515653696408628;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.38473236300110547);
    msg.setSource(14204U);
    msg.setSourceEntity(6U);
    msg.setDestination(59746U);
    msg.setDestinationEntity(95U);
    msg.type = 44U;
    msg.id.assign("DKFCZDRXXMSVWOQSAPZOBJEAOJEHVTJUJDLSNQRQUVTXVPVHGWWZWYKBURUAYILTNSQOYRELOHQLHENMKHRIRAKLGNOIDEXZJODCDGDPIOBQQGKJYXUWTAYFRKZXKGJPSVETXFZGIMHGQSYARGNDQXBFAJGIYFPBWWCTLDIQXNMAYFHBBZLOILMWTNTASCSPHUGMFKMVMKVCWAFZCZMCCFDRCPBEYYEFJSN");
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.9629305243766221;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.7683406225308383);
    msg.setSource(40881U);
    msg.setSourceEntity(210U);
    msg.setDestination(1088U);
    msg.setDestinationEntity(191U);
    msg.type = 155U;
    msg.id.assign("DWNKRWEHIXXQRDOKIRBMSSCNLAUOPZXJRQJCDPQL");
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 55521U;
    tmp_msg_0.off_x = 0.2808488555334916;
    tmp_msg_0.off_y = 0.6149177993824652;
    tmp_msg_0.off_z = 0.5146266733315005;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.27385905329004845);
    msg.setSource(36049U);
    msg.setSourceEntity(45U);
    msg.setDestination(50154U);
    msg.setDestinationEntity(144U);
    msg.type = 31U;
    msg.id.assign("FDWFPVAHHTQIQIKGRPHZLIAPZCOAVVSLUSXPDJEMRVZKZXDV");
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 172U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.703148441642287);
    msg.setSource(25510U);
    msg.setSourceEntity(59U);
    msg.setDestination(23480U);
    msg.setDestinationEntity(181U);
    msg.localname.assign("OBISPLIAGOPAKJDVSJSQTWGWPXFQEGWXMGTQARIGKHFJDIQTZLMAJLYNFVCSSXKUFFSWUTPEQMHIIQFWDYZHLNLLRWOUCRMWZRDNGNHSWBAWGXHBUXXKZJEYPBPHMPJZJNZCKVRSKDYGIIICPTNLNB");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TEJHSCTBXTTXQTWPFLCRBWPRBJKUIVCVUNPSFGXSBILHZEONPNXGIXWWRWHLMRPGXXNJZOUUDAZLMMBVSAAJAKOLEYCCNKHSYPVLIHDWFPDSYQYHCTHUGDVGODBVDNGQDALRSQJKPCULZKVCXSMRTFFXVRHFQHMESTKTIYCGHKWYGZOWCQQEIUBOJFDENAZQKONGBNJGWJOSLIKPMXEBRFERZYAEFAMZ");
    tmp_msg_0.sys_type = 220U;
    tmp_msg_0.owner = 4184U;
    tmp_msg_0.lat = 0.2563637279749018;
    tmp_msg_0.lon = 0.6798009696974124;
    tmp_msg_0.height = 0.13780295899234785;
    tmp_msg_0.services.assign("QEDVBVSPZDMSRZCITNLLQHHRWZFCTTVQXHGXZFAPMKUUFQBFEJAX");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.3845970536955372);
    msg.setSource(23134U);
    msg.setSourceEntity(150U);
    msg.setDestination(28903U);
    msg.setDestinationEntity(229U);
    msg.localname.assign("MRQUIHKELRWSONFSPUHIUERGMSHYBMYKOUMAOPCXKWGDRAJTKGAXATXJTJEVUWOYFZRVDTERGZEYOZNGTRFBJCGAFWLCQFBEAXCMKQLGVCYNPZGWKDYWQDHSZUJFKGCUNJQAISABMZHMIXWTATPLVNFJVCPNPYLPJHSNDEEZQHORMQUHDMOYRYHIOGXXMLBWSUCVZNXEZIICBJWYSADO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.35062890565049154);
    msg.setSource(16768U);
    msg.setSourceEntity(63U);
    msg.setDestination(52606U);
    msg.setDestinationEntity(38U);
    msg.localname.assign("QVETWNZSLIJWJDRTOSZCYGFYEDWBESXCWPLKUDICRHXOBVFJMRKKZIRVXESPJIOYJZIAWVMKXRWOQMRPBVGBNZENGRVNGTPDFQEUBKQAYJAZVGQLLFNSMDYOQHHIOZJMAPFISYICLSVTHFNTRWLCTPEZNXQYTMTRCGAQPWWOMKGSKZSZXKMHLCA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ERJTLYVUZBSUNKHSHXTVDNJIDRNLWDAWPMHIURJJLOPEFIGDNAWEYPGNPJCXUIHYCSAMEDQGXJXZJEHKCGDMHFWNIIBLBKVRZFBSGFFQKOSRRJAAOHISCCOTURLBPFBGZELYMBOXVYLQAQDACTTM");
    tmp_msg_0.sys_type = 254U;
    tmp_msg_0.owner = 53375U;
    tmp_msg_0.lat = 0.7057811198947814;
    tmp_msg_0.lon = 0.396568834026195;
    tmp_msg_0.height = 0.9258257730200944;
    tmp_msg_0.services.assign("SWCQBGKFJZDYSQRIEWAWNAZARPMWOEVFVNUNSOUPBXXHRFEUUCSOSBZBAQSJVHBBKGILWOVY");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.30827714229053793);
    msg.setSource(10027U);
    msg.setSourceEntity(191U);
    msg.setDestination(28238U);
    msg.setDestinationEntity(30U);
    msg.timeline.assign("CFFODOQRDCYTYEKTXFMVKIMZXHXSLAWDGKDSZMVOLIXJCOUYTUNIIBXEEKLMFWRQALJCNTYWGEOKCEKVVIAJHLCRSCOBGZKRPLXTSINUKGRPXYDP");
    msg.predicate.assign("BDNKYDGBBBQVGFJURHXWXGISUKYCRNCJAOVXXJTIIOJQRIDYOILMHWZHNQWXPBEPYSLUOBNPZDJRJARXYMPMLDFWKETFACDLXNMSZAVRFLYVMTKENALZQOOEXUTJFTJPHNOMGE");
    msg.attributes.assign("ZTTUXUHCOCBJEENKZWDKYIMHVJVNNSGMXNONVFAZDDNLWSPQHJZJHRGTYUSILAHGKNXJQTKYBNQOEXLQXGNAWWPGYHLNGVMKUJBMFEDORSIHMRBBVFGZJZXKTRPYLIWYATTSYWXQGZTUYFEPLRRCDOVAVPAOYLQGCLQCPYPQMQATECIRBCPAZFOJXHBISIZDWAMU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.17636385412089683);
    msg.setSource(34513U);
    msg.setSourceEntity(43U);
    msg.setDestination(11537U);
    msg.setDestinationEntity(215U);
    msg.timeline.assign("ZZWBGFNDNLDZQRGEZTAUVCUCRLIFZSPULNMSQXPDYOGXJMXPHOSWYLWTJFCXOVRXGRQIGTAIBLCORVYGOADWRMSBXWCFOONNCQSNYLDMVLEZJHVKIGAZBNEIJMIJTRGFXIBWZTRLTKHKEUBFSVMKTGMUPLQHUNLURYDFHHAZZJCQAPHECEITUXUEPHMQVSESIAXCJAXDJMNEDHBFKYCNPFBWMEBFQDYTD");
    msg.predicate.assign("WAELCZQUBYQYTWDAEQPWZSFTHYBRVUERDJELIFCMUXJGZGCNBGSFKMVYFYNXGXXJFLMEYNHZQXNTFAFSGFAPDMLKOLITAMAWPYRRESOWVJWCJBCUNECBULKPHZFCJANUJDMTQMTRSFURLQOYPD");
    msg.attributes.assign("YVBZRBZFSFOBCEOGPVHZDYVEJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.6320277638043726);
    msg.setSource(31613U);
    msg.setSourceEntity(212U);
    msg.setDestination(32549U);
    msg.setDestinationEntity(40U);
    msg.timeline.assign("XJNHYQOZSUUPDPGXVZGXMRFVSCECZWUOQEWDETBYNHKQMLVZXTRHTAZSCHQILTFHEZZSYVKFECHRIQBJRIBPFFTHIDGFJIWWEWQPOKKGMBJUSVPACAQQBGZWITVOLYWVSSONXNYXRFADXYMEEBLDRAFMXROCGLCDNHVMQVXITNPKTAKNCDEZYBDURRICKAJILZAMKNYJOUGATPNIOFNBUWHJYMJULSJTYPLOGRDGHAB");
    msg.predicate.assign("BYOAGJXDGCZIFNWTDMPTMFGRLVLTLDTTWJMSTMRRUDVEMZZNDEHSHECXPMIOBMOLYHKKDGKFIOASGRLPYLVBXPUQPLVYKYSMYVHZNKQDSQEAUXJBAFWGBFEWCWTFCQVQYXOPEWABFXBPGGMUAOONHADUHSIAQTKOSRIQZUHWNJ");
    msg.attributes.assign("VXKMNRSMAJGZHEWJONIOVPVPAKSVAWMBKIZUIBYRXGUEWKHSLKJYEDEIEBHIKSAPDLNHMQMRSUUWKFCYLZGWKQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.6633766203704105);
    msg.setSource(25061U);
    msg.setSourceEntity(120U);
    msg.setDestination(37719U);
    msg.setDestinationEntity(97U);
    msg.command = 245U;
    msg.goal_id.assign("RLFUMUCWOQHHPGBKJRBIURCVIVGNGYBZOVKTXFUMJJEOLKPRDHZPNRDBVVDFOLAFZFYXWHZWFQRYUYVQCDBSSWSHLQPCGWTNJMEISQKQLOEQOIEMHLEXDLKXTGBTEKWEMLBLTRFTLXISVNIQAHGROBAAWEIWPMSYCPCYSZKAHHPATZIOMPUNDOMUXVXBEMUXDYNTAWISPFASCDCRGSZQWYOTDPCUZIVJXYU");
    msg.goal_xml.assign("BDZVAAZGFTXGMWRWTNOGXHUBDYBWVKKYPPTCOIHUDTKBHDNXQPIZEGKJEJFQDWYMEIKDQBRVHOHBNYGRISVFJSUFGVUWWACPAGHEMQWGCCTMFRMRZZLFOKMMXJERBZSKYRZLFEHTJSAILRPBINQEYNTDJIXJIHJKVLOOUMPAZLTVQHZCSSKSXWZUUOROCMJCEWXQBKXENITQLNCAYCPNELBUACMFGFPJOXSDDONXUVDFPTHYVWARLQUISYLPG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.7050405577289243);
    msg.setSource(41107U);
    msg.setSourceEntity(232U);
    msg.setDestination(61813U);
    msg.setDestinationEntity(46U);
    msg.command = 50U;
    msg.goal_id.assign("BZDSKOBEHWUUJNHRVBGBAIKVXCFYUDTJF");
    msg.goal_xml.assign("GTVZBGSXOGUBDVZRIIRDRFXISQGLRWRWJTRUTOWZPSZYXAOSJSEBIKLQMDQFZQXGOVJJYPTVDVGAHYHKJVLJSZIVHXHCPMNCROWDPEMDFCEXULMLDMSNINQAHTOMCFUIUYPBJYANUAYWFNGNTFYWBAYJEORBUBDHQVHQTAOQZQNSHZAIFEKKPIYEVNCXGMEPNVBMU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.7257040236372713);
    msg.setSource(52895U);
    msg.setSourceEntity(58U);
    msg.setDestination(44688U);
    msg.setDestinationEntity(228U);
    msg.command = 133U;
    msg.goal_id.assign("DUQYWCDPAOICPTWHBLPXASRZNQHZKLQFSJIXOHYGSEOLESBJKELLPYVZSYGYDFQRTVIHAHJAJREWJGXBSKWRVMTNIYTGENTLEGUZKVWPOBUOFWORMJUIJOTNPOAMDCMFJGGNCZWHZELHVFVWYKKJVVSLMURUTTNCCNXDKTCQHQRIDXBNXSDASPFMXKLGIQZKERQHXPQVFDYSEUFZEDGMUGPXHFDWBAAVMPNIIZIXBMRYBTFCAOBZOCBLARK");
    msg.goal_xml.assign("YJGBYPKXXIIKTRMJOSZVVOZVOLTFNHGQUKHFUPQNCHSMJXVRXEMVKXSSOJQJCLYZKQJHBLKXISTKYRDNCAUQOALUEHDEDSFCXZTZJBQSUTPZQGXCNURYWMHINTUQFZWOVGWJNVCGQVFPAEFYIMBOHILLEBAENRXBRCPMSGIMDAUDDYAFUAIDNLBTGKLTWIHMLBFHCYOWZIELGXTME");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.6828516544376229);
    msg.setSource(27675U);
    msg.setSourceEntity(164U);
    msg.setDestination(9312U);
    msg.setDestinationEntity(163U);
    msg.op = 167U;
    msg.goal_id.assign("MYQZMGHEZJOEJRBVYHUBTULGNQCXBANUVHHARKPYEDAMSNOEJUMZOJYTCVCHFRBTNSAWNESTDFYYQLFFSCXWEONRBLGWQJPFYVMGDASLTUDBIL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SBFOEQUWXPYZXPHOYPDNTMUHYFHAADICZXZLQFCOKUWDILKYPSTSADCQNXFARMDMVJARROTERZHCWYGJWSCUBQRVXQJMUOUSHMNJV");
    tmp_msg_0.predicate.assign("JUVSCUSNEDMIJKHENILBSKNDOGKKKOKXJUQTRIJNGPMNDZNRSDCDCSOBVIVQWYXVQVADARHTGQGZEBBFPDYLYSPNZTAWWKRBGFHXZLTYYHOGRQRGOCXJUKDEKUZVWOMPHBCFZHVLUUNLLWJMYVBTIMASFPSEEVSOLCICYZCFKRZOBFUOEFAZFZYPQDJMRXLTWYGXIHXALHMQCOSJVXHXCWEUAUPWABAERWANLJTDBTPMREIHIFQGGQTX");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.18618290202173915);
    msg.setSource(18101U);
    msg.setSourceEntity(138U);
    msg.setDestination(63982U);
    msg.setDestinationEntity(77U);
    msg.op = 169U;
    msg.goal_id.assign("MQKRIWCQICJNUFSADISDNNRPKILMJHTAWWPCLNEFMZKPRRGOFZFBZWINWSUYVCGWQLWZUTKMDNSSTGEYLMEBKRZTDBDTMEPMJBXMNJEOXIAAXTRHKYEFOHDY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NXWUZPQLROLOLMAATEKRQFIQSVEIBYGTAVMCEYOZPAQBAKPIOTSTY");
    tmp_msg_0.predicate.assign("UKEPQEGRSEWAVOPTNTPPMD");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JNVAIILUUWLINRVSWNTRWJJIKEXMFQDPEEVISZTFRYZEKMZEXPQOASDKMZMCILYPQJFYBKOEAPCPEHGVAHWZIVDOAXHJFMDMNQVZFSYGSFNSMRQTXQVPCXVRXNHUPPELBZWYXWOJGJHFOITKXQIMKACAMBGMDTGCLRCGHNGBBYJFEYTBGUDAUDFGOROJTASCGBNLWSOBIQWAYBHNZQVULUHSFYKYLUDSCPTKLCTHZRJPUQKOZWNLTXKCBH");
    tmp_tmp_msg_0_0.attr_type = 81U;
    tmp_tmp_msg_0_0.min.assign("ARYKEIAKEXQLHVPYTQXWRYLBMNKUXQROPVFGZAVDQPBTPCYTHUIMVFQOMBDNGEBTOWSVLTIMZMITRJRCTYYGCSEHJBH");
    tmp_tmp_msg_0_0.max.assign("QRFNKPSMUJCRCVBZEIYJUTCXDCHPJOYEQDXVBJIQIVOQODZYIGUWNUKZJSZYEKLAAKOGKTCWGFBXKANRWVRPEDCBDGYHYHKZRRIGAHOXEYYLGFTIXFZJRWEQTONXMYBSNLJBJIKSMBORGPSSTHKLMXXLOAMGPQMMJFTLWINWENDPTSUHQPVVOWACMTBDSLUAUFQWFAFSZHANUXIVUNMMYHXZNQZB");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.3335216613722869);
    msg.setSource(50107U);
    msg.setSourceEntity(217U);
    msg.setDestination(35553U);
    msg.setDestinationEntity(250U);
    msg.op = 83U;
    msg.goal_id.assign("RSEJBGCAKKOLACUZYUNTWDORIBYHDSHFZZMVUEIURNBJJPRTXNVFTICKTSQOALAPZJSUJEGVHHTRZOYAZRPLVQYXAOBOFKBQBTHKCYBLKHUFXZWDHIOREYDOGQCM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MFYXSNKEBNWFURHADVLLYEXGKZJJAG");
    tmp_msg_0.predicate.assign("GAKFMIBZFZOHBOLNNHVJNNPJYYGNQXTNWDMZHECYAKQQJYWDKPSIBYYDVYRQMYPLBFVBTXOSPDVEDVCSGOWEESPTODOAKAXTWMFSVGNBZMVAIZSXUYADKZRLCTMKCJQTWHWBKUGUEZQXMDQCNBUHUCUXIWT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FHAFCFIJWKMPGPSWBOYICESHVZCCYUTOHJMKPBQMYFEDCYSWCLVHXRFUENJZGTMAWUZQSPPQPUGJDCVHTGTNDLDDHSOXURRUDEZISELWAXCRTNXDASWLTYVZKESYLDZQGPJEOROAUQXLJEQAEMTQOROANTIXAYGIMZRT");
    tmp_tmp_msg_0_0.attr_type = 198U;
    tmp_tmp_msg_0_0.min.assign("DCELPIRZHXUYAAGYJWGMFRXLUNEVXGDOFTJVKITHAMKXVNFFQXHAWJWRASBDKAHWSKDFWGTVTAGZPNLBVWVDIYSLEWURJCHUFZGXBFUGDULYIHSNCFHEFODBJIJOBMLCYKPEHKZJVIRDUPTTYOSSZOQPOBRIXMNXDNDNUNAEW");
    tmp_tmp_msg_0_0.max.assign("JTQKUYNUHKAPSPESNRAIIFPDFZMOQNOZLN");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.2858491955458089);
    msg.setSource(58622U);
    msg.setSourceEntity(39U);
    msg.setDestination(60144U);
    msg.setDestinationEntity(168U);
    msg.name.assign("JVAFIHIHNLAWVDNQEJBQEJHCFKPOZMDWDUELSSAHNPMQQIJVSERBTROFZPHXKNTOYHCVAGMRTCPLWYXQLXJBZRHHFBYTNQKHYUKJTFNSBVLETTQYKBWCUDNUSGQVPUMMLMKRUVXXEFWMARDPWZFGWTBDGVIEINERXLKVOD");
    msg.attr_type = 31U;
    msg.min.assign("VYEARHUFARTITDPTKSVJOJRYXTDOERSIBXOEFMHKDPYXXZWXTRGLUNCJNYLRZPCHCSUYIDXKZCBVKHOCLUUQGEMQZQKZPLOTISPAFNYUDLAP");
    msg.max.assign("LWMJSZYUPUCIGWDWKUXHHDIQVXKLGQXBIIDLSZTOZVQUPMZBXLTUFWYBYDOCPRYDFYZLCPXGOFQEVKHBZMBMHWBEEZYQNAMFRAIRMWUZPGAASJJTCTFMBEGIQQKDOFYRSATAPMYOELKSIEKROWJDPNRHAXUBKRCSNCOCYLMJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.4326566296867974);
    msg.setSource(38927U);
    msg.setSourceEntity(62U);
    msg.setDestination(30112U);
    msg.setDestinationEntity(54U);
    msg.name.assign("AIZVLPECRIESTHSBWUAJLZDSCJBXUQDXKOBUOHLPNCDDVYOCKWEULAIDNSUJXQ");
    msg.attr_type = 63U;
    msg.min.assign("PIGOYQSFHPTZLRRIZSMRKECNZMEFIVQBIWH");
    msg.max.assign("VOVIXEYWGLEZGHWKICVQPMDSQBFEYJYVEWSYGMYCBPSIRGNOCQJXZMFKDZRZEHUMJOAPODWQQJURCGNTTEFAEYOPAZAIWYTHZANTODFBHIBOMLCZKDHHJGUNZVCUDBXISBEFRLHJTEPPSSWMFYORKAQKWNQPLKMVKLTARAJHEPSICFWSKNXXZHOGZOGQTNBDRTYFYXQBRDVURDDGLNFAIGMAX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.5519491655740728);
    msg.setSource(39476U);
    msg.setSourceEntity(199U);
    msg.setDestination(34168U);
    msg.setDestinationEntity(234U);
    msg.name.assign("FHRLQMNJQSRWCJINUNRDHQWYCDXAAFZLVWAUIUFVFYEUWXNZDFLOKPSQTDGEKWMBJGTVOOFHADPXEMXLZTTMZRCNGZXFSYUNYVZRCCJZQTHBTPGZPWJJBABBQEQSXEDT");
    msg.attr_type = 154U;
    msg.min.assign("NMCRTTUOEIEPKBWJNNZXMCSEOCSIHFAMRTRIXVLYYFDAQYZGVBIHQVXVFARKDMGBUJLAQGHFFKJMYASOGYMBDAJOZGIODWYNPYFFUQDZBDSIJFTVTQNTTVJBAGSRZXRXRGS");
    msg.max.assign("MFQFMRPWMUSFAZEXCLOWHTKMWJMPKFHIBDDHKQDBYNBGMILDEACLMEBNGQIVWNZAPTLRJRWHLYELCLATOUSWPXXYDRSZKUOFYTCJYTSOXRIDXCGEJIHDPNUBWIIZTEN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.15420160388628934);
    msg.setSource(57293U);
    msg.setSourceEntity(80U);
    msg.setDestination(12160U);
    msg.setDestinationEntity(205U);
    msg.timeline.assign("NDUHHDTCMIBMDTMRIVYGMVCGHTVBSBOFJTHHRNYLXZFKXIJFUXLPMVISEWGUQAMVVECEGAMMRAYFNYSPUZKBDEEBMALWGNLGSUROQKFDOWQEKIQDSUYTNACPZF");
    msg.predicate.assign("QHZRJAYCCRIGDRLFDACJTQFVWXTTIECHWNTARDBUYBPUIYKKTAJTUYQGZFJFEESUMSLDMEONYNHDBMIGQOSZFXEUGPZBYZYOSBWGMG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.18298716612761867);
    msg.setSource(60058U);
    msg.setSourceEntity(71U);
    msg.setDestination(31517U);
    msg.setDestinationEntity(154U);
    msg.timeline.assign("RCBCRRHAYRIVWMLWKINZYNWSQCRBRVFQEPUITWRYVPTWMRYMHZSLXKMTAESPWGCZOLPAJMJZUEOGMEOFWQLNHBGBUOZIGHWXKWXBLXXLAZPJASJBOD");
    msg.predicate.assign("TCTKDLKLAGVAIMZKCYPFFXMSOGARGVQQIOICSEZJFOHMTBKTGJPBOHVEGIBNBXWNEFUNFSHHQYLZINWQZMWIDGSASIXUOTJYPQGPEEUITWQOYYWSFMDGABZHXCLRTYGSCJUTRHOSBXPVDNZZLUREBJPKLSTXJCAACCTJFWHRDLRRUAXMXDCRX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.9868570019869161);
    msg.setSource(29367U);
    msg.setSourceEntity(148U);
    msg.setDestination(8472U);
    msg.setDestinationEntity(207U);
    msg.timeline.assign("MUDVNOEAJFSIGNXYCHXAILUVZWBTTVUDTNQWMDYRNWCAYLEZHXSGOPGELWJPNJNCMBVTNFVLFPBWBHRLIYKOLJCCAAFYRJSCJGDBSUGUXJRATFHBUAQEKSZKILOYTHKSTXZKZEJWQF");
    msg.predicate.assign("XZDCQMOGNSGVLYFVSBRIBVNUXQWVPJOXASDJWAHGHJNSVGQLFJXUFEKCMFOFESALXPUXYNGIJIWLOQLRUANMDAEVNPRLKWWKDYSZPTUDLFXWVDZQZIEYXPCCGIMTQKLTBYWASDWYHTMAWYDWHYNXFFYOKTJBNTTRQCBKTPFICKHFRIOGMESACEQBTZZUBGMSEPVNJSQHDICNEZKMTPJVZKMRZCJBOAAIRJPUMBHKLVDBEQCPOOHRUIGUR");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("JRAJNMEXBPMPFSYSCLLWURNGFQXREIEFVCNYCBWOIYWOMVYNJLXSAUDJGCGLZWHTKPJSIOJPDNLLAQBANXUBSZZUXVXGRCP");
    tmp_msg_0.attr_type = 167U;
    tmp_msg_0.min.assign("BILDREUTHKZWQRYNIWIKZZNJZFORFSTXUAXOJVQSVREQICJMHDTNYQLRLVDZJHFSLPEBNAESCYTBJWMDMXADRXB");
    tmp_msg_0.max.assign("EEPURNPTZYCRHVILXXIUZCVEBYHDGPYHXEXIDJAOJHBGZRNHAZQPPCYEQKZMTTHTGJABKHJNHWGYAENAOJNSGAFFBJAFCFQVQPQDVMDUALRXWWUZCRNCFUOTMHIWQSSKCLJBROBMCUTQKNVFXDVMVIBZODFUMBMBSCML");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.3759828828626943);
    msg.setSource(30967U);
    msg.setSourceEntity(190U);
    msg.setDestination(58974U);
    msg.setDestinationEntity(141U);
    msg.reactor.assign("UKJFMPHYTMALEPSBGEQEKZQRJZZJSNTFMABAVJDBZTPOLYBKXEUYXRJYTJGDAVNYCWOOQDKBRUMKSGUNXZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TIVTIFLFNGAX");
    tmp_msg_0.predicate.assign("COSGPKOJRVQPFXQWSDVRFRLUZWWGMALXKGGCWQZXWUAAZEMGKYWTFJTZDIZKSLCYRPNYKOIIUFASLQBBUUSMVBPCHAWKAHHBJVROYCRFBWIYLQDJMQZUZNAXEMYLQZOMBSIAMJJORCGJFIPDOAMXPGXCHTBSPETYVQAETHXILDMDSF");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.4226618005258824);
    msg.setSource(16105U);
    msg.setSourceEntity(228U);
    msg.setDestination(9543U);
    msg.setDestinationEntity(102U);
    msg.reactor.assign("WSQUBCCHXFLZYKRCDDAHYFBHKHFETJQMXZCTIHHUDERPGNBGCAMEKVENTUALSDAVMTODZKVRYDTPSGH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AEWDLIGAFFUMTUREMRXICGBBEMBNWSUTTPINJLSJ");
    tmp_msg_0.predicate.assign("IFRJGKHEGPLXQFGXJKJXSWCNRQUWRREZJLTHCKFGLQFRBDZISMQXZSYOTDEPUKTOUQZBYPGTADIUMEYISQJZTYWTEEBDQSHL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ETIPZDFITFCGJEUKYQRNNOMQYBJMMYVIJVECZJPQPGVLQRBEXFGQPVQUAXYYVFYMRMVNDORPDUJWPGOPGFCBJHZSHBLTUZNXUTHCAEMMGSUNXEWXKZCZZLHOTTKYIUSNHRVGYPCHXRGWRMRWBCIFSIWMYTDKKG");
    tmp_tmp_msg_0_0.attr_type = 27U;
    tmp_tmp_msg_0_0.min.assign("BSTAGLWPZCDEJEMJMCYLWDTPAPAOMCLIXZ");
    tmp_tmp_msg_0_0.max.assign("WVKNPVBRAPXLDYTMDDUNCOOSLROWIPBNUERYTZBOYXQYEPZKTEXMZECFUTUUQIHCWLBJMKHPCJLMSUSZLMPOOJYGICJVMIQDMFDXIOPFCFENWJCQAFAKSTZNELUYBSVGVSYWTYBZAJVQVHJHDROSAVQOGVCMKWCKXXWLRSZQKKZYGKQEXBTXEZRDPIIGBX");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.16149464028794613);
    msg.setSource(31821U);
    msg.setSourceEntity(75U);
    msg.setDestination(33012U);
    msg.setDestinationEntity(132U);
    msg.reactor.assign("HVJVNDVBKYDKMSFUETTTYYPDXJLINDXHLCGWVYBKCRWQCPCHRBNUPWWVQCAGDDBYPPEAPLWPYQJJTXIEAZXXGMCSHCGHYQZLIWUIPFHIWXILAOFQALQUVTKOUOXEUMUXFOVMQOZSNLPCUSLRTFENCJGOATPRKMTMTHBRVZKZRBBSARXWWHWLVDYGZTERNIMOXJASVBMMZDJCRKFGFNEOOZAK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.8630834997490434);
    msg.setSource(38904U);
    msg.setSourceEntity(163U);
    msg.setDestination(19381U);
    msg.setDestinationEntity(248U);
    msg.topic.assign("WWMUYEJKHEOFBXPJEUMNKBTHLQRAQYTYMVEFSF");
    msg.data.assign("HGNJJZAHZKROTFKOEOVLCIUXQYVDTAFDVEWJZZIHCBDXBGSPKYLCZVZPNTZQGOMRWRROUHGQHUWGREXGCDAJLYSOGKANXCFSOEWIDIAAXUNFPEPUFLEUJSAMELRNBEUYLZVAWYBKBN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.5245857697910066);
    msg.setSource(9753U);
    msg.setSourceEntity(246U);
    msg.setDestination(27769U);
    msg.setDestinationEntity(18U);
    msg.topic.assign("QIWPPCQZQURHVTWLUHMUYMDBONVLPOMVRIOQIYYLXNWQZHISFDVYBIOGXCHXNPXDEHNFZGLBWKZJTLPAADXBQAFWFYETUMWDRZJCVYLQIHTWLSBDCGZPKZCDZNNEJSRMSNIJSUGFZGOBAUZCJABDEYEUOPQUIXHVOBMGKH");
    msg.data.assign("IDLOQMOFUPUWEVRNKGZWCTXQHEZPGNXJAEESZSAMTPKCVKGLJJDVHNWNAFQFLHXJNP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.32734402215072234);
    msg.setSource(30850U);
    msg.setSourceEntity(20U);
    msg.setDestination(54929U);
    msg.setDestinationEntity(248U);
    msg.topic.assign("KQZMEYWYWYIFBOXBEXMQVNTFJPPMWSBSPMHROFJRGCXDETNPOFQKWBKNCGOCCGJBUDKXVRAEUHHIMWYEFDLACBEYWLHVHLXPUMSKJCESGRBMXZDAGCZUHAPWFAZLIOPZIURIQUBSRGSALZARCXOQKTINFNHVGWFHVKSUGLZDNIBAQJSOTTSLVDWIPEXNYVDVGEAT");
    msg.data.assign("KPOKMQWMDEUIRAQLBPWKPQOXEFHQYEOHBIFOBUVIQDVRVGNXRIZVCTLZEDGWXUYGAZYTXGGAIZMLAJJAQVOLZNZCGRMHYLFRBHRJPHTJBUZJCOEVIEPAIDHWMWCGGRSFMKKDWUQGOXTALUWYOELTUJSLKISCREUBJCCQATWSRSPYGSPDZFYCOMFNDSDNONBIAXLCFDKYTNMTMVXSTHNHPKYKBFXNZTYE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.24171100681173763);
    msg.setSource(55606U);
    msg.setSourceEntity(52U);
    msg.setDestination(12350U);
    msg.setDestinationEntity(80U);
    msg.frameid = 59U;
    const char tmp_msg_0[] = {-36, 96, 29, 55, 18, -110, 28, -71, 27, -9, -83, 35, 107, -38, 39, 115, 84, 83, -54, -105, -69, -85, 49, 24, -18, 125, 51, -97, -43, 62, 12, 109, -30, -84, 77, 74, -79, -63, 122, 65, -102, -119, 19, -22, -99, -57, 90, 71, -46, 60, 114, -106, 82, -111, 113, -107};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.571446455838113);
    msg.setSource(43207U);
    msg.setSourceEntity(50U);
    msg.setDestination(29543U);
    msg.setDestinationEntity(171U);
    msg.frameid = 85U;
    const char tmp_msg_0[] = {-40, 60, -2, 96, -44, -114, 28, 120, 32, 40, 65, -8, 43, -111, 83, 107, -37, -125, 31, 106, 34, -123, 81, -4, 53, -8, 65, 120, 97, 4, 115, 70, -46, -86, -57, -24, -80, -73, -33, -102, -107, -123, 84, 109, 70, 47, -110, 115, 8, -10, -93, 57, 90, -32, -122, 104, -64, -38, 59, -102, -52, -13, -82, 47, -48, -42, 70, -110, -84, 125, 4, -78, -69, 2, -42, -53, -11, 104, 116, 126, -83, -18, 25, 120, -54, 12, 26, -110, -47, 61, -121, 82, 45, 80, 16, 6, 84, -118, 59, 56, -35, 76, -39, 87, 34, -37, 93, -114, 61, 45, 91, -8, 4, 24, 17, 7, 41, -93, 44, -35, 51, 14, 31, -122, 16, 17, -122, -35, 83, 96, 92, 124, 101, -108, 4, 100};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.9244790291131688);
    msg.setSource(18842U);
    msg.setSourceEntity(150U);
    msg.setDestination(29326U);
    msg.setDestinationEntity(148U);
    msg.frameid = 131U;
    const char tmp_msg_0[] = {124, 98, 108, 108, 87, -7, -82, -125, -43, -81, 7, 34, -63, -22, -72, -126};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.24591158816466552);
    msg.setSource(42993U);
    msg.setSourceEntity(157U);
    msg.setDestination(55174U);
    msg.setDestinationEntity(176U);
    msg.fps = 196U;
    msg.quality = 14U;
    msg.reps = 101U;
    msg.tsize = 20U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.6300649411573963);
    msg.setSource(23494U);
    msg.setSourceEntity(75U);
    msg.setDestination(38060U);
    msg.setDestinationEntity(114U);
    msg.fps = 202U;
    msg.quality = 61U;
    msg.reps = 46U;
    msg.tsize = 172U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.7959943109126568);
    msg.setSource(58753U);
    msg.setSourceEntity(189U);
    msg.setDestination(53279U);
    msg.setDestinationEntity(204U);
    msg.fps = 82U;
    msg.quality = 212U;
    msg.reps = 204U;
    msg.tsize = 152U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.5020195820109462);
    msg.setSource(42068U);
    msg.setSourceEntity(71U);
    msg.setDestination(37719U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.8201383705455478;
    msg.lon = 0.689720748505586;
    msg.depth = 249U;
    msg.speed = 0.43713294355309185;
    msg.psi = 0.8482909835464417;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.5779063530270233);
    msg.setSource(9602U);
    msg.setSourceEntity(132U);
    msg.setDestination(30607U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.9070439712957004;
    msg.lon = 0.048057125871238004;
    msg.depth = 214U;
    msg.speed = 0.5210879334942664;
    msg.psi = 0.5384930888032095;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.12321220835120339);
    msg.setSource(7231U);
    msg.setSourceEntity(52U);
    msg.setDestination(54U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.5507671048682071;
    msg.lon = 0.2634299077421144;
    msg.depth = 167U;
    msg.speed = 0.27071840074472764;
    msg.psi = 0.4533257248955789;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.020143281544365177);
    msg.setSource(23053U);
    msg.setSourceEntity(211U);
    msg.setDestination(46246U);
    msg.setDestinationEntity(197U);
    msg.label.assign("MVVJOKCMFYSIWFLSXEOGAAEYXDL");
    msg.lat = 0.5324842227141241;
    msg.lon = 0.5929932021639105;
    msg.z = 0.4769875963322491;
    msg.z_units = 70U;
    msg.cog = 0.6836532011022879;
    msg.sog = 0.9893317256221218;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.7793654505064416);
    msg.setSource(47384U);
    msg.setSourceEntity(184U);
    msg.setDestination(30098U);
    msg.setDestinationEntity(22U);
    msg.label.assign("GPGCKCMJBVERLVXHECAMZJTBSISWUENEAIKYJGFBSUUEQWJOTMKRMQYJVIYLYLKIWFMBUSGCDMBFWRRHZZYASZOJOAQMMIWUENQIFSOHKVAEREIZLOUWFVPERUFPFYGFZHIBKDNUKWPYWGYGPBPGRMDSSDBNJGKOPYHFWZLTNMXDDQHODQDYACTXZTQRU");
    msg.lat = 0.15138121355759493;
    msg.lon = 0.2145520516601248;
    msg.z = 0.05908152314498838;
    msg.z_units = 74U;
    msg.cog = 0.49505630467201245;
    msg.sog = 0.41059556608817915;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.9428517427702914);
    msg.setSource(59681U);
    msg.setSourceEntity(149U);
    msg.setDestination(33487U);
    msg.setDestinationEntity(1U);
    msg.label.assign("BCUYTGLRLPBTJEFXESJUCKBPTTKAAKKAHZRSDHZZCXSNBTCCDKYWRAQGEXGMVTSHWMTLRSLYMODFXXCIVOXHFOABZWRQIKZWYHHAVRNUMNQAUVNANYDMZECQSSXGNHBIBGPMBJJXXQTVLKZOWQMFULPNZDFVVQCOWOPQAHPIOFERWFGJICIWNUPJFYV");
    msg.lat = 0.3983694545578246;
    msg.lon = 0.8887223790039213;
    msg.z = 0.8930592474872621;
    msg.z_units = 9U;
    msg.cog = 0.805941178626004;
    msg.sog = 0.85373795381478;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.08394601681485403);
    msg.setSource(53066U);
    msg.setSourceEntity(73U);
    msg.setDestination(56704U);
    msg.setDestinationEntity(34U);
    msg.name.assign("BWAQKIJNRIUIKGEUPEPFMPVXCBQLQAWNAIABBMLMVKLJPAWODTRKJHFTODUOGPURQAQLTAPFWVGHVMHMGWPYFDXUHDPSNNTTFHRBFNEVEMBCINCKSLHETJDITKCJZDFGOWYCQHLAXRQYNZBSIENFRDYUSKHTIXUAGXSBSREXCZOIZTCQQWLEAPJTSZXYNYYUUJDLDFRJJGLSMVKKFQYOMCPZHOSBJNGXZZVMMOUWXWZDCYEZOCSRKVGYXOWBEH");
    msg.value.assign("KRXJTUODDKMGRDTZOPONUSAWDIWALVIRXGGQKJZGWYZRJBKSXGFQYVILAZSZWNDOCVTJKINYNXSIXREMHN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.6984388808191729);
    msg.setSource(20764U);
    msg.setSourceEntity(82U);
    msg.setDestination(37379U);
    msg.setDestinationEntity(164U);
    msg.name.assign("XWGARKYACNOGUJXKAEZKQBNWRLEQFFQUUAFOGPRRHZPRQVSXJIMAYOYYAHYCZSXSLCLHWCSVIBQMZWBDXDKDUFOEBQJIVFGFHSGJSVQNDVKNPGUXHFWBMHYNGJXTPLBHDAMOTJRZPDRMPGQASIZBSJCOKENMXTVUYLMIRTZNIMLCIVPDPGYJWAEOVYLWCJVETXROTEKDZWWVHLUIUHKHFWNQBNOOCTFQPCPZRSYSTKDAFGBXLTECBDKMIUENML");
    msg.value.assign("NKEPCADYLXSJIOTDZRXZFGHLGC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.9555781033594498);
    msg.setSource(48838U);
    msg.setSourceEntity(98U);
    msg.setDestination(37044U);
    msg.setDestinationEntity(158U);
    msg.name.assign("FATWICZULNRWPHXYGCOILQMRSMYFFCWAIGEKXOAKYDVFQZIWNXYGASKXBQVATONPMVBDKXGTILVUYCMKKYTTARIGKUVHQJPMOAYUNBJJBDQVWNFDSPZNCUKDXEHACBHOGYRQSRHZUSOELIMZDZBELJWHZKCNBKJOIWEPMXHHRPRDEJLZWOISBNOQVELDENXOLZJITWSSFXNQATDGRCMTBJSGAFQHVUBYZTLFJWTP");
    msg.value.assign("XDAYFPMNGBYGIIIOXIDWBBTTWAZGLUAJQWFXSRAYJUHTEZLNDACJXEXACKCERFPUAKONSYFSCQYNENOTQRPDOCAQKWOWJHVTULONJUGTHVFVKJKBTLLOFRGYCPKUKXQGJMFVOLMSBGWVXROCWDPGPKMSVEMBAZUKDWMESHL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.8234950004249902);
    msg.setSource(7695U);
    msg.setSourceEntity(214U);
    msg.setDestination(50632U);
    msg.setDestinationEntity(218U);
    msg.name.assign("BYMLUBIKDYWUGATCPQDONMDDARFQDZNXPAACSDGKVWRRMOWUTSSOGHONUWAIWQYBOPHPPPOKFHJNBNNPCNBZNEQSQVGIEGRXKLFLCGWEKKUFWRIEZUYYUVBOZKZBXXXGQLIZOAEPDMACXRSQJTLMTHJLDHGOSQNSME");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ESUWMHCVGBPDOZVDRPXYWXPSLNNWMFQLUIYRCJQFDWJDVLBZZYEHTPIAUBRXFAUZANIXOUPLIVNYCYTKGASWKTEARCVYLXMXMYQGMBFLWEPOVHJIJRCLRHVUFBDZGLSTDKWZVIDK");
    tmp_msg_0.value.assign("DDCKNWHMOHOQLSERAVPEGQIMAKWTNMNYVDOFBHITWKYLBOHPHHMOHUUAGPXVZKSLRRFYSCRCCROVNZDMECBXJW");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.63042372898581);
    msg.setSource(41140U);
    msg.setSourceEntity(251U);
    msg.setDestination(1066U);
    msg.setDestinationEntity(47U);
    msg.name.assign("PUHBKHMBHKZBYCKVADLEIQTYPTSEM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SDHQPLZJNYEFYDLTTKBZADNJHFAJDXNIITJCZWIALCICQYMHMZWBGFKQUKSXVMWGGQXGCDHTGTHSHKPGWCFCWUVZYVRTXYDYMKMYXDMEDOZVOWAFAQVWAROEUBPZKEXUHRFVXBLUOUOOJWECOYBJIPTZREBDRFPLUUGOVRMRNSXVMNILEOCMEJNHPNJTNQGEBKQATKRVFIIPSRCSBYUOF");
    tmp_msg_0.value.assign("MQDOVJJJJXWWNFUVASEIFWMPHFDHORPRXZMAXJVGXKAISOSIRLLEJZILWLACOOKDSNTBIBMUZHKSTNLAHFGDZRXEUSLUGCCBRGEZXNUTWXITIJVWTFQRLAGNLUVQVWBGQBVODUCQUEKYEBNFGVHMRUXUKRYKJYTYNOHZKQZXPKSVTQEQWLPLHRFKYQPNGSMDCVHNZDBIHMJMAGOPAECHYOK");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.24973927472183288);
    msg.setSource(1224U);
    msg.setSourceEntity(159U);
    msg.setDestination(2261U);
    msg.setDestinationEntity(241U);
    msg.name.assign("QGWZQGOQRJGHOAGDAKAZHQQMLKOCVASLCEVBPHPELXYJBLZFHUOMFXPMVVIWVYAGFKYZOMRTQZRBFDIHWEDJKSPDXPZRSJKIDIENFUCBBUPMGDSYJUEHDXTXCUBFDTNUYTXRRQGSIOYTXGYLNXTZCWTBSIPLJSGBXVUCNOIKKLRNAWWZEAQZHVQEONRGYTNLBJXYKBSLNPMMFDTNIPCWCHAKREDOTCVHF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TLBFALMEOFTGEWDITUXDKAVYECGQNQSDCBZZEQSKFXRXRFXYYRDJRPQBEJWNRUIBWYSEKCHBXNCIAOGMEUAYUVYVFWCVGOUOWZCYLDPQGZNVBDOJLIBHOOBICLXOLHSYSVRLDJGNKARVGDFPKGJKWHFQUZJXUWJHEMXPDNMVWABZZHEGCMNTXLAAHQFFBJWSTZASMZKHLIYXYSPZKTUEIPIPHIURQJNSGSTTRMTKCNMVH");
    tmp_msg_0.value.assign("ZXGZCNOHBDEXSJULDUERCRCUOXEPWLPFGJPGRZYPNF");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.32254316960153484);
    msg.setSource(31586U);
    msg.setSourceEntity(27U);
    msg.setDestination(35967U);
    msg.setDestinationEntity(97U);
    msg.name.assign("ZVHLRYQCXCJJCLGZWFFJUEGHZAMHTGPRDAGMTUJLSYKCZGZTLQSFPWQMRENNAWSIKLITHOMERBXHHTKOWVPEQSTVJNJZDTXBBXIQHIYLNRXOTSOFDVVMSPURCDMNTOXIYAPHBKQCCXLIUEKKFASFF");
    msg.visibility.assign("PMQEDXSWAZQGKZXMGQUKHEYSWMFFPMULETWQONNAODGNHBNFWBGIYAFXHFGRUCEUYVNBEXAZVXPXSJ");
    msg.scope.assign("GSKQNIBZBDQCJUEQSPFNNOZWDMAAKTTCARXMJUKBGXGRCUFPNYCVBYXDJXHVOFWPPLHLUBHOGEPZWEEAZGTTCYTKEPGORKJLKWQOUMIYUOKFRQYJDUBMGRQIIFIVCXUEAULYLVMYZKIXQCJJPDDWIXTPIROZPVLD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.0010765715121350272);
    msg.setSource(38186U);
    msg.setSourceEntity(93U);
    msg.setDestination(43476U);
    msg.setDestinationEntity(30U);
    msg.name.assign("NSYGKHHFALJBYXXBDCHSPTDCCGKCEOLOYZIOHOSLRJBMXPJRXNTYKPTEMAOIARCXCGQGECVUBKBVQILCRMZBHKAZGOVBNNMHXSWSNZWUCAOZYSGDHGWITDSQCUJSBLPRSLOJYADTPRMFOQTDPON");
    msg.visibility.assign("BZDUIEBPKSBXMXUBMQEWCJRRDZIVMGINXPHFZUMWFFKWAHXPLYODXWIWLJCVFSKWKXYXIJRGNPBUJSEQPFTOIYDCJDNUDYNYAKJMDZALNYLPHUQCTWEFJHRMSNESCWGGEOAL");
    msg.scope.assign("OJZQNYYOLIQOXUNCCUSGFTSNFKWSQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.28417884262333704);
    msg.setSource(53371U);
    msg.setSourceEntity(33U);
    msg.setDestination(45330U);
    msg.setDestinationEntity(193U);
    msg.name.assign("IZKWWTKUDHJTKIDZUVTOTOJMUUNZAIIYHUNNKSMSVALPPBJRQPEILFFBDAYXAMVWEYWYYPOWYSGAVHFJQYOGINBHKCPSUXBRBCQRPT");
    msg.visibility.assign("QCQZHIFCKKZZQWKDEHPUEHOYAKBH");
    msg.scope.assign("GPJCKNNSHDBDBXFMAFALPDZFIGXVWICAXGXFPKHRIJQUWJULYGNWZQFJNNONTTNMSFOXTPJYLPVQAOLLEYXPHRQLRQYJPZTKDBUKSEFEZTCBHYPRUCUFIYCQGYWOHNEXKZKOEOOZAWISVSKYAOTTGBSTSVGDBPHXNJCLRKQJEQEIMLRUBHMMJDTALEKWSUVVIGVMHUFAVZW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.6234006425049161);
    msg.setSource(24888U);
    msg.setSourceEntity(15U);
    msg.setDestination(53236U);
    msg.setDestinationEntity(231U);
    msg.name.assign("NXWDQABDXHCFOSOGFNKROELGXPYTSFFMTVGUWHHFMTARLYJETLBYLKWDASVJIVBQUPXPJCZAMABMNKPOMFQOOYBGVOVEKYZUXIEAIUABNJRDQJBHVNDZVUYKY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.9120320387067056);
    msg.setSource(44354U);
    msg.setSourceEntity(165U);
    msg.setDestination(36155U);
    msg.setDestinationEntity(175U);
    msg.name.assign("PCQIGMDSTOWL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.1332553443087514);
    msg.setSource(13515U);
    msg.setSourceEntity(34U);
    msg.setDestination(10024U);
    msg.setDestinationEntity(72U);
    msg.name.assign("RFBQBYOVDMIALZRAIHNGOVOWARZQBXRSHNZVBRZWQMWJUQOWNYPJKKYGQIXSLGUVFGSLHCJWBIFCILSXPHPMORDLGISPVWBJPGTXBWMUNDMCDUFUP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.8716653601520862);
    msg.setSource(1937U);
    msg.setSourceEntity(121U);
    msg.setDestination(32455U);
    msg.setDestinationEntity(108U);
    msg.name.assign("RNTBMCQVPNMZGXQRFUWJYSPUJZAXWCAYPQKYUGMKL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.8867323771196394);
    msg.setSource(37528U);
    msg.setSourceEntity(0U);
    msg.setDestination(51527U);
    msg.setDestinationEntity(227U);
    msg.name.assign("OJWLTJDYPENANHWQPPRHCDMEIVNTPXMRWIRKQBJVLBBVIBFKNPYAGQVBUKGDFIADPWOBKLYNVXQSBKKBEITPFXHWSOCVRGBVLLGRMYUQZNCSEDOWFNAZXZEDFADJAGFJXWBNQVIZCCTLELUXEPZFUXRZTLDGWJPSOMXXYIHTKZUMASSUKSVZOGHAORJQDHXCIOOZMCRLHCPUMSTWTYCFQHVYLNHECMTK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.36383554168028975);
    msg.setSource(52204U);
    msg.setSourceEntity(180U);
    msg.setDestination(11763U);
    msg.setDestinationEntity(227U);
    msg.name.assign("FKYDUIGFWSUBBPJMHXIJMPGRTYKDFMZBVBHOKWMGUIJLTWNXQOPQDLAJZSDVRCQZWPSGTDCBGKVIIJTWOQXNSAEGNDLVHDIHDNSLPSXOYFQXAXGXYYCAUMFCHELJCEIZVJZOWQCJHLGOZAMX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.08033481696194322);
    msg.setSource(50816U);
    msg.setSourceEntity(42U);
    msg.setDestination(37940U);
    msg.setDestinationEntity(209U);
    msg.timeout = 3581798457U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.6305429131288707);
    msg.setSource(41827U);
    msg.setSourceEntity(152U);
    msg.setDestination(30134U);
    msg.setDestinationEntity(59U);
    msg.timeout = 3315705218U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.0647087776156986);
    msg.setSource(14290U);
    msg.setSourceEntity(184U);
    msg.setDestination(65328U);
    msg.setDestinationEntity(217U);
    msg.timeout = 1538255249U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.07941546740383354);
    msg.setSource(65392U);
    msg.setSourceEntity(37U);
    msg.setDestination(32089U);
    msg.setDestinationEntity(205U);
    msg.sessid = 3226152437U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.744830502829689);
    msg.setSource(14487U);
    msg.setSourceEntity(138U);
    msg.setDestination(34663U);
    msg.setDestinationEntity(143U);
    msg.sessid = 2415663209U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.48598246976283443);
    msg.setSource(1808U);
    msg.setSourceEntity(0U);
    msg.setDestination(18026U);
    msg.setDestinationEntity(130U);
    msg.sessid = 526220527U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.5347159280124613);
    msg.setSource(52528U);
    msg.setSourceEntity(47U);
    msg.setDestination(10092U);
    msg.setDestinationEntity(205U);
    msg.sessid = 1435626463U;
    msg.messages.assign("ZTENSTZEHTWRDLHLTUDJRCBHBSIOTIFQKDFBFKLXEJNEUQZKMSAEEQZSIEYPXROOQNMTBOCLJHGW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.47578187121328863);
    msg.setSource(61989U);
    msg.setSourceEntity(68U);
    msg.setDestination(8983U);
    msg.setDestinationEntity(206U);
    msg.sessid = 717302279U;
    msg.messages.assign("YIHILQCOEIPHJUNXCLDQRZOCXLPUQSESAWGMIGUESBDEDAOMICWTTCZRISJPTDWYXTEWK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.6526871154161156);
    msg.setSource(464U);
    msg.setSourceEntity(93U);
    msg.setDestination(12762U);
    msg.setDestinationEntity(233U);
    msg.sessid = 2489631117U;
    msg.messages.assign("VENUTYKATAVFXILYEFIHFJVUDDBFWVGDKSPZRQZHSXGBSQDGJHNEDLOFNOWLHKBSLMFJWBECEPXRZMJJPQNBNDDOIQMBVTJARSPRIUSMCNJZIXGGQQWITPMSKLOCDOJQJEEHAAPPMNOKACFWPNOZRRHEPZEUNWIQATXXNYAOUHGBLYFJYEXUVMMDCRTFAOVVASMKKY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.41759180575388954);
    msg.setSource(771U);
    msg.setSourceEntity(7U);
    msg.setDestination(23102U);
    msg.setDestinationEntity(91U);
    msg.sessid = 1079288324U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.29824536277441693);
    msg.setSource(39957U);
    msg.setSourceEntity(171U);
    msg.setDestination(11094U);
    msg.setDestinationEntity(244U);
    msg.sessid = 2306838969U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.7408057011167786);
    msg.setSource(35215U);
    msg.setSourceEntity(205U);
    msg.setDestination(50519U);
    msg.setDestinationEntity(151U);
    msg.sessid = 2311051098U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.05597324806346238);
    msg.setSource(14739U);
    msg.setSourceEntity(109U);
    msg.setDestination(27226U);
    msg.setDestinationEntity(149U);
    msg.sessid = 4110651625U;
    msg.status = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.3474359636120531);
    msg.setSource(29778U);
    msg.setSourceEntity(95U);
    msg.setDestination(17033U);
    msg.setDestinationEntity(22U);
    msg.sessid = 78990142U;
    msg.status = 77U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.749103257424268);
    msg.setSource(54249U);
    msg.setSourceEntity(232U);
    msg.setDestination(15137U);
    msg.setDestinationEntity(158U);
    msg.sessid = 367928944U;
    msg.status = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.5826684964442166);
    msg.setSource(17112U);
    msg.setSourceEntity(74U);
    msg.setDestination(65170U);
    msg.setDestinationEntity(173U);
    msg.name.assign("KHIYXPCZMTVWGCRZTHJXZIQEUDYCCXJHGPOYLAFGGKDDUVLROVHJIPZAUABQINDBVPLDGQLSKFEHYSBDIAEIUCNTFDJBJXIVMOSRCOOZONSWNWRKRAUFNRMFUPHNCAXVAMJAMKYNDEKRRMKMFCWSJPVBBWCLCJWSFHHBQUZHEWOQLPNGIVEYBWSWZGGPUTMYFTXNQLDEUEOJQTLSE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.32818240107983354);
    msg.setSource(44457U);
    msg.setSourceEntity(111U);
    msg.setDestination(2384U);
    msg.setDestinationEntity(66U);
    msg.name.assign("GGPTKNSHMYVVNPNISMDPJNMMZWHJVKIZAXGIAUWULSQMGILKLQHDKNWFPZQEEBNYULFSORDABVZSOSLZAGWFEMPWZAZWUXKHTRXYWDUZTBDSALKONJHEKPIXJQUTNIJVOQJYOLWBUGXXCFJVCCOSRAOTZGQIEHBJRURYRDCBIXCBHTHMVLPSAEVDFADPOCYPCLWGXFOFHTVFAEIGPFBZRRTXYCTMKBIVQYMWEELNOYKEGJSN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.4660353032962635);
    msg.setSource(49749U);
    msg.setSourceEntity(163U);
    msg.setDestination(36721U);
    msg.setDestinationEntity(80U);
    msg.name.assign("XEFDKFNQLDYPOIJSHZKADTTAYVJNBFUHPOLVNSKQDPVUCGSWDEUOMUAYRXAOJNLRWJFVZQMR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.9250318173179941);
    msg.setSource(25003U);
    msg.setSourceEntity(59U);
    msg.setDestination(35384U);
    msg.setDestinationEntity(191U);
    msg.name.assign("APNMFLYPCTEDZTVKHBIWYGWMCAWWPRURFHSESHYKLUMSIKW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.8503431927141288);
    msg.setSource(7826U);
    msg.setSourceEntity(139U);
    msg.setDestination(30032U);
    msg.setDestinationEntity(228U);
    msg.name.assign("MQDYDLBIZATHMNBZKFAFQJBTEIHUZYMINWUPFYUDIZGPHCICSHOSTKNNIWSABBVUJHYYNXAJJGOJJXUQWUXCWCL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.8949405984062507);
    msg.setSource(50872U);
    msg.setSourceEntity(74U);
    msg.setDestination(44447U);
    msg.setDestinationEntity(87U);
    msg.name.assign("WEPQXUTQFJIUVHSMROMPDLPTATOYJOGNKMNNRBLXLEWQEOBFXEBJDIPAPHDMZTZUOILBNKYEFEYEWYXFROHQITCVNGCSHPDFRSDGMYBGHWXQJTRTIHCKIPZACGZIFWBKJCOFIXWQXSXZNFKCVRTFEEARRBWGCLDGKDDYDHVOWSVCLLCAPUWAZMVZITFJNELAKNYGOUS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.7850511529635275);
    msg.setSource(55620U);
    msg.setSourceEntity(244U);
    msg.setDestination(39267U);
    msg.setDestinationEntity(170U);
    msg.type = 39U;
    msg.error.assign("GILJOZZUNIANEGNUHRNQBMJMAYJLVZHRQQDDZDRVWPCQHTFSBAJWKTHISGAHMZMLTEFGOZCOYMPPUYNBQWOQSMSAXTTIDCSJBRSEYPBKMJKOOFFOKUFEIKVDDWPKPDNBVQNMVLZPLWCRDXKNBJCYEPIXQJLRKXNSQXGROY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.7844369713025983);
    msg.setSource(42267U);
    msg.setSourceEntity(51U);
    msg.setDestination(44429U);
    msg.setDestinationEntity(226U);
    msg.type = 174U;
    msg.error.assign("PXLDCPYVIQNXNQFAMWKAUWTRTFFRZZICIDXKRKYZSNHAVXZJFXKYSVGOOOOAJZSKVOXTVVEYUHFEZARXGIUVETPMACULWYBWIBEHBTEMWGUMLGPQMMH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.9714506685371302);
    msg.setSource(32850U);
    msg.setSourceEntity(248U);
    msg.setDestination(24570U);
    msg.setDestinationEntity(3U);
    msg.type = 214U;
    msg.error.assign("AENBEASKFWVKACTBKMZIEHQPHVJIXKPOMGOULGFQXUQOQUJNMVXDKDPISTZDERHYIJSGKQTRAFZGCJBOKSXHONGCYIRWGJNNEMNAFCOZKVCYFLGTPSBJRIJYIDMKURZGSRBAVDRHHWDXDLEBYFYEONVHLBWHFGGVHLUPPXDNCTSMZEYBF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.4915447965842473);
    msg.setSource(44412U);
    msg.setSourceEntity(202U);
    msg.setDestination(7624U);
    msg.setDestinationEntity(53U);
    msg.seq = 23579U;
    msg.sys_dst.assign("FLKXRPTLOFTERFETRQJCCHXDMHYFDVVEDNSLRBWXGJOHXAAJRACKAJGKLXQMLSJDIBHPCLWZEN");
    msg.flags = 150U;
    const char tmp_msg_0[] = {-116, -84, 89, 121, -64, 50, 112, -39, -7, 49, 76, -53, -18, -27, 120, 126, 39, 62, 44, -79, 78, -48, -39, 53, -12, -23, 45, -119, 92, -58, -62, -85, 118, -119, -84, -95, -55, -89, -126, -127, 31, 38, -63, -60, 18, 43, 8, -76, 23, 63, 94, -17, 79, 36, 16, -127, 78, 102, 98, 60, -45, 22, 44, -23, -116, -76, 6, 118, 86, 44, -101, -86, -87, 50, 95, -104, 6, -128, -75, 97, -47, 62, 39, 13, 73, -21, 39, 118, 71, 70, -111, 104, -21, -119, -40, 52, 118, 112, 69, 57, 26, 86, 75, -73, -125, 0, -21, -96, 49, 31, -31, 101, 56, 13, -42, 118, -82, -96, 43, -80, -9, 16, 23, -25, -128, 42, -69, -67, 7, -10, -61, -128, -101, 109, 98, 32, -24, 95, 120, 60, 107, -80, 81, -47, 97, -127, -51, -56, -5, -12, -53, -9, 126, 70, -118, -108, -31, -44, 40, -98, 20, 25, 71, 38, -53, 93, -79, 37, 85, 118, -19, 84, -92, 61, -57, -99, 46, 79, 13, 41, -37, -78, -77, 115, 102, 39, 28, -88, 39, 108, -58, 36, 35, -94, -112, 38, 94, -4, -24, 4, -127, -98, 6, -109, -120, 54, 17, -83, 13, -4, -61, -42, 74, 11, -94, -56, -102, -49, -59, 101, -45, 60, -102, 69, -36, -55, 60, -36, 103, -117, 27, 115, 57, 124, -56, -113, 101, 96, 58, -122, -23, -66, 120, 62, -106, -84};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.030030511820276162);
    msg.setSource(63572U);
    msg.setSourceEntity(86U);
    msg.setDestination(54046U);
    msg.setDestinationEntity(203U);
    msg.seq = 55065U;
    msg.sys_dst.assign("UMVXXNBXHBNBQ");
    msg.flags = 88U;
    const char tmp_msg_0[] = {-35, 67, -110, -51, -111, 8, -50, -60, -1, 90, -6, 41, 113, 108, 72, -50, 44, 113, 87, -102, 100, 47, -53, -13, -82, 69, -51, 17, -111, 117, -67, 123, 16, -106, -37, 97, 67, -71, 100, 90, -40, -79, 120, -38, -68, -49, 80, -26, -28, 79, 83, 54, 54, -99, 116, 111, 94, 2, 116, 79, 22, -100, 112, -99, -12, 97, 72, 9, 107, -111, -21, -98, 126, -64, -99, 73, -82, -111, -52, -84, 91};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.08222597539600263);
    msg.setSource(7813U);
    msg.setSourceEntity(184U);
    msg.setDestination(30622U);
    msg.setDestinationEntity(29U);
    msg.seq = 26581U;
    msg.sys_dst.assign("CYLMMAROXJHFPLJJBEHUVDITLWJSJPSVKPPCPSIOLRQJGZQTPRBTDMOKNCZRGCFQEHWYJFHFOWWEBLUNGFLDNVLCIIZMPTXOOAQAAOCCRSVBGKIYXYJABIYSRUNZUXYTSKNFWHHISNTQUZBDIQGFKXYYGXQKUHBUMACWGKROLIEVTQAZJDEZWOBYAXKFWVANRFEZHQYXVOWIKDGWRSZGSMZEUVXVEDNPBMUDRLTDJSFBMDMHKHXPATG");
    msg.flags = 105U;
    const char tmp_msg_0[] = {121, -94, -24, 124, 17, 75, 38, -104, 55, -61, -7, -58, -104, 22, 105, -1, -29, -78, 33, -106, 78, 54, 92, 98, 20, -29, -82, 44, 87, 92, 44, -75, 2, -44, -78, 122, -22, -112, -65, 109, 9, 36, 54, -125, -128, -15, 4, -104, 75, -85, -85, -24, 36, 59, 113, -6, 78, 8, -19, 6, 14, -23, -100, 97, 58, 26, 66, -110, -46, 126, -47, -124, 58, -12, 59, -82, 123, 117, 31, 108, 112, 62, 105, -43, -95, -66, 95, -59, -116, 12, 76, 110, -127, -64, -66, 35, 17, -52, -100, 53, 108, -60, 89, 41, -119, 113, 124, -71, -4, -68, -83, 48, 101, 57, 34, -94, -35, -104, -61, 17, 9, -91, 75, -101, 76, 105, -110, 104, 83, -55, 78, 33, -71, -10, 11, -94, -17, -21, 117, 94, -118, 70, 12};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.4981200835695363);
    msg.setSource(52330U);
    msg.setSourceEntity(146U);
    msg.setDestination(4567U);
    msg.setDestinationEntity(190U);
    msg.sys_src.assign("CYCIPIVXSATWGTHTFDHFMZMZSYWMLLKOAFDOVUFLXWCPJHZCQWMNAIAWXUQVAFRQNMSKNNLBZUS");
    msg.sys_dst.assign("WMFLRHQIDTBLZKVKUDBKEIWJBRSUENBAOPJQAIGYTYQPXVVUCOHQRUNLSTSPCRCPYOANXAGARLSBRYGFRJGSETDEMXPSCXOHFCESKZGVYVPSZNDIMWWVFPQKJZDWUHDAJFDHNCUBLPZQRFMWTVQLHWKYV");
    msg.flags = 248U;
    const char tmp_msg_0[] = {-59, 3, 57, -78, 121, 73, 73, -118, -87, 121, 13, 4, 50, 74, -84, -106, -49, 110, 25, -101, -76, 10, 118, -32, 108, -103, 35, -124, 24, -80, -41, 68, 72, 113, -28, -112, -25, -75, 75, 112, 116, -111};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.6735373396088273);
    msg.setSource(63906U);
    msg.setSourceEntity(15U);
    msg.setDestination(25076U);
    msg.setDestinationEntity(139U);
    msg.sys_src.assign("FUVNEHBLAYAVOSITLQKFCVARUJNRMMPHGTZCQMWOZURHCHPKTMWDLFTPTJWQXCRWKXQBKMGMGZYWOOLBDJNTCBOEIBTFOEMHCTLWSBUVOSYFASHARZCXEVQKEDDVRYBDEUJLKMODDRSVPAGGUMDNKENPP");
    msg.sys_dst.assign("AETNOSOUWDEVJEJOCNCBGMKPCHNWMDKRJHFLVFQPQTKPQEFXYYSVQXZVINBBSSLMCDMAULRIVWLKYGLJHMYMZKIBDXWXOWQUZZTCZALPJTXIFBBUDPSBUFSDTHGVWHHYIZXMCUGKJCGXONMOGSXEDJRTSXRYWTKHPBZGZIUAAVLUYAFPYAMKOFGECDWVYBDSXHVDTEVIJUROKOPQETRUKMCGLLFTAAZNPHNPCNSRBWAQIZFHONLRE");
    msg.flags = 39U;
    const char tmp_msg_0[] = {-61, -115, -91, 21, -108, -42, 87, 60, -33, 72, 99, 62, -55, -112, 92, 63, -119, 24, 65, 52, -96, -45, -125, -44, 70, 38, 35, 59, 41, -34, 47, 74, -65, -76, -107, -20, -82, -93, -36, -72, 2, -124, -19, -8, 114, 125, -4, 60, -94, 90, -16, -93, -84, 41, -51, 29, -81, -85, 5, -76, -75, 42, 105, -61, 102, 89, 54, 17, 114, -6, -76, 107, -45, 68, -14, 3, 102, 47, 91, 48, 119, -69, 117, -43, -107, 11, -12, -2, 45, 36, -30, 43, -91, 111, -28, -124, -113, -103, 95, 87, 66, -105, 31, 58, -114, -87, 55, 76, 92, 63, -57, -19, 67, -32, -126, 110, -9, 47, -99, -58, -55, -17, 1, 113, -83, -105, 9, -87, -47, 31, -33, 99, 22, 45, -68, -44, -72, 93, -6, -22, -53, 44, -90, 68, -82, 92, -46, 41, 68, 45, 17, -106, -6, -38, -11, -98, 94, 118, 108, -128, 107, -110, 75, -8, -41, -1, -35, -107, 34, 50, -118, 73, 107, 38, 101, -53, -5, 7, 114, 18, 17, 16, 123, -24, 67, -36, 118, 119, 63, 5, 38, 62, 23, 86, -61, 24, 108, -82, -14, 42, 21, -26, 119, 49, -25, -53, -88, -121, -28, -111, -87, -91, 68, 21, -74, -42, -53, 34, 27, -107, -120, -34, 74, 91, 115, -125, 72, -29, 106, 76, -127, 74, -20};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.15171070689621524);
    msg.setSource(37129U);
    msg.setSourceEntity(248U);
    msg.setDestination(54363U);
    msg.setDestinationEntity(98U);
    msg.sys_src.assign("EHJIQAWJHUIACQJGFIZHDSICSPVKAGANMMPHVMCXKDMSBVPVJKZAENSLORR");
    msg.sys_dst.assign("YMORCFAQXDSRLSMDYFTWRTOCSREXGJYYWERANTMUHDHXZWBHLOQWQKFIDBUNGGOBSKWFASXEPGZWWNXZMFRDACDZVRDVUHLVNUBKMUJLJHKJYQODSIHHUWCINDPXYKXYMZPVTREFBTCXZZHGJUEVCGJZFMVIILNIOOKXAILQQOTBDSPJPJMVBMTMSEGBNYVGLBZOCCTAVCFHTPFWAPEPPICITNKOQYUEGJKKQPVGWIJEASUALEZQSNBULRFH");
    msg.flags = 14U;
    const char tmp_msg_0[] = {27, 17, 119, -97, -39, -73, -64, 45, 31, -45, 37, 114, -35, 115, 23, -127, 3, -112, 98, -104, 95, -86, -65, 26, -106, -53, -72, -109, -50, -33, 87, 42, -15, 101, 68, -84, 23, 57, -11, 109, 14, 27, -89, -111, -4, -121, 116, -119, 79, 91, -46, -85, -76, 60, -69, 0, 47, -10, -116, -128, -118, -94, -19, 100, -117, -96, -79, -68, -7, -123, -105, -77, 101, 103, 21, 12, -58, 13, -23, 22, 27, 76, 51, -75, 41, 39, -50, -88, -23, 8, 73, -76, 84, -58, -81, -57, -77, -73, -31, -32, -104, -56, -16, 3, -30, 102, 18, 32, 35, -69, -98, 49, -100, 68, 112, 126, 2, 113, 6, 82, -86, -73, -75, 119, -4, -25, 109, 119, 122, -17, 60, 126, 75, -17, 114, 21, 27, -120, -85, 34, -34, -85, 30, -82, 31, -49, 73, -5};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.3510952405437805);
    msg.setSource(8142U);
    msg.setSourceEntity(58U);
    msg.setDestination(535U);
    msg.setDestinationEntity(234U);
    msg.seq = 55443U;
    msg.value = 111U;
    msg.error.assign("HJLOPUJRWNLBPXNNVLQWKDQXOIGQYUFLFASUEUBPYGBIPMNQTULMUMGDAPYOGXMBBZTXBWNWPKEWTERDVQHKVBOGWIUQNRSCGXVWGDRECFJMPAEQYUJSXQAFLINZTXTIRXZTASKDDZJDJRVHSWERAF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.7683246484899078);
    msg.setSource(19438U);
    msg.setSourceEntity(180U);
    msg.setDestination(42577U);
    msg.setDestinationEntity(254U);
    msg.seq = 61793U;
    msg.value = 148U;
    msg.error.assign("JEDXFVHAOTNPWROFYULCUQUWQAZBSRRPBHDZFMZKPUKHCCKQFIMCLYZBQOAXJEDNGKEHGOVUHJJYJEXVSJVSETQHGCRZTVCGENSMQDOSINZSBGWNCUWFTMBBODPJYNLFXHLFIYGXDRJFNUYVLABMKOMQEEZEHCWCJIFLXGRTPDOTPXWKAHVYXIXBZSTGRWZPTIXKAEIHMNAKICWFKVUMLLA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.45498257430697797);
    msg.setSource(17355U);
    msg.setSourceEntity(73U);
    msg.setDestination(41366U);
    msg.setDestinationEntity(191U);
    msg.seq = 16894U;
    msg.value = 186U;
    msg.error.assign("VRIIPEJWQXPWXOTEZLTJINCEAVEYMLCQPDCAJICGNDOSZEUXUKDHMGIZIFOZOBMRVZGAHTFJKQGLTLCSNGSKFRDTBVNIOXMZOCRTFCMUKPWZFADTBYKC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.7062496679198269);
    msg.setSource(20758U);
    msg.setSourceEntity(191U);
    msg.setDestination(33149U);
    msg.setDestinationEntity(111U);
    msg.seq = 64773U;
    msg.sys.assign("WHEKEKZASYEEDWLOEMIGSCWXMQCPJVWLPPOYZUVJQMPPUDAFCFQXFQBTCRESUKVHVYJUYRSKEBZNTNTWYZSBPHENORNUDBHIXEGZBBJVOROMCGXLQKYJZXLFXMTHUZZNPINKLDFIAXVHGQRLBJJUZMSOULRGWFRJCWFLBOKOHWAWYYKVBSHMYNQAGLRADTIATXCDZIVGXSBADPQPIIMHLTPJ");
    msg.value = 0.09313212905702084;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.8498909018411359);
    msg.setSource(61123U);
    msg.setSourceEntity(130U);
    msg.setDestination(12001U);
    msg.setDestinationEntity(101U);
    msg.seq = 379U;
    msg.sys.assign("PWCKODQYBQFBGXGRGJRVKLHAVJCOHLJYUHPTLJVONLPOB");
    msg.value = 0.9475828040507048;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.9014315242631106);
    msg.setSource(2791U);
    msg.setSourceEntity(162U);
    msg.setDestination(51818U);
    msg.setDestinationEntity(238U);
    msg.seq = 53328U;
    msg.sys.assign("JIROXJAWNVBTEJCBMNSNXEIIHEXFBZJWSNAEPJRZBK");
    msg.value = 0.8447685111893916;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.0397728815995636);
    msg.setSource(21689U);
    msg.setSourceEntity(111U);
    msg.setDestination(12723U);
    msg.setDestinationEntity(102U);
    msg.action = 52U;
    msg.longain = 0.2790871731766661;
    msg.latgain = 0.6777017058619642;
    msg.bondthick = 2701500693U;
    msg.leadgain = 0.9759071949734575;
    msg.deconflgain = 0.9685433132016007;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.7733063872327572);
    msg.setSource(7830U);
    msg.setSourceEntity(207U);
    msg.setDestination(48004U);
    msg.setDestinationEntity(68U);
    msg.action = 21U;
    msg.longain = 0.10141556984154032;
    msg.latgain = 0.5296457583315425;
    msg.bondthick = 94724174U;
    msg.leadgain = 0.4287873990911232;
    msg.deconflgain = 0.011270955853973641;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.27766135684502846);
    msg.setSource(14262U);
    msg.setSourceEntity(40U);
    msg.setDestination(7761U);
    msg.setDestinationEntity(113U);
    msg.action = 211U;
    msg.longain = 0.6917135347642696;
    msg.latgain = 0.9097127833054977;
    msg.bondthick = 749127830U;
    msg.leadgain = 0.6455253644626614;
    msg.deconflgain = 0.5603377744797331;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.5357110428513101);
    msg.setSource(26103U);
    msg.setSourceEntity(104U);
    msg.setDestination(10388U);
    msg.setDestinationEntity(214U);
    msg.err_mean = 0.787760169534997;
    msg.dist_min_abs = 0.34179389094508306;
    msg.dist_min_mean = 0.610982705288762;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.7074227994432476);
    msg.setSource(57055U);
    msg.setSourceEntity(18U);
    msg.setDestination(39076U);
    msg.setDestinationEntity(234U);
    msg.err_mean = 0.32461426358502177;
    msg.dist_min_abs = 0.644828729913886;
    msg.dist_min_mean = 0.6639753419998471;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.9651440848343716);
    msg.setSource(62258U);
    msg.setSourceEntity(243U);
    msg.setDestination(11303U);
    msg.setDestinationEntity(57U);
    msg.err_mean = 0.4374901128252908;
    msg.dist_min_abs = 0.010381459503902124;
    msg.dist_min_mean = 0.45933581034619864;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.8040931159754502);
    msg.setSource(13771U);
    msg.setSourceEntity(132U);
    msg.setDestination(42738U);
    msg.setDestinationEntity(160U);
    msg.uid = 165U;
    msg.frag_number = 27U;
    msg.num_frags = 95U;
    const char tmp_msg_0[] = {-120, 91, 80, -114, -6, 106, -110, 65, -54, -82, 101, -16, 35, 79, -90, 28, -35, -15, 33, -96, 51, -102, -40, 43, -19, -102, 16, -74, -7, -68, 2, -102, -124, 60, 106, -124, -123, -118, -4, -91, -126, -80, -29, -16, 89, -51, -69, 123, -32, -41, -37, -10, -103, -101, 13, 112, -1, 42, -18, -109, -111, -31, 83, 12, -65, 75, 64, -89, 72, 118, -109, -69, 111, 41, -108, 59, 1, 105, 125, -60, -93, -68, 70, 126, -88, -48, 98, -100, 49, -108, 27, -93, 60, -109, -120, 70, 119, -4, -68, 39};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.983285223173922);
    msg.setSource(3304U);
    msg.setSourceEntity(219U);
    msg.setDestination(35756U);
    msg.setDestinationEntity(64U);
    msg.uid = 125U;
    msg.frag_number = 57U;
    msg.num_frags = 152U;
    const char tmp_msg_0[] = {13, 82, -88, 86, -31, -95, 98, 100, 17, 2, -56, -77, -24, -30, -122, 63, -96, 22, -75, 118, -57, 112, -67, 36, 8, 60, -59, -2, -59, 91, -67, -95, -44, 42, -77, 120, -13, -19, -34, -89, 89, -56, -109, -18, 26, 83, -98, 49, 111, 14, -119, -79, -25, 121, -68, -109, -44, 11, 87, 101, 125, -72, 42, 17, 71, 110, -101, -63, 7, 61, 75, -4, 92, -35, 19, 43, -70, -31, 120, 90, -66, -14, 65, 4, 80, -27, -38, 21, -103, 45, -108, 0, -37, 53, 95, 7, 108, -59, -125, 59, 53, 105, -78, -112, -117, 104, 57, -77, 70, 17, 111, 114, -25};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.6742957116531125);
    msg.setSource(43785U);
    msg.setSourceEntity(138U);
    msg.setDestination(48586U);
    msg.setDestinationEntity(73U);
    msg.uid = 203U;
    msg.frag_number = 242U;
    msg.num_frags = 70U;
    const char tmp_msg_0[] = {-55, -60, -32, 52, -51, 25, 43, -84, 36, -45, 80, -65, -57, -112, -82, 104, 125, -27, -102, 62, 77, 0, -72, -126, -126, 95, -109, -35, 4, 17, -88, 45, -70, 80, 107, -59, 124, 0, 18, 94, 121, -5, 23, 49, 87, -38, -103, -85, -50, -69, 123, 10, 61, 97, 45, -87, -102, -71, -63, -62, -55, 94, -26, 54, -50, 38, -103, -84, -48, -68, -39, 11, -30, -30, -57, -77, -87, 18, -24, 61, 78, -52, 99, -45, -100, 113, 124, -32, -33, 14, 98, 72, -109, 22};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.3952796260033572);
    msg.setSource(37574U);
    msg.setSourceEntity(18U);
    msg.setDestination(19857U);
    msg.setDestinationEntity(161U);
    msg.content_type.assign("PNETLIQQFNGUUURKJNTYQZQJKMLVEOEKKVZJZYMBWWNIMXPSDHEUMPPAJLRKNJLMPLIFLCATDNXUYWVXWDEHQZSZBF");
    const char tmp_msg_0[] = {44, 5, 43, 35, 97, 116, -60, -19, -34, -75, 1, -5, 5, 101, -106, -27, -76, 104, 104, -70, -96, 107, 35};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.24191509586998972);
    msg.setSource(54536U);
    msg.setSourceEntity(31U);
    msg.setDestination(40647U);
    msg.setDestinationEntity(99U);
    msg.content_type.assign("UPUWFSQDCHWADOUYHKEDLHATDEZEKXPMXTRTJRYCKQKGBSZTWFCANOMJAODRUNKTFNIMMRUYGLJHKACBGEQADVVSMHDDGLMYWJIZHLRONEQWBVNPISFSXTIUPBOPXICIXOHPYRPNGVBBKFPVBTKAZAM");
    const char tmp_msg_0[] = {109, -122, -40, 125, -85, -58, -33, 121, 3, 123, -47, 105, 46, -27, 56, 96, 10, 107, -60, -16, 56, 101, -54, -56, 30, -44, -48, -32, -69, -21, 69, 35, 69, -47, 84, -63, -22, 120, -20, 126, -74, -46, -91, -41, -113, -4, 37, 126, 125, 1, 66, -61, 4, -58, 97, 31, 17, 101, 122, 37, 17, -76, 8, 63, -73, -86, 28, 18, 107, -74, 123, -10, 68, 18};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.6337135842248078);
    msg.setSource(55342U);
    msg.setSourceEntity(85U);
    msg.setDestination(18882U);
    msg.setDestinationEntity(200U);
    msg.content_type.assign("CRPNXHMEVMYGKMZLFWERNLQPBICJXUIULCOVJPYDBIYWXVYOLMOFZLSPFWCTELVXBIHLKSNNBQJZUWOHSSGRHYGQSXHVTUXONACAKTGRJCZDSRDNEFUNEBIWOPFQLEQTAGQAWRCZMZXDKEPQURKTGBSZXNFBLNXPRQVWCTIPMYVNA");
    const char tmp_msg_0[] = {-45, 40, -73, -17, -55, -73, -76, 82, -23, 78, -29, -38, -3, -121, 28, -78, -76, -18, 9, -74, 48, 81, 44, 41, -10, 29, 110, -116, 2, -38, 28, -29, 105, -112, 82, 34, 5, -47, 40, 17, 39, -125, 29, 83, 21, -19, -61, -17, 94, -78, 21, 99, -86, -1, 66, -120, 111, 28, -11, -108, 93, -62, 80, -42, -103, -106, -54, 36, -19, 116, 126, 125, -55, -78, -16, 3, -8, 49, -126, -89, 29, 67, -127, -21, -119, 53, -14, 1, 26, 73, -26, 103, -76, 71, 59, 14, 123, 32, 28, 93, -77, -89, -103, 27, 92, 31, 107, -23, -107, -93, -72, -44, 36, 102, 115, 27, -9, 35, -126, 3, 33, 99, -16, -7, -121, -35, 16, -106, -64, 117, 31, -75, 125, 103, -72, 35, -20, -58, 4, 55, 92, 106, 93, -59, 94, -84, -119, 82, -82, -24, -15, -44, -12, -73, 94, -128, -35, -73, -14, -18, 41, -111, -27, 87, 8, 104, 88, 72, 109, 84, -47, -1, 64, -24, -114, -87, -56, 114, 41, -98, -124, 93, -88, 61, 18, 1, -16, 13, -25, -124, -91, -80, 4, 70, 114, -10, -38, -87, 117, 27, -13, 72, 85, 47, -21, 118};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.12087235351864134);
    msg.setSource(62359U);
    msg.setSourceEntity(136U);
    msg.setDestination(45783U);
    msg.setDestinationEntity(222U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.8804867410645082);
    msg.setSource(11329U);
    msg.setSourceEntity(161U);
    msg.setDestination(26506U);
    msg.setDestinationEntity(80U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.6388573876128926);
    msg.setSource(8181U);
    msg.setSourceEntity(96U);
    msg.setDestination(34368U);
    msg.setDestinationEntity(125U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
