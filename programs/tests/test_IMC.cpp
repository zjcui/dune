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
// IMC XML MD5: a7898fe1c8d204bae57484b0b009bf7a                            *
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
    msg.setTimeStamp(0.467124584124063);
    msg.setSource(40010U);
    msg.setSourceEntity(120U);
    msg.setDestination(33449U);
    msg.setDestinationEntity(73U);
    msg.state = 164U;
    msg.flags = 143U;
    msg.description.assign("LJFTJMOZKLQHRZZCIABTHTIDZCPMWESAXQEDAGXJKQBJIBSUNJTFYGVLDPNOZKIMIQSXWHIBSMEYVEMNYFCCCQEIHTXRQSORVODZOSM");

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
    msg.setTimeStamp(0.8867489752794957);
    msg.setSource(17767U);
    msg.setSourceEntity(130U);
    msg.setDestination(11223U);
    msg.setDestinationEntity(25U);
    msg.state = 193U;
    msg.flags = 20U;
    msg.description.assign("RKFXELJTZSXKHUPXUQKQHSJLRVFFIVJGACBKZALODVVVZJEQKSVMUJUPTDEUEBOXKLCBMPEGN");

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
    msg.setTimeStamp(0.5348895866015966);
    msg.setSource(50296U);
    msg.setSourceEntity(75U);
    msg.setDestination(14285U);
    msg.setDestinationEntity(68U);
    msg.state = 125U;
    msg.flags = 208U;
    msg.description.assign("ZPCHVYBVHSDQGILNASATBMSGXOJXLLSKIKMFGFLGWQT");

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
    msg.setTimeStamp(0.9694993781480374);
    msg.setSource(34699U);
    msg.setSourceEntity(129U);
    msg.setDestination(22159U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.3896166847223371);
    msg.setSource(48963U);
    msg.setSourceEntity(199U);
    msg.setDestination(28801U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.0907562098669118);
    msg.setSource(12287U);
    msg.setSourceEntity(163U);
    msg.setDestination(41396U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.2562518178804406);
    msg.setSource(53649U);
    msg.setSourceEntity(26U);
    msg.setDestination(26750U);
    msg.setDestinationEntity(205U);
    msg.id = 130U;
    msg.label.assign("FUJKNKXXTUGSYDLSFUUUKDRBZEDYEORGNWGAOQYAKBITWFUFCJNFIXQJLPHBZLVQWJEWZBTXEDRLODCOLRTIYBZDXNCHGMZMP");
    msg.component.assign("TWPWKDRBTXWZLTZREVWTYDSJTTKHMDLWVXJZYIOBULPJAPLUGBPMUIGEQWDFCQKLCSBOCIUXGZNBQJYMINKZFVHPRGVBZSDABEGENHLFRZQJHVEEUOKDGJNFFWMZEOKSUMVMRPNTQNHRPZGFTASRTNFNCXOGQCAYJJOIHIYHBAYYAKVSCJZAXXLASM");
    msg.act_time = 39012U;
    msg.deact_time = 55067U;

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
    msg.setTimeStamp(0.7477559843200846);
    msg.setSource(53782U);
    msg.setSourceEntity(117U);
    msg.setDestination(47757U);
    msg.setDestinationEntity(19U);
    msg.id = 131U;
    msg.label.assign("AZTCIIAECXULXSBDVRVUBQKTZFKGTSEILKGREWVPHRGIDTSGYLYLNUZOLYOWDNHOYCQXVNZCVZPYMPWASQNTQFMOAUNZKDWXCHWVOXDKQJHVVWJ");
    msg.component.assign("VPJNGBKIHMXJSGRNACXRPGUBOPQZWKNPNLTOEBJWIRRKNUFAKIBMVQSAOMDYHCSQLMVPCOPWKUMNNETGRHMXWWVMYAHHDDKJCDIATAEUEPZXWXXUYNIUWSFIGTFDOBWIXNBKOAFVCUEDILXYVIEKTHFYFYZFRCEDMJTS");
    msg.act_time = 19002U;
    msg.deact_time = 4522U;

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
    msg.setTimeStamp(0.34116325571383377);
    msg.setSource(6928U);
    msg.setSourceEntity(115U);
    msg.setDestination(37551U);
    msg.setDestinationEntity(212U);
    msg.id = 232U;
    msg.label.assign("WVJHGFVZVQENUHBVBRDHASRDPEFSKPMOFFTQEMMCYJYCDNJNFTWDOSQGELPHGVXLKTVOSRQBMGORCREKEPATTCPQWDONBTUMVQRIOGAJXULZQZGKXNFMAWTNYZTTZLILOGAHSFDXSJVBSKNDXIQHHINNWIWWRFUMYYEZHMLKECAWIKZIYEROAASBAWFYTJNGLOOCYLBXHPURUCXCQFKKPGMDDPSX");
    msg.component.assign("PVWHQLINOUUKLAMPYXEAADVOQQHUNMINNAPZCQPAVGVMKGNEESZGWSHRIQLFURYQRYTJNMNZAIETWDRDJVKPTXRLHCTNFDWJUQAZQOBDCVSUHTEOTPCGMBSWEGMOHWTJJOKIIZJ");
    msg.act_time = 27889U;
    msg.deact_time = 48713U;

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
    msg.setTimeStamp(0.5062542102882432);
    msg.setSource(60100U);
    msg.setSourceEntity(44U);
    msg.setDestination(64288U);
    msg.setDestinationEntity(85U);
    msg.id = 166U;

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
    msg.setTimeStamp(0.25539793435494473);
    msg.setSource(47804U);
    msg.setSourceEntity(217U);
    msg.setDestination(63148U);
    msg.setDestinationEntity(242U);
    msg.id = 2U;

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
    msg.setTimeStamp(0.7401770050276848);
    msg.setSource(3305U);
    msg.setSourceEntity(9U);
    msg.setDestination(28689U);
    msg.setDestinationEntity(35U);
    msg.id = 38U;

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
    msg.setTimeStamp(0.21835326390491616);
    msg.setSource(34136U);
    msg.setSourceEntity(177U);
    msg.setDestination(11020U);
    msg.setDestinationEntity(18U);
    msg.op = 187U;
    msg.list.assign("FLWQMRPFJCFBEJBMLCZSFSXOJHSDQMLMBHXAQIQWLZUJYIJCRIBDGVHRMZGYITAPPGCXFMRTEUDOKYHCRIXEUERFZRBINWORKTPDZUCDFAAXHVDNVHPAVPNZWWQJBDGHLOWEULLSKLNXRAEUOYGVKXTOZOBIUQVKFKZPSYTYQJBSNUOLUFWQAYSGNKHIWEATYDSHDVPJ");

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
    msg.setTimeStamp(0.24524753329814597);
    msg.setSource(47256U);
    msg.setSourceEntity(197U);
    msg.setDestination(30276U);
    msg.setDestinationEntity(182U);
    msg.op = 154U;
    msg.list.assign("TVSESRGAWBGSUXDSRQNLMNEJWYBRSYZOYOFTZEXETVHDYPIIBXYTTVFNMPNUXLGDNJZOYCIAVQSPZZRQTUDPBMXLSMJP");

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
    msg.setTimeStamp(0.3272805670621184);
    msg.setSource(49620U);
    msg.setSourceEntity(50U);
    msg.setDestination(29584U);
    msg.setDestinationEntity(65U);
    msg.op = 28U;
    msg.list.assign("WDOFAGWAKUZJIJBRTHHMQUKCNFIOVBJUYCXQGEXDLDNRAWRGOOPOZPDTTEOIWPVLOZXLZDIGKZRBVMRLWPSMHTXAIGASMIXVHXTPIEMYNQXRWWSUTYFMHRPOLFJJUBNERQDZQGBNUWIQKEIVFCEHJNTHBKSGSMBYGLSNDEQSKCATYQHPKVVQDNXBSTOMKLYZGJSACJLEPCUFSGVWFNYFJ");

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
    msg.setTimeStamp(0.8649491433649679);
    msg.setSource(38145U);
    msg.setSourceEntity(104U);
    msg.setDestination(18650U);
    msg.setDestinationEntity(252U);
    msg.value = 77U;

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
    msg.setTimeStamp(0.791931103003639);
    msg.setSource(40319U);
    msg.setSourceEntity(221U);
    msg.setDestination(58219U);
    msg.setDestinationEntity(47U);
    msg.value = 210U;

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
    msg.setTimeStamp(0.014307170740584074);
    msg.setSource(2611U);
    msg.setSourceEntity(113U);
    msg.setDestination(64498U);
    msg.setDestinationEntity(207U);
    msg.value = 75U;

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
    msg.setTimeStamp(0.9869672673438894);
    msg.setSource(41939U);
    msg.setSourceEntity(177U);
    msg.setDestination(11741U);
    msg.setDestinationEntity(220U);
    msg.consumer.assign("HLTDFCXPAPNDMWKQEVHJYSZHABBKDRHCATTMKQWXNYXNVJZOBBFZNJGXZCKDHWULOWCTTOMYWRVBBARUPQAEYIGPEUIKQWUJGZRORFDPMLXCSZMCQPUCJLSBJWRKHHADKLTOFENVWTSLUDEMWANOISABSDQMOZQJHIKJXMECGFQLPYXDFYEKYJNLGXYFPZU");
    msg.message_id = 39113U;

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
    msg.setTimeStamp(0.07360190554255741);
    msg.setSource(38664U);
    msg.setSourceEntity(181U);
    msg.setDestination(7299U);
    msg.setDestinationEntity(158U);
    msg.consumer.assign("RZPLFMYRVCTCJIUSNFMVZDPGVNYZRHXLHBADXSNMKTNEJVJLOUUBHXGGIDTFTYPPKWTXFTKZHSOFZYACBDJUBNJPSSAYJKOMMQYYH");
    msg.message_id = 15601U;

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
    msg.setTimeStamp(0.03045229757868695);
    msg.setSource(4669U);
    msg.setSourceEntity(61U);
    msg.setDestination(3775U);
    msg.setDestinationEntity(173U);
    msg.consumer.assign("APZXJTNIDXHIVZXHWNBETDYNNKAXOBNB");
    msg.message_id = 1834U;

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
    msg.setTimeStamp(0.7347814791974531);
    msg.setSource(58285U);
    msg.setSourceEntity(181U);
    msg.setDestination(16716U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.8950116835006833);
    msg.setSource(32554U);
    msg.setSourceEntity(242U);
    msg.setDestination(24628U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.6647084357413869);
    msg.setSource(36869U);
    msg.setSourceEntity(143U);
    msg.setDestination(26535U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.7680175716964309);
    msg.setSource(23414U);
    msg.setSourceEntity(183U);
    msg.setDestination(1417U);
    msg.setDestinationEntity(36U);
    msg.op = 131U;

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
    msg.setTimeStamp(0.9382345316909);
    msg.setSource(59236U);
    msg.setSourceEntity(61U);
    msg.setDestination(1996U);
    msg.setDestinationEntity(26U);
    msg.op = 193U;

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
    msg.setTimeStamp(0.5284275994351274);
    msg.setSource(56752U);
    msg.setSourceEntity(121U);
    msg.setDestination(62393U);
    msg.setDestinationEntity(108U);
    msg.op = 78U;

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
    msg.setTimeStamp(0.8406477128561608);
    msg.setSource(36699U);
    msg.setSourceEntity(141U);
    msg.setDestination(27712U);
    msg.setDestinationEntity(223U);
    msg.total_steps = 185U;
    msg.step_number = 175U;
    msg.step.assign("AMQZJVMAWLPURILNHTRYOFCKNKNTXRDCAVEOSGJHKXNHOHDZVVVIDATCDFCMZBVDHHECMZOXIEFGIBRCTEGIALYPODJZYBLYBNAXJCEQZEEUXIOEUUKLDUTBXCTPVDFYYSNHCNLRWMQPSY");
    msg.flags = 33U;

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
    msg.setTimeStamp(0.6818645157197452);
    msg.setSource(25660U);
    msg.setSourceEntity(116U);
    msg.setDestination(34889U);
    msg.setDestinationEntity(40U);
    msg.total_steps = 218U;
    msg.step_number = 22U;
    msg.step.assign("AASHLUFHZPFOTPHPQYXZYFDGHJVZLDJELRBHBWDXIBYKLYBNNYBXQKRLEVPYAICTNZWRMOAAPQEOVMDSLFCIZMOHEROJRVBGOAHIJDBMYJNTDGTWYJRMWDTKVOHLDEKQBOCMWXIOZZFVXGCVZHGUYVKUPIXDCKKECYWNBLQFCEDRSUGISQUEQTSNQGJXKPIFMSQMSZBTTFCIVXSGLW");
    msg.flags = 243U;

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
    msg.setTimeStamp(0.12541829245974323);
    msg.setSource(33660U);
    msg.setSourceEntity(245U);
    msg.setDestination(53917U);
    msg.setDestinationEntity(222U);
    msg.total_steps = 90U;
    msg.step_number = 44U;
    msg.step.assign("QXFNMJTVJGCBXSSVGCEARRFDLKJSBPQYZKEOCMNVIBOZAQSWLFRTZKRFJKJEAAHDDWRWFLUXIQSUMPSNDRUBWGEPVFTOXAENLATBECGIDNGWZXEMTCBSIHPAHAZYORGHUYDWNDPWWKBGZNLVYNETQZFDIXRJMVLTZJPHISMKIJVUPWDOTOOPUBKVKPCOXDFMMFXHVTZQXRUMOEUZORYLCHHAIHBCQSPIYNLCYAQJYB");
    msg.flags = 54U;

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
    msg.setTimeStamp(0.6855894297922758);
    msg.setSource(54977U);
    msg.setSourceEntity(176U);
    msg.setDestination(10773U);
    msg.setDestinationEntity(30U);
    msg.state = 79U;
    msg.error.assign("FCHWVQIEBRKBMMEESYADCPFMZTWFANVIKFCABINNSQBBIZIQUYXMJUKUGYBJYKSLIGTCPXFNLVIFHQELYLOUTELIGLFOQPKRLOJHEGCMDGHPEDKPURMXPDRNNMIMWZATXJLPJTANHCFIRQXYFWLDQNUSYKYSZOAZXFKYLPBXYTDGCGGDWSHBHWVMGNOSQGVJVAWRZOESJTDJXZDUBWRVEZACQARDSOKTHTUUBHNOAV");

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
    msg.setTimeStamp(0.10038454894858473);
    msg.setSource(52433U);
    msg.setSourceEntity(15U);
    msg.setDestination(46010U);
    msg.setDestinationEntity(66U);
    msg.state = 41U;
    msg.error.assign("FKPQSXAXHOMGEWGQWEIZKNWAIASOIXSLLFOLNVIDNXRGTTVQEJWNXYTPICYTPHZPUBOKKCRZFRDMDXXFSCUJQAYRGUZLHNUMYSFAGIYPQPJEHFKICBMCXUG");

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
    msg.setTimeStamp(0.8137049013893186);
    msg.setSource(42423U);
    msg.setSourceEntity(126U);
    msg.setDestination(35626U);
    msg.setDestinationEntity(91U);
    msg.state = 193U;
    msg.error.assign("TCORMLQMQTCFZBOFBAPFCSAAYRNCWHQFTLKJDFVPXQWQKKZXXZMDHSEKIUSQETDRMZQHNVXVELRBPTEOWOBPZXBSPYVOTRPRDPABSHWRGICMHKGWZBLSYYUKKVLJEPLRPFONQGXUXVNIWAUJTFGICNYIMBDHAEVCIEVJOGSVWGLCYNIMAWZNTJCTSRKNIJZVNGDYRLEJHHYPKYDSWMO");

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
    msg.setTimeStamp(0.8307312279303353);
    msg.setSource(46195U);
    msg.setSourceEntity(211U);
    msg.setDestination(35920U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.1971206004587921);
    msg.setSource(12625U);
    msg.setSourceEntity(51U);
    msg.setDestination(58918U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.503155458569757);
    msg.setSource(14176U);
    msg.setSourceEntity(233U);
    msg.setDestination(21273U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.9785120656171158);
    msg.setSource(13658U);
    msg.setSourceEntity(200U);
    msg.setDestination(47051U);
    msg.setDestinationEntity(183U);
    msg.op = 48U;
    msg.speed_min = 0.8670936415550022;
    msg.speed_max = 0.3802370136229176;
    msg.long_accel = 0.08634253857067797;
    msg.alt_max_msl = 0.35131510011273615;
    msg.dive_fraction_max = 0.8187930035085808;
    msg.climb_fraction_max = 0.6816604108126595;
    msg.bank_max = 0.20555655392879313;
    msg.p_max = 0.31317448455742236;
    msg.pitch_min = 0.3444724101942972;
    msg.pitch_max = 0.24973333889178673;
    msg.q_max = 0.37690030461465496;
    msg.g_min = 0.7820641562836703;
    msg.g_max = 0.8211129956443832;
    msg.g_lat_max = 0.036623231484016694;
    msg.rpm_min = 0.7287649743406556;
    msg.rpm_max = 0.07294767186996032;
    msg.rpm_rate_max = 0.523472481997718;

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
    msg.setTimeStamp(0.48442208453653646);
    msg.setSource(8839U);
    msg.setSourceEntity(180U);
    msg.setDestination(33178U);
    msg.setDestinationEntity(88U);
    msg.op = 44U;
    msg.speed_min = 0.04940314177686833;
    msg.speed_max = 0.9290211814560531;
    msg.long_accel = 0.6371508735421255;
    msg.alt_max_msl = 0.44007730159869407;
    msg.dive_fraction_max = 0.387474466573694;
    msg.climb_fraction_max = 0.31553005496404885;
    msg.bank_max = 0.28289228903348906;
    msg.p_max = 0.08658521138705144;
    msg.pitch_min = 0.07488109947396959;
    msg.pitch_max = 0.6562905349110838;
    msg.q_max = 0.5562815895109045;
    msg.g_min = 0.6625338948610245;
    msg.g_max = 0.3639047317129147;
    msg.g_lat_max = 0.38112999301487016;
    msg.rpm_min = 0.3051091511308901;
    msg.rpm_max = 0.1093478575441641;
    msg.rpm_rate_max = 0.5059436853916097;

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
    msg.setTimeStamp(0.33404960897174407);
    msg.setSource(61224U);
    msg.setSourceEntity(152U);
    msg.setDestination(50148U);
    msg.setDestinationEntity(45U);
    msg.op = 17U;
    msg.speed_min = 0.7954573478660402;
    msg.speed_max = 0.009631257059038223;
    msg.long_accel = 0.5631504365088937;
    msg.alt_max_msl = 0.8053305510999134;
    msg.dive_fraction_max = 0.09328725860917664;
    msg.climb_fraction_max = 0.9727774514764325;
    msg.bank_max = 0.8083201033885716;
    msg.p_max = 0.7639746883566331;
    msg.pitch_min = 0.9495036262786691;
    msg.pitch_max = 0.19579852792848418;
    msg.q_max = 0.9808594912609876;
    msg.g_min = 0.4738911675943096;
    msg.g_max = 0.4081235223629157;
    msg.g_lat_max = 0.11905303477321416;
    msg.rpm_min = 0.7614052254827717;
    msg.rpm_max = 0.7131625800823549;
    msg.rpm_rate_max = 0.2813080351736703;

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
    msg.setTimeStamp(0.06484280155890698);
    msg.setSource(43252U);
    msg.setSourceEntity(65U);
    msg.setDestination(36214U);
    msg.setDestinationEntity(11U);
    msg.op = 154U;
    msg.timeout = 22126U;

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
    msg.setTimeStamp(0.48497379891343184);
    msg.setSource(27434U);
    msg.setSourceEntity(64U);
    msg.setDestination(35305U);
    msg.setDestinationEntity(145U);
    msg.op = 5U;
    msg.timeout = 17552U;

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
    msg.setTimeStamp(0.35104944792328296);
    msg.setSource(58000U);
    msg.setSourceEntity(102U);
    msg.setDestination(41145U);
    msg.setDestinationEntity(191U);
    msg.op = 47U;
    msg.timeout = 3987U;

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
    msg.setTimeStamp(0.2864171008654831);
    msg.setSource(18120U);
    msg.setSourceEntity(13U);
    msg.setDestination(51950U);
    msg.setDestinationEntity(65U);
    msg.state = 173U;

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
    msg.setTimeStamp(0.6467496023914586);
    msg.setSource(29836U);
    msg.setSourceEntity(227U);
    msg.setDestination(9142U);
    msg.setDestinationEntity(103U);
    msg.state = 206U;

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
    msg.setTimeStamp(0.7151063119174099);
    msg.setSource(40926U);
    msg.setSourceEntity(156U);
    msg.setDestination(57449U);
    msg.setDestinationEntity(72U);
    msg.state = 162U;

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
    msg.setTimeStamp(0.4371856419679945);
    msg.setSource(5422U);
    msg.setSourceEntity(11U);
    msg.setDestination(8545U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.7736662949782437);
    msg.setSource(26241U);
    msg.setSourceEntity(195U);
    msg.setDestination(45538U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.26203491238982046);
    msg.setSource(55403U);
    msg.setSourceEntity(80U);
    msg.setDestination(19643U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.029149958726309433);
    msg.setSource(21514U);
    msg.setSourceEntity(169U);
    msg.setDestination(41378U);
    msg.setDestinationEntity(161U);
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 129U;
    tmp_msg_0.eta = 33932U;
    tmp_msg_0.info.assign("NSEILTCUWSMWOPQKAICRCZMCFWTFERRNSGKELPMDGRHTWLPIVZDBABVDODTUAGHYBMQXSOATFATCRBYOTUHOQPIEOMKMQQIAZAUYPLFLGPQUUKVQGFNISCRVNDJMJFISWBXYSYVCUUGJNXOVQBIVZHHPWNKEHQZXAEJMGZXQPBOL");
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.13159229971885467);
    msg.setSource(24736U);
    msg.setSourceEntity(182U);
    msg.setDestination(45069U);
    msg.setDestinationEntity(189U);
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.9644772582847522;
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
    msg.setTimeStamp(0.9720520623873258);
    msg.setSource(41792U);
    msg.setSourceEntity(186U);
    msg.setDestination(23153U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.0726799372205339);
    msg.setSource(40561U);
    msg.setSourceEntity(200U);
    msg.setDestination(17741U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.7542141010280942;
    msg.lon = 0.23404901259034516;
    msg.height = 0.8147120049897305;
    msg.x = 0.753092712449399;
    msg.y = 0.7690271595765384;
    msg.z = 0.8857454493282193;
    msg.phi = 0.4385510099447556;
    msg.theta = 0.6904931273357319;
    msg.psi = 0.5540379102352085;
    msg.u = 0.6102495052104047;
    msg.v = 0.8703910088621802;
    msg.w = 0.8189800465023814;
    msg.p = 0.41079885387807236;
    msg.q = 0.4467794932967185;
    msg.r = 0.20659855677955175;
    msg.svx = 0.15157219936986743;
    msg.svy = 0.3130917082801078;
    msg.svz = 0.20786308478489046;

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
    msg.setTimeStamp(0.5515141502046151);
    msg.setSource(42636U);
    msg.setSourceEntity(240U);
    msg.setDestination(42664U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.741302679274496;
    msg.lon = 0.5214612248653471;
    msg.height = 0.8007206406411107;
    msg.x = 0.7191328728721968;
    msg.y = 0.9903058509729145;
    msg.z = 0.04503599642477829;
    msg.phi = 0.9353449628885724;
    msg.theta = 0.21582199257685164;
    msg.psi = 0.6168363316142222;
    msg.u = 0.3851802367316639;
    msg.v = 0.2558811591824457;
    msg.w = 0.26067847349481155;
    msg.p = 0.49201065832685786;
    msg.q = 0.7042663466951471;
    msg.r = 0.1452377797828971;
    msg.svx = 0.17948470734717448;
    msg.svy = 0.6837195422003801;
    msg.svz = 0.7569127930965946;

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
    msg.setTimeStamp(0.3629418191855138);
    msg.setSource(43755U);
    msg.setSourceEntity(154U);
    msg.setDestination(50622U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.14299625413578776;
    msg.lon = 0.09076890763058842;
    msg.height = 0.21326498411748518;
    msg.x = 0.7922957684588863;
    msg.y = 0.7166804415885611;
    msg.z = 0.662653201034729;
    msg.phi = 0.7752687944316615;
    msg.theta = 0.37931673953392553;
    msg.psi = 0.4205174815330257;
    msg.u = 0.4367982928732822;
    msg.v = 0.008663356461996008;
    msg.w = 0.6381590080581504;
    msg.p = 0.03188083317555834;
    msg.q = 0.42682629277950324;
    msg.r = 0.3582343581479992;
    msg.svx = 0.119586648843921;
    msg.svy = 0.2547247637742319;
    msg.svz = 0.8193981814730706;

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
    msg.setTimeStamp(0.38196018692866307);
    msg.setSource(5716U);
    msg.setSourceEntity(226U);
    msg.setDestination(20949U);
    msg.setDestinationEntity(69U);
    msg.op = 76U;
    msg.entities.assign("XVHKYFVKLWBNRVEIXMSORSAFFAZXHNEZXJVAGUDFEBHFABMIWVTPZUGJTDSBGPKUYOUPLSRYMDUG");

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
    msg.setTimeStamp(0.44671304570061354);
    msg.setSource(53405U);
    msg.setSourceEntity(233U);
    msg.setDestination(6056U);
    msg.setDestinationEntity(212U);
    msg.op = 135U;
    msg.entities.assign("PXNDDHNRKLGLLTQHOUWYYZGPCEUVEEWVKIMTKPARVEIK");

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
    msg.setTimeStamp(0.29784743769747035);
    msg.setSource(59895U);
    msg.setSourceEntity(199U);
    msg.setDestination(12496U);
    msg.setDestinationEntity(182U);
    msg.op = 191U;
    msg.entities.assign("ZWAWFVTHLXWEMYOTSYMGKSYDNEMCBTQALPGKXQZNPZDGESDHJGFYKHXRWNNQACBZPHRJTQMWHMOVYALOGREPGNJICUSTVSEFYJYOJUQLCXOJLASTZLABBJTMUUQDFPIBWWCINXSNXLNPCQVEXLTIECKOXRYPWVXSBJUKFFKLSAISHMR");

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
    msg.setTimeStamp(0.8030905599879598);
    msg.setSource(62499U);
    msg.setSourceEntity(214U);
    msg.setDestination(56976U);
    msg.setDestinationEntity(209U);
    msg.type = 193U;
    msg.speed = 17571U;
    const char tmp_msg_0[] = {83, 29, 22, -87, -45, 34, 95, 88, 6, 82, 120, 100, 55, -106, -2, 104, 117, -10, 35, -74, 48, -43, 123, 3, -41, -32, 45, 44, -103, -100, 3, -106, -17, 25, 11, 123, 76, -41, 24, -12, 87, -90, -30, -46, 26, 84, 70, -128, -92, -124, 56, 12, 3, -119, -41, 30, 60, 97, -80, -12, 90, 109, -128, -76, 54, 19, 3, -72, 121, -39, 24, 47, 45, 48, -20, -48, 26, -97, -61, -122, 100, -111, 79, 55, -111, -41, -81, 19, 103, -82, 112, 16, 104, -98, -78, 30, 51, 40, 0, -2, -120, 31, 10, -94, 23, 20, -16, 17, -43, 85, -33, 22, 35, -106, 9, -67, -20, 121, -71, 30, -86, 50, 82, -21, -78, -28, 26, -70, 125, -53, -84, 111, -3, -122, 36, 9, 26, 100, 97, -26, 103, -28, -64, 112, 4, 81, 72, -20, -104, 7, 4, 9, 62, 17, -33, 46, 97, 118, 89, -77, -13, -9, -92, -80, -5, 79, 118, -92, 21, -98, 23, 51, -66, -12, 93, 14, -21, -98, -51, 76, 116, -79, -4, 3, 99, -54, 75, -77, -101, 50, 32, 126, -104, 68, 27, -90, -64, 80, 3, 37, 113, -111, -14, -113, 90, -64, -126, -8, 83, -108, -92};
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
    msg.setTimeStamp(0.2946708122926168);
    msg.setSource(51328U);
    msg.setSourceEntity(63U);
    msg.setDestination(2810U);
    msg.setDestinationEntity(41U);
    msg.type = 51U;
    msg.speed = 464U;
    const char tmp_msg_0[] = {-72, 98, 39, 91, -51, 86, 34, 126, 120, 32, 42, 8, 81, -59, 125, 96, 17, 107, -82, -76, -10, 27, 53, 17, -123, 22, -56, 108, -100, 6, -2, -127, 94, 32, 96, 25, -12, 1, 17, 40, -116, 90, -26, -35, 39, -22, -32, -27, 100, -25, -49, -54, -42, 12, -46, 8, 123, -89, -109, -101, -29, -124, -122, 93, 80, -56, -126, 30, -22, 6, -109, -50, 123, 61, 22, -37, -93, -53, -119, -46, 68, 95, -117, -74, 45, 68, 14, 58, -77, 45, -55, -70, -119, -23, 67, -10, 125, -21, 118, 123, -4, 118, 12, 78, 2, -119, 17, -55, -90, 39, -14, 14, -56, -106, -20, -27, 118, -14, 72, 23, -43, 46, -127, 83, 72, -71, -79, -27, -105, 15, 23, -82, 48, 83, 92, -106, 95, -62, -122, -103, 98, -38, 63, -90, 4, 27, -97, -94, 56, 125, 51, 45, -9, -126, -84, -42, -53, -78, 76, 38, 27, -89, 31, 5, -37, -86, 39, 58, 55, -75, 19, 64, -48, -16, -73, -46, 101, 92, -28, 84, -33, 47, -83, 112, 105, 25, -39, -28, -90, 81, 57, -78, -40, -80, -7, 35, -105, -45, -27, 3, -106, 82, -120, -65, -94, 72, 49, 12, 75, 80, 52, 67, -22, 80, 85, 107, 55};
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
    msg.setTimeStamp(0.13229986065349975);
    msg.setSource(32296U);
    msg.setSourceEntity(204U);
    msg.setDestination(27113U);
    msg.setDestinationEntity(146U);
    msg.type = 14U;
    msg.speed = 36835U;
    const char tmp_msg_0[] = {82, 93, 104, -26, 47, -111, -30, 86, -76, -8, 113, -67, -104, 66, -83, 90, -12, 87, -9, -29, 71, -36, 27, -22, 118, -17, -48, 38, 104, -54, -14, -87, -49, 44, -35, -107, 116, 121, 24, 117, -100, -74, -117, -88, 83, 101, 4, -83, -63, -85, 44, -51, 16, 38, 29, 65, -65, -28, -124, -49, 52, 111, 98, -90, -32, -45, -99, 37, 116, 18};
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
    msg.setTimeStamp(0.22681881680920757);
    msg.setSource(20793U);
    msg.setSourceEntity(210U);
    msg.setDestination(23600U);
    msg.setDestinationEntity(247U);
    msg.op = 191U;
    msg.tas2acc_pgain = 0.5994024596479225;
    msg.bank2p_pgain = 0.3098268966402209;

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
    msg.setTimeStamp(0.7968962251744293);
    msg.setSource(43928U);
    msg.setSourceEntity(40U);
    msg.setDestination(52487U);
    msg.setDestinationEntity(136U);
    msg.op = 133U;
    msg.tas2acc_pgain = 0.6509181276241233;
    msg.bank2p_pgain = 0.19383676189758559;

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
    msg.setTimeStamp(0.9114609068675653);
    msg.setSource(5034U);
    msg.setSourceEntity(78U);
    msg.setDestination(32373U);
    msg.setDestinationEntity(150U);
    msg.op = 244U;
    msg.tas2acc_pgain = 0.7501166153264843;
    msg.bank2p_pgain = 0.33214489929750124;

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
    msg.setTimeStamp(0.44908376876851563);
    msg.setSource(11735U);
    msg.setSourceEntity(172U);
    msg.setDestination(28301U);
    msg.setDestinationEntity(133U);
    msg.available = 3853556624U;
    msg.value = 28U;

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
    msg.setTimeStamp(0.7680505755858853);
    msg.setSource(55298U);
    msg.setSourceEntity(47U);
    msg.setDestination(9638U);
    msg.setDestinationEntity(29U);
    msg.available = 4088224214U;
    msg.value = 94U;

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
    msg.setTimeStamp(0.8179627674511625);
    msg.setSource(56293U);
    msg.setSourceEntity(206U);
    msg.setDestination(6259U);
    msg.setDestinationEntity(177U);
    msg.available = 3010686638U;
    msg.value = 54U;

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
    msg.setTimeStamp(0.9551259627363519);
    msg.setSource(9620U);
    msg.setSourceEntity(160U);
    msg.setDestination(63831U);
    msg.setDestinationEntity(200U);
    msg.op = 237U;
    msg.snapshot.assign("LFIMPJDCUZZWTCSCZVNTOELRQJVACWLOPUFIQRPXBCHUVBIEENLSTLTZDSQPMJBLSUIRNRMKSDOJUAOUPXFJADPTAFPBQ");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("GTJXIKWKHNSDTSBTXQPLKAMSZVZZLOLHOYRRXYDPEHBSWRUYDGVIXUOIAOEFBYPSINQLBGGAFBWKGLWIPLIIJAPNQZAJHFTSUCZOEUDWHIDCLMCJPHHBUPFSXLYKOVHRKFBJXJFFEYQCJCIVWJWDST");
    tmp_msg_0.visibility.assign("OVAPRXVJSIHZOVYNCOWLZDDNJQTBXIBPHPIDTFPWRAAESWKWQAJWCCNHPNOUDLTNUTFUEKZMCMNQXCIMBICBOSHHJYSCPOEUBFGZKIFLFQRWOJZUQJJYFLSYDEGOSSZYAAITWYARHYMGMYUGNM");
    tmp_msg_0.scope.assign("ZHADUFUVBOAHDXFDMMWMRGTLZAZFLCEJHXCGLUIRZUTWLWJKMCKVVYNLSZVTXQOTFAEPXQHVPSKIGGASWAJBIRCYGCSUTBWSRFHQZYMNIRVNBICEWOWX");
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
    msg.setTimeStamp(0.5229082071755247);
    msg.setSource(13234U);
    msg.setSourceEntity(125U);
    msg.setDestination(17687U);
    msg.setDestinationEntity(185U);
    msg.op = 67U;
    msg.snapshot.assign("KZTRUWLTJIJKTQZOPMTGWGSIHH");
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MZZKEFMWURKBPPNZBFKJOAQZXZBVGPGTYIOZOEJVMTFISQXJFTBVCOMUIKGCXLCKQBJTCSCTGUWUETSCYSRDHYVOZLSRWQNDHLSLVKBESRAGHXVJPJKGCWXWCSEVIGHPZOEFLULNUOCPDZRIPQENSRNISBOQMTHPOZFDM");
    tmp_msg_0.lat = 0.3383001118136024;
    tmp_msg_0.lon = 0.8299923939764877;
    tmp_msg_0.depth = 0.7387817416920442;
    tmp_msg_0.query_channel = 222U;
    tmp_msg_0.reply_channel = 213U;
    tmp_msg_0.transponder_delay = 143U;
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
    msg.setTimeStamp(0.46338255948972407);
    msg.setSource(8208U);
    msg.setSourceEntity(227U);
    msg.setDestination(35059U);
    msg.setDestinationEntity(30U);
    msg.op = 152U;
    msg.snapshot.assign("DRABJZGQMJUNPWWZLMMTIIIJUAIJYJSVGFYIJMSMEGRVAGFNNQOZHAIICCBVCXTOYPCOMSQHOTXKSEYPKZVEBCXVAPOVMBWQPDSHNVYPDHYDLUDUWYTSTYAKQ");
    IMC::Abort tmp_msg_0;
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
    msg.setTimeStamp(0.7283419366783036);
    msg.setSource(33614U);
    msg.setSourceEntity(23U);
    msg.setDestination(20361U);
    msg.setDestinationEntity(164U);
    msg.op = 181U;
    msg.name.assign("QGKFJMDUESPAWNGTQIXIJGTVHSJURPTYXZPWVZLAKDSOFXMRESFNJOYBMVDKBPHBHJZPO");

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
    msg.setTimeStamp(0.014463255188800761);
    msg.setSource(30818U);
    msg.setSourceEntity(165U);
    msg.setDestination(13467U);
    msg.setDestinationEntity(197U);
    msg.op = 75U;
    msg.name.assign("VCRCUMZDTGNOQIYHLNJFWUKDCEPMYWNOJPCCPULBDULLXKTDWNXRIOKWMWZMMIVPYSPVGTUJWNQHAMARCEVTCSXIEBBNSSFNQSZGRSKIWGYNPFFMZGE");

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
    msg.setTimeStamp(0.7047155316659485);
    msg.setSource(54523U);
    msg.setSourceEntity(237U);
    msg.setDestination(57168U);
    msg.setDestinationEntity(118U);
    msg.op = 120U;
    msg.name.assign("YOSFPIVJVVRXFWIUSPPWQFOYQQTLHOFRLAZPNSAPRITUDGCFXYIIRCJSTBRJUWZHQHSGXOOVUXAPRXYNXCJEFCINDCODEVVWNTSYAKNURBQXWIWAOATMDTS");

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
    msg.setTimeStamp(0.020305772561079904);
    msg.setSource(40154U);
    msg.setSourceEntity(11U);
    msg.setDestination(52250U);
    msg.setDestinationEntity(106U);
    msg.type = 38U;
    msg.htime = 0.7514599241387677;
    msg.context.assign("AUGUWLXMQRYVZYTMKRIPJARBEOSITEUANZDOSQNPLKEWMMLBGSRVJMPZYZDUD");
    msg.text.assign("NFSACQFLWSPWLZBQCSERYBDLJNUFIXOBYVYUCIXCAINMRJTZADOQQREIVULZDGZKWJETINLNPRFY");

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
    msg.setTimeStamp(0.27871547372852745);
    msg.setSource(1297U);
    msg.setSourceEntity(237U);
    msg.setDestination(29417U);
    msg.setDestinationEntity(155U);
    msg.type = 251U;
    msg.htime = 0.3654216914264048;
    msg.context.assign("AKYUZWTLNGWXHROQWJAEJUBSHKMHPBUQBSKTOYEDMLNCWTDAPLGEXPGTISIXHILOJVEPKYCEOXOKGACIDXNWMREDBDRFIQBUGZWYVUJCQTIVVZMEPVO");
    msg.text.assign("RKKVASPQOMWIDXBSZDKPTTXGXVGZBSVOGIJCMITSOJNWYCKWUDDXMGNSDPALTUFNXPWNGMHLVRMZCMPFXUBDGRQNSFZJMYLYAPBGXCUYKAZKJJHWSYCLRIIZRIQOYQNBSFXHCQTTZFFHKNVPGFCIBOBONNOUHMD");

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
    msg.setTimeStamp(0.06734173282779554);
    msg.setSource(60992U);
    msg.setSourceEntity(223U);
    msg.setDestination(12427U);
    msg.setDestinationEntity(157U);
    msg.type = 78U;
    msg.htime = 0.6475026086104594;
    msg.context.assign("JKUBKALJCWGGYLDQYSFPKTLKSWWLPCWXGFPTAJUNNVZGBXPVDVYXCSEOFYVMYTPWHUPTGODFBELMQEDPRSTOLNNQWWBVCIYHQMKATNMIYJZOZKEHZTMBGEODNYQKOIIHCQHTNAIZXBFPHCXIABUVTGERFXJVROQFHRROJKCGSDXDVREOT");
    msg.text.assign("HXLQDKTKRGMBSAONSN");

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
    msg.setTimeStamp(0.7345363027637065);
    msg.setSource(683U);
    msg.setSourceEntity(113U);
    msg.setDestination(64432U);
    msg.setDestinationEntity(74U);
    msg.command = 155U;
    msg.htime = 0.042884938007293316;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 153U;
    tmp_msg_0.htime = 0.04233024477788527;
    tmp_msg_0.context.assign("AHZSRJBHACZGCDCPVJLAVQZFADZBLXOTLMUNKCKIXRFU");
    tmp_msg_0.text.assign("NLNFTPSQPYLAGFCOIVOSDKUHZQEIIWGZSTGSJIJDKNBVAN");
    msg.msg.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.2067040369569333);
    msg.setSource(26997U);
    msg.setSourceEntity(71U);
    msg.setDestination(57479U);
    msg.setDestinationEntity(118U);
    msg.command = 199U;
    msg.htime = 0.5281623213031928;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 207U;
    tmp_msg_0.htime = 0.3517365577559698;
    tmp_msg_0.context.assign("FPNZEMMCXRHPRBDNEVADBASYSSSKWKBDUHJPPBWCYJKXSLCXTAEKYTKKIVENAIOQPUGSDTYUDOCXFBVNJFLDJILQYBGFPETTZDYEIOZEGOQRWZALJMNMOVDXLXGRJJWDHMPMQWRJZKSXNFEBVTULNIWHUHROCIWPWZXWCGUOLIGWQXKTYMAUMRBHHZHFEZQ");
    tmp_msg_0.text.assign("HFBTGNCGTFVUXWOVCOSXZKQKRSYUSQEFYBHQJJEVIMDINLPRUKYMORYCGARMEOXSGRLFBCMQNGTASPWC");
    msg.msg.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.15828764173059662);
    msg.setSource(18905U);
    msg.setSourceEntity(123U);
    msg.setDestination(34651U);
    msg.setDestinationEntity(175U);
    msg.command = 71U;
    msg.htime = 0.7083438348505964;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 7U;
    tmp_msg_0.htime = 0.5929133907856067;
    tmp_msg_0.context.assign("NOGVBUGUXZQXIUKOABESZCSXMBMOZLTVIOFQPMONKJQNBLGSRMGCOYMSLIZJEZJQACQHQV");
    tmp_msg_0.text.assign("SBNISIRJZRDMBXOUQXLPFJAWZZKFCHAOTXTCKHAIMWBOOJSGNYTHYOWLGZPMEV");
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
    msg.setTimeStamp(0.20245330188144406);
    msg.setSource(5351U);
    msg.setSourceEntity(216U);
    msg.setDestination(29065U);
    msg.setDestinationEntity(120U);
    msg.op = 208U;
    msg.file.assign("FALHUXVFQCOFSNMVJHGDKHAMAUNIJIDOWHNJENENBSRVGYYRXOEOM");

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
    msg.setTimeStamp(0.18251696161508968);
    msg.setSource(57125U);
    msg.setSourceEntity(51U);
    msg.setDestination(48114U);
    msg.setDestinationEntity(102U);
    msg.op = 204U;
    msg.file.assign("UHJUXKBINGZIVFGONDEFOEVTVHXEBWLHKLDMXOJSTUSAPPVMWORMOSGNYEBBIJRYERAWQVGG");

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
    msg.setTimeStamp(0.7835745344348205);
    msg.setSource(28811U);
    msg.setSourceEntity(65U);
    msg.setDestination(31326U);
    msg.setDestinationEntity(6U);
    msg.op = 3U;
    msg.file.assign("IPNWHXTQEJYFSDCHUPQARNAJANDYFDLOFSBKQCIIOPJBYSPNKSCRKYLGBWRMJGWXZYROYXUWGIJMDZJKLWVDVPNSFMHCZZFHQMCWSYPVOAUMZUIZANGKZRTADXHKWCQLTUXJJTAJAHOJTCC");

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
    msg.setTimeStamp(0.9424881298814655);
    msg.setSource(3933U);
    msg.setSourceEntity(212U);
    msg.setDestination(2190U);
    msg.setDestinationEntity(178U);
    msg.op = 152U;
    msg.clock = 0.4816821724759369;
    msg.tz = 70;

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
    msg.setTimeStamp(0.3220152211248173);
    msg.setSource(64523U);
    msg.setSourceEntity(191U);
    msg.setDestination(54789U);
    msg.setDestinationEntity(109U);
    msg.op = 46U;
    msg.clock = 0.6916820257854881;
    msg.tz = 1;

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
    msg.setTimeStamp(0.7898525389069732);
    msg.setSource(63864U);
    msg.setSourceEntity(200U);
    msg.setDestination(15905U);
    msg.setDestinationEntity(143U);
    msg.op = 78U;
    msg.clock = 0.11607756476568576;
    msg.tz = -41;

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
    msg.setTimeStamp(0.6881550924178537);
    msg.setSource(27217U);
    msg.setSourceEntity(197U);
    msg.setDestination(10228U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.8409325134254714);
    msg.setSource(43074U);
    msg.setSourceEntity(59U);
    msg.setDestination(2152U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.25887423783599717);
    msg.setSource(56108U);
    msg.setSourceEntity(77U);
    msg.setDestination(3106U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.46222814702143);
    msg.setSource(10175U);
    msg.setSourceEntity(177U);
    msg.setDestination(60277U);
    msg.setDestinationEntity(78U);
    msg.sys_name.assign("HFSJVRTPMDKULUJIMDRHUMZQIHBQYXSLNCWDQWIVRGPSVPEICNQLHGMOGFPKUOGATJEBFEWTEBPSLJCAPBFNDHJVVSSJDWYANUJLDTACDOUPCRYFOWMVIOXAKGMZ");
    msg.sys_type = 6U;
    msg.owner = 4032U;
    msg.lat = 0.20321487586051779;
    msg.lon = 0.06449350491349459;
    msg.height = 0.22244272343646343;
    msg.services.assign("LSAOJMNWCFHOGNJNG");

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
    msg.setTimeStamp(0.6462227332765048);
    msg.setSource(44099U);
    msg.setSourceEntity(94U);
    msg.setDestination(30749U);
    msg.setDestinationEntity(93U);
    msg.sys_name.assign("EGKLOXUIHMXUGVLUCIEZAXDJCTNTJJFJMCCPRDJVNRROEZBRUAPDICGYOIZKSPZPBGWKGDKQCWDVIHXHBGRMIQUDZ");
    msg.sys_type = 222U;
    msg.owner = 25043U;
    msg.lat = 0.5201059938307869;
    msg.lon = 0.9491496164068638;
    msg.height = 0.5238348259451819;
    msg.services.assign("DGBPOTWFPOGJORNWYGGXNTI");

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
    msg.setTimeStamp(0.1811823462901645);
    msg.setSource(35505U);
    msg.setSourceEntity(114U);
    msg.setDestination(2189U);
    msg.setDestinationEntity(243U);
    msg.sys_name.assign("PXZXGUUNTYSEVODOHJVSDKUIRWZWCDURSWYIVMHNBGWGWZUKLNKTBLQQOYPZCXPBAZHCENSYPRKQQRHRBGRHLIHROJKXLCMUXFFBZRYQDOIDAXLQKBLIMBTTOETTKPCXAEAOXPQIXMSGYGNICLGIEMCJXK");
    msg.sys_type = 140U;
    msg.owner = 56364U;
    msg.lat = 0.28972469086753305;
    msg.lon = 0.049502961778910115;
    msg.height = 0.883865451234866;
    msg.services.assign("HZAKMKUKIERNDHFULAKYJPOZXVSPUNMLVGDUIETVIIPCMEWOFADLCBOMOTCQCNVNXCDMGNBUZTRDYJEJZKQPSGKUQEZAAITOYQSMNTSSFFWGLBWMHWUBFZRJZNGTLIX");

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
    msg.setTimeStamp(0.5899010713419013);
    msg.setSource(31611U);
    msg.setSourceEntity(208U);
    msg.setDestination(24063U);
    msg.setDestinationEntity(15U);
    msg.service.assign("CDBDIQSYXSEIEORBFAAJLPEIBOWTCKXMKSNQSZFNZAAFLLHVDBEMMOVSNEDXKDQGJBURIGSHRBSGJHDWRWUPNPSAZRQNNVYFOFORZUEQKKTCAQIWWWCKAJFOCKWUNLGXGPVLQKVFXATEYBMYPHITIYGUGVOEYBLCXDJFMLNLGPSETXMXNQRDDQHAJZZTRCR");
    msg.service_type = 5U;

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
    msg.setTimeStamp(0.2937308259441993);
    msg.setSource(13237U);
    msg.setSourceEntity(208U);
    msg.setDestination(50575U);
    msg.setDestinationEntity(27U);
    msg.service.assign("OESCDCHLXYVPRZKILMJNPVVTIVMKGUGNSABRUURHPHLSRHPPWXBCADJOYMO");
    msg.service_type = 20U;

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
    msg.setTimeStamp(0.8326994460724514);
    msg.setSource(50706U);
    msg.setSourceEntity(75U);
    msg.setDestination(46353U);
    msg.setDestinationEntity(36U);
    msg.service.assign("ZNMXVDJGXSRYPPSXRTGDAJSEBQGAQCHQJDDEQQBNOEBBLWIPUMKKFIAGJFGPSLXHOYEGRRAWNUVVTZZRXKNIYRMUIWUJYPTOQAFHLBZZCMKVAOFYWMIHJVCUPYYHCMPKHEHMWCZMGHPJFCOQDJRUVHZCSSCLDFUUNLXNTWKPOENISNBICDGTRNZPTTVTTXIWQAL");
    msg.service_type = 233U;

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
    msg.setTimeStamp(0.659246068910249);
    msg.setSource(16242U);
    msg.setSourceEntity(155U);
    msg.setDestination(3410U);
    msg.setDestinationEntity(105U);
    msg.value = 0.672744180922336;

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
    msg.setTimeStamp(0.6151574461289409);
    msg.setSource(48723U);
    msg.setSourceEntity(127U);
    msg.setDestination(45144U);
    msg.setDestinationEntity(179U);
    msg.value = 0.8008977370912365;

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
    msg.setTimeStamp(0.3751471383918197);
    msg.setSource(7647U);
    msg.setSourceEntity(26U);
    msg.setDestination(12260U);
    msg.setDestinationEntity(126U);
    msg.value = 0.036818301893690064;

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
    msg.setTimeStamp(0.7016732245831935);
    msg.setSource(20602U);
    msg.setSourceEntity(141U);
    msg.setDestination(22857U);
    msg.setDestinationEntity(26U);
    msg.value = 0.9750498238902741;

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
    msg.setTimeStamp(0.5825920707798163);
    msg.setSource(30723U);
    msg.setSourceEntity(128U);
    msg.setDestination(1103U);
    msg.setDestinationEntity(129U);
    msg.value = 0.8994417485837668;

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
    msg.setTimeStamp(0.22156523761211433);
    msg.setSource(48359U);
    msg.setSourceEntity(192U);
    msg.setDestination(41738U);
    msg.setDestinationEntity(246U);
    msg.value = 0.4450668033500329;

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
    msg.setTimeStamp(0.03675171823377954);
    msg.setSource(20223U);
    msg.setSourceEntity(108U);
    msg.setDestination(33089U);
    msg.setDestinationEntity(229U);
    msg.value = 0.3355399958747757;

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
    msg.setTimeStamp(0.9033926684331275);
    msg.setSource(64663U);
    msg.setSourceEntity(163U);
    msg.setDestination(5284U);
    msg.setDestinationEntity(43U);
    msg.value = 0.6196342543039999;

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
    msg.setTimeStamp(0.15573392657222218);
    msg.setSource(11244U);
    msg.setSourceEntity(192U);
    msg.setDestination(35271U);
    msg.setDestinationEntity(170U);
    msg.value = 0.08227379352999564;

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
    msg.setTimeStamp(0.9003116249761345);
    msg.setSource(51298U);
    msg.setSourceEntity(143U);
    msg.setDestination(350U);
    msg.setDestinationEntity(75U);
    msg.number.assign("BKJROVQXMYDPASQREXPZDDCQWSWSVWUQNFFBOGQKRLMZORGVJPTDR");
    msg.timeout = 32545U;
    msg.contents.assign("DTWPTTRHJSDXQBBTUVHJCVCGPFXVIWQDKLWIPTZNFGXZCUXAISPUQQPNYMQCDAMLSD");

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
    msg.setTimeStamp(0.7971072344121102);
    msg.setSource(8383U);
    msg.setSourceEntity(33U);
    msg.setDestination(43562U);
    msg.setDestinationEntity(143U);
    msg.number.assign("SVBBIXAOMGXCFTFEQOKABDZJSZUGGTSUQNPGHCEUQHTHCGYUPSODBOWJETCPCLRBVJCEFDTZWGHWZKIE");
    msg.timeout = 42890U;
    msg.contents.assign("CJOGKPPXNZXEHMVUOLBODYNNJZOARTUYMAYREOWOUEAVNXDIAIDXATAUTCGMGYZKSHHSPZIHVFYLYEJTKDQSTXURWK");

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
    msg.setTimeStamp(0.2349004911675776);
    msg.setSource(34974U);
    msg.setSourceEntity(31U);
    msg.setDestination(59082U);
    msg.setDestinationEntity(142U);
    msg.number.assign("XMKYEHTALUOIEXECAULZQBSMBDVROIXMWPQGPJOOKWKYQGDVJBUWRZWWXVOYUFSXYPOQQHRNPBVXELZUWLEUSLTSMMUHFMCORCCHVTKTYSKZCIIEDSBJHIYSPGQFGGKIWIWZGDBMFCHHGQACLALQKLELAZTIPVXSZCVRDRNYXVJGJDLNBPVTJOFDFHCANDERWTZKUCMRTNMNJSYAKMFHXTXSGEKHRABNFABNYFIQQBUPYFJT");
    msg.timeout = 7832U;
    msg.contents.assign("LDLVHOHZJZOAOPLLVSILQQOZVEPTOFCTFKUPRPXQJAVNJDUNDMKLIJYGNXBSFINMIXBBCJSNFCCZHNXLSUNCDDSENOEJDUJVHUZVQJTPAPAZMXTKRKPRNDWAEPCYZFAEBZB");

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
    msg.setTimeStamp(0.6946917400030631);
    msg.setSource(1872U);
    msg.setSourceEntity(242U);
    msg.setDestination(30651U);
    msg.setDestinationEntity(113U);
    msg.seq = 1342159116U;
    msg.destination.assign("LJIAATHDWICFUEJVXBTOJXFZUNDCVDVPOETKBZNVBBHHWLJWYSWKTDLAGGYXBFYZCMPZQOKQNOEVWTNCHTISTWPZCAVBEHPJXYUROMAXMKZYXDQEXVWUSGSUUQMYBNXRGSDLJOEFICRBGDCPNZCQXWMLQBTWPEJIROKSRKGHFJHVLMDCRQPMLJQUCUKLGGIDMQRGWKIYYVE");
    msg.timeout = 38046U;
    const char tmp_msg_0[] = {-112, 99, 13, -118, 103, -64, 70, -9, 96, 38, -29, 81, -52, -27, 19, -116, -57, 34, -119, 23, -88, -80, -85, 25, -39, 50, 65, -70, 108, 15, 57, -4, 16, -26, 100, 41, 95, -36, 28, 83, 39, -116, -27, 100, -78, -49, 114, 81, -99, -44, 39, -59, 5, 117, -17, 62, 108, 51, 45, 6, -19, 117, 15, 96, -47, 116, 31, 26, 7, -34, -16, 11, -111, 29, 99, -101, -104, 26, 100, -62, -116, -46, -48, 109, 107, 4, -10, 98, -70, 43, 86, -89, -21, 40, -59, 56, -82, 5, -22, -15, -118, -11, -115, -13, -16, -52, 30, -58, -111, -81, 18, -120, -58, -63, 108, -115, 124, 16, 36, -89, 118, 40, -16, 113, 112, 121, -73, -45, 97, 102, -87, 91, -106, -42, -64, -115};
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
    msg.setTimeStamp(0.09899906030517858);
    msg.setSource(43924U);
    msg.setSourceEntity(240U);
    msg.setDestination(40142U);
    msg.setDestinationEntity(158U);
    msg.seq = 2081222668U;
    msg.destination.assign("MLMSXYAVSDHJFJNJUDVDIIXIIXKMDAVWXBTWEOBPNTYVY");
    msg.timeout = 50272U;
    const char tmp_msg_0[] = {36, 91, -11, -76, -95, -74, 7, 7, 46, 89, 23, -46, 47, -60, 4, 52, 66, 70, -53, 117, -16, 107, 88, -95, -70, 125, -8, -38, 5, -23, -95, -128, -48, -35, -40, 12, -105, 125, 76, -18, 47, -108, -9, 29, -88, -118, 97, 69, -113, 83, 116, 29, -65, -122, -1, -49, -127, -41, -50, 24, -73, 42, 25, 58, -22, 79, 19, 14, -23, 62, 86, -89, -51, 29, 92, 100, -112, -102, 124, -77, -49, -87, 9, -93, 87, -39, -66, -78, 44, -51, -84, -32, -10, 35, 103, -47, 121, -63, 78, -11, 22, 98, -38, 41, 84, -118, -60, 99, 64, -62, -84, 3, 121, 34, 54, -10, -49, 13};
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
    msg.setTimeStamp(0.3102102718323);
    msg.setSource(24315U);
    msg.setSourceEntity(49U);
    msg.setDestination(185U);
    msg.setDestinationEntity(183U);
    msg.seq = 766952056U;
    msg.destination.assign("ZVFEMDODTEZHYXKAJODBR");
    msg.timeout = 7179U;
    const char tmp_msg_0[] = {-55, 76, -120, -76, -118, 33, 21, 82, 105, -10, 67, -49, -97, -86, 74, 45, 89, 115, -48, -31, -25, 69, 6, -68, 1, -126, 112, -100, 43, -109, 27, -76, 70, 88, -125, -13, 42, -62, 15, -84, 103, 64, 0, 81, -74, 23, 51, -93, 13, -70, 17};
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
    msg.setTimeStamp(0.9940358030889245);
    msg.setSource(58318U);
    msg.setSourceEntity(211U);
    msg.setDestination(23579U);
    msg.setDestinationEntity(90U);
    msg.source.assign("VJKXQTWZTQBIWUEETTGVOSVWNNPWIYQFEWLMFHGBLGZPMLTVEULFHKJHJAJPSKCINDGHCF");
    const char tmp_msg_0[] = {-15, 125, -62, 117, -72, 112, -83, -11, -93, -118, 37, -62, -66, -59, 71, 30, -106, -13, -7, -93, 68, 63, -40, -46, 64, 23, -96, 103, 10, 21, 91, 5, -14, -71, -40, 63, -111, -1, -77, 34, -2, -34, 14, 44, -84, 102, -68, 23, -74, -106, 16, 37, -115, -66, -18, 113, -20, 121, 36, 77, -39, -114, 24, 6, -84, 93, 75, 89, -39, -31, -86, -8, -84, 50, 98, -111, 3, 97, -15, -93, 56, -69, 109, -72, -113, -81, 53, -46, 23, -24, 19, 72, -60, -11, 52, 80, -109, -79, -79, 23, -9, 80, -105, -16, 118, 36, -33, -41, -72, -108, -127, -53, -111, -30, -80, -20, -1, 99, 114, -53, -102, -40, -119, 109, 64, -28, -9, -53, -121};
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
    msg.setTimeStamp(0.49653985440302517);
    msg.setSource(40608U);
    msg.setSourceEntity(96U);
    msg.setDestination(53105U);
    msg.setDestinationEntity(208U);
    msg.source.assign("ETNTUWWICHNYOKYZVFXZLJIUOSSYEXMYNXVTNSHXLEQYTBGZQBNCBQDJIEPUZYEWREXDCKPGVAVNLQEQRGWTDDRKZPUDLIMTNIGEIFHGFOJUBJMIXUSABO");
    const char tmp_msg_0[] = {-70, 67, -76, -27, -33, -76, -127, 75, -43, -41, 46, 98, -48, -73, -41, -28, 66, -43, 80, -102, -115, 61, -100, 95, -114, 50, 70, 73, -122, 42, 105, 29, 104, 26, 23, -48, 47, 103, -100, -88, -73, 91, 101, -69, 100, 3, 67, 117, -124, 107, 2, 31, -119, -118, -49, -97, -59, -76, 43, 31, -43, 17, 84, -79, 11, 123, -40, -89, -66, -119, -100, 117, 110, 90, 4, -45, 35, 30, -93, 56, 90, 9, -95, 9, -98, -17, 29, 50, 18, -91, -94, 18, -111, 73, -97, 31, -65, -112, -11, -38, -33, 93, -81, 70, -44, 28, 2, -75, 49, -58, -88, 87, -70, 9, 123, 13, -70, -100, -27, -51, 85, 100, -73, -38, 89, 13, 95, -100, -45, -109, 22, -86, 58, 123, 30, 16, -11, -122, 22, -25, 44, 45, -95, 15, 64, 42, 81, 67, -24, -56, -6, -116, 32, -82};
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
    msg.setTimeStamp(0.9756988174111187);
    msg.setSource(9657U);
    msg.setSourceEntity(231U);
    msg.setDestination(62308U);
    msg.setDestinationEntity(222U);
    msg.source.assign("LQGYSCOEOGHUQZUJZAUVUJLBMWPYVLWOHTMXCNXRPEFELRRDUYFJYLPUOPPWQNLCERRAPXSBOYHXSDOTMAVZAXMHVGUTFFGZDBDNIWBSPMAJIJZAILFGBDZVNZXRCXVNHCGKHLIJYAJRVPINCUTYHVEQQXUSOCFWKKGIKGRDTGQYBPTDESQCWBAKAPTEFVTEBQCDJFZJEWMHXWWQOMRXKIKIRHSTBODKUOSNYZNDZMJGABLQLKSTEKMNNVIIH");
    const char tmp_msg_0[] = {-32, 42, -58, -107, 115, 48, 93, -4, -38, 20, 115, 70, 63, 126, 118, 119};
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
    msg.setTimeStamp(0.42302796951922994);
    msg.setSource(56178U);
    msg.setSourceEntity(199U);
    msg.setDestination(15959U);
    msg.setDestinationEntity(245U);
    msg.seq = 1185220497U;
    msg.state = 1U;
    msg.error.assign("VBGNJKYVYEWCAAOMVWCMLZBSSPCSSQZPPSUGCFTNHHWODRQLRWWIPNMBKTVLEGEQUJIVUPCGWFABDRBHDYPPFTZBSGXKSMMFOBWQMOAJRMOSWKXIL");

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
    msg.setTimeStamp(0.3220615239967508);
    msg.setSource(12251U);
    msg.setSourceEntity(80U);
    msg.setDestination(57260U);
    msg.setDestinationEntity(252U);
    msg.seq = 924479277U;
    msg.state = 136U;
    msg.error.assign("JEOMLASTFPHNHDJVLFHKRCRDTANV");

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
    msg.setTimeStamp(0.5828604008276946);
    msg.setSource(12882U);
    msg.setSourceEntity(93U);
    msg.setDestination(41876U);
    msg.setDestinationEntity(53U);
    msg.seq = 107880322U;
    msg.state = 78U;
    msg.error.assign("ELRWBOJXYDQNDHIGOGIAYROFWXLMVCVRHICAVLLMEERBEOSUWAOLDPEVEUPWSKLENGZWHUJPATYMFEZJLXANPKSGDQDYHJQZYMGMLWFHTQCFSCOUQOCRIZTOAHJUKVSVJSLZBFKDFUBKJDBYBSMBHMXKXJNPCQDXGLUGRVZORXEDFAECZYNNMRBXXIHKAPSKVYPKIZQTZNGURITI");

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
    msg.setTimeStamp(0.040031552939082005);
    msg.setSource(29910U);
    msg.setSourceEntity(252U);
    msg.setDestination(26336U);
    msg.setDestinationEntity(149U);
    msg.origin.assign("CWMDLQRIPUFZYGFEBGHLMPAPQOKJQCVPVSQKXMSMWUYPBUKHBJBRRAXOFLNICACVJJTMDWVUAIVROXTORBHXTPRLXJNTGEWNYAMHHVXYEDQSYGHVNKXVKLUDUMEDAJCMSIBXCQEBPFSENPTQWYEREZLSAXTVOWHOYHNOZJBQ");
    msg.text.assign("CHLLDSUDKYWSEGLOESINTAKPWCDRVANMMQANVHALLYJFCUVGTJCWJXKIKFMEAKXBEMBOJTIZSYZUPRPZXMDOPQYYJZTLYCWMSIBIXOQWIFHGWQKCDSQUIUCUNVRVGNLQEOU");

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
    msg.setTimeStamp(0.011772122814916353);
    msg.setSource(63104U);
    msg.setSourceEntity(22U);
    msg.setDestination(25276U);
    msg.setDestinationEntity(62U);
    msg.origin.assign("UQZXJNREZGNOWKOKGCMADWDFSXCEVACIATFJWHVSOCRKUZGVBGPSWBSUIBMHMAOACXPTZYUFBET");
    msg.text.assign("LWMTCDQORFQTLXDSGUDLPEN");

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
    msg.setTimeStamp(0.23263478306410101);
    msg.setSource(49681U);
    msg.setSourceEntity(37U);
    msg.setDestination(2052U);
    msg.setDestinationEntity(173U);
    msg.origin.assign("GWXSOSVRUOBNHEULDEYAVCLD");
    msg.text.assign("TEZIQGIVNLYKSZHEFNLCUJWWCTLMWDSOZHQHBOMYGVIAJXLERBIYRKAPOTGMBUJNVBXOLNPEBWKQYJAOQYVMRMLDXAQOZSIRVLYVGMCCQDUIHDXXWNBPQGHXEDJKGHNLAOAZOFZJWUTRUXEYKGSYGPCLSTLAKPZNNZVMHCPJKBDBVUJIF");

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
    msg.setTimeStamp(0.3130325302531476);
    msg.setSource(25017U);
    msg.setSourceEntity(128U);
    msg.setDestination(24442U);
    msg.setDestinationEntity(47U);
    msg.origin.assign("DSFBXVHRTIMJJOQSZBEAQJSTECJAFNJRCIXMMAZHMLBJZJVCEKMDAABXNECUGYWQXOYQHKOMHPFKZOQZWUVLCPEIXNGM");
    msg.htime = 0.8205808507680055;
    msg.lat = 0.922666563007994;
    msg.lon = 0.9165160931350222;
    const char tmp_msg_0[] = {-21, -7, -20, -49, 61, -103, 108, 21, -78, -9, 113, -40, -70, -52, -75, -34, 83, -19, 93, 63, 59, 62, 89, -25, 71, -99, 96, 25, 125, -17, 119, -33, -71, -104, -125, 111, -77, 75, 11, -80, 72, -26, 43, -105, 98, 72, 115, 93, -107, -83, 94, -111, 102, 17, -55, -119, -46, 111, -119, 11, 25, 21, -67, -96, -34, 6, -125, -80, 126, 88, 46, -111, 125, 25, -28, -55, -17, 117, -122, -109, -124, -96, 112, 62, 42, 44, -10, -38, -22, -112, -7, 90, 106, -108, 28, 114, 54, 33, -14, 4, 97, 68, -30, 109, 39, -43, 111, -56, 123, 42, 64, 116, -103, -51, 83, -34, -81, -50, 32, -124, -82, -120, -6, -84, 22, -20, 51, -68, -3, 30, 28, -11, -25, -71, -127, 38, -113, -95, -51, 7, -28, 36, 87, -16, 37, -78, -11, -84, 115, -54, 72, -58, -21, -72, -62, 99, -119, -66, 94, 74, 63, 64, -99, 57, 42, 101, -68, 116, -121, 89, -55, 28, 93, -8, 124, 99, -21, -43, 67, -14, 19, -51, 20, -92, -106, -25, -70, 73, 86, 12, -102, 86, 41, 20, -48, -99, 63, 88, 84, 49, 56, -112, -127, -95, -4, -96, 117, 33, -30, 114, 17, -120, -56, -90, -60, -93, -19, 74, -52, 114, -13, 71, 70, 43, -103, 100, 29, -3, 45, -39, -111, 59, -94, -77, 118, -88, 108, 26, 38, -99};
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
    msg.setTimeStamp(0.795211343332993);
    msg.setSource(55982U);
    msg.setSourceEntity(154U);
    msg.setDestination(56609U);
    msg.setDestinationEntity(134U);
    msg.origin.assign("KJPCQBKBQFA");
    msg.htime = 0.021967394247699112;
    msg.lat = 0.272664433301651;
    msg.lon = 0.05779185467296122;
    const char tmp_msg_0[] = {-77, -121, -46, -90, -31, 24, 82, -21, 44, -114, 50, 18, 118, 69, -37, -48, -43, -67, -101, 52, 9, 38, -2, -82, -80, -23, 89, 112, 33, -71, -90, 88, 0, 126, -103, -71, 87, 46, -70, 7, -65, 126, -109, 108, 70, 117, -44, -73, -47, 27, -48, -107, -123, 97, 4, -90, -86, -15, 59, -64, -81, 4, 40, -65, -65};
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
    msg.setTimeStamp(0.9150953905719265);
    msg.setSource(29351U);
    msg.setSourceEntity(252U);
    msg.setDestination(37783U);
    msg.setDestinationEntity(132U);
    msg.origin.assign("UDPCTNHMFTJRADXINHSZXGDXXILHKCNVUXBDKXHFIHTDQBEGVYMNIMBMBSPESQDASWPUPNXQNSTXQYIJKKABGBMUVRVJ");
    msg.htime = 0.14763891985664124;
    msg.lat = 0.49552547332433294;
    msg.lon = 0.8826762056477377;
    const char tmp_msg_0[] = {-54, 22, 103, -87, 25, 76, -48, -103, 0, -127, -12, -8, -88, 112, 89, -79, 78, -108, -115, -91, 74, 41, -53, 75, -105, -83, -21, -102, 125, 121, -92, -27, -118, 31, -68, -29, -81, -32, 85, 101, 14, -27, -94, -108, -43, -106, -81, -112, -47, 104, 43, -8, -67, -66, -110, -97, -63, -78, -67, 14, -58, 83, -74, -101, -64, -52, 54, 26, -93, 100, -115, -101, -108, 3, 10, 11, -25, 75, 43, -106, -33, 91, 69, 83, 84, -16, -71, 17, -89, -18, -85, 42, 85, -89, -101, -104, -105, 60, -37, -109, -40, -39, -48, 33, 13, 101, 4, -47, -20, -92, -25, -105, -101, 27, -75, -97, -26, 64, 62, -106, 4, 14, -106, 83, -108, 58, 12, 124, -110, 67, -62, 59, 25, 1, 19, -105, 114, -86, -10, 54, -18, 82, 70, 29, 34, -108, -69, 93, 13, 60, 40, -37, 49, 113, 99, 6, 22, -104, -98, 126, 114, -55, -117, -37, 27, 46, -98, -90, -40, -86, 70, 117, 74, -68, -76, -41, 50, -106, -76, 119, 42, -51, 73, 30, 56, 53, -107, 102, -96, -73, -52, -32, -11, -22, -2, -103, 65, -47, -39, 0, -121, -105, -15, 110, -85, -110, -92, -4, -62, -11, 111, -26, 33, 15, 94, 109, -92, 68, -12, -95, -85, -57, 11, 10, 80, -110, 7, 116, -25, -110, 102, -109, -39, 100, -18, 11, 120, -67, -70, -115, 2, -114, -27, -14, -15, -92, -1, -98, 47};
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
    msg.setTimeStamp(0.5550961226447444);
    msg.setSource(9900U);
    msg.setSourceEntity(140U);
    msg.setDestination(45854U);
    msg.setDestinationEntity(198U);
    msg.req_id = 24138U;
    msg.ttl = 29591U;
    msg.destination.assign("JLNPAZCQCIPUXJIENPYJTRVFICKNFFQOSBHFRMLJEMOXEZAURQHTTZCNQAPAPQZBVIVPYKEMBWSKSZAAADOTQW");
    const char tmp_msg_0[] = {82, -118, 112, 48, -9, 40, 65, 74, 37, 78, 38, 122, -111, -49, -13, 14, 88, 90, 36, 36, -45, 113, 48, -48, 90, -5, 104, -127, -2, -88, 125, 15, -50, 70, -96, -8, -7, -53, 58, -127, 86, 55, 20, 96, -86, -72, 59, -103, 38, 123, -81, 126, -27, -91, 89, -29, 34, -28, -55, -37, -109, 33, 1, -59, -37, 26, 38, 40, -69, 26, 36, 33, 84, 107, -127, 29, -3, 84, -51, 107, -22, -83, -51, -41, 98, 85, 112, -60, 106, 99, 36, -84, -58, -117, -100, -28, -23, 110, -31, -67, 29, 6, -25, 120, 25};
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
    msg.setTimeStamp(0.696746268824259);
    msg.setSource(29757U);
    msg.setSourceEntity(224U);
    msg.setDestination(63951U);
    msg.setDestinationEntity(95U);
    msg.req_id = 24795U;
    msg.ttl = 26716U;
    msg.destination.assign("TTTJAJDAOCYXZGFUDOBXRIQWXLGINPHXGNKWOSJEHZFGPMLRPSKFJMFDCSDSJUBXHNEWMSRKQISKAFQLNBQBGVWGVYPKBWNLQXDMPFZWNJOMIYSEOTVXSDRADRLOYA");
    const char tmp_msg_0[] = {102, 30, -23, 77, -8, 23, -79, -53, -119, 40, -88, 16, -105, -81, 1, -31, -125, -11, -92, -84, -65, 4, 9, 91, 60, -38, 23, 46, -115, -64, 25, 46, -88, -73, 70, 46, 3, -63, 27, -92, -42, 103, 91, -64, 40, 88, 55, 31, 60, 67, 89, -24, -98, 54, -15, -96, 58, 80, 121, 67, 16, 53, 76, 99, 108, 80, -104, -115, 54, 108, 84, -124, 6, 8, -40, 27, -50, -41, -44, -95, 123, 56, -40, -32, 74, 90, -15, -113, 90, -59, 2, 83, 0, -10, -53, -78, -6, -30, 123, 5, 31, 88, -71, -109, 32, 121, 11, -126, -41, 44, 114, 77, 72, -84, -108, -104, 44, -79, -40, 65, -56, -115, -63, -69, 56, 116, 29, -94, 7, 69, 8, -79, 88};
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
    msg.setTimeStamp(0.4886893623023548);
    msg.setSource(22926U);
    msg.setSourceEntity(147U);
    msg.setDestination(20298U);
    msg.setDestinationEntity(13U);
    msg.req_id = 32914U;
    msg.ttl = 24240U;
    msg.destination.assign("GHKVHISLHYIYSXQODWNBAYWVNOZPLBLBKTLJEGFFNMYGIULSXTYKFIDZRTMETSUXJOVJYLKRWCRIQKJCVSDSDBDYXLMOBNGWFUPWHACUGJCBYZCGZOOPAHMBCZCEMEEASXERGSQQGMWRNWPUXKEBFDMWIRQUPXDJZVNUWAKILMLAQVWCGEZTFAVPDNFKIJDNQTQJ");
    const char tmp_msg_0[] = {11, -4, -31, -10, 73, -58, 99, -41, -31, 86, -91, 72, -38};
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
    msg.setTimeStamp(0.44113067909497194);
    msg.setSource(48172U);
    msg.setSourceEntity(42U);
    msg.setDestination(21636U);
    msg.setDestinationEntity(50U);
    msg.req_id = 45223U;
    msg.status = 177U;
    msg.text.assign("GHAKULTYFWSZARMGDKJRMEMFUZJDSHWQGBSQIPOLDBOZCTNRXXJGXZPKEJMNONCLEYWCFZKFLBIW");

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
    msg.setTimeStamp(0.18626148512609264);
    msg.setSource(19449U);
    msg.setSourceEntity(47U);
    msg.setDestination(5596U);
    msg.setDestinationEntity(67U);
    msg.req_id = 50937U;
    msg.status = 32U;
    msg.text.assign("LARAGDADTFIXWCLFHMKSRDJHUEYVDNYNSGZHTHOTNULURLULNOLPSTKRPDCVGGIITVVFGZQSKWANYFASCOMBQDZITFZNAJUOJZQEIEYFQYECFUMBPXKWAEOIEFZPSBKQJWSQJILVJYBEGQYCKSPIZCQZHWTG");

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
    msg.setTimeStamp(0.8771688472409553);
    msg.setSource(37736U);
    msg.setSourceEntity(72U);
    msg.setDestination(5230U);
    msg.setDestinationEntity(204U);
    msg.req_id = 26818U;
    msg.status = 172U;
    msg.text.assign("GEZGRAINWHZAQNVMEOXIADUYKBQFOOLCRWCRAPIFHXYSVHCGUUDMDFFPWUJBFJMNSXEASHMYPJQUTXBCXJSPJNMYSDXGRVGOTJANKULYMFKEGZRGRSKHGESWCTFYOPCWHZHLHDTJYBUNIIPBXIQEOOEKPSXWZITOBQHKZNZTRTMQCJ");

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
    msg.setTimeStamp(0.7994074123577781);
    msg.setSource(50092U);
    msg.setSourceEntity(237U);
    msg.setDestination(24040U);
    msg.setDestinationEntity(22U);
    msg.group_name.assign("IHMXWVGPGCORBPDUNXZNTPFENSYNUVRTYGEDHGRPQUYAECTWBACBKSJYSYADCMTSAMIQYTHDTVPEOWOEZVROGHUARXRLMNBRMFOJGHCKWQVZHWPAJWODIVHJJTBBZOAEIZUKABPCFKLKDFMBJNYYLSIHNUSAVEZWXKPPOJAXIXRFSZCCGGEOTIXL");
    msg.links = 556646259U;

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
    msg.setTimeStamp(0.08856098539256263);
    msg.setSource(41314U);
    msg.setSourceEntity(26U);
    msg.setDestination(10972U);
    msg.setDestinationEntity(95U);
    msg.group_name.assign("ZXPSBGUHJTCACJLTMYNNIBIXRQJHJYFYDEDAXNPMTIPJGBVHABMSQCURYCOSVVVOSNJUHOHXAEAAQUUHHELZOKWCPOEKOKIRVQFVKZJYWSOWXGTFWKIMGLCREYXZNFTDAJHMOEVCMTLGNPQEIDUXANUBSMRLWSIKDVBQFNIRZKLDZSOMGBHTCEBV");
    msg.links = 3444343295U;

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
    msg.setTimeStamp(0.060900278776977124);
    msg.setSource(54697U);
    msg.setSourceEntity(159U);
    msg.setDestination(17198U);
    msg.setDestinationEntity(94U);
    msg.group_name.assign("WRABOARTFKFXWBMGCDGGHNWOECSZPFLARMQPWEOQPPZLTXYYFFHNIOLIFHHDTTLNOMAXYKUVHMDTNAQGBGGYBUNKNBLEJVJLJLVKZCPPNMXPRJLUFUFXUVNQSXYHKVZZVSWCQOWJJMRSADIBTNYDJHCZVOKSSSPLARM");
    msg.links = 4110927737U;

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
    msg.setTimeStamp(0.8150999484430511);
    msg.setSource(59281U);
    msg.setSourceEntity(19U);
    msg.setDestination(53714U);
    msg.setDestinationEntity(25U);
    msg.groupname.assign("XOZWXMUKYOFQBPDORWAUFNRPCTTNJVKRJCXVKIWFICCDLYASXOOYIZIBEMXMYGVQZJZENDAQWXUMMBHNL");
    msg.action = 9U;
    msg.grouplist.assign("XMCFWEVBNVKOAHWEBGWOWSDVQJJZDPQDNKKKIXXFQQJICZGSYFEYDMAKVRHITEXXBYTWPYMQSFGZNAHTWRBU");

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
    msg.setTimeStamp(0.20332792952270462);
    msg.setSource(51662U);
    msg.setSourceEntity(10U);
    msg.setDestination(9752U);
    msg.setDestinationEntity(145U);
    msg.groupname.assign("SKFNYCEXZGPCKVRYQAVOBFHWILVBGEKQPLRARBLMXHMLQAOXNBFHWILEEDMAYYGGJUYKCAJFXNAPDOPUKJJZHZQGJFCQIDWBFLOQCKNIUNZXJBBEHNVWTUPJYWVZFWYSQOLRCXITORKUZPEDVZXG");
    msg.action = 91U;
    msg.grouplist.assign("WQMELFJEIXPYMCWJCCSFCDTRYRGAZVXDASVCXQVKCBOIFSYVGDKKZGQBEANBUZGKGHPQKFOWAQFMEQWZVWTRVBEMVPIOSYEOZYOUUGJURPBVWQDZTNCJLMHBMOPSMETJHMMJZSLNDGFOHSXEQIKJFIHHDXVNTPTLAFKRQNRLAPNXYPUSRZIFWDXBDLIJYLPBGGURCTRIKJYAXNLUWDHGIXTKUOWLHBKNTJNROMZATF");

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
    msg.setTimeStamp(0.5269724518975887);
    msg.setSource(42260U);
    msg.setSourceEntity(130U);
    msg.setDestination(21629U);
    msg.setDestinationEntity(72U);
    msg.groupname.assign("MKTHJVOLYAXLIGSCTMFEWYQYTXSRNNFWQBOARPBDYMBIPZAVGPGOYNHQUCBEKVOCTKIQFEDBVFJICVHORIZFUYQEKJGALDPWMLESOCJXGBNJWG");
    msg.action = 204U;
    msg.grouplist.assign("VXSOTECWXBLFDJDVASMBXSMPNUYAYRBGBQVBXOLVDMCMWSOJSYAZHKHXYTMWPQABCLXTONMLFWZJVDAUCNHFNJERNCKUOSRLYGJSEIOROGFNFSKJTKKDTZSEJGCGPHLTFVDQUTEKMHQXKIOAATZDLYQDMZSRRQPRHAPUUEVWZAJLIQCKPVBDMVWUY");

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
    msg.setTimeStamp(0.29785661518822615);
    msg.setSource(28185U);
    msg.setSourceEntity(225U);
    msg.setDestination(34919U);
    msg.setDestinationEntity(29U);
    msg.id = 169U;
    msg.range = 0.3573213377200751;

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
    msg.setTimeStamp(0.8774560667954417);
    msg.setSource(57256U);
    msg.setSourceEntity(199U);
    msg.setDestination(33470U);
    msg.setDestinationEntity(181U);
    msg.id = 127U;
    msg.range = 0.6825406274817046;

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
    msg.setTimeStamp(0.05160948209588678);
    msg.setSource(60765U);
    msg.setSourceEntity(203U);
    msg.setDestination(33218U);
    msg.setDestinationEntity(39U);
    msg.id = 194U;
    msg.range = 0.8874208254275312;

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
    msg.setTimeStamp(0.8341505913534646);
    msg.setSource(60577U);
    msg.setSourceEntity(242U);
    msg.setDestination(32576U);
    msg.setDestinationEntity(31U);
    msg.beacon.assign("BBAAQCHGFEAGYTOKDIISOA");
    msg.lat = 0.011924787761723787;
    msg.lon = 0.47747440258872986;
    msg.depth = 0.41679009547825185;
    msg.query_channel = 72U;
    msg.reply_channel = 58U;
    msg.transponder_delay = 123U;

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
    msg.setTimeStamp(0.6379736877793653);
    msg.setSource(43316U);
    msg.setSourceEntity(112U);
    msg.setDestination(12618U);
    msg.setDestinationEntity(11U);
    msg.beacon.assign("SIYSWOWMLAZALLRFLVKATXIKNCOGFZAKUNTUSIRDOQE");
    msg.lat = 0.03302846430833306;
    msg.lon = 0.3710654477759917;
    msg.depth = 0.5330174757934709;
    msg.query_channel = 213U;
    msg.reply_channel = 240U;
    msg.transponder_delay = 26U;

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
    msg.setTimeStamp(0.022467243201075404);
    msg.setSource(52640U);
    msg.setSourceEntity(23U);
    msg.setDestination(6514U);
    msg.setDestinationEntity(56U);
    msg.beacon.assign("XEDRDPRYAGYWPOIYBKTCHNKGBMPQQCZFICKSE");
    msg.lat = 0.42406961986953506;
    msg.lon = 0.8198022898160593;
    msg.depth = 0.18783127199767347;
    msg.query_channel = 142U;
    msg.reply_channel = 22U;
    msg.transponder_delay = 157U;

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
    msg.setTimeStamp(0.42083826176323047);
    msg.setSource(58061U);
    msg.setSourceEntity(152U);
    msg.setDestination(4420U);
    msg.setDestinationEntity(11U);
    msg.op = 235U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RNKHOXEGVPONHCTGBNPHCUEFCBZIUUSYMFKUCKSHAWUZUSMLZGTCULQTNTOFGONIMVPSKHRAMYVUKQGLETRPXTVPTVWMGJSQRHWDQZDQYOHCWWTQVXFFWACAEPYNNYOBRXIZHXZXBJDAOCIRDQSVWLIKOG");
    tmp_msg_0.lat = 0.7893589660975446;
    tmp_msg_0.lon = 0.25412613065140177;
    tmp_msg_0.depth = 0.09358144478874209;
    tmp_msg_0.query_channel = 234U;
    tmp_msg_0.reply_channel = 134U;
    tmp_msg_0.transponder_delay = 131U;
    msg.beacons.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5222962703608865);
    msg.setSource(53010U);
    msg.setSourceEntity(126U);
    msg.setDestination(50759U);
    msg.setDestinationEntity(234U);
    msg.op = 240U;

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
    msg.setTimeStamp(0.5946889178986237);
    msg.setSource(19161U);
    msg.setSourceEntity(198U);
    msg.setDestination(27506U);
    msg.setDestinationEntity(172U);
    msg.op = 132U;

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
    msg.setTimeStamp(0.8895194639200948);
    msg.setSource(8938U);
    msg.setSourceEntity(51U);
    msg.setDestination(33891U);
    msg.setDestinationEntity(12U);
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7418239790391741;
    tmp_msg_0.lon = 0.30916218554912356;
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
    msg.setTimeStamp(0.14180200042482305);
    msg.setSource(32491U);
    msg.setSourceEntity(111U);
    msg.setDestination(43258U);
    msg.setDestinationEntity(183U);
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 48U;
    tmp_msg_0.x = 0.20725522599205948;
    tmp_msg_0.y = 0.5636894141927897;
    tmp_msg_0.z = 0.12782573028485988;
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
    msg.setTimeStamp(0.5716438342720033);
    msg.setSource(18653U);
    msg.setSourceEntity(251U);
    msg.setDestination(24513U);
    msg.setDestinationEntity(17U);
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.756485703489926;
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
    msg.setTimeStamp(0.6324044096907652);
    msg.setSource(33326U);
    msg.setSourceEntity(211U);
    msg.setDestination(31355U);
    msg.setDestinationEntity(69U);
    msg.op = 238U;
    msg.system.assign("ZQXMYKIHCVRUKAJEQAOVRPQCPPUFRJPOUQU");
    msg.range = 0.9255834265177562;
    IMC::AcousticSystemsQuery tmp_msg_0;
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
    msg.setTimeStamp(0.20754923502026257);
    msg.setSource(14271U);
    msg.setSourceEntity(190U);
    msg.setDestination(21900U);
    msg.setDestinationEntity(22U);
    msg.op = 160U;
    msg.system.assign("OLWXWDJLHFUHDPLOQQUDQYEHUONDQSVFAKRQHNYHJRTTFGUWFDBJZAVDNNVEAGNSPYNTOLIFILVTWKBNTUEOAIKYDKFCFPABMPJJYJHITCDZZSTVUTMGCPXBOZWMT");
    msg.range = 0.44842261898974567;
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 98U;
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
    msg.setTimeStamp(0.8948307351516949);
    msg.setSource(22596U);
    msg.setSourceEntity(145U);
    msg.setDestination(2452U);
    msg.setDestinationEntity(52U);
    msg.op = 143U;
    msg.system.assign("VKNUSTWXDHYMPQUWXXOAVYHMWQYRZQVYCLXUWNCAODRPKDRCINFLPKSQSMHAGJCPYSFSLWJQMAENLCJPYABIJEMUTCATWMABSFEWTLPHLYIXWDQVJSLFTKRUNDMVFUPAHLTYURTVAJXEGGQZFHMVIFIBTOKMCCV");
    msg.range = 0.6078094458790412;
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.14490983634810317;
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
    msg.setTimeStamp(0.492648957115262);
    msg.setSource(13661U);
    msg.setSourceEntity(253U);
    msg.setDestination(22471U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.47906906938463567);
    msg.setSource(37494U);
    msg.setSourceEntity(187U);
    msg.setDestination(63071U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.4952153503762946);
    msg.setSource(51207U);
    msg.setSourceEntity(186U);
    msg.setDestination(31765U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.029983429788426386);
    msg.setSource(48773U);
    msg.setSourceEntity(0U);
    msg.setDestination(11794U);
    msg.setDestinationEntity(173U);
    msg.list.assign("JJIHIBIUYJTMFXECOJUCLBZQMEGMQJWPFKKSSOJDRYVKQQSRYOV");

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
    msg.setTimeStamp(0.7446202745337208);
    msg.setSource(24329U);
    msg.setSourceEntity(85U);
    msg.setDestination(33941U);
    msg.setDestinationEntity(178U);
    msg.list.assign("YTFTLMNGJPRHSQLDXAJAEQPTXRRNYDAUVMCPPNBYGBRWVKBDQDVPJCTDFRPVPZWSKKFEMKXQIAWCORMFXFOZWGZXBBLGBGQQOYKRXFCPAZ");

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
    msg.setTimeStamp(0.32723409857581265);
    msg.setSource(40289U);
    msg.setSourceEntity(19U);
    msg.setDestination(32808U);
    msg.setDestinationEntity(54U);
    msg.list.assign("AIVHDYMKCPLKUUGEFDMPWNQGLYLZWTIBOBACERULOCTPWVMYSORRGRWNTHZPDUCQPMLDYSOOOVSRKICVCNSHOXDTQBBTZUSWQNZKGNDXGJDBUTCRLZJAIKIUWHRAYPEOTWDMFJNQGFGMKNXHQIYXJXXKBKJHSFDQARFCSFLWPVZAEFKFZCBUAXHTUIL");

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
    msg.setTimeStamp(0.5593739321736205);
    msg.setSource(54870U);
    msg.setSourceEntity(202U);
    msg.setDestination(60034U);
    msg.setDestinationEntity(77U);
    msg.value = 2553;

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
    msg.setTimeStamp(0.09737630772356964);
    msg.setSource(908U);
    msg.setSourceEntity(163U);
    msg.setDestination(16846U);
    msg.setDestinationEntity(15U);
    msg.value = -30259;

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
    msg.setTimeStamp(0.223701953055517);
    msg.setSource(23173U);
    msg.setSourceEntity(248U);
    msg.setDestination(57695U);
    msg.setDestinationEntity(59U);
    msg.value = -13248;

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
    msg.setTimeStamp(0.6642763841206456);
    msg.setSource(50792U);
    msg.setSourceEntity(29U);
    msg.setDestination(14049U);
    msg.setDestinationEntity(221U);
    msg.value = 0.7103981015700076;

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
    msg.setTimeStamp(0.11876011117578067);
    msg.setSource(28671U);
    msg.setSourceEntity(4U);
    msg.setDestination(2607U);
    msg.setDestinationEntity(221U);
    msg.value = 0.19997046238530025;

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
    msg.setTimeStamp(0.12224681106118607);
    msg.setSource(58831U);
    msg.setSourceEntity(165U);
    msg.setDestination(56428U);
    msg.setDestinationEntity(246U);
    msg.value = 0.9641969503722344;

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
    msg.setTimeStamp(0.20526493216378472);
    msg.setSource(42003U);
    msg.setSourceEntity(72U);
    msg.setDestination(51830U);
    msg.setDestinationEntity(218U);
    msg.value = 0.21696030518811493;

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
    msg.setTimeStamp(0.8251607069708357);
    msg.setSource(8624U);
    msg.setSourceEntity(156U);
    msg.setDestination(45454U);
    msg.setDestinationEntity(196U);
    msg.value = 0.2378463612301861;

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
    msg.setTimeStamp(0.4521822379056467);
    msg.setSource(61635U);
    msg.setSourceEntity(135U);
    msg.setDestination(30229U);
    msg.setDestinationEntity(28U);
    msg.value = 0.08938868537591227;

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
    msg.setTimeStamp(0.13580448836349335);
    msg.setSource(40704U);
    msg.setSourceEntity(41U);
    msg.setDestination(29454U);
    msg.setDestinationEntity(8U);
    msg.validity = 2699U;
    msg.type = 30U;
    msg.utc_year = 45172U;
    msg.utc_month = 178U;
    msg.utc_day = 203U;
    msg.utc_time = 0.502384081067482;
    msg.lat = 0.36535224171223546;
    msg.lon = 0.7516744630723522;
    msg.height = 0.8966537366148808;
    msg.satellites = 242U;
    msg.cog = 0.46084167352263905;
    msg.sog = 0.25501219234515293;
    msg.hdop = 0.5385828676327832;
    msg.vdop = 0.9928994000895309;
    msg.hacc = 0.482757137383511;
    msg.vacc = 0.196248664335115;

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
    msg.setTimeStamp(0.31730966117623205);
    msg.setSource(41769U);
    msg.setSourceEntity(227U);
    msg.setDestination(35530U);
    msg.setDestinationEntity(235U);
    msg.validity = 59760U;
    msg.type = 98U;
    msg.utc_year = 58766U;
    msg.utc_month = 57U;
    msg.utc_day = 63U;
    msg.utc_time = 0.9654806124924347;
    msg.lat = 0.6891669365095024;
    msg.lon = 0.9881639359264234;
    msg.height = 0.9660364516583384;
    msg.satellites = 60U;
    msg.cog = 0.7536530340874856;
    msg.sog = 0.8836652387595461;
    msg.hdop = 0.29574463599659084;
    msg.vdop = 0.8220769110813644;
    msg.hacc = 0.5898200711985111;
    msg.vacc = 0.3952812118281509;

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
    msg.setTimeStamp(0.05249887510838325);
    msg.setSource(47374U);
    msg.setSourceEntity(137U);
    msg.setDestination(58500U);
    msg.setDestinationEntity(124U);
    msg.validity = 1468U;
    msg.type = 43U;
    msg.utc_year = 64987U;
    msg.utc_month = 86U;
    msg.utc_day = 210U;
    msg.utc_time = 0.9899258649713667;
    msg.lat = 0.025536322869912587;
    msg.lon = 0.0082055564078658;
    msg.height = 0.8169528244645485;
    msg.satellites = 137U;
    msg.cog = 0.6466476856659492;
    msg.sog = 0.38165759211056594;
    msg.hdop = 0.03317323149255791;
    msg.vdop = 0.4000152745526516;
    msg.hacc = 0.9072856935844996;
    msg.vacc = 0.701089376146985;

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
    msg.setTimeStamp(0.8625336317458773);
    msg.setSource(17049U);
    msg.setSourceEntity(61U);
    msg.setDestination(8221U);
    msg.setDestinationEntity(50U);
    msg.time = 0.6472256154781402;
    msg.phi = 0.21626232323988814;
    msg.theta = 0.010109050266013941;
    msg.psi = 0.9994605136642055;
    msg.psi_magnetic = 0.34113807498659454;

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
    msg.setTimeStamp(0.8005275688864548);
    msg.setSource(54649U);
    msg.setSourceEntity(208U);
    msg.setDestination(50935U);
    msg.setDestinationEntity(244U);
    msg.time = 0.009791203089772993;
    msg.phi = 0.7340648169427589;
    msg.theta = 0.11392566484016542;
    msg.psi = 0.7768120053640478;
    msg.psi_magnetic = 0.06976938917179354;

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
    msg.setTimeStamp(0.23419728153994646);
    msg.setSource(8385U);
    msg.setSourceEntity(39U);
    msg.setDestination(26107U);
    msg.setDestinationEntity(236U);
    msg.time = 0.961218085592934;
    msg.phi = 0.0320295317207786;
    msg.theta = 0.5221939422624109;
    msg.psi = 0.523606201264523;
    msg.psi_magnetic = 0.8282106243397608;

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
    msg.setTimeStamp(0.4517132933375282);
    msg.setSource(23043U);
    msg.setSourceEntity(110U);
    msg.setDestination(19204U);
    msg.setDestinationEntity(4U);
    msg.time = 0.630333772624384;
    msg.x = 0.03754541260060684;
    msg.y = 0.34699342762357244;
    msg.z = 0.34955758208340393;
    msg.timestep = 0.08010305086486846;

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
    msg.setTimeStamp(0.8198506114944542);
    msg.setSource(44602U);
    msg.setSourceEntity(192U);
    msg.setDestination(54308U);
    msg.setDestinationEntity(176U);
    msg.time = 0.4223025758112178;
    msg.x = 0.14048910374386991;
    msg.y = 0.7862087857608578;
    msg.z = 0.8638468221538886;
    msg.timestep = 0.41177446470310675;

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
    msg.setTimeStamp(0.37366768760853597);
    msg.setSource(33958U);
    msg.setSourceEntity(48U);
    msg.setDestination(33254U);
    msg.setDestinationEntity(231U);
    msg.time = 0.10087951451651544;
    msg.x = 0.5299023696359852;
    msg.y = 0.7303356776589464;
    msg.z = 0.12454596669572326;
    msg.timestep = 0.7514010288082977;

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
    msg.setTimeStamp(0.12416333586787376);
    msg.setSource(24108U);
    msg.setSourceEntity(182U);
    msg.setDestination(25054U);
    msg.setDestinationEntity(67U);
    msg.time = 0.6066141433474078;
    msg.x = 0.798291253531152;
    msg.y = 0.38068655784425454;
    msg.z = 0.4122152399677418;

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
    msg.setTimeStamp(0.7474968087824231);
    msg.setSource(27311U);
    msg.setSourceEntity(45U);
    msg.setDestination(14385U);
    msg.setDestinationEntity(180U);
    msg.time = 0.510957246453323;
    msg.x = 0.19363030361314337;
    msg.y = 0.8239145733449571;
    msg.z = 0.40084242273506243;

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
    msg.setTimeStamp(0.8895427031788428);
    msg.setSource(53053U);
    msg.setSourceEntity(67U);
    msg.setDestination(46098U);
    msg.setDestinationEntity(86U);
    msg.time = 0.4076973069078842;
    msg.x = 0.38693974917714524;
    msg.y = 0.20486791991718956;
    msg.z = 0.32226886597536464;

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
    msg.setTimeStamp(0.8721636947123551);
    msg.setSource(51916U);
    msg.setSourceEntity(111U);
    msg.setDestination(60672U);
    msg.setDestinationEntity(217U);
    msg.time = 0.4780044149852072;
    msg.x = 0.1978552796763403;
    msg.y = 0.021524320159723387;
    msg.z = 0.7819445139647108;

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
    msg.setTimeStamp(0.3551430147956638);
    msg.setSource(316U);
    msg.setSourceEntity(139U);
    msg.setDestination(12192U);
    msg.setDestinationEntity(57U);
    msg.time = 0.4561170403678847;
    msg.x = 0.6964061220150195;
    msg.y = 0.5885797311731648;
    msg.z = 0.6775710988803669;

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
    msg.setTimeStamp(0.5226669685647157);
    msg.setSource(60645U);
    msg.setSourceEntity(29U);
    msg.setDestination(308U);
    msg.setDestinationEntity(187U);
    msg.time = 0.6505857546291812;
    msg.x = 0.9613005009552084;
    msg.y = 0.23986185812440552;
    msg.z = 0.9729385576389594;

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
    msg.setTimeStamp(0.3362660186029345);
    msg.setSource(4987U);
    msg.setSourceEntity(227U);
    msg.setDestination(36593U);
    msg.setDestinationEntity(180U);
    msg.time = 0.29993188685791317;
    msg.x = 0.7661799708818908;
    msg.y = 0.29262265922769537;
    msg.z = 0.12987491390895345;

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
    msg.setTimeStamp(0.1367909547325009);
    msg.setSource(606U);
    msg.setSourceEntity(204U);
    msg.setDestination(44365U);
    msg.setDestinationEntity(13U);
    msg.time = 0.4889634741233503;
    msg.x = 0.8541476408579187;
    msg.y = 0.21244648337939542;
    msg.z = 0.3538813363859219;

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
    msg.setTimeStamp(0.9141735677453559);
    msg.setSource(56504U);
    msg.setSourceEntity(224U);
    msg.setDestination(58364U);
    msg.setDestinationEntity(195U);
    msg.time = 0.14802449780345972;
    msg.x = 0.7705389428672177;
    msg.y = 0.3355055798209594;
    msg.z = 0.5064703339755254;

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
    msg.setTimeStamp(0.20490453270766174);
    msg.setSource(58217U);
    msg.setSourceEntity(32U);
    msg.setDestination(27442U);
    msg.setDestinationEntity(78U);
    msg.validity = 203U;
    msg.x = 0.9954922554373699;
    msg.y = 0.15799307654847305;
    msg.z = 0.06693008218345975;

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
    msg.setTimeStamp(0.35104235091930114);
    msg.setSource(9577U);
    msg.setSourceEntity(113U);
    msg.setDestination(34307U);
    msg.setDestinationEntity(183U);
    msg.validity = 17U;
    msg.x = 0.4386983109073226;
    msg.y = 0.1572220256669543;
    msg.z = 0.4442685121227272;

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
    msg.setTimeStamp(0.39305840205247555);
    msg.setSource(15555U);
    msg.setSourceEntity(115U);
    msg.setDestination(19460U);
    msg.setDestinationEntity(29U);
    msg.validity = 87U;
    msg.x = 0.2104254722082538;
    msg.y = 0.4199478077560218;
    msg.z = 0.7166602355570768;

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
    msg.setTimeStamp(0.4977381625260142);
    msg.setSource(10849U);
    msg.setSourceEntity(159U);
    msg.setDestination(50787U);
    msg.setDestinationEntity(99U);
    msg.validity = 38U;
    msg.x = 0.2296161591561453;
    msg.y = 0.14810058619764432;
    msg.z = 0.41577166240028585;

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
    msg.setTimeStamp(0.3917732691928728);
    msg.setSource(42825U);
    msg.setSourceEntity(106U);
    msg.setDestination(50730U);
    msg.setDestinationEntity(49U);
    msg.validity = 150U;
    msg.x = 0.5677830149789448;
    msg.y = 0.7564273227587032;
    msg.z = 0.8749093223237506;

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
    msg.setTimeStamp(0.9487355832455397);
    msg.setSource(46072U);
    msg.setSourceEntity(245U);
    msg.setDestination(15167U);
    msg.setDestinationEntity(210U);
    msg.validity = 4U;
    msg.x = 0.17632438462677402;
    msg.y = 0.2842712541653013;
    msg.z = 0.31015778991762266;

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
    msg.setTimeStamp(0.22830180466514216);
    msg.setSource(43821U);
    msg.setSourceEntity(254U);
    msg.setDestination(63302U);
    msg.setDestinationEntity(31U);
    msg.time = 0.5564202479321002;
    msg.x = 0.9176343779147985;
    msg.y = 0.7897719390189952;
    msg.z = 0.15200737538549092;

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
    msg.setTimeStamp(0.47583296853426305);
    msg.setSource(6511U);
    msg.setSourceEntity(236U);
    msg.setDestination(35075U);
    msg.setDestinationEntity(246U);
    msg.time = 0.5349429526173213;
    msg.x = 0.65427085538296;
    msg.y = 0.8017249702120252;
    msg.z = 0.21621217123672154;

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
    msg.setTimeStamp(0.8190973995642332);
    msg.setSource(4363U);
    msg.setSourceEntity(13U);
    msg.setDestination(34605U);
    msg.setDestinationEntity(45U);
    msg.time = 0.688388721019066;
    msg.x = 0.49781157108618346;
    msg.y = 0.0940082893889268;
    msg.z = 0.07753975788887191;

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
    msg.setTimeStamp(0.8261007244351651);
    msg.setSource(36168U);
    msg.setSourceEntity(194U);
    msg.setDestination(22402U);
    msg.setDestinationEntity(145U);
    msg.validity = 144U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9795143193830532;
    tmp_msg_0.beam_height = 0.959326098176831;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.8096534837629366;

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
    msg.setTimeStamp(0.7668047676243172);
    msg.setSource(12623U);
    msg.setSourceEntity(193U);
    msg.setDestination(22236U);
    msg.setDestinationEntity(119U);
    msg.validity = 51U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8879687314821854;
    tmp_msg_0.y = 0.8753929876921659;
    tmp_msg_0.z = 0.3531275729086648;
    tmp_msg_0.phi = 0.30124097287619345;
    tmp_msg_0.theta = 0.7129276793689668;
    tmp_msg_0.psi = 0.30661128401694193;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.39446892536583744;

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
    msg.setTimeStamp(0.8863228586828482);
    msg.setSource(59522U);
    msg.setSourceEntity(182U);
    msg.setDestination(28857U);
    msg.setDestinationEntity(37U);
    msg.validity = 106U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.1655981113594589;
    tmp_msg_0.y = 0.843806071577962;
    tmp_msg_0.z = 0.9554974458207468;
    tmp_msg_0.phi = 0.45968256136286234;
    tmp_msg_0.theta = 0.8854949726754624;
    tmp_msg_0.psi = 0.6668966573625794;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.7196000636942261;
    tmp_msg_1.beam_height = 0.37373538014683516;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.18786696723877128;

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
    msg.setTimeStamp(0.34589241846088425);
    msg.setSource(1785U);
    msg.setSourceEntity(148U);
    msg.setDestination(34054U);
    msg.setDestinationEntity(1U);
    msg.value = 0.23332598212122735;

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
    msg.setTimeStamp(0.5043572522382664);
    msg.setSource(42020U);
    msg.setSourceEntity(43U);
    msg.setDestination(51297U);
    msg.setDestinationEntity(194U);
    msg.value = 0.4710333776639448;

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
    msg.setTimeStamp(0.5791445153275747);
    msg.setSource(26639U);
    msg.setSourceEntity(79U);
    msg.setDestination(22300U);
    msg.setDestinationEntity(17U);
    msg.value = 0.7602232928431175;

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
    msg.setTimeStamp(0.765040653378127);
    msg.setSource(15072U);
    msg.setSourceEntity(106U);
    msg.setDestination(40873U);
    msg.setDestinationEntity(6U);
    msg.value = 0.5564209243589143;

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
    msg.setTimeStamp(0.7395171584870105);
    msg.setSource(44768U);
    msg.setSourceEntity(201U);
    msg.setDestination(17289U);
    msg.setDestinationEntity(217U);
    msg.value = 0.5939485781122772;

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
    msg.setTimeStamp(0.6862576241977998);
    msg.setSource(48760U);
    msg.setSourceEntity(60U);
    msg.setDestination(34167U);
    msg.setDestinationEntity(173U);
    msg.value = 0.014599997858506297;

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
    msg.setTimeStamp(0.1743608476252282);
    msg.setSource(35137U);
    msg.setSourceEntity(171U);
    msg.setDestination(52992U);
    msg.setDestinationEntity(140U);
    msg.value = 0.14173634313758665;

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
    msg.setTimeStamp(0.9558617765569256);
    msg.setSource(46592U);
    msg.setSourceEntity(96U);
    msg.setDestination(29946U);
    msg.setDestinationEntity(9U);
    msg.value = 0.8869437835435843;

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
    msg.setTimeStamp(0.6884075342363309);
    msg.setSource(78U);
    msg.setSourceEntity(14U);
    msg.setDestination(8060U);
    msg.setDestinationEntity(249U);
    msg.value = 0.04485158461381111;

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
    msg.setTimeStamp(0.5251703752302911);
    msg.setSource(15656U);
    msg.setSourceEntity(174U);
    msg.setDestination(7929U);
    msg.setDestinationEntity(83U);
    msg.value = 0.9920570616496418;

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
    msg.setTimeStamp(0.5096313196258929);
    msg.setSource(35167U);
    msg.setSourceEntity(124U);
    msg.setDestination(8723U);
    msg.setDestinationEntity(177U);
    msg.value = 0.36660813723896846;

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
    msg.setTimeStamp(0.3282778120020219);
    msg.setSource(37138U);
    msg.setSourceEntity(102U);
    msg.setDestination(53696U);
    msg.setDestinationEntity(30U);
    msg.value = 0.33605937552638565;

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
    msg.setTimeStamp(0.5552842720646446);
    msg.setSource(54617U);
    msg.setSourceEntity(168U);
    msg.setDestination(56373U);
    msg.setDestinationEntity(25U);
    msg.value = 0.23762449744557668;

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
    msg.setTimeStamp(0.4475388695361391);
    msg.setSource(15957U);
    msg.setSourceEntity(106U);
    msg.setDestination(48624U);
    msg.setDestinationEntity(0U);
    msg.value = 0.28109065920905907;

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
    msg.setTimeStamp(0.6982176915367844);
    msg.setSource(51140U);
    msg.setSourceEntity(173U);
    msg.setDestination(52120U);
    msg.setDestinationEntity(171U);
    msg.value = 0.4357354893779508;

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
    msg.setTimeStamp(0.2063621732955102);
    msg.setSource(54712U);
    msg.setSourceEntity(177U);
    msg.setDestination(45598U);
    msg.setDestinationEntity(178U);
    msg.value = 0.6173935077685995;

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
    msg.setTimeStamp(0.69602591665802);
    msg.setSource(13063U);
    msg.setSourceEntity(50U);
    msg.setDestination(52095U);
    msg.setDestinationEntity(146U);
    msg.value = 0.5698919293949576;

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
    msg.setTimeStamp(0.5057235994624258);
    msg.setSource(35573U);
    msg.setSourceEntity(26U);
    msg.setDestination(4033U);
    msg.setDestinationEntity(72U);
    msg.value = 0.4488373496134166;

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
    msg.setTimeStamp(0.019021170838151247);
    msg.setSource(25947U);
    msg.setSourceEntity(100U);
    msg.setDestination(49093U);
    msg.setDestinationEntity(18U);
    msg.value = 0.6282653568097484;

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
    msg.setTimeStamp(0.09609933701955775);
    msg.setSource(12014U);
    msg.setSourceEntity(12U);
    msg.setDestination(12189U);
    msg.setDestinationEntity(95U);
    msg.value = 0.07823864561016991;

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
    msg.setTimeStamp(0.550062629994348);
    msg.setSource(5725U);
    msg.setSourceEntity(200U);
    msg.setDestination(43862U);
    msg.setDestinationEntity(124U);
    msg.value = 0.8179267509639144;

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
    msg.setTimeStamp(0.8924258241721359);
    msg.setSource(55241U);
    msg.setSourceEntity(54U);
    msg.setDestination(55796U);
    msg.setDestinationEntity(47U);
    msg.value = 0.9516009227558061;

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
    msg.setTimeStamp(0.8217375055637319);
    msg.setSource(48694U);
    msg.setSourceEntity(116U);
    msg.setDestination(59639U);
    msg.setDestinationEntity(233U);
    msg.value = 0.3298977021887043;

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
    msg.setTimeStamp(0.4665564500204614);
    msg.setSource(27443U);
    msg.setSourceEntity(214U);
    msg.setDestination(12292U);
    msg.setDestinationEntity(93U);
    msg.value = 0.1520334694547112;

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
    msg.setTimeStamp(0.1381442611224819);
    msg.setSource(15881U);
    msg.setSourceEntity(15U);
    msg.setDestination(8315U);
    msg.setDestinationEntity(55U);
    msg.direction = 0.6481702471207956;
    msg.speed = 0.7320855735974554;
    msg.turbulence = 0.5210846858280884;

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
    msg.setTimeStamp(0.7817280595204243);
    msg.setSource(25244U);
    msg.setSourceEntity(145U);
    msg.setDestination(50570U);
    msg.setDestinationEntity(196U);
    msg.direction = 0.25406495924295247;
    msg.speed = 0.14056532501204388;
    msg.turbulence = 0.5704244403867661;

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
    msg.setTimeStamp(0.45675088784400286);
    msg.setSource(64035U);
    msg.setSourceEntity(203U);
    msg.setDestination(296U);
    msg.setDestinationEntity(36U);
    msg.direction = 0.4161729981957283;
    msg.speed = 0.08873968194976944;
    msg.turbulence = 0.5951397541267839;

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
    msg.setTimeStamp(0.5339356329856041);
    msg.setSource(59526U);
    msg.setSourceEntity(158U);
    msg.setDestination(38040U);
    msg.setDestinationEntity(158U);
    msg.value = 0.6889999822225548;

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
    msg.setTimeStamp(0.6105992111955856);
    msg.setSource(58772U);
    msg.setSourceEntity(69U);
    msg.setDestination(2892U);
    msg.setDestinationEntity(154U);
    msg.value = 0.020741732778194244;

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
    msg.setTimeStamp(0.2410350289342449);
    msg.setSource(15395U);
    msg.setSourceEntity(220U);
    msg.setDestination(24517U);
    msg.setDestinationEntity(124U);
    msg.value = 0.07921321235468748;

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
    msg.setTimeStamp(0.10841073652478173);
    msg.setSource(50641U);
    msg.setSourceEntity(207U);
    msg.setDestination(59632U);
    msg.setDestinationEntity(59U);
    msg.value.assign("ZSKAUVZKUOLCWFTKAQJCXBOJBWXOKUFDCLFETTLWCHYRIMCTDRMIPHGCYSKVTBNUEXHJOEUENFDJIQPYWGZNHELWGHHSQOJFZMYAPZFUGDVKIFETCMBLTGGUWSKMGPOBQWLXIAYHSDFAATQVCZSPHMDZSAHGROKRZXAMXMARPYDKHVXYCYLNWJSYGRAPDRNOEBEETQJIBJDXSPXWJMBZLNXVEQZIITFSIUFJLORPVQIKD");

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
    msg.setTimeStamp(0.7669827576662515);
    msg.setSource(8415U);
    msg.setSourceEntity(47U);
    msg.setDestination(25596U);
    msg.setDestinationEntity(210U);
    msg.value.assign("MUVUNDXLMELLDESNGDZRMBCMBQENVRESZAJWSHNXAOVKTTPRWTDPESUVAVHWVJZKJPSRKJTNCBGCZZMNFQLLYKIAOFKTEDFLKXYIXEZPVABEWHKPRRBHHHGOHSQQDMZTJFGMGKRXKPIQWXWQSYUIIYCJYXBQGTCUJTSNGCZZANAZXLAOOCYODRVLDPGQIKUROAHDAX");

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
    msg.setTimeStamp(0.45877531807471317);
    msg.setSource(46611U);
    msg.setSourceEntity(171U);
    msg.setDestination(32767U);
    msg.setDestinationEntity(6U);
    msg.value.assign("ZUJOGWXWWFIVUGQYUQNEINMLHMCTORPHGPJQZLTSHZCDBRXBISDOSXYLZGLWDTDDGWKMMPUWWRPYCWBDUXLQOHPQMZFJPEMDBBDNGEXEAKDRJVDOZQN");

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
    msg.setTimeStamp(0.38520173188311757);
    msg.setSource(41985U);
    msg.setSourceEntity(51U);
    msg.setDestination(16773U);
    msg.setDestinationEntity(43U);
    const char tmp_msg_0[] = {-43, -56, -98, -101, -78, -53, 111, 55, 123, -108, -36, 96, 77, 47, -58, 112, 64, 106, 33, 42, -56, -10, 120, 18, 122, -48, 0, -55, 60, 104, 92, 93, 24, -48, 2, -120, -24, -117, 12, 72, -109, -47, 31, 121, 86, -16, -89, -93, 110, -72, 71, -28, 99, -59, 109, -12, 79, 81, 74, 120, -7, 54, -4, 110, -36, 69, 101, -48, -92, 40, 19, -51, -52, -115, -19, 100, -118, -6, -69, -42, 47, 10, -18, -76, 65, 54, 75, -124, -100, 55, 111, -88, 39, 104, -65, -59, 60, 86, -99, 97, -84, -45, 89, 32, 88, 71, 119, -11, 39, -80, -112, -33, -100, -93, -20, -111, 125, 108, -123, 80, -87, 97, 32, -101, 73, 22, 113, -33};
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
    msg.setTimeStamp(0.30626456340916497);
    msg.setSource(26800U);
    msg.setSourceEntity(169U);
    msg.setDestination(18987U);
    msg.setDestinationEntity(210U);
    const char tmp_msg_0[] = {59, -93, -23, 74, 66, -31, -39, -99, 64, -42, 56, 108, 57, -96, -107, -48, -39, 6, 117, 88, 105, 36, 111, -56, -80, 55, 110, -75, -22, -65, -32, -12, -70, -8, 108, 83, -114, 74, -40, -9, -45, -119, -126, -110, -40, -121, -68, 101, -43, -23, -102, -109, 62, 55, 22, 62, 29, 11, 7, -10, -23, 17, 46, 117, 28, -24, 85, 9, 34, -94, -29, 99, -57, -27, 103, -65, -3, -119, 98, 66, -82, -25, -63, 72, -127, -123, -94, -128, -28, 79, -20, -117, 67, -22, -43, -72, -118, 83, -125, -109, 7, -41, -82, 5, 82, -18, -120, 112, 81, -33, -29, -125, 81, -12, 27, 91, -112, -5, 44, 85, -103, 53, -49, 126, -67, 67, -106, 85, -128, 80, 34, -128, 19, -1, 52, -43, -116, 50, 85, -24, 126, -123, 114, 61, -25, -40, 52, 27, 56, -81, 1, -88, -12, -104, 29, 45, 111, -126, -53, -26, -55, -13, -85, -15, -57, -51, -127, -92, 71, -86, -96, 109, -119, 1, -20, -71, -33, -27, -37, 93, 38, 53, -14, -117, 89, 84, 41, -32, 40, -109, -31, 63, 105, -66, -35, -27, -116, 29, -106, -69, -45, -122, 11, 114, 121, -41, 8, -24, 12, -75, 17, -128, 26, -121, -112, 72, 95, -125, -100, 12, -4, -80, 25, 123, 98, -3, 51, -48, 115, -108, 31, -76, 108, 30, -55, -8, 66, 78, -10};
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
    msg.setTimeStamp(0.6696832469044524);
    msg.setSource(24796U);
    msg.setSourceEntity(138U);
    msg.setDestination(48537U);
    msg.setDestinationEntity(128U);
    const char tmp_msg_0[] = {-24, -8, -106, 74, -85, 0, -29, -70, 1, 119, 100, -82, -118, 25, -127, -72, 7};
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
    msg.setTimeStamp(0.019059117515257573);
    msg.setSource(49586U);
    msg.setSourceEntity(159U);
    msg.setDestination(10206U);
    msg.setDestinationEntity(136U);
    msg.type = 95U;
    msg.frequency = 3670902480U;
    msg.min_range = 48023U;
    msg.max_range = 42400U;
    msg.bits_per_point = 164U;
    msg.scale_factor = 0.11168320323210679;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8808821221264899;
    tmp_msg_0.beam_height = 0.9494946750388197;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {46, 109, 85, 9, -72, 59, -99, 98, -27, -91, 87, 15, 54, 3, -39, -107, -110, 100, -78, -33, -41, 93, 105, -93, 90, -44, 74, 112, -20, -120, 29, -66, 124, 124, 88, -59, 112, 68, 112, 123, -72, 57, -21, -113, 96, 49, -35, 121, 17, 26, -71, 29, 61, 83, -70, -16, 58, -104, 5, 49, -7, -39, 68, -20, -44, -81, 96, -114, -2, -83, -113, 39, -23, 106, 31, -8, 23, 0, 108, 37, -31, -23, 47, 14, -50, 55, -96, 74, 58, -69, -115, 20, -36, -7, 122, -8, 124, 43, 9, 61, -38, -110, 49, 43, -61, -88, 42, 66, 65, 119, -19, 11, 50, 113, 97, -1, -49, 65, -66, 32, -47, -58, 70, -92, 19, -79, 25, 20, 34, 7, 24, 46, -87, 101, -48, 112, 47, -58, -19, -39, -78, 50, -62, 13, -22, 39, 109, 18, -49, -68, 113, -92, -10, 66, -10, 28, -25, -127, -84, -101, -115, -125, 11, -22, 50, 15, -99, -71, 52, 94, -44, -5};
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
    msg.setTimeStamp(0.8414219063570335);
    msg.setSource(55318U);
    msg.setSourceEntity(56U);
    msg.setDestination(51188U);
    msg.setDestinationEntity(185U);
    msg.type = 185U;
    msg.frequency = 684744782U;
    msg.min_range = 49101U;
    msg.max_range = 12986U;
    msg.bits_per_point = 56U;
    msg.scale_factor = 0.6928026590684119;
    const char tmp_msg_0[] = {-7, -16, 88, 106, 8, -14, 54, 90, 33, 49, -56, 78, 106, -63, 99, -108};
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
    msg.setTimeStamp(0.9338819189777103);
    msg.setSource(5368U);
    msg.setSourceEntity(179U);
    msg.setDestination(23910U);
    msg.setDestinationEntity(70U);
    msg.type = 163U;
    msg.frequency = 3813827763U;
    msg.min_range = 53799U;
    msg.max_range = 40527U;
    msg.bits_per_point = 111U;
    msg.scale_factor = 0.777036987381085;
    const char tmp_msg_0[] = {46, -71, 73, -89, 28, 7, 72, 90, 62, 47, -97, 41, 98, -24, -16, 15, -92, 56, -65, 6, 60, 86, 108, -121, 29, 6, 64, -46, -96, 11, -116, 60, 80, 106, -19, 6, -54, 58, 77, -105, -75, 10, -116, 60, 75, 24, 46, 109, -7, 75, -99, -68, -26, 41, 20, 120, -89, 115, 76, -2, -16, -86, -82, 42, -82, -56, 51, -33, -88, -77, -7, 83, -16, -120, -94, 83, 78, -23, -22, 45, -127, -64, 99, -24, -54, -9, 96, 98, 124, -93, -11, -41, -15, 16, 78, -13, -22, 72, 42};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.9817279695420419);
    msg.setSource(38798U);
    msg.setSourceEntity(198U);
    msg.setDestination(26857U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.805515274203377);
    msg.setSource(52756U);
    msg.setSourceEntity(196U);
    msg.setDestination(13846U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.7519843183443223);
    msg.setSource(33767U);
    msg.setSourceEntity(33U);
    msg.setDestination(60779U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.4185518394639375);
    msg.setSource(47127U);
    msg.setSourceEntity(192U);
    msg.setDestination(54326U);
    msg.setDestinationEntity(238U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.62580266864159);
    msg.setSource(25587U);
    msg.setSourceEntity(243U);
    msg.setDestination(11271U);
    msg.setDestinationEntity(100U);
    msg.op = 6U;

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
    msg.setTimeStamp(0.31741515236391393);
    msg.setSource(1657U);
    msg.setSourceEntity(228U);
    msg.setDestination(61754U);
    msg.setDestinationEntity(137U);
    msg.op = 115U;

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
    msg.setTimeStamp(0.33167227793942167);
    msg.setSource(35268U);
    msg.setSourceEntity(94U);
    msg.setDestination(42921U);
    msg.setDestinationEntity(1U);
    msg.value = 0.15606491388829835;
    msg.confidence = 0.4450168271065754;
    msg.opmodes.assign("JJMQTJGWYCGUICTGKRSMPPUMUFTRLEDNHNPAWZOA");

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
    msg.setTimeStamp(0.15523392824826476);
    msg.setSource(24657U);
    msg.setSourceEntity(24U);
    msg.setDestination(56955U);
    msg.setDestinationEntity(76U);
    msg.value = 0.14438446195937138;
    msg.confidence = 0.4333839437085817;
    msg.opmodes.assign("NJEYWMZTANIIMSKECTVXZJWRMBOEDINJUTUOHXPFENWICFMDKXAKUADEZHXKIVHFOEANNGUPRTFQGBLZVMFPBLYRILOLTR");

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
    msg.setTimeStamp(0.027332635182458986);
    msg.setSource(26999U);
    msg.setSourceEntity(152U);
    msg.setDestination(16719U);
    msg.setDestinationEntity(208U);
    msg.value = 0.2596779807271291;
    msg.confidence = 0.3786730303211596;
    msg.opmodes.assign("WGCISTBAAFSTTMHZIPEJNLBFNASKUQJULYZWTLPCXIXBEGAOYLLKGTHHXLQJFEPMMJWKWZHMUQAYKBDJCBYRWKEEOVUDUDLMTLZSTIFYSIY");

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
    msg.setTimeStamp(0.21604138748631208);
    msg.setSource(64673U);
    msg.setSourceEntity(195U);
    msg.setDestination(12576U);
    msg.setDestinationEntity(0U);
    msg.itow = 3225899022U;
    msg.lat = 0.17980806292238083;
    msg.lon = 0.9055957371140343;
    msg.height_ell = 0.250786230553965;
    msg.height_sea = 0.3307096030992903;
    msg.hacc = 0.01945645766383086;
    msg.vacc = 0.2716712582228772;
    msg.vel_n = 0.7978694421819401;
    msg.vel_e = 0.7439865525416097;
    msg.vel_d = 0.5913208194189082;
    msg.speed = 0.2297327179245633;
    msg.gspeed = 0.28623934779713744;
    msg.heading = 0.31204488584720746;
    msg.sacc = 0.3388737097827099;
    msg.cacc = 0.7518463205039874;

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
    msg.setTimeStamp(0.9212308530474185);
    msg.setSource(30348U);
    msg.setSourceEntity(246U);
    msg.setDestination(28302U);
    msg.setDestinationEntity(117U);
    msg.itow = 3568267919U;
    msg.lat = 0.6512168860099045;
    msg.lon = 0.22074724271384938;
    msg.height_ell = 0.6450152106255501;
    msg.height_sea = 0.25322614743671124;
    msg.hacc = 0.5511645560395484;
    msg.vacc = 0.3961965344050714;
    msg.vel_n = 0.16898781397229168;
    msg.vel_e = 0.520126239029007;
    msg.vel_d = 0.6226695678330552;
    msg.speed = 0.8565773857312976;
    msg.gspeed = 0.40910887480391056;
    msg.heading = 0.9241895244249448;
    msg.sacc = 0.15481710062728082;
    msg.cacc = 0.4301757906987165;

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
    msg.setTimeStamp(0.03783305697669448);
    msg.setSource(8774U);
    msg.setSourceEntity(50U);
    msg.setDestination(29018U);
    msg.setDestinationEntity(100U);
    msg.itow = 3750142077U;
    msg.lat = 0.19496120264604644;
    msg.lon = 0.6343597334624577;
    msg.height_ell = 0.823593452364536;
    msg.height_sea = 0.9605211223080903;
    msg.hacc = 0.5817819061143013;
    msg.vacc = 0.39307520655501893;
    msg.vel_n = 0.2570109987918806;
    msg.vel_e = 0.5834619117152222;
    msg.vel_d = 0.4362723606362643;
    msg.speed = 0.029349499474266683;
    msg.gspeed = 0.5709532389806169;
    msg.heading = 0.2937167528687801;
    msg.sacc = 0.1635680154678999;
    msg.cacc = 0.16555953817374292;

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
    msg.setTimeStamp(0.573927924234597);
    msg.setSource(6017U);
    msg.setSourceEntity(220U);
    msg.setDestination(54157U);
    msg.setDestinationEntity(43U);
    msg.id = 106U;
    msg.value = 0.2724157275655673;

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
    msg.setTimeStamp(0.476377504075318);
    msg.setSource(53560U);
    msg.setSourceEntity(3U);
    msg.setDestination(57849U);
    msg.setDestinationEntity(59U);
    msg.id = 76U;
    msg.value = 0.373060514201063;

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
    msg.setTimeStamp(0.8234207133498931);
    msg.setSource(34113U);
    msg.setSourceEntity(85U);
    msg.setDestination(4005U);
    msg.setDestinationEntity(229U);
    msg.id = 167U;
    msg.value = 0.022000196323799903;

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
    msg.setTimeStamp(0.9128134794769084);
    msg.setSource(24613U);
    msg.setSourceEntity(125U);
    msg.setDestination(27431U);
    msg.setDestinationEntity(177U);
    msg.x = 0.6752715990865059;
    msg.y = 0.22395653179126207;
    msg.z = 0.23403195289120882;
    msg.phi = 0.10012588258818111;
    msg.theta = 0.7477491051818965;
    msg.psi = 0.8831028256017766;

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
    msg.setTimeStamp(0.6648166965336478);
    msg.setSource(34700U);
    msg.setSourceEntity(174U);
    msg.setDestination(58658U);
    msg.setDestinationEntity(108U);
    msg.x = 0.28907837162071337;
    msg.y = 0.37627818591727846;
    msg.z = 0.07437746414307478;
    msg.phi = 0.7958529410189666;
    msg.theta = 0.4623893645527223;
    msg.psi = 0.43369281460252496;

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
    msg.setTimeStamp(0.9305842261627004);
    msg.setSource(39665U);
    msg.setSourceEntity(179U);
    msg.setDestination(54123U);
    msg.setDestinationEntity(204U);
    msg.x = 0.8551579254244037;
    msg.y = 0.38641143020822843;
    msg.z = 0.43715417151262337;
    msg.phi = 0.1467970150175012;
    msg.theta = 0.5956957197474572;
    msg.psi = 0.7312796672321599;

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
    msg.setTimeStamp(0.4609577025841486);
    msg.setSource(50583U);
    msg.setSourceEntity(201U);
    msg.setDestination(58354U);
    msg.setDestinationEntity(137U);
    msg.beam_width = 0.011604850602051298;
    msg.beam_height = 0.22905195630565456;

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
    msg.setTimeStamp(0.3427671176702207);
    msg.setSource(18237U);
    msg.setSourceEntity(251U);
    msg.setDestination(14001U);
    msg.setDestinationEntity(14U);
    msg.beam_width = 0.6609759497289108;
    msg.beam_height = 0.6195955312004122;

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
    msg.setTimeStamp(0.7326367334767759);
    msg.setSource(41170U);
    msg.setSourceEntity(236U);
    msg.setDestination(35185U);
    msg.setDestinationEntity(198U);
    msg.beam_width = 0.17658061340050235;
    msg.beam_height = 0.9489493468835503;

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
    msg.setTimeStamp(0.4930350239829029);
    msg.setSource(26850U);
    msg.setSourceEntity(0U);
    msg.setDestination(18406U);
    msg.setDestinationEntity(116U);
    msg.sane = 200U;

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
    msg.setTimeStamp(0.7103660161614761);
    msg.setSource(16942U);
    msg.setSourceEntity(86U);
    msg.setDestination(45694U);
    msg.setDestinationEntity(227U);
    msg.sane = 73U;

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
    msg.setTimeStamp(0.7825707001346515);
    msg.setSource(39770U);
    msg.setSourceEntity(245U);
    msg.setDestination(42074U);
    msg.setDestinationEntity(233U);
    msg.sane = 214U;

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
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.008338781347829505);
    msg.setSource(51099U);
    msg.setSourceEntity(235U);
    msg.setDestination(34380U);
    msg.setDestinationEntity(206U);
    msg.value = 0.797049630708439;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.2616523259654241);
    msg.setSource(48287U);
    msg.setSourceEntity(38U);
    msg.setDestination(45388U);
    msg.setDestinationEntity(144U);
    msg.value = 0.11911543450799122;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.9542160176687403);
    msg.setSource(59981U);
    msg.setSourceEntity(57U);
    msg.setDestination(58649U);
    msg.setDestinationEntity(159U);
    msg.value = 0.3814089294494437;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.46029073173157176);
    msg.setSource(35027U);
    msg.setSourceEntity(23U);
    msg.setDestination(14689U);
    msg.setDestinationEntity(146U);
    msg.value = 0.32071464940325023;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.008534047801578293);
    msg.setSource(19837U);
    msg.setSourceEntity(123U);
    msg.setDestination(58924U);
    msg.setDestinationEntity(231U);
    msg.value = 0.3528190343629456;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.7456752079466489);
    msg.setSource(65273U);
    msg.setSourceEntity(2U);
    msg.setDestination(13241U);
    msg.setDestinationEntity(169U);
    msg.value = 0.9828727947454248;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.4350247595612413);
    msg.setSource(9478U);
    msg.setSourceEntity(40U);
    msg.setDestination(20233U);
    msg.setDestinationEntity(138U);
    msg.value = 0.849044830326002;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.9798373785057245);
    msg.setSource(21254U);
    msg.setSourceEntity(39U);
    msg.setDestination(62346U);
    msg.setDestinationEntity(42U);
    msg.value = 0.18662667935940258;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.20456717424186577);
    msg.setSource(45637U);
    msg.setSourceEntity(117U);
    msg.setDestination(19993U);
    msg.setDestinationEntity(182U);
    msg.value = 0.21744554127871507;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
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
    msg.setTimeStamp(0.6682121450352138);
    msg.setSource(104U);
    msg.setSourceEntity(139U);
    msg.setDestination(1749U);
    msg.setDestinationEntity(151U);
    msg.id = 43U;
    msg.zoom = 86U;
    msg.action = 61U;

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
    msg.setTimeStamp(0.6283078006981024);
    msg.setSource(4318U);
    msg.setSourceEntity(147U);
    msg.setDestination(34254U);
    msg.setDestinationEntity(207U);
    msg.id = 204U;
    msg.zoom = 134U;
    msg.action = 164U;

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
    msg.setTimeStamp(0.9495858341516152);
    msg.setSource(6575U);
    msg.setSourceEntity(223U);
    msg.setDestination(1538U);
    msg.setDestinationEntity(90U);
    msg.id = 151U;
    msg.zoom = 251U;
    msg.action = 113U;

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
    msg.setTimeStamp(0.5042535309434425);
    msg.setSource(30363U);
    msg.setSourceEntity(126U);
    msg.setDestination(23322U);
    msg.setDestinationEntity(120U);
    msg.id = 145U;
    msg.value = 0.9783761622143977;

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
    msg.setTimeStamp(0.6968658906824218);
    msg.setSource(2381U);
    msg.setSourceEntity(158U);
    msg.setDestination(57602U);
    msg.setDestinationEntity(213U);
    msg.id = 43U;
    msg.value = 0.6168409743332531;

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
    msg.setTimeStamp(0.6638814553765099);
    msg.setSource(41930U);
    msg.setSourceEntity(33U);
    msg.setDestination(50055U);
    msg.setDestinationEntity(213U);
    msg.id = 160U;
    msg.value = 0.4817967192655386;

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
    msg.setTimeStamp(0.4519455417200463);
    msg.setSource(13211U);
    msg.setSourceEntity(199U);
    msg.setDestination(2456U);
    msg.setDestinationEntity(185U);
    msg.id = 177U;
    msg.value = 0.8692724492734432;

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
    msg.setTimeStamp(0.9930326871192888);
    msg.setSource(51400U);
    msg.setSourceEntity(214U);
    msg.setDestination(40999U);
    msg.setDestinationEntity(247U);
    msg.id = 37U;
    msg.value = 0.5048218851592948;

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
    msg.setTimeStamp(0.07722065655993449);
    msg.setSource(53915U);
    msg.setSourceEntity(50U);
    msg.setDestination(17446U);
    msg.setDestinationEntity(116U);
    msg.id = 147U;
    msg.value = 0.30663648627685813;

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
    msg.setTimeStamp(0.21389767863838605);
    msg.setSource(6269U);
    msg.setSourceEntity(102U);
    msg.setDestination(62326U);
    msg.setDestinationEntity(102U);
    msg.id = 219U;
    msg.angle = 0.6315043096693852;

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
    msg.setTimeStamp(0.48824652036436844);
    msg.setSource(44952U);
    msg.setSourceEntity(112U);
    msg.setDestination(9412U);
    msg.setDestinationEntity(33U);
    msg.id = 46U;
    msg.angle = 0.27053382802081904;

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
    msg.setTimeStamp(0.7471646039362012);
    msg.setSource(44614U);
    msg.setSourceEntity(169U);
    msg.setDestination(59170U);
    msg.setDestinationEntity(167U);
    msg.id = 178U;
    msg.angle = 0.7975843662090443;

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
    msg.setTimeStamp(0.9363934198313667);
    msg.setSource(117U);
    msg.setSourceEntity(102U);
    msg.setDestination(48117U);
    msg.setDestinationEntity(185U);
    msg.op = 125U;
    msg.actions.assign("TVLKLMGOSJUGJCCLVXBJEYTLSIZDWYAHAMYVGXBFOIFTBIPWZBMCKSYGTDEQRFNINNBEZQBXIAEJMWBZYYRQTKZORVWNFIEMNFBMEZYSGXIRNUDQHESVCGF");

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
    msg.setTimeStamp(0.7969975642152092);
    msg.setSource(12794U);
    msg.setSourceEntity(187U);
    msg.setDestination(14153U);
    msg.setDestinationEntity(52U);
    msg.op = 182U;
    msg.actions.assign("QCMPQVKKXKQIVESZDXCLPIJYAHUZWDLMSLNEVRHFWZURMMQBTTGAPYYBBMVKGAVXGJEHWUFKDNXRWCACSZAWKBKBQJLUKEUPGFDWYYSOCWO");

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
    msg.setTimeStamp(0.19294966955971438);
    msg.setSource(51841U);
    msg.setSourceEntity(10U);
    msg.setDestination(58114U);
    msg.setDestinationEntity(44U);
    msg.op = 218U;
    msg.actions.assign("UMBENTQGGPQEXBHJEKHLSDABNOK");

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
    msg.setTimeStamp(0.8554308477340262);
    msg.setSource(55216U);
    msg.setSourceEntity(226U);
    msg.setDestination(572U);
    msg.setDestinationEntity(215U);
    msg.actions.assign("LDDRQLZRRPLITSYJUVHISHKSAZABTTQRGXAJJNMCEKNJFZYFSGKBOTWWOSDTEPGAEXWBMFDSNVHFYQDANXCKUUUCJXMIMFIBVHIFMCZOFTMAQVJSMWUOIIFXKOECGSTYVZINVPOLNVZSXRPVPLPOREWQTCYOYBQP");

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
    msg.setTimeStamp(0.49742923798784366);
    msg.setSource(25980U);
    msg.setSourceEntity(71U);
    msg.setDestination(32536U);
    msg.setDestinationEntity(4U);
    msg.actions.assign("LIQEPGXFUURWZ");

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
    msg.setTimeStamp(0.5301080677927007);
    msg.setSource(53270U);
    msg.setSourceEntity(187U);
    msg.setDestination(40989U);
    msg.setDestinationEntity(119U);
    msg.actions.assign("VTFXIESQSYAFNOEYCCXGETTITAVCDRKAVDUZGBNCZJHPLROLAKOFRCFPADQNOBMLZBCXQSPWNYGHCVJHUPLLKENXMDWLTBDCKIMMQPQHFODRNPOTXARFMETZUGQAWFHXJGMYWOTPSEBXWNSTCEFSFWLVDKXQNHPUZJJQWWSZEGZIIIPRUHBJYQSMOJGLZHHVBRIBGBRWIGU");

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
    msg.setTimeStamp(0.7273168150530869);
    msg.setSource(49298U);
    msg.setSourceEntity(29U);
    msg.setDestination(61452U);
    msg.setDestinationEntity(187U);
    msg.button = 30U;
    msg.value = 208U;

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
    msg.setTimeStamp(0.7909175075277769);
    msg.setSource(25934U);
    msg.setSourceEntity(180U);
    msg.setDestination(44129U);
    msg.setDestinationEntity(159U);
    msg.button = 60U;
    msg.value = 155U;

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
    msg.setTimeStamp(0.7336339717511213);
    msg.setSource(11849U);
    msg.setSourceEntity(98U);
    msg.setDestination(39652U);
    msg.setDestinationEntity(59U);
    msg.button = 67U;
    msg.value = 236U;

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
    msg.setTimeStamp(0.5667050889043959);
    msg.setSource(40377U);
    msg.setSourceEntity(88U);
    msg.setDestination(51658U);
    msg.setDestinationEntity(29U);
    msg.op = 56U;
    msg.text.assign("UQSXGSDTIFUBUJVDOBYKUTAVXERIBLMFIWIHLRQWTZUMKQTWERJNWZGSUZHFYYWZQETCYEYDTZKFPBIONRUJQOPNSDMZVCGKQNSXAMU");

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
    msg.setTimeStamp(0.7140074535862636);
    msg.setSource(19111U);
    msg.setSourceEntity(41U);
    msg.setDestination(13095U);
    msg.setDestinationEntity(155U);
    msg.op = 32U;
    msg.text.assign("MSPIUOCSTTSKPLJLXMCBQGLXVWNVBMSRXMXKOSFXFJHWHQSXQCRZZUYQEPPAUOLOQEDSVHKFRUOABZFWADCNKUNEUTVIXNBTOYYGVMVYAEAOJJEHEFLTYEKWFTXCKALELTBBVRNQAM");

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
    msg.setTimeStamp(0.6772279849154068);
    msg.setSource(43924U);
    msg.setSourceEntity(135U);
    msg.setDestination(41249U);
    msg.setDestinationEntity(225U);
    msg.op = 214U;
    msg.text.assign("VPNAFZPDMNNUCYLSNCUZBTEQOJSQGHYUPANVHQMQEAKADICALPWPIMGQYUJZNIBBOFXBPZCOHXVJKGZZFIISYHDWVUJMGNFFDBFUXEBCPTPSNBKSTUSHCMWLMOBIRRTWXLLPFKSEKTXHESROODLBNLPKWTYAFXIVBZRAJDRNFOQUGCLDUFMEZJZRDQOZGELTWTEICGGVLCMYJSHGTXJEAAVOSYDMKAWJYWVYGMCJKHHQXQVRIWHEKR");

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
    msg.setTimeStamp(0.19616626473280363);
    msg.setSource(59346U);
    msg.setSourceEntity(172U);
    msg.setDestination(21323U);
    msg.setDestinationEntity(31U);
    msg.op = 169U;
    msg.time_remain = 0.64135843931786;
    msg.sched_time = 0.050456182429764684;

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
    msg.setTimeStamp(0.23806128326729115);
    msg.setSource(17281U);
    msg.setSourceEntity(175U);
    msg.setDestination(50829U);
    msg.setDestinationEntity(61U);
    msg.op = 168U;
    msg.time_remain = 0.6669860917616576;
    msg.sched_time = 0.27969831922326016;

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
    msg.setTimeStamp(0.5241866791348833);
    msg.setSource(43672U);
    msg.setSourceEntity(26U);
    msg.setDestination(12594U);
    msg.setDestinationEntity(250U);
    msg.op = 226U;
    msg.time_remain = 0.2666413581344318;
    msg.sched_time = 0.1620022382103966;

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
    msg.setTimeStamp(0.3051661486405579);
    msg.setSource(57380U);
    msg.setSourceEntity(211U);
    msg.setDestination(22896U);
    msg.setDestinationEntity(211U);
    msg.name.assign("CNCEXBLXWCHFYHOAMCUJKHKDFTOCJRBFJJLDICLUERJWTALRUSHISCNBRUVCUHZGODQWHPBBPITMYDARWYXWBAFPOXQGLVUPEPLYDJJSZTNGCOMXSMAPFBXIGZGQVQVKQGBUTRGVFRDKAMXOWLSATNZKWK");
    msg.op = 32U;
    msg.sched_time = 0.11135440714023415;

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
    msg.setTimeStamp(0.06659166589050802);
    msg.setSource(53162U);
    msg.setSourceEntity(189U);
    msg.setDestination(48406U);
    msg.setDestinationEntity(83U);
    msg.name.assign("MWWWIHFYBUVQEVFIYVWVMIAKHNLIJSPRFIHAQTDB");
    msg.op = 229U;
    msg.sched_time = 0.9601423176175994;

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
    msg.setTimeStamp(0.6811803427884213);
    msg.setSource(40903U);
    msg.setSourceEntity(10U);
    msg.setDestination(59592U);
    msg.setDestinationEntity(14U);
    msg.name.assign("ZQVLEDIKEDKELFXVYINDTWOJNCGQROHOFLXNLQUXZUZPSZNMNQMOSRFXWHJYVDCUAFZZIEOHEALCDSGBKJFKLLKOGSMTAFXBGJTNZPNCFSBXCEVGINIQCMQRWDJYWTNCJEHUTKPVSSDPXIFMJHBTUCIIXXMWBRAROYHBIUUQHGUQWYABGMZBAAYZKQUPJYFRMDPYWGWLOLYRUVQJSWKVDRPEPPPAHG");
    msg.op = 251U;
    msg.sched_time = 0.5468488479433393;

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
    msg.setTimeStamp(0.6564228577181027);
    msg.setSource(31021U);
    msg.setSourceEntity(190U);
    msg.setDestination(6809U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.7066751760658496);
    msg.setSource(60883U);
    msg.setSourceEntity(89U);
    msg.setDestination(57861U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.3042026553947883);
    msg.setSource(22863U);
    msg.setSourceEntity(209U);
    msg.setDestination(47027U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.18579848125411202);
    msg.setSource(59884U);
    msg.setSourceEntity(92U);
    msg.setDestination(62661U);
    msg.setDestinationEntity(163U);
    msg.name.assign("IHAHFJXECIEQBDSJANWQCXKLJRGMWITPKZL");
    msg.state = 83U;

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
    msg.setTimeStamp(0.015723818551671043);
    msg.setSource(42117U);
    msg.setSourceEntity(138U);
    msg.setDestination(49902U);
    msg.setDestinationEntity(193U);
    msg.name.assign("WZFYTJQGEAGRCNHIQRNNBGXODDBPVSOVCTEPSSWJOUAAIAZVKORUCIQPPCNXHCREAHZKRMPMFVIEGBGPNGYLDCUDKRMV");
    msg.state = 251U;

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
    msg.setTimeStamp(0.7959400942524344);
    msg.setSource(3498U);
    msg.setSourceEntity(56U);
    msg.setDestination(35178U);
    msg.setDestinationEntity(93U);
    msg.name.assign("OYWYUFVIHDUAVOHTSYQADQPLLDFRCSGXSGFHDRPLAVHHMIUANLIXTLBVOYQREUEOMIMJDQSYJPDZPSGDWEUFJKFMRZYJSEFSLKVNYTCREGHEKPLWPMZFSQDTCWTVHGMFAEHHUGXCMWXXFQBCZKWJSNPBIQVOGUNCZVGWVA");
    msg.state = 33U;

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
    msg.setTimeStamp(0.012045179175893206);
    msg.setSource(53104U);
    msg.setSourceEntity(251U);
    msg.setDestination(15968U);
    msg.setDestinationEntity(235U);
    msg.name.assign("LSRLGEDPUSOMAIFNSOKDPDFTZBZGPMGBXXURSSYBZCOUINSKJJPXRFCYGOKYNOPCHRZCSRVYDPQAJMRQEQHRZDPFKIHXOAGZQDYNAOATWTWNVFHOBWBMTHNEEIFLIPBGZLYCVWEBBPESTWUMBAVFKQMRWLGKLZDKJAMFGIAYVJHXTRTGJV");
    msg.value = 139U;

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
    msg.setTimeStamp(0.25049940400018367);
    msg.setSource(12999U);
    msg.setSourceEntity(137U);
    msg.setDestination(16751U);
    msg.setDestinationEntity(166U);
    msg.name.assign("EFFURJFXSQUZIPHRRRGBQXDYGBEUAHMFTOJBWTFZINHOYRAAATMQCZGLFDZSSVCASUXGLTGBCIROINNYWPSCIPNAFJQHHHHIRKFWSCPLIIKMZDJYOEVLSISIJQWRHEOUXQOBLTXKQTQWEXYEZKENPYLXPUEFMDLKKAHYEVUAPZNYCVUUZXYDLTMOH");
    msg.value = 74U;

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
    msg.setTimeStamp(0.654973007773613);
    msg.setSource(47528U);
    msg.setSourceEntity(30U);
    msg.setDestination(50127U);
    msg.setDestinationEntity(83U);
    msg.name.assign("FWZANIZNTCFHWFTMJHYRYZBMJJSZUDMHNVIZDUSVRPDVTHLLPCIZRBGPXWU");
    msg.value = 187U;

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
    msg.setTimeStamp(0.4333649023439866);
    msg.setSource(41149U);
    msg.setSourceEntity(227U);
    msg.setDestination(5984U);
    msg.setDestinationEntity(73U);
    msg.name.assign("ZSBVNSWTQNCTRMZGMQMDHFYIKNLOH");

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
    msg.setTimeStamp(0.6497347540504367);
    msg.setSource(15178U);
    msg.setSourceEntity(251U);
    msg.setDestination(14323U);
    msg.setDestinationEntity(217U);
    msg.name.assign("UENFXDBXHCXRMSLWZAKEDARVYTOJJYTQMMUDQZTLEUUXMDNLFQYOBQWUBNWLUJONELIKCIKRTBQIEIPTMYASPOBUORCSWRPXFHREPXGSZZEFLZYHPFVVKJBKXVIVADWSNVUFHJYBISINEEXZZHQTGOHBBPCGCDKQWUQGYLPGAAVEJMNDYJMAXOSGTWISHSVJGOMHIKRODTBPRLKYVNFQNPAGKNFMRVOPJCCHW");

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
    msg.setTimeStamp(0.6094038037187315);
    msg.setSource(17706U);
    msg.setSourceEntity(200U);
    msg.setDestination(4821U);
    msg.setDestinationEntity(226U);
    msg.name.assign("VSRYSMTCOSNOZCGEXLXFRFMKBKJHFDHVVGYOSKUXDECATXOBRDEDTBQTVYFENNDKMKOGXRQORMIZSFPDHUHUYMHBILIXCST");

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
    msg.setTimeStamp(0.8456640280832866);
    msg.setSource(7413U);
    msg.setSourceEntity(53U);
    msg.setDestination(34306U);
    msg.setDestinationEntity(246U);
    msg.name.assign("JKDXOWFOEEWDAUWIGMTHOLVNLDSSTPIIKBENPLPKSKORAYCBFYVIUELNO");
    msg.value = 78U;

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
    msg.setTimeStamp(0.12453537594666342);
    msg.setSource(46273U);
    msg.setSourceEntity(235U);
    msg.setDestination(14319U);
    msg.setDestinationEntity(143U);
    msg.name.assign("VEHUCGOLMHAUSVAOTYLOJQXGWCIFUXKDRZONSFQGZWAYLFWPJYPHDEBQPBVNVMTVLLKBIKSICXMVZENOEGRPTLXZHSQECWJQIZJRFBKJXSBMAXUBFYHVXVBVEIFQGZARSYTRDNNTBNKFYIURZRMJLHZANFRPKYDCWIAZDNKFLWUOEAMBL");
    msg.value = 20U;

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
    msg.setTimeStamp(0.9383353173273277);
    msg.setSource(41009U);
    msg.setSourceEntity(134U);
    msg.setDestination(1107U);
    msg.setDestinationEntity(203U);
    msg.name.assign("ADUVASOPJREYIZHYRAR");
    msg.value = 10U;

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
    msg.setTimeStamp(0.8248370368301614);
    msg.setSource(10273U);
    msg.setSourceEntity(123U);
    msg.setDestination(53459U);
    msg.setDestinationEntity(61U);
    msg.id = 87U;
    msg.period = 2193911565U;
    msg.duty_cycle = 1040464150U;

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
    msg.setTimeStamp(0.9112687649923986);
    msg.setSource(54859U);
    msg.setSourceEntity(164U);
    msg.setDestination(38255U);
    msg.setDestinationEntity(135U);
    msg.id = 177U;
    msg.period = 20189436U;
    msg.duty_cycle = 1389724706U;

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
    msg.setTimeStamp(0.045942262898351904);
    msg.setSource(22515U);
    msg.setSourceEntity(46U);
    msg.setDestination(4138U);
    msg.setDestinationEntity(227U);
    msg.id = 41U;
    msg.period = 2323573840U;
    msg.duty_cycle = 1081606962U;

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
    msg.setTimeStamp(0.43655538550029327);
    msg.setSource(19912U);
    msg.setSourceEntity(19U);
    msg.setDestination(47497U);
    msg.setDestinationEntity(63U);
    msg.id = 234U;
    msg.period = 208504932U;
    msg.duty_cycle = 3327928107U;

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
    msg.setTimeStamp(0.8281987664985946);
    msg.setSource(51311U);
    msg.setSourceEntity(35U);
    msg.setDestination(43341U);
    msg.setDestinationEntity(178U);
    msg.id = 211U;
    msg.period = 97098133U;
    msg.duty_cycle = 2059375169U;

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
    msg.setTimeStamp(0.012071212232207307);
    msg.setSource(63501U);
    msg.setSourceEntity(116U);
    msg.setDestination(27146U);
    msg.setDestinationEntity(1U);
    msg.id = 180U;
    msg.period = 2878642710U;
    msg.duty_cycle = 3421980572U;

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
    msg.setTimeStamp(0.7388156878369304);
    msg.setSource(50362U);
    msg.setSourceEntity(135U);
    msg.setDestination(26682U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.4566177358783007;
    msg.lon = 0.14186294150122147;
    msg.height = 0.17990394821898947;
    msg.x = 0.6074755242244694;
    msg.y = 0.4856665817167657;
    msg.z = 0.8692508833753275;
    msg.phi = 0.707580132960425;
    msg.theta = 0.030196473263894297;
    msg.psi = 0.5637576328361877;
    msg.u = 0.9707791264617649;
    msg.v = 0.07998155923839323;
    msg.w = 0.8638687090057023;
    msg.vx = 0.21892404493912077;
    msg.vy = 0.10387618892068462;
    msg.vz = 0.15942507652728688;
    msg.p = 0.6330414123348891;
    msg.q = 0.6351269702960629;
    msg.r = 0.850760279558325;
    msg.depth = 0.8867900784184983;
    msg.alt = 0.5146855337220907;

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
    msg.setTimeStamp(0.4748977728562974);
    msg.setSource(65472U);
    msg.setSourceEntity(113U);
    msg.setDestination(43076U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.8143020079479555;
    msg.lon = 0.5012078302020324;
    msg.height = 0.7635303537518544;
    msg.x = 0.23018237375862005;
    msg.y = 0.5894378446331562;
    msg.z = 0.644185212476755;
    msg.phi = 0.979643130577252;
    msg.theta = 0.009765447564100915;
    msg.psi = 0.4350212539295285;
    msg.u = 0.7493878224226445;
    msg.v = 0.0004332404429817638;
    msg.w = 0.4424104643408302;
    msg.vx = 0.2314199665140323;
    msg.vy = 0.8868109174016215;
    msg.vz = 0.031625783881528924;
    msg.p = 0.945134566237234;
    msg.q = 0.2762701018107211;
    msg.r = 0.309873839587809;
    msg.depth = 0.9911418074260228;
    msg.alt = 0.16074761231221202;

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
    msg.setTimeStamp(0.461827029459015);
    msg.setSource(41162U);
    msg.setSourceEntity(140U);
    msg.setDestination(43635U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.8436931966745579;
    msg.lon = 0.5119503499452542;
    msg.height = 0.8607316458803013;
    msg.x = 0.6461617573390889;
    msg.y = 0.8252263711905351;
    msg.z = 0.11903336807795428;
    msg.phi = 0.13647698958263177;
    msg.theta = 0.3924744987609424;
    msg.psi = 0.6491297303674411;
    msg.u = 0.017030133407610948;
    msg.v = 0.753485268022057;
    msg.w = 0.11868935642001888;
    msg.vx = 0.20052894838543378;
    msg.vy = 0.8484699893768596;
    msg.vz = 0.36939943127763175;
    msg.p = 0.6357540387522224;
    msg.q = 0.524153535988165;
    msg.r = 0.7578104597757344;
    msg.depth = 0.5795176459736128;
    msg.alt = 0.494490423201867;

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
    msg.setTimeStamp(0.1205839112586613);
    msg.setSource(46944U);
    msg.setSourceEntity(132U);
    msg.setDestination(38313U);
    msg.setDestinationEntity(221U);
    msg.x = 0.3603973400277415;
    msg.y = 0.6055965256887719;
    msg.z = 0.9945934807230993;

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
    msg.setTimeStamp(0.928176498449996);
    msg.setSource(5895U);
    msg.setSourceEntity(75U);
    msg.setDestination(31910U);
    msg.setDestinationEntity(175U);
    msg.x = 0.7061474448212736;
    msg.y = 0.9005924757107131;
    msg.z = 0.8465980904792978;

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
    msg.setTimeStamp(0.363841741106697);
    msg.setSource(64978U);
    msg.setSourceEntity(235U);
    msg.setDestination(63126U);
    msg.setDestinationEntity(235U);
    msg.x = 0.4604536288781118;
    msg.y = 0.18790691731528364;
    msg.z = 0.8553829653688917;

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
    msg.setTimeStamp(0.08651913060725092);
    msg.setSource(36159U);
    msg.setSourceEntity(18U);
    msg.setDestination(46934U);
    msg.setDestinationEntity(193U);
    msg.value = 0.9217047214969935;

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
    msg.setTimeStamp(0.9255282618651076);
    msg.setSource(63138U);
    msg.setSourceEntity(66U);
    msg.setDestination(41012U);
    msg.setDestinationEntity(240U);
    msg.value = 0.09596101162740767;

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
    msg.setTimeStamp(0.03458756263093654);
    msg.setSource(40894U);
    msg.setSourceEntity(117U);
    msg.setDestination(46031U);
    msg.setDestinationEntity(209U);
    msg.value = 0.5934679373314674;

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
    msg.setTimeStamp(0.8953968767602735);
    msg.setSource(18417U);
    msg.setSourceEntity(227U);
    msg.setDestination(50699U);
    msg.setDestinationEntity(5U);
    msg.value = 0.9715179070000602;

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
    msg.setTimeStamp(0.8781885078882128);
    msg.setSource(56126U);
    msg.setSourceEntity(76U);
    msg.setDestination(21950U);
    msg.setDestinationEntity(53U);
    msg.value = 0.535700937573421;

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
    msg.setTimeStamp(0.693564970999473);
    msg.setSource(26785U);
    msg.setSourceEntity(170U);
    msg.setDestination(65269U);
    msg.setDestinationEntity(157U);
    msg.value = 0.7954075028802366;

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
    msg.setTimeStamp(0.34361301344594786);
    msg.setSource(22593U);
    msg.setSourceEntity(166U);
    msg.setDestination(5561U);
    msg.setDestinationEntity(149U);
    msg.x = 0.3204111965363172;
    msg.y = 0.2194853653585307;
    msg.z = 0.4458257422700118;
    msg.phi = 0.22580125785898786;
    msg.theta = 0.9248337830302703;
    msg.psi = 0.9459751940063675;
    msg.p = 0.888306636130131;
    msg.q = 0.46491308239223106;
    msg.r = 0.46484810553628353;
    msg.u = 0.6030322522724977;
    msg.v = 0.20929620117459624;
    msg.w = 0.49474143112972;
    msg.bias_psi = 0.9969525788538055;
    msg.bias_r = 0.6064229980524791;

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
    msg.setTimeStamp(0.14070914735514373);
    msg.setSource(15511U);
    msg.setSourceEntity(227U);
    msg.setDestination(62068U);
    msg.setDestinationEntity(200U);
    msg.x = 0.03599418007732935;
    msg.y = 0.475848069850749;
    msg.z = 0.4081096424924511;
    msg.phi = 0.5566511955405672;
    msg.theta = 0.9491886963040652;
    msg.psi = 0.9297485930472084;
    msg.p = 0.8185300933759393;
    msg.q = 0.5328167905082484;
    msg.r = 0.7722402781496478;
    msg.u = 0.14026314884970947;
    msg.v = 0.13801247829719532;
    msg.w = 0.4102028234569163;
    msg.bias_psi = 0.4142136267979438;
    msg.bias_r = 0.1854824042993728;

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
    msg.setTimeStamp(0.07663734736516814);
    msg.setSource(33209U);
    msg.setSourceEntity(236U);
    msg.setDestination(49426U);
    msg.setDestinationEntity(218U);
    msg.x = 0.8521933620152723;
    msg.y = 0.6851647775119117;
    msg.z = 0.9972106687719866;
    msg.phi = 0.6081086143431665;
    msg.theta = 0.06502283456558844;
    msg.psi = 0.9386362495041006;
    msg.p = 0.5270064710206795;
    msg.q = 0.37990753226109863;
    msg.r = 0.4932098299140377;
    msg.u = 0.2726750837760612;
    msg.v = 0.9263389760976081;
    msg.w = 0.6420025008212686;
    msg.bias_psi = 0.07305110693157113;
    msg.bias_r = 0.07381456794572883;

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
    msg.setTimeStamp(0.8485300673603939);
    msg.setSource(27601U);
    msg.setSourceEntity(235U);
    msg.setDestination(15039U);
    msg.setDestinationEntity(55U);
    msg.bias_psi = 0.6265776998948194;
    msg.bias_r = 0.7381631776501937;
    msg.cog = 0.1661385192485737;
    msg.cyaw = 0.9405716515100354;
    msg.lbl_rej_level = 0.1963789662268426;
    msg.gps_rej_level = 0.9561672726971016;
    msg.custom_x = 0.54658440981225;
    msg.custom_y = 0.023315838564432423;
    msg.custom_z = 0.05173582969513357;

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
    msg.setTimeStamp(0.5694097205472095);
    msg.setSource(21131U);
    msg.setSourceEntity(125U);
    msg.setDestination(9827U);
    msg.setDestinationEntity(228U);
    msg.bias_psi = 0.06486022375483347;
    msg.bias_r = 0.9323811130761251;
    msg.cog = 0.8362733544763759;
    msg.cyaw = 0.6121231052684825;
    msg.lbl_rej_level = 0.9253840745467679;
    msg.gps_rej_level = 0.6283471562404763;
    msg.custom_x = 0.6770222282960979;
    msg.custom_y = 0.22816759710757617;
    msg.custom_z = 0.7497786559593159;

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
    msg.setTimeStamp(0.47039898309798855);
    msg.setSource(28150U);
    msg.setSourceEntity(194U);
    msg.setDestination(20075U);
    msg.setDestinationEntity(19U);
    msg.bias_psi = 0.7719397206699677;
    msg.bias_r = 0.6930636789199485;
    msg.cog = 0.04977719030422334;
    msg.cyaw = 0.7553109603941441;
    msg.lbl_rej_level = 0.6347846159570644;
    msg.gps_rej_level = 0.8915303335497107;
    msg.custom_x = 0.17821715847675568;
    msg.custom_y = 0.2751087381660142;
    msg.custom_z = 0.7121091991404487;

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
    msg.setTimeStamp(0.08655144657654079);
    msg.setSource(53618U);
    msg.setSourceEntity(20U);
    msg.setDestination(23395U);
    msg.setDestinationEntity(149U);
    msg.utc_time = 0.9176864357594552;
    msg.reason = 95U;

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
    msg.setTimeStamp(0.6128067441564564);
    msg.setSource(30202U);
    msg.setSourceEntity(225U);
    msg.setDestination(56937U);
    msg.setDestinationEntity(76U);
    msg.utc_time = 0.8236535411829715;
    msg.reason = 177U;

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
    msg.setTimeStamp(0.7443821056665162);
    msg.setSource(60602U);
    msg.setSourceEntity(197U);
    msg.setDestination(42420U);
    msg.setDestinationEntity(16U);
    msg.utc_time = 0.9383961701215322;
    msg.reason = 2U;

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
    msg.setTimeStamp(0.36131217953583017);
    msg.setSource(61070U);
    msg.setSourceEntity(40U);
    msg.setDestination(5203U);
    msg.setDestinationEntity(165U);
    msg.id = 26U;
    msg.range = 0.23583086631948436;
    msg.acceptance = 225U;

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
    msg.setTimeStamp(0.5269069476322105);
    msg.setSource(29628U);
    msg.setSourceEntity(135U);
    msg.setDestination(5628U);
    msg.setDestinationEntity(103U);
    msg.id = 167U;
    msg.range = 0.3790740325173423;
    msg.acceptance = 2U;

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
    msg.setTimeStamp(0.7244952835531225);
    msg.setSource(63601U);
    msg.setSourceEntity(9U);
    msg.setDestination(45980U);
    msg.setDestinationEntity(72U);
    msg.id = 236U;
    msg.range = 0.010152602115777842;
    msg.acceptance = 89U;

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
    msg.setTimeStamp(0.761625196990721);
    msg.setSource(27359U);
    msg.setSourceEntity(44U);
    msg.setDestination(10420U);
    msg.setDestinationEntity(131U);
    msg.type = 23U;
    msg.reason = 113U;
    msg.value = 0.373313729592049;
    msg.timestep = 0.011681039776571311;

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
    msg.setTimeStamp(0.41133619403280286);
    msg.setSource(22212U);
    msg.setSourceEntity(224U);
    msg.setDestination(57213U);
    msg.setDestinationEntity(120U);
    msg.type = 22U;
    msg.reason = 144U;
    msg.value = 0.11769040206492165;
    msg.timestep = 0.22129558228373658;

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
    msg.setTimeStamp(0.34903713693866156);
    msg.setSource(54025U);
    msg.setSourceEntity(139U);
    msg.setDestination(52679U);
    msg.setDestinationEntity(229U);
    msg.type = 33U;
    msg.reason = 223U;
    msg.value = 0.8971070338198317;
    msg.timestep = 0.7125577388114677;

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
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.11403185357912338);
    msg.setSource(63266U);
    msg.setSourceEntity(37U);
    msg.setDestination(65311U);
    msg.setDestinationEntity(250U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CDLDWZDNAHQKFJDNBQVIWEFEHSAGYTZXEBIPVPZXYCKFPFCNTQSBXNYRJXASXBQIUOMGGJZJYWBOOLGFMQXTPJCETRAJHGLAILASRVVMMMWETCZYPWNTVPOZGUGQHDBOPRGSDKNKLVISEFZEHVUJWYANPACCHXHPQJAYKIOEMXILHTEKXRATFBRUTLOUWZD");
    tmp_msg_0.lat = 0.6844996177408676;
    tmp_msg_0.lon = 0.03938384699239783;
    tmp_msg_0.depth = 0.4299746635167664;
    tmp_msg_0.query_channel = 147U;
    tmp_msg_0.reply_channel = 218U;
    tmp_msg_0.transponder_delay = 131U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.03680977709807187;
    msg.y = 0.11471256684002762;
    msg.var_x = 0.5194867683706373;
    msg.var_y = 0.23999499497741683;
    msg.distance = 0.6621016476476195;

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
    msg.setTimeStamp(0.7346293361540146);
    msg.setSource(12567U);
    msg.setSourceEntity(226U);
    msg.setDestination(54703U);
    msg.setDestinationEntity(158U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VLWIETYBYMXXVGKJCBJUQPHRKOTLFADMRAWZBONAKAPSUOOQHGILQZMFPZKTHDOFUGZDKSNNRFGLTIECUCXZFGJSXXEVMNGQBYQRCGGYKMEECWDKTEXRLCXKQZWAEDJPHIORTWLTNPIXOAYVTWAVLNIOYHSUSVMMRDRDFZVEHPBIYBMGEVFBYUU");
    tmp_msg_0.lat = 0.9169886283932664;
    tmp_msg_0.lon = 0.4021124567048727;
    tmp_msg_0.depth = 0.6957651156672984;
    tmp_msg_0.query_channel = 194U;
    tmp_msg_0.reply_channel = 230U;
    tmp_msg_0.transponder_delay = 76U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7470918512057823;
    msg.y = 0.8365147926354849;
    msg.var_x = 0.3313333844284838;
    msg.var_y = 0.7705993105390279;
    msg.distance = 0.6487092993038204;

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
    msg.setTimeStamp(0.17238102288948176);
    msg.setSource(8826U);
    msg.setSourceEntity(156U);
    msg.setDestination(4387U);
    msg.setDestinationEntity(122U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SMSUNCTFQVJLZHRJUVJVLKJUQDVQXQQQFKJXAGTFRHACZQRGPTUBOISLDAZLZJLBYCBGXYGNPXYGHGDKHSSDMGPIPMETOSONRHGZAOXTJLWWNSIHZBMVCMKXVTQJBDVOJUCFILEEDEBXLFBFQAUKKPEDFDAWUNNKPFKYVOHOCACRXIAESUWCVNSHGHWBKZBROCDJELYZNTTFRIKPDMVTRPABYUYZFUZ");
    tmp_msg_0.lat = 0.9879545621978117;
    tmp_msg_0.lon = 0.4188722741076609;
    tmp_msg_0.depth = 0.6273879346171083;
    tmp_msg_0.query_channel = 229U;
    tmp_msg_0.reply_channel = 160U;
    tmp_msg_0.transponder_delay = 197U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8900872172419485;
    msg.y = 0.12776152062521762;
    msg.var_x = 0.06226487970291905;
    msg.var_y = 0.2543414407909814;
    msg.distance = 0.8114546442793019;

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
    msg.setTimeStamp(0.7691363113582927);
    msg.setSource(46774U);
    msg.setSourceEntity(40U);
    msg.setDestination(15814U);
    msg.setDestinationEntity(241U);
    msg.state = 145U;

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
    msg.setTimeStamp(0.5836067458930991);
    msg.setSource(19256U);
    msg.setSourceEntity(44U);
    msg.setDestination(14758U);
    msg.setDestinationEntity(108U);
    msg.state = 79U;

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
    msg.setTimeStamp(0.6502486304524515);
    msg.setSource(8250U);
    msg.setSourceEntity(119U);
    msg.setDestination(32281U);
    msg.setDestinationEntity(41U);
    msg.state = 144U;

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
    msg.setTimeStamp(0.7071801231702952);
    msg.setSource(2081U);
    msg.setSourceEntity(218U);
    msg.setDestination(18944U);
    msg.setDestinationEntity(40U);
    msg.x = 0.9053199691976529;
    msg.y = 0.5259704028257627;
    msg.z = 0.2860489497558967;

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
    msg.setTimeStamp(0.04444289112000954);
    msg.setSource(31014U);
    msg.setSourceEntity(201U);
    msg.setDestination(32200U);
    msg.setDestinationEntity(146U);
    msg.x = 0.19942728768391316;
    msg.y = 0.7294466151044982;
    msg.z = 0.8602450065659413;

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
    msg.setTimeStamp(0.5995754763534562);
    msg.setSource(47390U);
    msg.setSourceEntity(178U);
    msg.setDestination(53505U);
    msg.setDestinationEntity(85U);
    msg.x = 0.23007035133218545;
    msg.y = 0.13120747126750754;
    msg.z = 0.27897738327820376;

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
    msg.setTimeStamp(0.14988477263533206);
    msg.setSource(60304U);
    msg.setSourceEntity(40U);
    msg.setDestination(33072U);
    msg.setDestinationEntity(95U);
    msg.value = 0.40889063090880395;

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
    msg.setTimeStamp(0.5690969080610121);
    msg.setSource(32107U);
    msg.setSourceEntity(219U);
    msg.setDestination(18287U);
    msg.setDestinationEntity(193U);
    msg.value = 0.25090536225701354;

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
    msg.setTimeStamp(0.12338298836343287);
    msg.setSource(62099U);
    msg.setSourceEntity(123U);
    msg.setDestination(16638U);
    msg.setDestinationEntity(28U);
    msg.value = 0.24994234438073804;

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
    msg.setTimeStamp(0.2607543431620696);
    msg.setSource(20757U);
    msg.setSourceEntity(91U);
    msg.setDestination(14407U);
    msg.setDestinationEntity(180U);
    msg.value = 0.80122529422636;
    msg.z_units = 213U;

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
    msg.setTimeStamp(0.3498406010424757);
    msg.setSource(9186U);
    msg.setSourceEntity(31U);
    msg.setDestination(5615U);
    msg.setDestinationEntity(178U);
    msg.value = 0.8259528407786898;
    msg.z_units = 98U;

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
    msg.setTimeStamp(0.7814905373247547);
    msg.setSource(36417U);
    msg.setSourceEntity(177U);
    msg.setDestination(36730U);
    msg.setDestinationEntity(194U);
    msg.value = 0.11734130871579329;
    msg.z_units = 135U;

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
    msg.setTimeStamp(0.38313737046035146);
    msg.setSource(7520U);
    msg.setSourceEntity(162U);
    msg.setDestination(40866U);
    msg.setDestinationEntity(39U);
    msg.value = 0.4596568061650712;
    msg.speed_units = 13U;

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
    msg.setTimeStamp(0.7061287769773301);
    msg.setSource(28676U);
    msg.setSourceEntity(75U);
    msg.setDestination(19962U);
    msg.setDestinationEntity(66U);
    msg.value = 0.8718223541565563;
    msg.speed_units = 228U;

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
    msg.setTimeStamp(0.11945103261784229);
    msg.setSource(29477U);
    msg.setSourceEntity(27U);
    msg.setDestination(29419U);
    msg.setDestinationEntity(197U);
    msg.value = 0.09731937704421556;
    msg.speed_units = 244U;

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
    msg.setTimeStamp(0.24793270088617136);
    msg.setSource(32453U);
    msg.setSourceEntity(48U);
    msg.setDestination(58217U);
    msg.setDestinationEntity(96U);
    msg.value = 0.015317654862929131;

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
    msg.setTimeStamp(0.47783907020862193);
    msg.setSource(21922U);
    msg.setSourceEntity(216U);
    msg.setDestination(49248U);
    msg.setDestinationEntity(94U);
    msg.value = 0.878709187576609;

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
    msg.setTimeStamp(0.6945502558622021);
    msg.setSource(40415U);
    msg.setSourceEntity(67U);
    msg.setDestination(59906U);
    msg.setDestinationEntity(108U);
    msg.value = 0.10966160674842995;

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
    msg.setTimeStamp(0.5127234472877376);
    msg.setSource(52369U);
    msg.setSourceEntity(162U);
    msg.setDestination(44462U);
    msg.setDestinationEntity(237U);
    msg.value = 0.9427869535050378;

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
    msg.setTimeStamp(0.3698964879024079);
    msg.setSource(62969U);
    msg.setSourceEntity(11U);
    msg.setDestination(31232U);
    msg.setDestinationEntity(155U);
    msg.value = 0.9770223388565096;

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
    msg.setTimeStamp(0.4055833947323827);
    msg.setSource(50823U);
    msg.setSourceEntity(20U);
    msg.setDestination(14748U);
    msg.setDestinationEntity(173U);
    msg.value = 0.7281317283559507;

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
    msg.setTimeStamp(0.5579362308325688);
    msg.setSource(7912U);
    msg.setSourceEntity(41U);
    msg.setDestination(53152U);
    msg.setDestinationEntity(180U);
    msg.value = 0.9098457936425726;

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
    msg.setTimeStamp(0.15850919335986713);
    msg.setSource(34413U);
    msg.setSourceEntity(119U);
    msg.setDestination(59896U);
    msg.setDestinationEntity(131U);
    msg.value = 0.05749640666317535;

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
    msg.setTimeStamp(0.8345534180479888);
    msg.setSource(32487U);
    msg.setSourceEntity(26U);
    msg.setDestination(31385U);
    msg.setDestinationEntity(68U);
    msg.value = 0.3915311729013107;

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
    msg.setTimeStamp(0.24239654365722407);
    msg.setSource(43862U);
    msg.setSourceEntity(228U);
    msg.setDestination(16344U);
    msg.setDestinationEntity(41U);
    msg.path_ref = 2955832558U;
    msg.start_lat = 0.0017883945403066592;
    msg.start_lon = 0.0022069368866508565;
    msg.start_z = 0.790250024222267;
    msg.start_z_units = 71U;
    msg.end_lat = 0.6144260839085456;
    msg.end_lon = 0.23758746261456987;
    msg.end_z = 0.2355847503128381;
    msg.end_z_units = 238U;
    msg.speed = 0.478001996893222;
    msg.speed_units = 64U;
    msg.lradius = 0.12461467802222659;
    msg.flags = 33U;

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
    msg.setTimeStamp(0.40417374441305676);
    msg.setSource(19208U);
    msg.setSourceEntity(241U);
    msg.setDestination(3600U);
    msg.setDestinationEntity(147U);
    msg.path_ref = 1515519480U;
    msg.start_lat = 0.508949611715883;
    msg.start_lon = 0.7409287361588099;
    msg.start_z = 0.5350054031789283;
    msg.start_z_units = 103U;
    msg.end_lat = 0.30973294798100115;
    msg.end_lon = 0.6764192312376031;
    msg.end_z = 0.7027869385592244;
    msg.end_z_units = 238U;
    msg.speed = 0.3979684901668419;
    msg.speed_units = 151U;
    msg.lradius = 0.76326876796129;
    msg.flags = 129U;

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
    msg.setTimeStamp(0.15413171064673747);
    msg.setSource(7018U);
    msg.setSourceEntity(78U);
    msg.setDestination(19905U);
    msg.setDestinationEntity(184U);
    msg.path_ref = 981648988U;
    msg.start_lat = 0.4350389841763539;
    msg.start_lon = 0.512667570094314;
    msg.start_z = 0.8403353663745229;
    msg.start_z_units = 223U;
    msg.end_lat = 0.46164972050565245;
    msg.end_lon = 0.13307367142007354;
    msg.end_z = 0.5438287893550608;
    msg.end_z_units = 125U;
    msg.speed = 0.8854426111605503;
    msg.speed_units = 176U;
    msg.lradius = 0.6666970778898157;
    msg.flags = 224U;

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
    msg.setTimeStamp(0.01679859677362383);
    msg.setSource(40555U);
    msg.setSourceEntity(41U);
    msg.setDestination(45145U);
    msg.setDestinationEntity(63U);
    msg.x = 0.7491852219897592;
    msg.y = 0.7610976299659156;
    msg.z = 0.8013324052478915;
    msg.k = 0.7349406352038416;
    msg.m = 0.26307637312519094;
    msg.n = 0.005461797063246121;
    msg.flags = 175U;

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
    msg.setTimeStamp(0.7273797160006288);
    msg.setSource(50885U);
    msg.setSourceEntity(237U);
    msg.setDestination(55043U);
    msg.setDestinationEntity(159U);
    msg.x = 0.05671749489032585;
    msg.y = 0.9354066576935831;
    msg.z = 0.1595454590662594;
    msg.k = 0.5108287732364962;
    msg.m = 0.4441018891771431;
    msg.n = 0.8977030424017296;
    msg.flags = 55U;

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
    msg.setTimeStamp(0.2269053109172341);
    msg.setSource(59886U);
    msg.setSourceEntity(33U);
    msg.setDestination(45673U);
    msg.setDestinationEntity(101U);
    msg.x = 0.49524703291941075;
    msg.y = 0.18344462933185834;
    msg.z = 0.30288751643615286;
    msg.k = 0.11023807129666752;
    msg.m = 0.7990405844951619;
    msg.n = 0.08895230007515431;
    msg.flags = 242U;

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
    msg.setTimeStamp(0.7454753477282431);
    msg.setSource(27278U);
    msg.setSourceEntity(116U);
    msg.setDestination(53875U);
    msg.setDestinationEntity(66U);
    msg.value = 0.2021798893125234;

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
    msg.setTimeStamp(0.9207050357390757);
    msg.setSource(29571U);
    msg.setSourceEntity(211U);
    msg.setDestination(45794U);
    msg.setDestinationEntity(184U);
    msg.value = 0.2137220107631529;

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
    msg.setTimeStamp(0.33993181863751765);
    msg.setSource(17342U);
    msg.setSourceEntity(230U);
    msg.setDestination(7614U);
    msg.setDestinationEntity(232U);
    msg.value = 0.3047809651336878;

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
    msg.setTimeStamp(0.6634613221714184);
    msg.setSource(44478U);
    msg.setSourceEntity(122U);
    msg.setDestination(28263U);
    msg.setDestinationEntity(21U);
    msg.u = 0.3603027499853222;
    msg.v = 0.9838272137433086;
    msg.w = 0.350941973768213;
    msg.p = 0.4355831931607189;
    msg.q = 0.8565448371203389;
    msg.r = 0.4113603568898385;
    msg.flags = 96U;

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
    msg.setTimeStamp(0.8472160400043532);
    msg.setSource(35171U);
    msg.setSourceEntity(57U);
    msg.setDestination(47593U);
    msg.setDestinationEntity(130U);
    msg.u = 0.3324970542698189;
    msg.v = 0.01470921808361303;
    msg.w = 0.5144334460540718;
    msg.p = 0.8870029771157848;
    msg.q = 0.2733638439109103;
    msg.r = 0.2628871740074733;
    msg.flags = 12U;

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
    msg.setTimeStamp(0.2987888873920762);
    msg.setSource(6249U);
    msg.setSourceEntity(10U);
    msg.setDestination(5312U);
    msg.setDestinationEntity(81U);
    msg.u = 0.19568293393239256;
    msg.v = 0.12888508983056446;
    msg.w = 0.963927834601764;
    msg.p = 0.47602105248926285;
    msg.q = 0.6397897376526896;
    msg.r = 0.24135446561730045;
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
    msg.setTimeStamp(0.8912819974174323);
    msg.setSource(40523U);
    msg.setSourceEntity(55U);
    msg.setDestination(42447U);
    msg.setDestinationEntity(26U);
    msg.path_ref = 2304075584U;
    msg.start_lat = 0.6780784109367345;
    msg.start_lon = 0.601705808740166;
    msg.start_z = 0.6660625674946363;
    msg.start_z_units = 106U;
    msg.end_lat = 0.3764374491215674;
    msg.end_lon = 0.0838369612650266;
    msg.end_z = 0.6700844603217535;
    msg.end_z_units = 186U;
    msg.lradius = 0.8391585522245661;
    msg.flags = 121U;
    msg.x = 0.20469174331803208;
    msg.y = 0.6395934200375212;
    msg.z = 0.8002105693624616;
    msg.vx = 0.17263817575035667;
    msg.vy = 0.3511935656639883;
    msg.vz = 0.18298709896520915;
    msg.course_error = 0.30634364003705583;
    msg.eta = 2139U;

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
    msg.setTimeStamp(0.14378012820174002);
    msg.setSource(19882U);
    msg.setSourceEntity(86U);
    msg.setDestination(189U);
    msg.setDestinationEntity(48U);
    msg.path_ref = 15384585U;
    msg.start_lat = 0.9118424666686183;
    msg.start_lon = 0.6038372933499309;
    msg.start_z = 0.32881010633047647;
    msg.start_z_units = 106U;
    msg.end_lat = 0.9444033203684443;
    msg.end_lon = 0.491421338799258;
    msg.end_z = 0.6753927178990027;
    msg.end_z_units = 26U;
    msg.lradius = 0.8564643478553381;
    msg.flags = 193U;
    msg.x = 0.5427762602724981;
    msg.y = 0.6835127563210949;
    msg.z = 0.2865363203104375;
    msg.vx = 0.07137273769998254;
    msg.vy = 0.6947713693837977;
    msg.vz = 0.19354503923195143;
    msg.course_error = 0.1757206196030322;
    msg.eta = 29341U;

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
    msg.setTimeStamp(0.4553322751208293);
    msg.setSource(45003U);
    msg.setSourceEntity(114U);
    msg.setDestination(20043U);
    msg.setDestinationEntity(199U);
    msg.path_ref = 3119283596U;
    msg.start_lat = 0.6353276822360451;
    msg.start_lon = 0.18038307538675846;
    msg.start_z = 0.035135883732060225;
    msg.start_z_units = 157U;
    msg.end_lat = 0.3199284287304448;
    msg.end_lon = 0.4516293040563405;
    msg.end_z = 0.7630291202389823;
    msg.end_z_units = 217U;
    msg.lradius = 0.9342350719371396;
    msg.flags = 17U;
    msg.x = 0.26955885307689775;
    msg.y = 0.5969193818822085;
    msg.z = 0.5508330837981675;
    msg.vx = 0.7101691745066393;
    msg.vy = 0.7370141867625446;
    msg.vz = 0.36764123488008615;
    msg.course_error = 0.024164992201812563;
    msg.eta = 20135U;

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
    msg.setTimeStamp(0.05844204283346266);
    msg.setSource(16048U);
    msg.setSourceEntity(230U);
    msg.setDestination(39174U);
    msg.setDestinationEntity(232U);
    msg.k = 0.603740373990418;
    msg.m = 0.45973803204252395;
    msg.n = 0.11319180288784925;

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
    msg.setTimeStamp(0.8539938350155867);
    msg.setSource(33271U);
    msg.setSourceEntity(118U);
    msg.setDestination(11472U);
    msg.setDestinationEntity(188U);
    msg.k = 0.9088157434882281;
    msg.m = 0.3185834072990942;
    msg.n = 0.8584911382518097;

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
    msg.setTimeStamp(0.5391724132838472);
    msg.setSource(9952U);
    msg.setSourceEntity(179U);
    msg.setDestination(21645U);
    msg.setDestinationEntity(198U);
    msg.k = 0.40132177015583503;
    msg.m = 0.4932624304039235;
    msg.n = 0.5247869556020598;

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
    msg.setTimeStamp(0.826499742704412);
    msg.setSource(35484U);
    msg.setSourceEntity(37U);
    msg.setDestination(43877U);
    msg.setDestinationEntity(250U);
    msg.p = 0.5978806098677062;
    msg.i = 0.351268392778735;
    msg.d = 0.12146906533298474;
    msg.a = 0.08606857277763835;

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
    msg.setTimeStamp(0.6280140511768739);
    msg.setSource(53501U);
    msg.setSourceEntity(116U);
    msg.setDestination(45595U);
    msg.setDestinationEntity(114U);
    msg.p = 0.3538889817772808;
    msg.i = 0.48539946753333774;
    msg.d = 0.835630412010167;
    msg.a = 0.7906441887199446;

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
    msg.setTimeStamp(0.6816293748920216);
    msg.setSource(33240U);
    msg.setSourceEntity(105U);
    msg.setDestination(52286U);
    msg.setDestinationEntity(220U);
    msg.p = 0.6804144029936461;
    msg.i = 0.49759721481929065;
    msg.d = 0.6914868669359432;
    msg.a = 0.7188560195670832;

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
    msg.setTimeStamp(0.14166360975181413);
    msg.setSource(24764U);
    msg.setSourceEntity(98U);
    msg.setDestination(14447U);
    msg.setDestinationEntity(98U);
    msg.op = 121U;

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
    msg.setTimeStamp(0.19841268021726277);
    msg.setSource(21685U);
    msg.setSourceEntity(147U);
    msg.setDestination(54859U);
    msg.setDestinationEntity(243U);
    msg.op = 242U;

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
    msg.setTimeStamp(0.9436091162881096);
    msg.setSource(19378U);
    msg.setSourceEntity(103U);
    msg.setDestination(17845U);
    msg.setDestinationEntity(11U);
    msg.op = 166U;

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
    msg.setTimeStamp(0.8361745563319126);
    msg.setSource(26701U);
    msg.setSourceEntity(211U);
    msg.setDestination(49888U);
    msg.setDestinationEntity(205U);
    msg.timeout = 59060U;
    msg.lat = 0.6508345549295231;
    msg.lon = 0.21244977141333588;
    msg.z = 0.5800921804155033;
    msg.z_units = 174U;
    msg.speed = 0.7497427889366197;
    msg.speed_units = 199U;
    msg.roll = 0.5795529854171511;
    msg.pitch = 0.03831872888683163;
    msg.yaw = 0.9487591962512172;
    msg.custom.assign("RTAAGHVBZXYUHGCOPXRZCPSGQKJMMFDLGWXPJWWJVUEALQVFFKAIYZZLCWIESTBCOJAHTAUWJZRCDYIMDLWQNSERRVGPJSHXWVFEVNYBLOAEYLKKODOQHQUHWUHCXMDLJTPQ");

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
    msg.setTimeStamp(0.921862849875212);
    msg.setSource(36357U);
    msg.setSourceEntity(63U);
    msg.setDestination(44352U);
    msg.setDestinationEntity(110U);
    msg.timeout = 59114U;
    msg.lat = 0.7249058628748033;
    msg.lon = 0.4826409520409559;
    msg.z = 0.46145941041034055;
    msg.z_units = 82U;
    msg.speed = 0.6030876927308139;
    msg.speed_units = 137U;
    msg.roll = 0.7408182266233382;
    msg.pitch = 0.4559730659211021;
    msg.yaw = 0.27361519150181246;
    msg.custom.assign("JRJCBAKYBOVLRVRJGIEGULMA");

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
    msg.setTimeStamp(0.2115879628013153);
    msg.setSource(38117U);
    msg.setSourceEntity(12U);
    msg.setDestination(34502U);
    msg.setDestinationEntity(208U);
    msg.timeout = 48011U;
    msg.lat = 0.39600354765076584;
    msg.lon = 0.30342700344605367;
    msg.z = 0.27146935254304116;
    msg.z_units = 200U;
    msg.speed = 0.9588815219697219;
    msg.speed_units = 27U;
    msg.roll = 0.10429868232020778;
    msg.pitch = 0.005565238460172539;
    msg.yaw = 0.47319947878869084;
    msg.custom.assign("BUGQSCSETYFXPRIIJRANEPIBXVKBAQPOWDHNQGZAKNJYTUVLWRZIYGMLHVSJDQOCYGWAZWDJEXGRXMGFLWLUZPAJLSEMCRYXZMKLMVFHIKSYDRJOQXHVZPFATOAMIBMARUDFDNQTLHUKKIRMXODTVSWKSOHELFNYGCDBHFWAANHBZXMBBIQFQCOCLRWEYEPCKQYDXXZDKOPPSTTVEIZHHTQWJSYFVJJTGNTZ");

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
    msg.setTimeStamp(0.4718708389433073);
    msg.setSource(57114U);
    msg.setSourceEntity(118U);
    msg.setDestination(24612U);
    msg.setDestinationEntity(112U);
    msg.timeout = 8325U;
    msg.lat = 0.49491757782850954;
    msg.lon = 0.8166939086461421;
    msg.z = 0.973686172113658;
    msg.z_units = 1U;
    msg.speed = 0.8749175331772212;
    msg.speed_units = 113U;
    msg.duration = 50217U;
    msg.radius = 0.29551116328289595;
    msg.flags = 118U;
    msg.custom.assign("UGOVOUMFEDHUOJKMPDDWCTMPQDRAHTGBZKTLNVQDWENZEQPIUQJMHDYCXACPFGQSKKJHUZWYFELTBWHQAVKOXUWJHGAQRIWKSESDIIRHPCTCGJXJRZVJRWOFQYLIBBSPXTFNGYVBSXRSVFFLXCVMLDPKZWYUYZBVNSQGMZXYOENPANGYTKSRGMRPIEQVWWXJOICAOBMSFALBLECLVNDASEFHTTAOAMOUKYXHNZERKBIRDLJZXY");

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
    msg.setTimeStamp(0.7224123152409776);
    msg.setSource(9134U);
    msg.setSourceEntity(44U);
    msg.setDestination(53149U);
    msg.setDestinationEntity(131U);
    msg.timeout = 982U;
    msg.lat = 0.8838047532969927;
    msg.lon = 0.44729474410017633;
    msg.z = 0.36516683143904916;
    msg.z_units = 152U;
    msg.speed = 0.4498973029000367;
    msg.speed_units = 173U;
    msg.duration = 51387U;
    msg.radius = 0.2240749338625032;
    msg.flags = 125U;
    msg.custom.assign("HTQREPGWPNVKSDAJIPJJQBGIEEAUYLNWYXLTLMNVACWWOAMFLIDRTWHHBTMMBWHJHZKSVSOXOAARXDCYGVGUHNQBCZZNQDFFSAXGIZMLQPKXCDDGZNACFTFUWRJISKOKFKMXCUUXFQDWTGBPIVWOEGXFBUAHSQTZQKHJUTUBXUESSVUYPDBHFORYAREOWIMJLONYLNMGBNMKNEOPC");

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
    msg.setTimeStamp(0.806191354750402);
    msg.setSource(40441U);
    msg.setSourceEntity(109U);
    msg.setDestination(42495U);
    msg.setDestinationEntity(225U);
    msg.timeout = 2064U;
    msg.lat = 0.7615557757989132;
    msg.lon = 0.8716383585162941;
    msg.z = 0.9270707110863149;
    msg.z_units = 234U;
    msg.speed = 0.490368422100109;
    msg.speed_units = 177U;
    msg.duration = 29160U;
    msg.radius = 0.49082947585410386;
    msg.flags = 81U;
    msg.custom.assign("YIBLWRYETVUPADSBQDGFQDVKOUUDQGHVGNWBXYFUXURLYLXBKQDFZZISUVMZKICFHCZLBNCEORRCBOLVEOMYMJEUJZBAHFHVTJEGYKHSJDOZNRZRQPR");

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
    msg.setTimeStamp(0.05374480089489175);
    msg.setSource(10517U);
    msg.setSourceEntity(248U);
    msg.setDestination(30359U);
    msg.setDestinationEntity(94U);
    msg.custom.assign("TOMKZRWEDIAKRXMLPASHIEZRDJNUDSBGJXMUTIASVCVZIKFWFYJDDIROSJCMVSTBTANXVBYJQZSEQOMEFQEQTZLKATTKAXEORWJGUCNEYYQKPQIVNKICOPVKLLPYR");

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
    msg.setTimeStamp(0.29298955165886753);
    msg.setSource(37525U);
    msg.setSourceEntity(150U);
    msg.setDestination(58877U);
    msg.setDestinationEntity(181U);
    msg.custom.assign("JUEJDFXHBEWYRDBUNHEAFAZIAVBLHXNDNRBEKAYGNHHOJGHTCPPKBUKEBKKUDMTCTJWUUMAKEWWEOMYVIZNXWRHMPNQXNLYYZCPFKTWLQWSYRVJCRCRCEPCAGWNLILHDVFXACTGQIDLUKYZJDWMVOYKIPHJAMTQGDXFXVOGIRZQULSLJRFFZILOZYSUBRZQBQOTFMXEVCF");

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
    msg.setTimeStamp(0.540597081341782);
    msg.setSource(40238U);
    msg.setSourceEntity(68U);
    msg.setDestination(41519U);
    msg.setDestinationEntity(176U);
    msg.custom.assign("GXFQGPHYDTKJTSQVSPKJMPDJNNQMVEHSAWYEVYHIINNKYTVKBFGRXEXJORLSVNYNCQPTQOLDLTBIBWQLKFNHVGAUNROATPRZJABBWJMPRWSZACEHLKWMDYIZETORWCUAXDKLAPGNRSDMCSRPDJCEUJGUBK");

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
    msg.setTimeStamp(0.28225593167599217);
    msg.setSource(42314U);
    msg.setSourceEntity(204U);
    msg.setDestination(64322U);
    msg.setDestinationEntity(230U);
    msg.timeout = 12296U;
    msg.lat = 0.6854008538724843;
    msg.lon = 0.6374251739401955;
    msg.z = 0.6136313898808629;
    msg.z_units = 245U;
    msg.duration = 53633U;
    msg.speed = 0.08308826927155422;
    msg.speed_units = 153U;
    msg.type = 109U;
    msg.radius = 0.47812338932703247;
    msg.length = 0.748893117298071;
    msg.bearing = 0.8464145830734005;
    msg.direction = 132U;
    msg.custom.assign("CBHMQSYTNNLLLPEAJLOZAUMJETCQSFJOYZIHIHQWAURJZCQCPEIRHQVMBRTXBZFWAWNWJXKUXJIQEFXIHZYCGWKUHTVPDUENMRGLMD");

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
    msg.setTimeStamp(0.2674403356022965);
    msg.setSource(35468U);
    msg.setSourceEntity(254U);
    msg.setDestination(32176U);
    msg.setDestinationEntity(179U);
    msg.timeout = 48284U;
    msg.lat = 0.5730679090162146;
    msg.lon = 0.5150752076048369;
    msg.z = 0.5070120545047341;
    msg.z_units = 236U;
    msg.duration = 692U;
    msg.speed = 0.17680260024452865;
    msg.speed_units = 46U;
    msg.type = 227U;
    msg.radius = 0.8716507984945211;
    msg.length = 0.7956733900112988;
    msg.bearing = 0.5371861078524434;
    msg.direction = 36U;
    msg.custom.assign("ZWNHXIPSNWODDPQEJNQSRFDUWXMSDUDYWMDAZNKHZMYHOMWLFNLJZASVIRKBHQZEWBOOFPTUIMVXOCYXDIGUWZUFADJCXBITVKSKGCSXVENIEJOLLYJPOLXVLGJJIZRAYOTQKRTEBCUWKHZSYUCJBTQVTXPFKLAFTXSGMBXVCGQGGTEEHITMNHC");

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
    msg.setTimeStamp(0.17167486378751273);
    msg.setSource(61953U);
    msg.setSourceEntity(229U);
    msg.setDestination(50879U);
    msg.setDestinationEntity(4U);
    msg.timeout = 63649U;
    msg.lat = 0.3920027324934331;
    msg.lon = 0.499854137388958;
    msg.z = 0.7040474620882881;
    msg.z_units = 42U;
    msg.duration = 24313U;
    msg.speed = 0.5790188662461302;
    msg.speed_units = 161U;
    msg.type = 44U;
    msg.radius = 0.4537247261319717;
    msg.length = 0.5946067886623634;
    msg.bearing = 0.32743473441841264;
    msg.direction = 227U;
    msg.custom.assign("FNDDMJQKKLRXZVVUWYDOXRGVPHROWOGQHLQAJITIZQIDTGISNGSSUHPMPOOQMPCHZCLFVHZXNIFEEJZIPRANKNHVGRLNSQUSUREBLXMIETNGTVIELVXNJUCYDSBOMEGJXWS");

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
    msg.setTimeStamp(0.728015216904175);
    msg.setSource(175U);
    msg.setSourceEntity(67U);
    msg.setDestination(46888U);
    msg.setDestinationEntity(122U);
    msg.duration = 63128U;
    msg.custom.assign("HMUVQGHKSXHHWRBRBHABYCFOWDHEYTPVAPJFAWTTACKONPJCVAFSDNR");

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
    msg.setTimeStamp(0.2742236907359461);
    msg.setSource(7392U);
    msg.setSourceEntity(31U);
    msg.setDestination(33748U);
    msg.setDestinationEntity(39U);
    msg.duration = 24062U;
    msg.custom.assign("JMMAEHXTRVIPLCNHELCUPHQSTUSOFZIIXIIYZYFQPQJMBWFCSVIBXYBDWZXVNMFVQBOCVGHGWPKZMTXWCTXADOFATXEDEMQKARALRIEHABRBIFJPOPTVDWSZBGFEMTPYYFXCRCNWP");

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
    msg.setTimeStamp(0.2613651179848312);
    msg.setSource(12257U);
    msg.setSourceEntity(108U);
    msg.setDestination(65186U);
    msg.setDestinationEntity(60U);
    msg.duration = 34353U;
    msg.custom.assign("VIERPRJJJHDOLQNQVFCMAWJLLVLHSLSUFQWBHTAGETDSGZWMZHAZTKMSIQXJAYJCFOOEYZGXIABOFBRMMRXOTXEJSLMWLRSKXRSRUDTIHXGFKFPUGIQGBKNNDQWOAYUHHYNBDYQRIYCPGDKUTMGSYCUVFBNQIZJYEVKIWALMKNUCWHVLOXYEPPDCXOJFTHVAC");

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
    msg.setTimeStamp(0.999418232983649);
    msg.setSource(44283U);
    msg.setSourceEntity(96U);
    msg.setDestination(3727U);
    msg.setDestinationEntity(183U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.9236265420670438;
    tmp_msg_0.z_units = 137U;
    msg.control.set(tmp_msg_0);
    msg.duration = 3007U;
    msg.custom.assign("PGHESCXFMXKMSUKTYLNFVZCAEUWIEUVJYFIBOQIJUNBASPDWQLLBWFLATOVXWUVZBFIHSQNBOHZPCRIPSIWYRLDZGWNNGCTQTMTMUUXVZYDCYOAYLLSBSMNMEDKDBTPTLGQYCNNJROZAPKIPZHRPKHHAKJTUEPHAVYBZINCZJYJTEMJXXRFDWXGNFGX");

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
    msg.setTimeStamp(0.44911407259697267);
    msg.setSource(55383U);
    msg.setSourceEntity(97U);
    msg.setDestination(3984U);
    msg.setDestinationEntity(65U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.6389562540688656;
    msg.control.set(tmp_msg_0);
    msg.duration = 28122U;
    msg.custom.assign("DVMWEOOYVBTKLOMVVDCHFINOVNXWAEWZIDCOGXCCGHXGRVDBBPQMTKHBGDEFNMPXDAJIBUGJLMPPHIVSKEYROYZADNVNTLCRKTFCCAQQGHHZWSXASL");

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
    msg.setTimeStamp(0.9341077254699343);
    msg.setSource(17440U);
    msg.setSourceEntity(22U);
    msg.setDestination(9100U);
    msg.setDestinationEntity(199U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8757469016792068;
    tmp_msg_0.speed_units = 194U;
    msg.control.set(tmp_msg_0);
    msg.duration = 65415U;
    msg.custom.assign("HOIFNPEPULMTSXQWSTQMUNZVUDSVJLDIKFTCLHUKBZJNHSUBOSWCSTYZFOXQZPKKARMBARNGCFXSJMJYILNNEYAAJFBNIVPGRQTQTEBCCTZVWRNUODKQDEZEBLOFRCBXINYPUAKJGLRWMYAMOXJRWMJDKXGJYKXZMIVGOUWEEGNPHIHDBHLCIVACPRVMQXYTJD");

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
    msg.setTimeStamp(0.9942972510730511);
    msg.setSource(17104U);
    msg.setSourceEntity(124U);
    msg.setDestination(37566U);
    msg.setDestinationEntity(178U);
    msg.timeout = 26315U;
    msg.lat = 0.6927628410281489;
    msg.lon = 0.4585475318936749;
    msg.z = 0.7351462834824112;
    msg.z_units = 88U;
    msg.speed = 0.6823496761357426;
    msg.speed_units = 47U;
    msg.bearing = 0.20199189645160331;
    msg.cross_angle = 0.4143384455094362;
    msg.width = 0.24989499716543306;
    msg.length = 0.13543847444229384;
    msg.hstep = 0.002852623505406604;
    msg.coff = 20U;
    msg.alternation = 32U;
    msg.flags = 33U;
    msg.custom.assign("QDYZMETJFVZTIDHGMKPEZ");

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
    msg.setTimeStamp(0.6045568582505824);
    msg.setSource(26552U);
    msg.setSourceEntity(245U);
    msg.setDestination(58732U);
    msg.setDestinationEntity(86U);
    msg.timeout = 48374U;
    msg.lat = 0.4642805622262185;
    msg.lon = 0.5110188559264998;
    msg.z = 0.15443377797399982;
    msg.z_units = 97U;
    msg.speed = 0.514288564467414;
    msg.speed_units = 7U;
    msg.bearing = 0.9413788447064068;
    msg.cross_angle = 0.46142485231516694;
    msg.width = 0.9652160905361622;
    msg.length = 0.9105989688812224;
    msg.hstep = 0.6084793236776838;
    msg.coff = 210U;
    msg.alternation = 214U;
    msg.flags = 142U;
    msg.custom.assign("ANDQPCCTEOYSUDFXQLVAUJHYJGTOJGAVFTECBLAWPHYAQJXYPVNBONFKVDYAHBZDCDTUKBKTNUMGURLZGZNRPXNDMBFKVGBSHWZMJVMWL");

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
    msg.setTimeStamp(0.1414303667861032);
    msg.setSource(60086U);
    msg.setSourceEntity(28U);
    msg.setDestination(58725U);
    msg.setDestinationEntity(234U);
    msg.timeout = 63682U;
    msg.lat = 0.893833511560809;
    msg.lon = 0.030322104059848365;
    msg.z = 0.790572487186926;
    msg.z_units = 186U;
    msg.speed = 0.2448964239187602;
    msg.speed_units = 138U;
    msg.bearing = 0.9867788989750694;
    msg.cross_angle = 0.7768291609208994;
    msg.width = 0.20603233410753707;
    msg.length = 0.9913757535270988;
    msg.hstep = 0.7297040621778168;
    msg.coff = 18U;
    msg.alternation = 24U;
    msg.flags = 206U;
    msg.custom.assign("JVNPYPJDSRRMCTWMDGLRGEMYRSDPGJCTYYNTLAOHQPUEBLVQNVGJLVXPWTDAPTPKYBCLGYZHWHGQWILJBFMMJFZBUZOFXFLFJDDUESLUJKKIZXLIXCIGZCOIMRDATOAWRSTFMKDQKXNFBQKDLXWAWJRBKIEHROOXCVPKEUBIKOUZU");

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
    msg.setTimeStamp(0.3076989614226967);
    msg.setSource(53717U);
    msg.setSourceEntity(192U);
    msg.setDestination(26178U);
    msg.setDestinationEntity(80U);
    msg.timeout = 50430U;
    msg.lat = 0.16096402687447398;
    msg.lon = 0.4251531335518117;
    msg.z = 0.07468539762622362;
    msg.z_units = 217U;
    msg.speed = 0.16756869460521828;
    msg.speed_units = 156U;
    msg.custom.assign("ZNAUDCUNBTKTHDMUGCBRCQLYEWWNJBZWJFLIVBYPMXJDRRSVKKIWHBTZKFVEJZEVKCCHXODVIFHNYZIFQKMHOVBVSXRYUABDJTSRXRPDSUINAJTEMXJCTGIMSWEIOXCXFGPQOH");

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
    msg.setTimeStamp(0.3768200707134217);
    msg.setSource(53250U);
    msg.setSourceEntity(6U);
    msg.setDestination(52992U);
    msg.setDestinationEntity(70U);
    msg.timeout = 45638U;
    msg.lat = 0.9980972575141176;
    msg.lon = 0.6635017599966079;
    msg.z = 0.49472370103621155;
    msg.z_units = 53U;
    msg.speed = 0.3686747376740853;
    msg.speed_units = 158U;
    msg.custom.assign("NRJJDWFDKVVXTECIWUAP");

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
    msg.setTimeStamp(0.7263296191675302);
    msg.setSource(8830U);
    msg.setSourceEntity(93U);
    msg.setDestination(48328U);
    msg.setDestinationEntity(106U);
    msg.timeout = 60113U;
    msg.lat = 0.3559163742530155;
    msg.lon = 0.4978496543501971;
    msg.z = 0.2302658740507474;
    msg.z_units = 20U;
    msg.speed = 0.6841531045156082;
    msg.speed_units = 0U;
    msg.custom.assign("GMTPYHJCAPDBXQXWUOQRWVOPYSRQTGKKVQONSOD");

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
    msg.setTimeStamp(0.10931869913109438);
    msg.setSource(17602U);
    msg.setSourceEntity(182U);
    msg.setDestination(60578U);
    msg.setDestinationEntity(254U);
    msg.x = 0.819958754202822;
    msg.y = 0.9698502373857492;
    msg.z = 0.3351685663038725;

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
    msg.setTimeStamp(0.930768719316687);
    msg.setSource(13579U);
    msg.setSourceEntity(199U);
    msg.setDestination(57956U);
    msg.setDestinationEntity(210U);
    msg.x = 0.6065833992973892;
    msg.y = 0.11612586601662234;
    msg.z = 0.5450073899277762;

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
    msg.setTimeStamp(0.9950212503769849);
    msg.setSource(34082U);
    msg.setSourceEntity(65U);
    msg.setDestination(182U);
    msg.setDestinationEntity(127U);
    msg.x = 0.9590094603890249;
    msg.y = 0.7873268991344415;
    msg.z = 0.1125800354489972;

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
    msg.setTimeStamp(0.624511410189058);
    msg.setSource(30311U);
    msg.setSourceEntity(66U);
    msg.setDestination(37013U);
    msg.setDestinationEntity(64U);
    msg.timeout = 36400U;
    msg.lat = 0.6781667347963659;
    msg.lon = 0.7288777241653003;
    msg.z = 0.8732556546315954;
    msg.z_units = 47U;
    msg.amplitude = 0.6795131500098569;
    msg.pitch = 0.20231306781326852;
    msg.speed = 0.20472640386883267;
    msg.speed_units = 88U;
    msg.custom.assign("PRARGFQRRLZBZNZMJDMDECXHKKHMGZDAGWWBQKTDIGWUIHJIQZEQSDEGZAFMWNBTXYDUCXYBAPSLGEPWYNVOYIYUJYOGCTDFEQXXRLCFGNJSAOVEUMHJMSPCHNVHDWETLWXCJYSZCYFRHPRCLUBKIJYTLIDQRNNVLXLEVMRJE");

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
    msg.setTimeStamp(0.6273541282238227);
    msg.setSource(20233U);
    msg.setSourceEntity(203U);
    msg.setDestination(36864U);
    msg.setDestinationEntity(66U);
    msg.timeout = 52812U;
    msg.lat = 0.782865126012215;
    msg.lon = 0.6305666044441125;
    msg.z = 0.49765034121448803;
    msg.z_units = 123U;
    msg.amplitude = 0.6465641069243259;
    msg.pitch = 0.7910668015152746;
    msg.speed = 0.8956390624966479;
    msg.speed_units = 68U;
    msg.custom.assign("USDFFOIMATKZRJVOYVXBWJKLBJAQEWVANAEEUXOGRBOUWARDMIZQWPNISOFYTOKJQTHEYDXGFWSCVKHGRFNHDCCHFYOZQJIVC");

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
    msg.setTimeStamp(0.21354377366585897);
    msg.setSource(31301U);
    msg.setSourceEntity(131U);
    msg.setDestination(10463U);
    msg.setDestinationEntity(139U);
    msg.timeout = 38392U;
    msg.lat = 0.5110604191871696;
    msg.lon = 0.9830269335200642;
    msg.z = 0.2738394086703697;
    msg.z_units = 210U;
    msg.amplitude = 0.27045818101253327;
    msg.pitch = 0.40116704490618893;
    msg.speed = 0.9527648192204655;
    msg.speed_units = 136U;
    msg.custom.assign("BFGNCRILNOSWIGWTYAAQBFCRIOVQGPQSCQZKAPOWERKSKGOWRBFZKSJPLNCOMXYIXYOQPRNHFHHTECQJNCHB");

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
    msg.setTimeStamp(0.13227845915554448);
    msg.setSource(673U);
    msg.setSourceEntity(250U);
    msg.setDestination(42840U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.08178934883683919);
    msg.setSource(15603U);
    msg.setSourceEntity(117U);
    msg.setDestination(43757U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.0258627162330215);
    msg.setSource(35507U);
    msg.setSourceEntity(180U);
    msg.setDestination(59759U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.4802524230060933);
    msg.setSource(36446U);
    msg.setSourceEntity(162U);
    msg.setDestination(51159U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.8131251754404085;
    msg.lon = 0.31170559814539534;
    msg.z = 0.2132954212408832;
    msg.z_units = 110U;
    msg.radius = 0.04754120181826782;
    msg.duration = 37800U;
    msg.speed = 0.8130654134791547;
    msg.speed_units = 79U;
    msg.custom.assign("NKPPVNIXVUKLHJMMSTBSVOCORORHWUXJYGXIXTIXNMJPUUGMFJXYWPXPSISMAEJYXUGNFXMMLELHDBDIOLF");

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
    msg.setTimeStamp(0.28758378984101185);
    msg.setSource(28842U);
    msg.setSourceEntity(110U);
    msg.setDestination(4636U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.9254429243560152;
    msg.lon = 0.9937461728057382;
    msg.z = 0.9587591961176567;
    msg.z_units = 207U;
    msg.radius = 0.13092154678087442;
    msg.duration = 1560U;
    msg.speed = 0.6122700633017435;
    msg.speed_units = 102U;
    msg.custom.assign("QKPUURVLRCZATUEZFAPCXNIUFBFOTBEWKFUIVQRMMCWJGKSIAFHGTKPUVYXCVYGJSMCCMADQADPGOKEBAMECNELBPZBSHGNNRXYOGGHOSKKSJWNEAYCIRZDSYGQQSFEJNLBJZVUZKODWHGR");

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
    msg.setTimeStamp(0.42757759654337624);
    msg.setSource(44098U);
    msg.setSourceEntity(241U);
    msg.setDestination(28677U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.15442040183532224;
    msg.lon = 0.2814638367706439;
    msg.z = 0.5032536263879295;
    msg.z_units = 150U;
    msg.radius = 0.7364178228374323;
    msg.duration = 62810U;
    msg.speed = 0.32265150756945804;
    msg.speed_units = 136U;
    msg.custom.assign("WEKNVYFPMIISTGUWFVEWOLCCAIZNTQVFG");

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
    msg.setTimeStamp(0.03909295610091801);
    msg.setSource(61807U);
    msg.setSourceEntity(96U);
    msg.setDestination(14235U);
    msg.setDestinationEntity(91U);
    msg.timeout = 51355U;
    msg.flags = 254U;
    msg.lat = 0.0018972264333143585;
    msg.lon = 0.42578707221728773;
    msg.start_z = 0.9252123010744143;
    msg.start_z_units = 187U;
    msg.end_z = 0.7709093890994804;
    msg.end_z_units = 65U;
    msg.radius = 0.264148948477929;
    msg.speed = 0.41651465739016447;
    msg.speed_units = 251U;
    msg.custom.assign("EQXOCOJWLYMUOVHAPGRBVRQFZYWOSBQF");

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
    msg.setTimeStamp(0.14521877180071163);
    msg.setSource(44655U);
    msg.setSourceEntity(26U);
    msg.setDestination(43218U);
    msg.setDestinationEntity(32U);
    msg.timeout = 10586U;
    msg.flags = 141U;
    msg.lat = 0.4210970500274671;
    msg.lon = 0.8263934263248134;
    msg.start_z = 0.5740968055293113;
    msg.start_z_units = 103U;
    msg.end_z = 0.6715266585843471;
    msg.end_z_units = 99U;
    msg.radius = 0.10284375676807789;
    msg.speed = 0.5654271471259147;
    msg.speed_units = 205U;
    msg.custom.assign("QCQNSYPDMQLFTGEVEAHKLJMRAAGPTJTPVGWOLKOFKCFXUAXCIQUQKETTVSMBANSRHRZXHKWUCWFBZJCZYDRFOIUEOBCLUGLNERXVIQQRFPINCMDZDBMTERSONPUJYAQMUBTJHVWLAVDXY");

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
    msg.setTimeStamp(0.5972987140575639);
    msg.setSource(56677U);
    msg.setSourceEntity(246U);
    msg.setDestination(11064U);
    msg.setDestinationEntity(251U);
    msg.timeout = 14234U;
    msg.flags = 248U;
    msg.lat = 0.08123976794974419;
    msg.lon = 0.950921617281692;
    msg.start_z = 0.3556866089348898;
    msg.start_z_units = 124U;
    msg.end_z = 0.32180551234515575;
    msg.end_z_units = 107U;
    msg.radius = 0.10293640292994044;
    msg.speed = 0.2780902471449229;
    msg.speed_units = 240U;
    msg.custom.assign("VMVURTCNJLOGPZSWFBZAORHXFWCDFIIFWAKZVZDCHTFLYWSTQOKOGFSGGMRVFZKWDIBXPBRSAJMIGYNTBYRBEQMLCYVNNUQRGVTCLYIWJMPMPQYQPCHQYOXBQERVMXHQA");

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
    msg.setTimeStamp(0.4085256440001722);
    msg.setSource(19848U);
    msg.setSourceEntity(38U);
    msg.setDestination(58307U);
    msg.setDestinationEntity(5U);
    msg.timeout = 28599U;
    msg.lat = 0.9010491443301495;
    msg.lon = 0.37001760068973866;
    msg.z = 0.9490457425186553;
    msg.z_units = 225U;
    msg.speed = 0.4935353442693874;
    msg.speed_units = 186U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.12428568335761092;
    tmp_msg_0.y = 0.4353222900055853;
    tmp_msg_0.z = 0.33926806304907164;
    tmp_msg_0.t = 0.5211493720789169;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TSXXNFVDKCOHLFYKMMNQMVPPYJZBHRWRDWAAWTCVZCEIKCVTIVNHEUJTG");

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
    msg.setTimeStamp(0.05202834502470777);
    msg.setSource(53178U);
    msg.setSourceEntity(114U);
    msg.setDestination(1008U);
    msg.setDestinationEntity(66U);
    msg.timeout = 59309U;
    msg.lat = 0.08175829686852953;
    msg.lon = 0.1889788982093321;
    msg.z = 0.21297352202340591;
    msg.z_units = 215U;
    msg.speed = 0.7919662781076761;
    msg.speed_units = 63U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.11504208174470265;
    tmp_msg_0.y = 0.03822577235654645;
    tmp_msg_0.z = 0.9784349047594922;
    tmp_msg_0.t = 0.08103879962750771;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TQNZUFVLITBPOYGZZNLPMGJNGRJVHLJJYZZACGQDGQYETBGPTPVFEXKHAHBUABRQIYUMMLPXSTBKXIBKWFDEGAJNDOWRAKCMUXQQZHKYLWSKHTOHUXBPJSLIFRNZUGIHLDNVQEMTGWLFANAEVTYCBBKIWGQHHCKODKDZVJRUFRJODIHZWCOXR");

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
    msg.setTimeStamp(0.03229161067493347);
    msg.setSource(46941U);
    msg.setSourceEntity(103U);
    msg.setDestination(17177U);
    msg.setDestinationEntity(193U);
    msg.timeout = 42962U;
    msg.lat = 0.2777770100123067;
    msg.lon = 0.9273649165970289;
    msg.z = 0.7637430039915968;
    msg.z_units = 203U;
    msg.speed = 0.7826358010061035;
    msg.speed_units = 100U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7021216156809241;
    tmp_msg_0.y = 0.13290463633444183;
    tmp_msg_0.z = 0.6682306997377563;
    tmp_msg_0.t = 0.09260487787718152;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DBYRYOVCRGRUMRBUTUYJNDLNTWVOXZINCUXGUIGN");

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
    msg.setTimeStamp(0.7614734378793689);
    msg.setSource(1945U);
    msg.setSourceEntity(47U);
    msg.setDestination(48370U);
    msg.setDestinationEntity(243U);
    msg.x = 0.4883716421936952;
    msg.y = 0.1605740377684245;
    msg.z = 0.9018671623561567;
    msg.t = 0.21435582682065402;

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
    msg.setTimeStamp(0.778795465449717);
    msg.setSource(12839U);
    msg.setSourceEntity(244U);
    msg.setDestination(56894U);
    msg.setDestinationEntity(200U);
    msg.x = 0.6272583282816153;
    msg.y = 0.047473037045741684;
    msg.z = 0.07606132457851755;
    msg.t = 0.13142846006483244;

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
    msg.setTimeStamp(0.32399136785015514);
    msg.setSource(22081U);
    msg.setSourceEntity(12U);
    msg.setDestination(12053U);
    msg.setDestinationEntity(117U);
    msg.x = 0.14377725659176455;
    msg.y = 0.7871730263202242;
    msg.z = 0.9026350019724757;
    msg.t = 0.4807707715842259;

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
    msg.setTimeStamp(0.9449277810612633);
    msg.setSource(63682U);
    msg.setSourceEntity(195U);
    msg.setDestination(54563U);
    msg.setDestinationEntity(199U);
    msg.timeout = 56454U;
    msg.name.assign("FQXBGRZVIRPDQOYEDVHTWTYFFUCOSSVCPPUMJCGFRDBAPFLYIUTVORWEJSIXGRTTYVCMOMZJWZWSWBCYXSUJKQIULGKEWDTSFSFOMDHFIURQDOOZWOLZMNGCKQDXRANNPKHTCHOJFBREQSNDDLLLKQHKEAPBAXOWSBHAXNYJJIZLPHBEAEKGKTKURBGNVBGILBREVNHUXAJEIAQGQSCZGVVPX");
    msg.custom.assign("JLNBNYDTKCAAVBMWLQREESVKFPGLDOTSBFGXMALMUVSYEHVBTAPMJJLBXWSQJJTRLYQYNRUGBURHZILYQOENIUDAFACQGZPKMNHDKJUGPMJBOBQIUHSCXYHXGIHYBFVCODTPURECGPHFCXCIKFYZGZTDOMERPGLBVKILWISPDGWZXJPFEWMIR");

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
    msg.setTimeStamp(0.14611664173288375);
    msg.setSource(3403U);
    msg.setSourceEntity(55U);
    msg.setDestination(48474U);
    msg.setDestinationEntity(31U);
    msg.timeout = 52290U;
    msg.name.assign("TIZQNFLAHYPCZBARBLLSQGIMIPORLZELHPDGNVILHCPQDTWQQZSSOPYEAUQZEXXYBDEZNPOBBEWTABHGCBMGVZWMESFFNKXRCUEHDACKXRTRDDYWGFVKOJPOZCJKXRRKNKJGSFYRHWHWLEUFYAKFAUOVJIWOBMMRUVQCYGFXPAZLYJSCZFQG");
    msg.custom.assign("MAPPTDDIZNFKWCODLKPPIWGQGJGZOPMOIEGPABIPAXQXWJKVPLIUVWUYGRTHBKENUQGSCIWTBL");

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
    msg.setTimeStamp(0.7246459874597879);
    msg.setSource(48934U);
    msg.setSourceEntity(237U);
    msg.setDestination(39341U);
    msg.setDestinationEntity(21U);
    msg.timeout = 6645U;
    msg.name.assign("YEMOUVJBKZJVDMNCOSMWCYQHCQIFFKHLZAZMMWZGWGNAHXULBRZAGNRYJXOJJFQKHLKOZJVPNIFWKRPOJUD");
    msg.custom.assign("PWRSBWXRGNRYNUZJPLUYIFTKLOYHNZCDWRXEXRGYQUTSSZHUVNFIENRSOKAIYWLORUSJYMECFVKCREYXGBPKMOMDDVLQRUSUMTGAIVNGFWAWATKTYDXBLNMGSOZQJNILFWAUCLDVBVKMD");

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
    msg.setTimeStamp(0.5447118642545427);
    msg.setSource(56548U);
    msg.setSourceEntity(205U);
    msg.setDestination(3217U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.43435680334683313;
    msg.lon = 0.7979488814900141;
    msg.z = 0.22512193505905032;
    msg.z_units = 185U;
    msg.speed = 0.3666302657345514;
    msg.speed_units = 74U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 7808U;
    tmp_msg_0.off_x = 0.45907394480923724;
    tmp_msg_0.off_y = 0.3309843024722048;
    tmp_msg_0.off_z = 0.05606346627864511;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.9638859885771451;
    msg.custom.assign("KMVUTPAPYFUDCFAHJDLYMIXZJUIQFFIRCWVSQLZCIVYORSWZXQERHTLLVXRBRSADFAHXKRUXGGIPAZOGKJOBBPNDZYBMATFETZIDHLZSUNTGUGDKSBGINUHWVRZBYHWMLAJSIQEFULVXNWZHPIOTHGPQHCONDCKCCBVNWGWUTQYLDFGNRESXMKTVOYYZMEJAMEHRYNQLGKQCXEJJMVSCCQKENJAPMEAONTDPSUJJRKK");

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
    msg.setTimeStamp(0.9136316826648461);
    msg.setSource(20924U);
    msg.setSourceEntity(240U);
    msg.setDestination(55048U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.3496223658099181;
    msg.lon = 0.29411272297092117;
    msg.z = 0.4137872991841136;
    msg.z_units = 170U;
    msg.speed = 0.41458887840075354;
    msg.speed_units = 133U;
    msg.start_time = 0.4510604043211308;
    msg.custom.assign("BOXFQMPLPDXKWBCIKILJVQWDUYJHLLBQGAARVZRTNFIMVNWGOZZHUSZDHUITDUIOQCRZKGBUHWJGMEMTODDLTEXFYNRKPGPWRGBOWKSERSRXCPXVEJSPRYEQVWSANFCGCAAUYSINTJKQVJMQI");

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
    msg.setTimeStamp(0.16354126397738422);
    msg.setSource(55979U);
    msg.setSourceEntity(240U);
    msg.setDestination(8440U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.6572205003178422;
    msg.lon = 0.818906039103016;
    msg.z = 0.9039272908774059;
    msg.z_units = 34U;
    msg.speed = 0.33076910629016176;
    msg.speed_units = 53U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.21629990155451306;
    tmp_msg_0.y = 0.8761117446793214;
    tmp_msg_0.z = 0.22215833637179416;
    tmp_msg_0.t = 0.5835508359368428;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.5661217208557252;
    msg.custom.assign("XYMPRYFQPYBOTAFTKWCQDHTEJOLLVBZYQTRCBUAGTWYDNEPSLNVFJQXMSUFNXDSVRGKBPYEDYHVCDUHSFNSKBQAPLWEPYQSIZJBNCYUPOMOLMVOIULBGPARZOAIVMGFGH");

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
    msg.setTimeStamp(0.25978702863092173);
    msg.setSource(8428U);
    msg.setSourceEntity(66U);
    msg.setDestination(32750U);
    msg.setDestinationEntity(163U);
    msg.vid = 2792U;
    msg.off_x = 0.019153707244943363;
    msg.off_y = 0.601588210147069;
    msg.off_z = 0.06415658638837818;

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
    msg.setTimeStamp(0.5854772738830948);
    msg.setSource(64270U);
    msg.setSourceEntity(16U);
    msg.setDestination(15542U);
    msg.setDestinationEntity(238U);
    msg.vid = 41499U;
    msg.off_x = 0.7792068727169126;
    msg.off_y = 0.31966812253549504;
    msg.off_z = 0.1407424954818426;

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
    msg.setTimeStamp(0.4331496856748154);
    msg.setSource(22313U);
    msg.setSourceEntity(105U);
    msg.setDestination(28386U);
    msg.setDestinationEntity(145U);
    msg.vid = 49785U;
    msg.off_x = 0.6930506774560349;
    msg.off_y = 0.6883477093157637;
    msg.off_z = 0.05554209743895255;

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
    msg.setTimeStamp(0.8963310651103557);
    msg.setSource(1263U);
    msg.setSourceEntity(89U);
    msg.setDestination(59585U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.6682601539929314);
    msg.setSource(56072U);
    msg.setSourceEntity(138U);
    msg.setDestination(18555U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.5632558380229331);
    msg.setSource(19499U);
    msg.setSourceEntity(133U);
    msg.setDestination(41009U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.31327639754627234);
    msg.setSource(29860U);
    msg.setSourceEntity(191U);
    msg.setDestination(21296U);
    msg.setDestinationEntity(134U);
    msg.mid = 21758U;

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
    msg.setTimeStamp(0.2726217691239753);
    msg.setSource(38814U);
    msg.setSourceEntity(54U);
    msg.setDestination(5536U);
    msg.setDestinationEntity(231U);
    msg.mid = 36235U;

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
    msg.setTimeStamp(0.045407938149625515);
    msg.setSource(35335U);
    msg.setSourceEntity(235U);
    msg.setDestination(23920U);
    msg.setDestinationEntity(133U);
    msg.mid = 50011U;

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
    msg.setTimeStamp(0.9006998851218062);
    msg.setSource(18855U);
    msg.setSourceEntity(8U);
    msg.setDestination(7080U);
    msg.setDestinationEntity(58U);
    msg.state = 173U;
    msg.eta = 44246U;
    msg.info.assign("MLUEKBOIDKLSKTUIXIFMCCYCRHCFPJIYDLCOSJPWJCSWPHMNJTRIWRSKOFDTXWOOCHURRZDBMOQVYPBWIWXNHXSAAJRKPTGXJALFSXDDGZEGJVNULBLPTUJYIRGHZGEJVPAAAPGMRGVNMUVWTDMFUMWUNL");

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
    msg.setTimeStamp(0.8600528359384039);
    msg.setSource(11115U);
    msg.setSourceEntity(80U);
    msg.setDestination(59675U);
    msg.setDestinationEntity(194U);
    msg.state = 219U;
    msg.eta = 20091U;
    msg.info.assign("HUCPPMVPWGDFAEIKYUMTCVMSOIRTJBLRWJSY");

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
    msg.setTimeStamp(0.5583999917017294);
    msg.setSource(17166U);
    msg.setSourceEntity(235U);
    msg.setDestination(36285U);
    msg.setDestinationEntity(145U);
    msg.state = 16U;
    msg.eta = 52600U;
    msg.info.assign("SAUCAZSELXLDOALFBBHVZOTBKPFFDESPJAZCPWKVHLORLNUIVQPSAEFTDKIHATKGHXYWCNENKWYTYNYNQQKLXZJAHLIGZNREEGDODGAXISVXMBRQBZRMYVGPVKANVMSCUOVDIWORDAUXCQHZDJETYFHPDSOSOHBUWZGKTWYYLQYVRCGIPOMPRJXWDZVPJQMRJPIESJXUJBSRUETMITCXITXZTGFEQFI");

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
    msg.setTimeStamp(0.9771633365504685);
    msg.setSource(45519U);
    msg.setSourceEntity(52U);
    msg.setDestination(4407U);
    msg.setDestinationEntity(31U);
    msg.system = 54911U;
    msg.duration = 58U;
    msg.speed = 0.12617634081592077;
    msg.speed_units = 16U;
    msg.x = 0.4782219917576702;
    msg.y = 0.07816891191412234;
    msg.z = 0.9098962318100948;
    msg.z_units = 155U;

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
    msg.setTimeStamp(0.4233322801484499);
    msg.setSource(60214U);
    msg.setSourceEntity(139U);
    msg.setDestination(11025U);
    msg.setDestinationEntity(122U);
    msg.system = 35198U;
    msg.duration = 41098U;
    msg.speed = 0.8481848211176237;
    msg.speed_units = 127U;
    msg.x = 0.7539226813536684;
    msg.y = 0.889924738550937;
    msg.z = 0.920714967586575;
    msg.z_units = 86U;

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
    msg.setTimeStamp(0.1544197157446736);
    msg.setSource(31845U);
    msg.setSourceEntity(43U);
    msg.setDestination(55392U);
    msg.setDestinationEntity(5U);
    msg.system = 39847U;
    msg.duration = 62228U;
    msg.speed = 0.6414166544385842;
    msg.speed_units = 109U;
    msg.x = 0.8127997806718782;
    msg.y = 0.2213308405737019;
    msg.z = 0.20934482286364342;
    msg.z_units = 164U;

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
    msg.setTimeStamp(0.3966902423890041);
    msg.setSource(63625U);
    msg.setSourceEntity(112U);
    msg.setDestination(45539U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.634826362276093;
    msg.lon = 0.6485793961871393;
    msg.speed = 0.8717199062673852;
    msg.speed_units = 52U;
    msg.duration = 22517U;
    msg.sys_a = 30842U;
    msg.sys_b = 61507U;
    msg.move_threshold = 0.56506836263319;

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
    msg.setTimeStamp(0.6438528032827218);
    msg.setSource(54029U);
    msg.setSourceEntity(98U);
    msg.setDestination(65081U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.32818536261978903;
    msg.lon = 0.7131458358070921;
    msg.speed = 0.4207924627473695;
    msg.speed_units = 207U;
    msg.duration = 58336U;
    msg.sys_a = 5585U;
    msg.sys_b = 52094U;
    msg.move_threshold = 0.5939897882630393;

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
    msg.setTimeStamp(0.12365086763705158);
    msg.setSource(58259U);
    msg.setSourceEntity(216U);
    msg.setDestination(24260U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.11830380035053933;
    msg.lon = 0.04603928190531936;
    msg.speed = 0.591531511720597;
    msg.speed_units = 134U;
    msg.duration = 44516U;
    msg.sys_a = 31531U;
    msg.sys_b = 54840U;
    msg.move_threshold = 0.7304837094602873;

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
    msg.setTimeStamp(0.2253689701214181);
    msg.setSource(64464U);
    msg.setSourceEntity(151U);
    msg.setDestination(7976U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.029332854570912503;
    msg.lon = 0.06684229531758834;
    msg.z = 0.567671170253418;
    msg.z_units = 87U;
    msg.speed = 0.15212268131597184;
    msg.speed_units = 155U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.18476047277923868;
    tmp_msg_0.lon = 0.40571999176814133;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("EHTQLKUOYGLMXAKSYTFQWXRNICXSPCTDFIRTVZCUAFSBXEUGJZYMVFBLAYOGPUEDYAHDOCRKUIJXBAEPPGNNYZQJRKFGFNZDWMRZYWNRMYSFPHWJWJBCD");

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
    msg.setTimeStamp(0.8259317671005466);
    msg.setSource(15237U);
    msg.setSourceEntity(234U);
    msg.setDestination(13476U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.226982871055615;
    msg.lon = 0.8578178734311113;
    msg.z = 0.7201113194090435;
    msg.z_units = 75U;
    msg.speed = 0.4114121846760266;
    msg.speed_units = 167U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7376863250886659;
    tmp_msg_0.lon = 0.2260916531242959;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("XSFBQKRMPZMORGQZKPLNTAKCEYOPJHXRIPEPJJEIUVHPONKRLFJTSMTVIIRJFSCDQNDCVMBKMABUGBADVUWL");

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
    msg.setTimeStamp(0.17502570789154293);
    msg.setSource(972U);
    msg.setSourceEntity(241U);
    msg.setDestination(5077U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.847101740749087;
    msg.lon = 0.9512886173926173;
    msg.z = 0.39581893205988783;
    msg.z_units = 247U;
    msg.speed = 0.5962835243236105;
    msg.speed_units = 171U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.23756469086928378;
    tmp_msg_0.lon = 0.5692802103943067;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("MJEGGGQWDHUPKMYBOTCIAOBHIYPJTIFVLFNXBFIEHHZJTRXDVVQABAYBETFZSGXPGPKKANZELBKQVDWQLXNYDAZCUMQAVVWLJIELHGISESWCYXNHCAJOOAAYUNQOGDVUFZWDVCDYOMUMJSUHHVAPGUPISQDUWRRCTXXZOKGFTTTEPKKEMLFXSJCRWIYRBFNICFLWJOUZMMBC");

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
    msg.setTimeStamp(0.3474851196588953);
    msg.setSource(61495U);
    msg.setSourceEntity(135U);
    msg.setDestination(8408U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.28770483733002694;
    msg.lon = 0.9778670433770638;

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
    msg.setTimeStamp(0.10478092938983785);
    msg.setSource(596U);
    msg.setSourceEntity(0U);
    msg.setDestination(3760U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.9517501082654859;
    msg.lon = 0.6401462923065655;

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
    msg.setTimeStamp(0.6838936899985146);
    msg.setSource(36395U);
    msg.setSourceEntity(16U);
    msg.setDestination(34572U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.6472329198093153;
    msg.lon = 0.32304135200981643;

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
    msg.setTimeStamp(0.1534433438533388);
    msg.setSource(18133U);
    msg.setSourceEntity(37U);
    msg.setDestination(39865U);
    msg.setDestinationEntity(117U);
    msg.timeout = 20816U;
    msg.lat = 0.615825566581184;
    msg.lon = 0.12565904337878664;
    msg.z = 0.12114034070213908;
    msg.z_units = 153U;
    msg.pitch = 0.6805273199051293;
    msg.amplitude = 0.9969914546947994;
    msg.duration = 33230U;
    msg.speed = 0.26850013211414936;
    msg.speed_units = 82U;
    msg.radius = 0.2550629599780142;
    msg.direction = 114U;
    msg.custom.assign("KJFVRGIZRPNZQFXNAPSBJCSRTBQZWXGOLVVIMLMECDEQAYVHLDHQYJKAKEKAWOPSWKORIIULMDWAQTTFBGLAODJSDSVNEAGZZCILBYMZFKGSZOKUPETBRWBDOHWECXJMZDWRJYBMOGHYHGMQYIAGNTDSAMLSHOMFWOECYZYXXTRBNFPIBNRTSUUCJVYUCBIUPOLVVDKTPVYQHCUVPUHCTFJFMJXLZNN");

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
    msg.setTimeStamp(0.30992255365405585);
    msg.setSource(2583U);
    msg.setSourceEntity(21U);
    msg.setDestination(16221U);
    msg.setDestinationEntity(197U);
    msg.timeout = 34553U;
    msg.lat = 0.12733698539687666;
    msg.lon = 0.9507557460640024;
    msg.z = 0.9973508860155783;
    msg.z_units = 105U;
    msg.pitch = 0.8319863429329188;
    msg.amplitude = 0.6667557598361861;
    msg.duration = 62414U;
    msg.speed = 0.21752870035460303;
    msg.speed_units = 45U;
    msg.radius = 0.4712779169609588;
    msg.direction = 52U;
    msg.custom.assign("XKMTIAJBPZEMEQKRYRDWOBFUINCHQWTDLNTULMJHSXRNUVHYRBPSMJGPLBWRFRADDAMJCHVGCZOTPBYPDIIRNGGOZVSPRYSIIPOWVTEFTFATMDETHHGVUUSEYIYCGEVWNJWHJBLKFCPWZPEXZTDQFWOIHAAVQCBUTCBHFKKOGLKGLXGXVOBLMNMAVMJSYEKYACBZJXAPRXXZYUVZRCIFNLUQUNQGEYWJDOQXSDJQUQOX");

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
    msg.setTimeStamp(0.6289466409929974);
    msg.setSource(14234U);
    msg.setSourceEntity(82U);
    msg.setDestination(41755U);
    msg.setDestinationEntity(78U);
    msg.timeout = 12561U;
    msg.lat = 0.40521359498647347;
    msg.lon = 0.24207672240465639;
    msg.z = 0.2427901771461849;
    msg.z_units = 115U;
    msg.pitch = 0.3877173044098876;
    msg.amplitude = 0.1640630617653599;
    msg.duration = 14160U;
    msg.speed = 0.7300075440586493;
    msg.speed_units = 231U;
    msg.radius = 0.5587995314735477;
    msg.direction = 250U;
    msg.custom.assign("DTXCFCFUIWBXCGCMNECNWYNOGJUYIGGQBLKMZUKURPRKUCIQJNZOYFVGWKTMNVFNPHQMTFXPVGBZPFLBDMIEQRYJVIOLPWRTUVSDBCWEESWZHTGBKHVHAFSMRAJUZPAETDQSGOKUNIAAKSBZSYKARZLOMQPCTJHDOHUXVLAFPPPBSHEYZYXMHUKFROD");

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
    msg.setTimeStamp(0.34764061203621976);
    msg.setSource(57449U);
    msg.setSourceEntity(19U);
    msg.setDestination(7936U);
    msg.setDestinationEntity(248U);
    msg.formation_name.assign("PNMUTKVGDQAHZPUBFLXUCHBNCRERDKALVILACGWOYSDGJTYOAGOPZVDREMTNVCHJKIKAYUGJQPGDBJHKXRRENDTMLNWOPTQBZQRBIILKIVQHGSBLJ");
    msg.reference_frame = 33U;
    msg.custom.assign("RXZAPAHHQKABVVNEIIUIYFVJNNMV");

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
    msg.setTimeStamp(0.3471987448993782);
    msg.setSource(57360U);
    msg.setSourceEntity(215U);
    msg.setDestination(43832U);
    msg.setDestinationEntity(230U);
    msg.formation_name.assign("RWSJNHDERTGJFKQCTJHSJMYRWVBOQWRMENIWSBIJVBHWDQSUSDATNXLNWDNGWBPDRFIECREGTVHICTGEYPKTXCVMEEKSLFXLTKVYMRCXECLMPXIJUOVZBXMSXCFXTGPYZFBPBFDFZQNFAVNCAYAABCU");
    msg.reference_frame = 83U;
    msg.custom.assign("STPRHGNUGXGUEWKDSBPFOTEVCMAJFXSIEHCIVHNWZXWYSXRPWQXFBQZYM");

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
    msg.setTimeStamp(0.2718541062243526);
    msg.setSource(16824U);
    msg.setSourceEntity(44U);
    msg.setDestination(31446U);
    msg.setDestinationEntity(111U);
    msg.formation_name.assign("IBRBBTERNLJOLVGNVHIZSLXZSDTXZHHFNBFBHWYRPVGWJSFDRSFLVZEKYXNBRPXMRKQTRSOMVKZGEXMLMHSWPVAKFCIKFATIQZBUHLCUUMWYMPHTOIYISEUKAAQLLCZKWOSQDTGJPAENUYNUOIOZSFEEXCMTDSUMFBXDQGYNIJCROCFQMZTKXNJLQNTW");
    msg.reference_frame = 88U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 45253U;
    tmp_msg_0.off_x = 0.44846778487794026;
    tmp_msg_0.off_y = 0.43565714485330365;
    tmp_msg_0.off_z = 0.6795623442935131;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("NAILHWCRAPYOVRNXQBRVIICLSPDFNKAXQOMWNLBKYDRKSUVCYFFNQXJHVGLPVTDOLOHYUBEPAKCEEDBZXUHETTPSMHXTIUIDFQNLYQUZGFFSVMOMZTZYNIBCS");

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
    msg.setTimeStamp(0.4500258792359477);
    msg.setSource(39335U);
    msg.setSourceEntity(73U);
    msg.setDestination(38461U);
    msg.setDestinationEntity(181U);
    msg.group_name.assign("QEDSICFMUHLDNGBPLMIDRRCAZIHQJSTUGSPRVVCWTOJLDORPABKOYWEYLCBKCNJHXDFYXTFMZKYTTWUXEYKJAVCPGRIQZTHFGFOPTLVJBZYIPHYEXAKUKSTQKFWJNGASZOAHOVUQCZUAABBBRJNURWDLELEHVAICNQNBTTMCJVOPJIYGWNMBMHSWFZDGVOWYSSQXJUNKMFPOIFRDMQLKUYEHXNCDZISQ");
    msg.formation_name.assign("JSWJDYKNEORSHEVMIWMJOUIBTNYYSWKZOJKUIUKKESVDTQMKPASIPRLRWUDHUTXAPOKWZLWTYEYTDPOOQQVTOAGQRAGKLTAGNWIMDHDNZRMCBZJXQXWDXYCUNZQBJHAGZBNUIFEGPNBQLYIESTFPACEYSTVMZVEXRYIMICLAJFGVXZFKCKOCHXPVAZRCREGLFQTURBVOQH");
    msg.plan_id.assign("YHTMUHDSKYZPFIZGWBHRCZZITPQEIAECIMABAMNRUFNXBPMFQWVBTQZDJADOLSGWUHVLCURNXSYBBUDQVLVEORCORQRAFSTRLFMKMPFOONSKRCGXWXZFZJMJEHWYHXWWQAXROFDE");
    msg.description.assign("ACAZNUOYTOFYTVKLXTGXNMOQFKSAQUITIIXYKJEPVZIYXHQLLVMIRRWNNEMWLGNLXWU");
    msg.leader_speed = 0.016869681607320053;
    msg.leader_bank_lim = 0.971296426977315;
    msg.pos_sim_err_lim = 0.6720483567007263;
    msg.pos_sim_err_wrn = 0.38868378660247216;
    msg.pos_sim_err_timeout = 32917U;
    msg.converg_max = 0.26065935090672687;
    msg.converg_timeout = 40794U;
    msg.comms_timeout = 44707U;
    msg.turb_lim = 0.5781486158045119;
    msg.custom.assign("CXFRDTCHXSMGIQLGFYGEGJMKTSYGWGVMWLEYZPZDHLFTQVYLXOZWCATT");

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
    msg.setTimeStamp(0.39315326389538974);
    msg.setSource(60560U);
    msg.setSourceEntity(41U);
    msg.setDestination(32588U);
    msg.setDestinationEntity(184U);
    msg.group_name.assign("LVTJBEYIVGFCVZECNPFYVQCBQENVNDLIPFJFBYHGSOCRBPUHOWIKYRVWMFRKQAXWLBJLJKUMXLGBNDXGEXEPTIZCAYVNDUTCOSOUZLSUGIM");
    msg.formation_name.assign("GJMRVESKOSBCPYRZFATWVDJFQBZCHAAYDSWUHEXONKIKREMFNIEVLTVLGQYUDGGYRPNJBARJDWJMIZUSXWAHOKFMGENTZERTTZDNUTXDUBNBYCDCXTGPQQCKWEVXSZODDQOQTPHVOPBQIEPRJYJFHBPFQQWIBUSEHKJSGCQFBUZKSSMVVRJFCBPKIOVZXLYOHLSRLXJAALMUPZGLIKACUMMHTKCFINOEAHLZHXIRTOINXNLMUYMVGWWXW");
    msg.plan_id.assign("RNAQOEEWWAJBQYSBVHBUSRQDZJNKLXIEGKUMEIMOZSHVPUWGTKJRBEXVWDPBZSRXXMYLOZPZJDCKYUUNNOKANLHMSPMLNRVGBIFUVBPJOFQRYPFQACHPTLSTGQEDOXLYLHZ");
    msg.description.assign("KSIATGPJYGOYPQPAIOFEVZNYECLPXAYOZCSVDCQKPLHVQZXWUNFGJMMNLKMMOBZLGGDMDTWCOAXVIVIKXQVRYUHBPKWSCRKTHERKFFHRRDNUEXQTJDQWRLFHCLPWYFYGP");
    msg.leader_speed = 0.16158030128930945;
    msg.leader_bank_lim = 0.23996585178902097;
    msg.pos_sim_err_lim = 0.6000068060813005;
    msg.pos_sim_err_wrn = 0.6877407412384385;
    msg.pos_sim_err_timeout = 59404U;
    msg.converg_max = 0.20908912622428455;
    msg.converg_timeout = 23328U;
    msg.comms_timeout = 59576U;
    msg.turb_lim = 0.6595586366334749;
    msg.custom.assign("JDKQJDQYBRSAOEOIUKSNJMYYKZZDZZOUMEIRROLATKSPZKGUBIOCTTMSCVFTYQVGGXEEWYAGPWKVMLZUBNOILURHTVXDJWKNQTAWYYBAPNHRCFCUPKLIVFSRFQBOLLXAHPCFJZZSOVGMSQPWHIVWDAFRIMNEGJTQJVDGZBQBDNXLWCQCABKPLHXQCT");

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
    msg.setTimeStamp(0.876779818673652);
    msg.setSource(29603U);
    msg.setSourceEntity(224U);
    msg.setDestination(12289U);
    msg.setDestinationEntity(59U);
    msg.group_name.assign("URRWVUQNTOEHZGDVZBD");
    msg.formation_name.assign("BJGNFNVENHCPWWMYOINECLRRLEHAZLYFQRUVVDTCCJNWXGDVFSILXLWJFGSOULRKQDUANEAVTZOAZTHNVADZRMDYZDBISBBKXPUYKWHJOLYPLUQGQAODZRQFINSXKWKCKSGMEJBGA");
    msg.plan_id.assign("DUQVPLSMQPJOVLAAZIHTJEGQOENPPLAXLSZYAJRIFZJKPCUSGIDELNFDYFKRNUNACLPHQKVD");
    msg.description.assign("WFAROLHGSHYIOTEZCFOPRXCJGZDPVIGKWZJZ");
    msg.leader_speed = 0.9195814381677744;
    msg.leader_bank_lim = 0.6504792159913219;
    msg.pos_sim_err_lim = 0.5746922408928884;
    msg.pos_sim_err_wrn = 0.7213870613792508;
    msg.pos_sim_err_timeout = 7689U;
    msg.converg_max = 0.22295674229960494;
    msg.converg_timeout = 9129U;
    msg.comms_timeout = 60329U;
    msg.turb_lim = 0.12079489222931239;
    msg.custom.assign("RAFNTGYXJENLRDEIXHBFNQMAPMSAUSQSXOBVGDOTLAQYZOBCZPAOFEFSJDNMNIPQULMCZYIYFCCBKJOOGWCPKWSWEELLDTDJ");

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
    msg.setTimeStamp(0.7462454957746691);
    msg.setSource(52973U);
    msg.setSourceEntity(220U);
    msg.setDestination(62020U);
    msg.setDestinationEntity(61U);
    msg.control_src = 63150U;
    msg.control_ent = 204U;
    msg.timeout = 0.9602284607843463;
    msg.loiter_radius = 0.6824582554826958;
    msg.altitude_interval = 0.7444177451509932;

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
    msg.setTimeStamp(0.14139812244359906);
    msg.setSource(26794U);
    msg.setSourceEntity(133U);
    msg.setDestination(23115U);
    msg.setDestinationEntity(244U);
    msg.control_src = 46447U;
    msg.control_ent = 137U;
    msg.timeout = 0.6903104405860995;
    msg.loiter_radius = 0.43016515198478045;
    msg.altitude_interval = 0.19532509937338893;

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
    msg.setTimeStamp(0.44974516619846105);
    msg.setSource(10674U);
    msg.setSourceEntity(66U);
    msg.setDestination(1048U);
    msg.setDestinationEntity(88U);
    msg.control_src = 30804U;
    msg.control_ent = 236U;
    msg.timeout = 0.19010235799960418;
    msg.loiter_radius = 0.2713250101537813;
    msg.altitude_interval = 0.11895953801817172;

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
    msg.setTimeStamp(0.4221793362706522);
    msg.setSource(19432U);
    msg.setSourceEntity(187U);
    msg.setDestination(61223U);
    msg.setDestinationEntity(157U);
    msg.flags = 184U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7367868454788604;
    tmp_msg_0.speed_units = 89U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.31157263812902314;
    tmp_msg_1.z_units = 151U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.67875939624566;
    msg.lon = 0.946136737217223;
    msg.radius = 0.1655518494232624;

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
    msg.setTimeStamp(0.9294861834311998);
    msg.setSource(27113U);
    msg.setSourceEntity(213U);
    msg.setDestination(48024U);
    msg.setDestinationEntity(246U);
    msg.flags = 254U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9629752352277042;
    tmp_msg_0.speed_units = 25U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.09793762908106785;
    tmp_msg_1.z_units = 197U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.1509775085954399;
    msg.lon = 0.06657523337718096;
    msg.radius = 0.7613110839991197;

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
    msg.setTimeStamp(0.8635325139640035);
    msg.setSource(41313U);
    msg.setSourceEntity(238U);
    msg.setDestination(35150U);
    msg.setDestinationEntity(222U);
    msg.flags = 120U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7249706680475032;
    tmp_msg_0.speed_units = 254U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.2799177501270145;
    tmp_msg_1.z_units = 62U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.851828633605044;
    msg.lon = 0.700278958404687;
    msg.radius = 0.8908460895070844;

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
    msg.setTimeStamp(0.06329422359743875);
    msg.setSource(26714U);
    msg.setSourceEntity(30U);
    msg.setDestination(37628U);
    msg.setDestinationEntity(227U);
    msg.control_src = 6849U;
    msg.control_ent = 205U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 189U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9062930840870934;
    tmp_tmp_msg_0_0.speed_units = 157U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.49765894345133654;
    tmp_tmp_msg_0_1.z_units = 77U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.15117377417468703;
    tmp_msg_0.lon = 0.3899277283124615;
    tmp_msg_0.radius = 0.06737915579315412;
    msg.reference.set(tmp_msg_0);
    msg.state = 231U;
    msg.proximity = 99U;

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
    msg.setTimeStamp(0.9816954777257503);
    msg.setSource(12317U);
    msg.setSourceEntity(206U);
    msg.setDestination(17495U);
    msg.setDestinationEntity(74U);
    msg.control_src = 19947U;
    msg.control_ent = 110U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 181U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6175347126562888;
    tmp_tmp_msg_0_0.speed_units = 103U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8282942647491658;
    tmp_tmp_msg_0_1.z_units = 154U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.4341976641678851;
    tmp_msg_0.lon = 0.6281122746785265;
    tmp_msg_0.radius = 0.7220825030199733;
    msg.reference.set(tmp_msg_0);
    msg.state = 43U;
    msg.proximity = 16U;

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
    msg.setTimeStamp(0.7017778977802032);
    msg.setSource(6385U);
    msg.setSourceEntity(239U);
    msg.setDestination(23967U);
    msg.setDestinationEntity(218U);
    msg.control_src = 47496U;
    msg.control_ent = 157U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 94U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0755333729662857;
    tmp_tmp_msg_0_0.speed_units = 81U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.94705750577647;
    tmp_tmp_msg_0_1.z_units = 167U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8939506159497033;
    tmp_msg_0.lon = 0.7847077795040649;
    tmp_msg_0.radius = 0.4508452433624345;
    msg.reference.set(tmp_msg_0);
    msg.state = 188U;
    msg.proximity = 46U;

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
    msg.setTimeStamp(0.17928258313252265);
    msg.setSource(27452U);
    msg.setSourceEntity(12U);
    msg.setDestination(60976U);
    msg.setDestinationEntity(115U);
    msg.ax_cmd = 0.5784104938391507;
    msg.ay_cmd = 0.9564557626579177;
    msg.az_cmd = 0.6264872204336628;
    msg.ax_des = 0.42624508536483763;
    msg.ay_des = 0.4717039816563561;
    msg.az_des = 0.3849073042622625;
    msg.virt_err_x = 0.02885262147541723;
    msg.virt_err_y = 0.4711128995222619;
    msg.virt_err_z = 0.6867786004352077;
    msg.surf_fdbk_x = 0.09999653140081532;
    msg.surf_fdbk_y = 0.005444014183687562;
    msg.surf_fdbk_z = 0.23836185350523598;
    msg.surf_unkn_x = 0.7187141005669268;
    msg.surf_unkn_y = 0.6228332589872395;
    msg.surf_unkn_z = 0.38957775479978507;
    msg.ss_x = 0.7172817725490112;
    msg.ss_y = 0.0794537038051405;
    msg.ss_z = 0.19378008691579562;

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
    msg.setTimeStamp(0.9031217173598857);
    msg.setSource(8766U);
    msg.setSourceEntity(71U);
    msg.setDestination(22418U);
    msg.setDestinationEntity(251U);
    msg.ax_cmd = 0.9290627288927392;
    msg.ay_cmd = 0.9390863266146658;
    msg.az_cmd = 0.2453219914820478;
    msg.ax_des = 0.13383900625789913;
    msg.ay_des = 0.7520395721525157;
    msg.az_des = 0.398356778952747;
    msg.virt_err_x = 0.21929575348039942;
    msg.virt_err_y = 0.45592250423870206;
    msg.virt_err_z = 0.5238669937062241;
    msg.surf_fdbk_x = 0.06074624791341998;
    msg.surf_fdbk_y = 0.20041496831793648;
    msg.surf_fdbk_z = 0.9930093014242556;
    msg.surf_unkn_x = 0.2478382821834607;
    msg.surf_unkn_y = 0.2551553971417263;
    msg.surf_unkn_z = 0.9481845509693803;
    msg.ss_x = 0.7100897418060522;
    msg.ss_y = 0.2051055466591818;
    msg.ss_z = 0.7279790471828408;

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
    msg.setTimeStamp(0.012136823816729203);
    msg.setSource(33639U);
    msg.setSourceEntity(177U);
    msg.setDestination(24123U);
    msg.setDestinationEntity(151U);
    msg.ax_cmd = 0.8622965248573282;
    msg.ay_cmd = 0.15281766097834237;
    msg.az_cmd = 0.007184920755758384;
    msg.ax_des = 0.7508733729177574;
    msg.ay_des = 0.8502250663070212;
    msg.az_des = 0.45679160710517797;
    msg.virt_err_x = 0.5615584828875443;
    msg.virt_err_y = 0.5807003274349197;
    msg.virt_err_z = 0.4845611243332715;
    msg.surf_fdbk_x = 0.5039916458139078;
    msg.surf_fdbk_y = 0.9548609584831176;
    msg.surf_fdbk_z = 0.7404702019911263;
    msg.surf_unkn_x = 0.8184132454459652;
    msg.surf_unkn_y = 0.3677065314062654;
    msg.surf_unkn_z = 0.30667108988982905;
    msg.ss_x = 0.9010962226623134;
    msg.ss_y = 0.709218291879365;
    msg.ss_z = 0.15752875228335694;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("UPJXOKKAMSGHIQBMBWVESPNMVQODHTJLLUNCUDDYWARQCKXYENIXIFVSPITBYYLXAHMQZZXIBRGTVNRJTIYYECONLUWWHRSZMDJVGLNEGPAOJXYJZNLUKTDDUNEGH");
    tmp_msg_0.dist = 0.9684762158031652;
    tmp_msg_0.err = 0.2274638167532792;
    tmp_msg_0.ctrl_imp = 0.08682293370186112;
    tmp_msg_0.rel_dir_x = 0.8427150485344143;
    tmp_msg_0.rel_dir_y = 0.6653729432268818;
    tmp_msg_0.rel_dir_z = 0.07013134455720849;
    tmp_msg_0.err_x = 0.20668324089151957;
    tmp_msg_0.err_y = 0.9826377498963895;
    tmp_msg_0.err_z = 0.25384050908035316;
    tmp_msg_0.rf_err_x = 0.7805591317807384;
    tmp_msg_0.rf_err_y = 0.525481499468719;
    tmp_msg_0.rf_err_z = 0.1522144709947123;
    tmp_msg_0.rf_err_vx = 0.10933088233084998;
    tmp_msg_0.rf_err_vy = 0.0023298470408045224;
    tmp_msg_0.rf_err_vz = 0.045669942863137414;
    tmp_msg_0.ss_x = 0.8358091009057558;
    tmp_msg_0.ss_y = 0.5796055793442736;
    tmp_msg_0.ss_z = 0.17983107155753808;
    tmp_msg_0.virt_err_x = 0.03365229598630104;
    tmp_msg_0.virt_err_y = 0.9001970645042549;
    tmp_msg_0.virt_err_z = 0.4970480810814184;
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
    msg.setTimeStamp(0.90830786780514);
    msg.setSource(56685U);
    msg.setSourceEntity(159U);
    msg.setDestination(40481U);
    msg.setDestinationEntity(155U);
    msg.s_id.assign("BZDJKQBVVSMHGIWARGAMXVQHFJTJABLOBOJCTJCQZHEBGWXTZRC");
    msg.dist = 0.08619676219255279;
    msg.err = 0.14135149387905643;
    msg.ctrl_imp = 0.7885418811630505;
    msg.rel_dir_x = 0.4817257423835546;
    msg.rel_dir_y = 0.036224199397326906;
    msg.rel_dir_z = 0.02030084948588462;
    msg.err_x = 0.6722556010347575;
    msg.err_y = 0.7741876660519692;
    msg.err_z = 0.3642467286167731;
    msg.rf_err_x = 0.9126358429321144;
    msg.rf_err_y = 0.6765895789977516;
    msg.rf_err_z = 0.5038970444284672;
    msg.rf_err_vx = 0.26796637895569153;
    msg.rf_err_vy = 0.4002971080136959;
    msg.rf_err_vz = 0.19768961490370152;
    msg.ss_x = 0.6918109825224554;
    msg.ss_y = 0.1908417971955505;
    msg.ss_z = 0.5574688621347569;
    msg.virt_err_x = 0.7584799771895128;
    msg.virt_err_y = 0.5525734495671503;
    msg.virt_err_z = 0.940568196533094;

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
    msg.setTimeStamp(0.38734956116968655);
    msg.setSource(901U);
    msg.setSourceEntity(35U);
    msg.setDestination(45386U);
    msg.setDestinationEntity(48U);
    msg.s_id.assign("RSFUBBKQTVSGUFZBGVBJBCPICICNQBGUJIXZYXIEAWTFRUUSOAPDNTYQHDHQYWJORMLZHOBKUVODNSZGQYNUMEFRRRDTZKWLYXWXWPCFFDQQPE");
    msg.dist = 0.25726706704700797;
    msg.err = 0.5848826800304072;
    msg.ctrl_imp = 0.011577019227638985;
    msg.rel_dir_x = 0.37087321328396994;
    msg.rel_dir_y = 0.070039215787842;
    msg.rel_dir_z = 0.13309579650524173;
    msg.err_x = 0.9710980380765523;
    msg.err_y = 0.5842325408550547;
    msg.err_z = 0.24117790854982413;
    msg.rf_err_x = 0.47677126633294853;
    msg.rf_err_y = 0.029165803571731375;
    msg.rf_err_z = 0.1286708319234099;
    msg.rf_err_vx = 0.4815862268812572;
    msg.rf_err_vy = 0.39011774337950644;
    msg.rf_err_vz = 0.5982662513752779;
    msg.ss_x = 0.6701664694198738;
    msg.ss_y = 0.3207826611139196;
    msg.ss_z = 0.7540424319045693;
    msg.virt_err_x = 0.4951788070731056;
    msg.virt_err_y = 0.8264166954167466;
    msg.virt_err_z = 0.5428321137601764;

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
    msg.setTimeStamp(0.5713892872678745);
    msg.setSource(25014U);
    msg.setSourceEntity(129U);
    msg.setDestination(57984U);
    msg.setDestinationEntity(153U);
    msg.s_id.assign("TCPINJYPWFODNKERRENKWLRBGPUFJONFMRRKZAHHQWZVEQRWIHIKWVIOYIHJPETDGSELQVEKPSWNDUVGXZOZYTAYOUTVHURCGGNVPQACFXCUWDRPMQECJPSITMMKCMAQVSPJGCVJIIZBGQ");
    msg.dist = 0.03805860924019833;
    msg.err = 0.40151119495724463;
    msg.ctrl_imp = 0.87182789509258;
    msg.rel_dir_x = 0.6792647854100552;
    msg.rel_dir_y = 0.8538671684315452;
    msg.rel_dir_z = 0.9730555667155442;
    msg.err_x = 0.41603734843037443;
    msg.err_y = 0.19617668394264265;
    msg.err_z = 0.5126018130215586;
    msg.rf_err_x = 0.669815213356219;
    msg.rf_err_y = 0.0204590866677703;
    msg.rf_err_z = 0.7574451568418191;
    msg.rf_err_vx = 0.5851646234505037;
    msg.rf_err_vy = 0.4148178552389751;
    msg.rf_err_vz = 0.08308694426974683;
    msg.ss_x = 0.6669689887800738;
    msg.ss_y = 0.8656098967306854;
    msg.ss_z = 0.16977158929707936;
    msg.virt_err_x = 0.46699689251526155;
    msg.virt_err_y = 0.8934592579103693;
    msg.virt_err_z = 0.21973348465773934;

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
    msg.setTimeStamp(0.5768629170206944);
    msg.setSource(19325U);
    msg.setSourceEntity(134U);
    msg.setDestination(7579U);
    msg.setDestinationEntity(31U);
    msg.timeout = 60628U;
    msg.rpm = 0.6256881528297311;
    msg.direction = 32U;
    msg.custom.assign("HEKMYLVMACPAZZPOKARIURFCYDWRBWPHWFSWHPJUJXOTUTEPAZBDHNSRFWCWUZPBKNLWDKQCIKGXNRASLDUZJMTKMQVEKHQQYCYBSOFSOTLMYRNMBFTEBAXNMHKOETVDOSZCQXFCSMCEGBYLQNZBXMHVSCKWAQEDPVXHGBLZLTZVOKLDMTIZPQB");

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
    msg.setTimeStamp(0.5720641126226355);
    msg.setSource(58569U);
    msg.setSourceEntity(114U);
    msg.setDestination(61555U);
    msg.setDestinationEntity(246U);
    msg.timeout = 29724U;
    msg.rpm = 0.3595869218879624;
    msg.direction = 183U;
    msg.custom.assign("UGRBIDYLWPPHOMYLXXKCZRWIKIMVCLTXUJBMWQSFVOYHICBDZUSATQRGNHMNAXCDODKYFUKTDDFPMGYQSYUISQAGXUUYCWHXR");

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
    msg.setTimeStamp(0.7253699168287123);
    msg.setSource(8219U);
    msg.setSourceEntity(209U);
    msg.setDestination(6725U);
    msg.setDestinationEntity(145U);
    msg.timeout = 15311U;
    msg.rpm = 0.16907979268676876;
    msg.direction = 190U;
    msg.custom.assign("UGDIIIXNQVEKWESLQAXKSGKLVDOOBAUZMNDRNYBVRKJQDZIXOCP");

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
    msg.setTimeStamp(0.3857693220515058);
    msg.setSource(62353U);
    msg.setSourceEntity(190U);
    msg.setDestination(26650U);
    msg.setDestinationEntity(84U);
    msg.op_mode = 123U;
    msg.error_count = 200U;
    msg.error_ents.assign("QEMNLVFTVJNHMCM");
    msg.maneuver_type = 27565U;
    msg.maneuver_stime = 0.4422802520950896;
    msg.maneuver_eta = 18783U;
    msg.control_loops = 2417647902U;
    msg.flags = 177U;
    msg.last_error.assign("VIOJPYAWJSIQOTVMUXAKPLFYABTVEWQLBLNXDIFKJRYNSQRVFLNGJBAZQKGQRBFPGPSZLCBCCNYKNHZSXYLSAMWECFQHCEGEGOVSRGXTQJEHJJSTXQDRRLFWBIMKVIMDCXNIOUYMOUGLRRAOKNSXUOCDOIZBBEVVDUJKOXXUUTZNNTESUWMFDLDKLKAGEPJWZCMAAFYHTWPIRBSMZMPCBY");
    msg.last_error_time = 0.3856440140178168;

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
    msg.setTimeStamp(0.5822176139244314);
    msg.setSource(46010U);
    msg.setSourceEntity(151U);
    msg.setDestination(10135U);
    msg.setDestinationEntity(64U);
    msg.op_mode = 158U;
    msg.error_count = 229U;
    msg.error_ents.assign("JVFKERXTBVSPTKODVLKMYNJUJURHPVJCVTMOFOKNCYTHHQUFOFKCDBQTLTKEEPICBRNMVRLNWEQZGFIGJNA");
    msg.maneuver_type = 59825U;
    msg.maneuver_stime = 0.769833948374277;
    msg.maneuver_eta = 18173U;
    msg.control_loops = 1628961604U;
    msg.flags = 215U;
    msg.last_error.assign("NZJTKDOYNALMGQJCFHSDFPTWGAEAVXMVBQVZNDZWEBECXROXTZTTSDBLQZMJMFPGMSXZDHNRTFBUQKRYEUSZJCYGOTYRTHHILDNCEVJVHNBICHPUCMBJGCCLQECGJBNOKHYMIZURKFWUKUSSKWPFWOAVATKSUWAJYODEOJP");
    msg.last_error_time = 0.7520793601299375;

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
    msg.setTimeStamp(0.5227880882025615);
    msg.setSource(12276U);
    msg.setSourceEntity(95U);
    msg.setDestination(12303U);
    msg.setDestinationEntity(120U);
    msg.op_mode = 140U;
    msg.error_count = 44U;
    msg.error_ents.assign("LQBLVFROLMPOXAMCIKYHUDUJWLSGTEZXSYWUPNSMKWIJVYHXBHKNPOEKFBYXXBXYRWNVUCUGPMPJLASFOJINCDTOGK");
    msg.maneuver_type = 18463U;
    msg.maneuver_stime = 0.9564848242233572;
    msg.maneuver_eta = 33357U;
    msg.control_loops = 1541783657U;
    msg.flags = 3U;
    msg.last_error.assign("SLGGZXAEMCXJIKEOSUFRPJVXUNOCZBLOTNWTSTZMWUWWQNZXPNBQFKFDLRSYWSBGCRXXGJYOZJDDJHEZEKIYAKCNDYUE");
    msg.last_error_time = 0.2305536829749012;

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
    msg.setTimeStamp(0.3568770579609515);
    msg.setSource(49517U);
    msg.setSourceEntity(46U);
    msg.setDestination(11365U);
    msg.setDestinationEntity(53U);
    msg.type = 82U;
    msg.request_id = 19352U;
    msg.command = 125U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.439421070424064;
    tmp_msg_0.lon = 0.9451087282609916;
    tmp_msg_0.z = 0.4265047166363056;
    tmp_msg_0.z_units = 113U;
    tmp_msg_0.speed = 0.8998918377787389;
    tmp_msg_0.speed_units = 161U;
    tmp_msg_0.custom.assign("NUFMAGUHOKESRTFPYVTLYPKAUTZTIFRNBXHDFFEIZWZIKFOMIHKVGAHLS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 34221U;
    msg.info.assign("TLLKASXRDLIEUWZNBGQQLFMWEDFCSJICVDAZJNSKHNMAOOVXMUDBQQSVYROPAQPLCDJZVBVGZWNBFNGRIZXGCMUSPWHNYXFWRXTWMUTWKUYJHTDZGOQDEFOBDEBQSEKRVZGIIJUVVQHSHIMTLPHYXQCMUTJAWYXGKOAREMGOZECYXSJKKTHGDSMVYCCOSW");

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
    msg.setTimeStamp(0.9266238226393423);
    msg.setSource(44121U);
    msg.setSourceEntity(152U);
    msg.setDestination(31645U);
    msg.setDestinationEntity(72U);
    msg.type = 221U;
    msg.request_id = 23042U;
    msg.command = 182U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 44047U;
    tmp_msg_0.lat = 0.38463834796001495;
    tmp_msg_0.lon = 0.7433839963391847;
    tmp_msg_0.z = 0.6408086055058212;
    tmp_msg_0.z_units = 147U;
    tmp_msg_0.speed = 0.08619587570547993;
    tmp_msg_0.speed_units = 250U;
    tmp_msg_0.custom.assign("SLQOMRXCRERINJRPYJTKXABWOFPRRMDRLUAGOVEDDWSAFOESCNIGFOSBGYTFUZVFNSKHGAFCAGUCKQQJLKZFPEGHLQJIKCZTVWCGPTJIOZTBDHLDRJQHMWZBMDYLKLWISNLUXRJOEGPGXNQHTSUQHKTDUOWFZMBUAWBVPQYIYZCVBMEHZWYIJXXU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 28267U;
    msg.info.assign("PFNYTJIQKPGPQIIWAOIQEACWNHTWFBPEBRMNLUIRSLLVRPLYITLUFGCHNUFYCQAKTDUPMDTTHVVQIIHDETFSLYVJGRGUJJCSXFSWVEVAOBOIKQMZBSJDDURNMRSFEPDGFGTBNASLIKHMFZQPLZKJZZKUWVKHXRNXKWGRZCEKEMYMRCYLOVMQODOTQGMOVNOUXXU");

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
    msg.setTimeStamp(0.7275331660117014);
    msg.setSource(59803U);
    msg.setSourceEntity(242U);
    msg.setDestination(37542U);
    msg.setDestinationEntity(124U);
    msg.type = 251U;
    msg.request_id = 32676U;
    msg.command = 121U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 15382U;
    tmp_msg_0.lat = 0.39964009767850317;
    tmp_msg_0.lon = 0.5904904820841012;
    tmp_msg_0.z = 0.34821660178254454;
    tmp_msg_0.z_units = 150U;
    tmp_msg_0.speed = 0.5184295206493459;
    tmp_msg_0.speed_units = 20U;
    tmp_msg_0.bearing = 0.5524425000315599;
    tmp_msg_0.cross_angle = 0.22597099869061343;
    tmp_msg_0.width = 0.09993887902320941;
    tmp_msg_0.length = 0.08088685690797948;
    tmp_msg_0.hstep = 0.5376430200191106;
    tmp_msg_0.coff = 1U;
    tmp_msg_0.alternation = 179U;
    tmp_msg_0.flags = 165U;
    tmp_msg_0.custom.assign("FSBPDSZFNWKCOTJXTYVMJDLSUTJAXUMBBFXFIPPFGLRZZNSREUWGEXWAXKGWQSOHRKMZOVTEQVXZGEOYHCACUFJTXWNPXQDZITJQVKATYBYADUGUTOKQEMYTIJOVMLHFHIDDBRIALSYPFNBPOQHWDHPEGCAEMZLHHXHAUIGHCEGOKCYAYCMZOAYKLFCMDJNNRBVJS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 58904U;
    msg.info.assign("UNBJHOGFYQYVSVBONKZCK");

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
    msg.setTimeStamp(0.6693712409333143);
    msg.setSource(24500U);
    msg.setSourceEntity(201U);
    msg.setDestination(62626U);
    msg.setDestinationEntity(197U);
    msg.command = 173U;
    msg.entities.assign("NBUPHPHFALEUQEBUZYPANITNFVVGREGVRGLCBJQHEJCLUTUOSJMQIDVOJIAKYNTEUWKSRXZADPFVMXTFWYRXZJPDWZEMPKYJS");

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
    msg.setTimeStamp(0.2557670136357585);
    msg.setSource(24273U);
    msg.setSourceEntity(131U);
    msg.setDestination(40657U);
    msg.setDestinationEntity(204U);
    msg.command = 194U;
    msg.entities.assign("OHSKIXXURJMCTPKUAFNETQEOSQCSLMZGSSMECCBXGLPNGWKRYJWIXHDZAFLKZWHNXCXFVXVQYRBYKNGQTNBBDJJITMUDTNEPFZWDZFVKFCSSYYMAJHLJCWZFUGIJMXFERDGPSBD");

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
    msg.setTimeStamp(0.08897455599523063);
    msg.setSource(1596U);
    msg.setSourceEntity(234U);
    msg.setDestination(56019U);
    msg.setDestinationEntity(116U);
    msg.command = 65U;
    msg.entities.assign("OGBXTAPIUFCKYKIMHBPFJGYDDURETNELKLSKUZNLTGTLLFXMDNJIDWODHSBZLSCXBWTPNHZCZHIBZXRDQUSUFJLVRUJMQMPQXCPAJVEDKLQUHPYGDXNJOMSSSNVPPUCXHGVZTCIOHBGKHLCAARVBGQGEFOXREFQMGST");

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
    msg.setTimeStamp(0.2907221712102036);
    msg.setSource(36494U);
    msg.setSourceEntity(238U);
    msg.setDestination(4198U);
    msg.setDestinationEntity(142U);
    msg.mcount = 13U;
    msg.mnames.assign("WYOMQQKTKQAJHUSRMMCSCBCKIVTLAUJJWXA");
    msg.ecount = 111U;
    msg.enames.assign("NZVFFMIZLMXMOWUELQPTCIJKTRUBEDFDZQLGKMQIGDGWVCAKDDYMYQKFELSMPDQBEHHOBYVUKXWRDJOJRVSCLZCCRWFIAHCYRWXGQWSOCNIRVNKXUNZFVHFCVRWJPAAJWBOLWOGTGDBXAEHHTNWSTELLKNXQRNPKEZAOVYAUGKYVJIMXBLSHHVPKZLOBBSJCBYPBHXTGJYUIOMQPDXPYGITPFE");
    msg.ccount = 180U;
    msg.cnames.assign("GBTSPAJBAYCAL");
    msg.last_error.assign("XHNKOFTBHABUL");
    msg.last_error_time = 0.027524239641391723;

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
    msg.setTimeStamp(0.6940871746859802);
    msg.setSource(1587U);
    msg.setSourceEntity(163U);
    msg.setDestination(28609U);
    msg.setDestinationEntity(151U);
    msg.mcount = 1U;
    msg.mnames.assign("GOFODJESLWGAWQFLDZBVURLMLVCIMYZYENXQUMPOQUYCOOUFJTKTBGSZNZOBMIPDRUXDWTYADHKFRNHHCRGDLYREQHTWGMWCBRYQZPONKVFEDRSMOKXCUXCXAK");
    msg.ecount = 246U;
    msg.enames.assign("GXVNUQQPFFPXGOAKNMNHGVQDHPXSYHVOUSEVWDCWNRBGILIPFBSZYGXEHABCNXRTVGTYYDVTQRUVJFCUNWLUBLKKJZIKWJCLFDWHNDTZRACRCVOWFURQBXMAOEHYZKHDAJOUCIUJEXDLAAVTNIFGYQZBBJBYKMPMEZCJN");
    msg.ccount = 175U;
    msg.cnames.assign("NYEQRSWUXAYCLJXJQBQPCFURPFDMIBKZYJYGTZAYCXAFHTOOVIZXGBOFDGQROGOZNRDLHV");
    msg.last_error.assign("BEDMOGPSGCDIOEXVDLOMOFIBPTFQTDQTLJMCZXAWFNHJFVRVGJZCQYYPZBWERHIQIYGKPRLGXXSQRAWIAWJDMADHCBRCLYFNVNKFTSAYDEIYKIPZZLSCMCBGUKJUOWVUESE");
    msg.last_error_time = 0.8381887883696741;

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
    msg.setTimeStamp(0.1299582966146322);
    msg.setSource(350U);
    msg.setSourceEntity(184U);
    msg.setDestination(40290U);
    msg.setDestinationEntity(97U);
    msg.mcount = 200U;
    msg.mnames.assign("WBZBFQCBVRYKRTVOMHGSJOPKVKYXIHFTJMEXJLWRAYUAJIBDAINSEOGDRGIZMPGEXQSQKVFXDMCVEXXVJPYISYUMDCADPQPGOCCHKUPOIYCHRDUEUFGXWQZWXFZZRFDSYPNLSOKQOWGQSQATHPWVIOLMLNKKDBATWRTYTHUXAOZNETKHCIBHBNEP");
    msg.ecount = 131U;
    msg.enames.assign("UQBOECCJJEYAFGQKPYBONBLDILILGTHKKIPQDAIVRRAWOACIUWUJFBDTRSGSXBUPKNFBJCZIPPPAGLSPXUFIWYCIIPBNFEWNL");
    msg.ccount = 39U;
    msg.cnames.assign("GYXEKNACVBXCPKBOQZMRIOSMKGJOARJLPDGHWHLJCUWOKTXQ");
    msg.last_error.assign("HEGSGIGRFRFNKNHRAUKZSPYWPQBLDOQNBQSTENYQNCIWHSCQQXPIGMCNLENJDLMPEVWYNUZIJTTDLPEZSUSYCEZFEMOBUTAPATXTUIAGJTULJ");
    msg.last_error_time = 0.6787138476702635;

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
    msg.setTimeStamp(0.2837518339080076);
    msg.setSource(29314U);
    msg.setSourceEntity(199U);
    msg.setDestination(53842U);
    msg.setDestinationEntity(67U);
    msg.mask = 138U;
    msg.max_depth = 0.48910689720451395;
    msg.min_altitude = 0.14374479078447677;
    msg.max_altitude = 0.04267098193233454;
    msg.min_speed = 0.9793682528271668;
    msg.max_speed = 0.6548715385180818;
    msg.max_vrate = 0.11764930248264538;
    msg.lat = 0.906910881175703;
    msg.lon = 0.8601190159887481;
    msg.orientation = 0.5018011526498946;
    msg.width = 0.3877778366092054;
    msg.length = 0.05553253219825338;

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
    msg.setTimeStamp(0.5907427535275258);
    msg.setSource(36273U);
    msg.setSourceEntity(142U);
    msg.setDestination(46075U);
    msg.setDestinationEntity(27U);
    msg.mask = 62U;
    msg.max_depth = 0.7022193622214726;
    msg.min_altitude = 0.49062031489461855;
    msg.max_altitude = 0.5209262603487885;
    msg.min_speed = 0.7599234811311322;
    msg.max_speed = 0.7647346339978965;
    msg.max_vrate = 0.24961983046715452;
    msg.lat = 0.7484051323362397;
    msg.lon = 0.5359739192511054;
    msg.orientation = 0.01859139265566978;
    msg.width = 0.42687960398965785;
    msg.length = 0.5296543309044849;

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
    msg.setTimeStamp(0.6205064327072952);
    msg.setSource(20127U);
    msg.setSourceEntity(124U);
    msg.setDestination(62343U);
    msg.setDestinationEntity(177U);
    msg.mask = 197U;
    msg.max_depth = 0.8400901968987963;
    msg.min_altitude = 0.018748053157302436;
    msg.max_altitude = 0.3586380470413407;
    msg.min_speed = 0.26722488535777633;
    msg.max_speed = 0.7102663009907773;
    msg.max_vrate = 0.05132669566414216;
    msg.lat = 0.9795866051653032;
    msg.lon = 0.6301076339548388;
    msg.orientation = 0.32818168540988457;
    msg.width = 0.8209470952428661;
    msg.length = 0.4235722538655885;

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
    msg.setTimeStamp(0.9189895019125751);
    msg.setSource(52641U);
    msg.setSourceEntity(23U);
    msg.setDestination(21637U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.16289835304248135);
    msg.setSource(39684U);
    msg.setSourceEntity(235U);
    msg.setDestination(11296U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.17568822606932);
    msg.setSource(321U);
    msg.setSourceEntity(93U);
    msg.setDestination(51479U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.538006465716676);
    msg.setSource(23901U);
    msg.setSourceEntity(163U);
    msg.setDestination(34656U);
    msg.setDestinationEntity(112U);
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
    msg.setTimeStamp(0.7872842755615805);
    msg.setSource(49901U);
    msg.setSourceEntity(165U);
    msg.setDestination(11848U);
    msg.setDestinationEntity(112U);
    msg.duration = 52951U;

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
    msg.setTimeStamp(0.6231415145917362);
    msg.setSource(37882U);
    msg.setSourceEntity(222U);
    msg.setDestination(7952U);
    msg.setDestinationEntity(82U);
    msg.duration = 50011U;

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
    msg.setTimeStamp(0.20186438981476817);
    msg.setSource(47629U);
    msg.setSourceEntity(84U);
    msg.setDestination(33696U);
    msg.setDestinationEntity(237U);
    msg.enable = 78U;
    msg.mask = 978147702U;
    msg.scope_ref = 578436147U;

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
    msg.setTimeStamp(0.7643306582932093);
    msg.setSource(58331U);
    msg.setSourceEntity(205U);
    msg.setDestination(27763U);
    msg.setDestinationEntity(59U);
    msg.enable = 181U;
    msg.mask = 213655415U;
    msg.scope_ref = 3770155633U;

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
    msg.setTimeStamp(0.24027202694508232);
    msg.setSource(31338U);
    msg.setSourceEntity(3U);
    msg.setDestination(32678U);
    msg.setDestinationEntity(192U);
    msg.enable = 108U;
    msg.mask = 3289834196U;
    msg.scope_ref = 3434194151U;

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
    msg.setTimeStamp(0.6540364744181157);
    msg.setSource(30371U);
    msg.setSourceEntity(244U);
    msg.setDestination(23758U);
    msg.setDestinationEntity(95U);
    msg.medium = 205U;

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
    msg.setTimeStamp(0.2457651619493646);
    msg.setSource(18653U);
    msg.setSourceEntity(19U);
    msg.setDestination(5980U);
    msg.setDestinationEntity(234U);
    msg.medium = 171U;

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
    msg.setTimeStamp(0.5568111416551438);
    msg.setSource(40970U);
    msg.setSourceEntity(171U);
    msg.setDestination(17891U);
    msg.setDestinationEntity(139U);
    msg.medium = 93U;

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
    msg.setTimeStamp(0.8859560760414206);
    msg.setSource(21197U);
    msg.setSourceEntity(112U);
    msg.setDestination(49219U);
    msg.setDestinationEntity(96U);
    msg.value = 0.6006772417850885;
    msg.type = 213U;

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
    msg.setTimeStamp(0.06957023376224292);
    msg.setSource(33773U);
    msg.setSourceEntity(41U);
    msg.setDestination(28611U);
    msg.setDestinationEntity(120U);
    msg.value = 0.8453164852892714;
    msg.type = 246U;

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
    msg.setTimeStamp(0.1928470181622587);
    msg.setSource(20420U);
    msg.setSourceEntity(24U);
    msg.setDestination(43971U);
    msg.setDestinationEntity(87U);
    msg.value = 0.46358973018051697;
    msg.type = 208U;

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
    msg.setTimeStamp(0.3699908200466895);
    msg.setSource(41994U);
    msg.setSourceEntity(7U);
    msg.setDestination(16638U);
    msg.setDestinationEntity(158U);
    msg.possimerr = 0.8115710753471658;
    msg.converg = 0.608099382326287;
    msg.turbulence = 0.5252243623374403;
    msg.possimmon = 160U;
    msg.commmon = 154U;
    msg.convergmon = 250U;

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
    msg.setTimeStamp(0.6118247710553887);
    msg.setSource(14631U);
    msg.setSourceEntity(224U);
    msg.setDestination(23968U);
    msg.setDestinationEntity(119U);
    msg.possimerr = 0.5591851339617815;
    msg.converg = 0.09149608613321236;
    msg.turbulence = 0.0791380251342223;
    msg.possimmon = 170U;
    msg.commmon = 97U;
    msg.convergmon = 48U;

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
    msg.setTimeStamp(0.8302900785553922);
    msg.setSource(24251U);
    msg.setSourceEntity(245U);
    msg.setDestination(9855U);
    msg.setDestinationEntity(139U);
    msg.possimerr = 0.6241713690296035;
    msg.converg = 0.9396332474243725;
    msg.turbulence = 0.2724262927416068;
    msg.possimmon = 183U;
    msg.commmon = 84U;
    msg.convergmon = 114U;

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
    msg.setTimeStamp(0.18138196214104074);
    msg.setSource(1340U);
    msg.setSourceEntity(48U);
    msg.setDestination(63650U);
    msg.setDestinationEntity(209U);
    msg.autonomy = 36U;
    msg.mode.assign("DKWQJZLUSQFZYMYBQNMUKTIXBAWJVHJEUWBTQWRQWLARCVDVBQWJVBFEVNSXCPRDYPMVUZETDGPHIJYPAYHVHPIHNCEDHKYAXEFNAQFAKVXEDNLMUIVDOTSOWGFXIK");

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
    msg.setTimeStamp(0.24372253748397332);
    msg.setSource(62278U);
    msg.setSourceEntity(5U);
    msg.setDestination(33821U);
    msg.setDestinationEntity(219U);
    msg.autonomy = 43U;
    msg.mode.assign("QONOMWNZTMPCLPOGEAYIGZLIOOJHWKNZSHDPAEQAYSQWBMVL");

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
    msg.setTimeStamp(0.6782595109553881);
    msg.setSource(5984U);
    msg.setSourceEntity(219U);
    msg.setDestination(34702U);
    msg.setDestinationEntity(135U);
    msg.autonomy = 41U;
    msg.mode.assign("AGKNEYWJLKKLTQORLBKBJNBLXVJFCFSQZSDITQMCQFZIHIRKEDGWWLGPGVSBWMJRN");

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
    msg.setTimeStamp(0.23522847390117319);
    msg.setSource(36865U);
    msg.setSourceEntity(123U);
    msg.setDestination(8909U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.5024588258885951);
    msg.setSource(33745U);
    msg.setSourceEntity(229U);
    msg.setDestination(9079U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.5413794584036743);
    msg.setSource(26668U);
    msg.setSourceEntity(68U);
    msg.setDestination(57805U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.7950532220375441);
    msg.setSource(64075U);
    msg.setSourceEntity(216U);
    msg.setDestination(46435U);
    msg.setDestinationEntity(83U);
    msg.plan_id.assign("PWGSOMDZPEDPHLHFWHXDAPBKZEICMGGGXNABZQGOJACXJNHCSVPMWRUKSYILRVDNVZTJHUINQQLTHYVEWHEEYLQFBBLXRWZRRKTLYLWSTDQIUEQFAPNKKWOAVIZBXVOMBUUSMFKBWGXXNSRJ");
    msg.description.assign("GKMYMSNOZXJJGGCBSFDNJYWWHHJSUGCLKFQENABWEMXPNKWDOSNPRFMLYMDQIVTMZFKRQBXDOWPHWXNYOVPGTYLSYGJKBEWUVMEXIOUYPCSLZLFMIKJCQFSBILVPXWZTTVAFTZJQANBHEVDDAABCIZDTQLCFAGJTBDFERVJDUHYAPRVJHPRNUKMIYBUTPVZOLYRCOUSOLKDUQEXMZAIX");
    msg.vnamespace.assign("UUIYQFIMYJSCRRPEHIKAJRMDRKOTKFONSSNFJAKLPLFEWAMIDHAZNQBWAIWGRCFTHHQZTLANLEZIEDBPLVUPNNZJDQYOZLBZAUPBVVZCXPRGOJXBDUVWKPABJSX");
    msg.start_man_id.assign("FMUIDAJHLMZBVGSWUMGOTTYQGNWYSCTPNJDEUHOQHXICFDQWNVXXGNQGHBJFXWDUINGBLTCXWMFEZQGCKEKRTHHGPMYUNDBBNYMBPOYWKSPOOXVUSLEVEKDFPZPAUGAFAFDKPFLZSIIYLTRSZVVPPAUOLJITAJRN");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("OANIJCLKDYSJTWJJVCHPVXEMWFEFU");
    IMC::LowLevelControl tmp_tmp_msg_0_0;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.5946279782677725;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 235U;
    tmp_tmp_msg_0_0.control.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.duration = 50069U;
    tmp_tmp_msg_0_0.custom.assign("UPAZKJWUDRATRGEKJSSKCMLZSNZVLEIGRXLJHBAPWQYYXAAYEWRAXYPLHBDNQVEUGQTGBUNYKPMYOMFZWNKIPLAXOMDBPHUDRQUWPHOWLCECHRZJNEBDVFEWKSZIIRZPSGTQBDZQZGJLNKCCXFWFXCFUFGCVBTFHDQTVMEYHNOKTYBJFHPKO");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::SetControlSurfaceDeflection tmp_msg_1;
    tmp_msg_1.id = 10U;
    tmp_msg_1.angle = 0.7327832149744897;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::CacheControl tmp_msg_2;
    tmp_msg_2.op = 110U;
    tmp_msg_2.snapshot.assign("EFCJQDGRAYEYZOTNHSIDASAACIWIYIUYNHDMAHRZUTATEOOFHPVMGIZWUJMYKXHBQWRLPXMLRRKEXFPJLKJKVNDGNJSYGSWSMGPPVJBWTXGBTNVZGDGHIKCBTYBFOWXEL");
    IMC::PulseDetectionControl tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.op = 205U;
    tmp_msg_2.message.set(tmp_tmp_msg_2_0);
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.9735752793888443);
    msg.setSource(34241U);
    msg.setSourceEntity(173U);
    msg.setDestination(46922U);
    msg.setDestinationEntity(167U);
    msg.plan_id.assign("FKGXDHBKAGWEOTNOKMFNEIZJBBMSBQSSKWUFA");
    msg.description.assign("GCFQTAZDOSZPEDIWZUCUBUYKLFPAEHWGBIFBWVLNCOOXEILIUGXXPVPUHSZTXMKIVQNURBYDLSKAGKGFTQJCERRIHJYIRECHVHXZBGJDIQIALTETEINUSXDTYTGMQWGJOKEWBDJPSFZRPMUMNYLYSORWDQFOKNALXHFBFDHCZQJQYUASVLOWARJAOPNDWLEWZAJVHSHOXKYJGRMKOMMVTTCLBXFSVTXZECCJBGQCVSVPRPWRZYUYKNDHMNMNPK");
    msg.vnamespace.assign("HIEQQCJEJFCKBJROXEUYTKKMJDGLQWNDVOERNGIMQBELNORGVFUMXTCBSDLZDNOSCZJNLTRCPAODPFAPXUKNJODKBVAHWFUSGURIXYLUXRWYRAWPTQETMAUZRIALYFJQAMYLXIDSXHCJRZGJNQWZSYLPEPEDVZMMBGWZBCKUTOITEFVYVXFQDKOJHHGYZTSTMBWITZLMXHVCNHNCPWOHSUMCIWSVKBGGRKPYFVYPWQZHQU");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TJSEBSAFHKLETWIEJWFYQQMOYHWNOTDCKRFCMCWTFSHRSPJAYTAIYZXPNXAVIUGPEIZLXMJNDFKICVORZSFLCLGMGHWQDKYGOWGTDXWFYRENRUXXJUELCCCKKVDQAVHOUUHQBGXDPZELIBPNLGZVJFTBKLHYABWYUOOQHZUPAUJSW");
    tmp_msg_0.value.assign("HUVTMJOWJLDXHIVYFFLAKZCDEBALGLDLQUIKTSJNWJSMEEHPXQYCOSZARDTUGOZUUGFXZHKT");
    tmp_msg_0.type = 44U;
    tmp_msg_0.access = 99U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("VXTJLTLYCQPRYXXQESRKGIFDDCXBDAQJWSQWFSLHFVUNASKMDKTCYODTXFLCXNTCKVPETPJBYLEVGSKGMMZPSRPIESZOFMOAXMRAZQRHPZYCBETVHYINHDHPVKAHLLEZNOIUNWOTLWMBFIWIRXGGUGBJZJHESSYYURSVEDBMCKLLTQNUZAOQRVJUOKHWCINWTEOCKFJQBNWUUGPWUVAZPJFBDYYJQDCAIZDMZUFGOEHGIAVRGBMJAPNR");

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
    msg.setTimeStamp(0.7356894797281412);
    msg.setSource(61057U);
    msg.setSourceEntity(31U);
    msg.setDestination(50351U);
    msg.setDestinationEntity(203U);
    msg.plan_id.assign("GWRGWPUZSMOOOFBJLQBCNVJQANKFVTAHWVVBCKDPXKTNAUAFUXDEXQJKGVOEMKBPJXTCMEGUKLRXIQTONZOKWSHJIBBYBRUUCLZASHARXZYFBQZHNOZYDACDGFPLWPDGQOOUFDXVXEWEZMWVCVRTNHCSLLRQYFESYRPLMCAJRUEKTAHISYIIDMHWGGRPDQPJI");
    msg.description.assign("KBGWQTKRCZTKMOUJUHQOMPINMFXVZXDZFKCFA");
    msg.vnamespace.assign("GJCZOGFPNUEGSQRJRIJTEEZLGKQORBTUJLIGRYHZMPBVIAXMFIVVCUPCUADZNPMIYFLKYMSDBJWWVWYUAQQWAPYMZMSQKAEBHKBBSYWNCLSGQZLWLTEOMLMOHJED");
    msg.start_man_id.assign("TTXEBOAVZQDFZOBYFAKRDTOLVZKTSOZWFJHZCFJCUXJADWPXYQLOTZRQPC");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("PIHRGELUSQGCXFAQBDTQGUQINYBEHMTDEBVWCFGWIIZSQYCVHBSNDXDJINEWDKOIAJRXTABDGKSREHESEBZOTUKNPKGARRXPCMQZTMEZOJUFYVPLQKHJMSBFOCZXBQLFLBZYWTYFGJLMMKNPVLJAVGNLZHTWCHFSZQFCWWADKAXJVRLINOZVWTJRE");
    tmp_msg_0.dest_man.assign("YKBPISHXUORPERYQYDJQCBQFVJZJKDOKKWWJVN");
    tmp_msg_0.conditions.assign("LRYAMARBRIVZPBEEUWUDJZWXWNFFKSAHRBHFCUBGTBKFNOGSJHBMYNDKCQDRDAKKJYNMUTGKPSVDSUSLRMJGZTOLHEMIXEDJGQAOIVPWFVQQ");
    IMC::SaveEntityParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PDSUMCXOXPXNLTBKQKCNRTMMVIMDQAVWWZFFYBFRARHHPHQVYCGCXVCXAXETZQKUMYEQWNIEJBFVBTWJZNUKJCSYGRUEKJPOLMMJJOSZKGPZSPJTKYSJWOWAVDLIWJWICKRROGEOGFIUGKMAVHDLHGPPUFQSSHONANLLPRDLTBBPQGZZLNYVSEWJDTLXCYCMQODIADTRBFUHARDTVZVWBFUXYQZSRUEUIEHDFOAIMOINSHGXNEIXGNBF");
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::TrexToken tmp_msg_1;
    tmp_msg_1.timeline.assign("VXTCLLAPIYZZEPKTTAHWODLJZIESGHCMOFVZWWVQXHKXRINKNRJFKEFAYJYCQRYRABGKUAWSFGPQFEZBHGVWPNSQYNTGATMNGPYXWKEQWJBJQSCHDOZBRLURMLMGCVDMPJZBKSHNIXSPXKSSOMOQXLUYTHPRIGODBYLNVSYAKNECDUFAFNDCTUQIEUMRPUTIJBUZRJGVZFRWICAYTESZGDQDDLLXII");
    tmp_msg_1.predicate.assign("AKIPOFCMOJLIWMVMSGZLYULFAXIAQICGRTOSONXDLVJDCNDHP");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::TrueSpeed tmp_msg_2;
    tmp_msg_2.value = 0.9761067713036904;
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
    msg.setTimeStamp(0.49004053247233315);
    msg.setSource(3628U);
    msg.setSourceEntity(35U);
    msg.setDestination(38816U);
    msg.setDestinationEntity(114U);
    msg.maneuver_id.assign("RGPCVBOJTOKZPISJPOGQMNJSZQFPBWOEQPJFEXUQKVILGDKNZJIDSPACOVXRYFZSDIWXTRUNIEKRMYAETDPXWCYNFUIMKYMLUYWHRWYIHXSWLXPJAL");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 30905U;
    tmp_msg_0.control_ent = 221U;
    tmp_msg_0.timeout = 0.7427782283575708;
    tmp_msg_0.loiter_radius = 0.7241516029792803;
    tmp_msg_0.altitude_interval = 0.8263391615775482;
    msg.data.set(tmp_msg_0);
    IMC::AlignmentState tmp_msg_1;
    tmp_msg_1.state = 46U;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.384848679938696);
    msg.setSource(49532U);
    msg.setSourceEntity(62U);
    msg.setDestination(14071U);
    msg.setDestinationEntity(240U);
    msg.maneuver_id.assign("OZOSJKVWHDNEBDRYMYEIUYCPGZMTRISETVRRHHBDCYBEXAGGHQMQMJQQCPUNRMTJXNFQSUDWOFXTFQLCUWYOZCITTOCBLAEHIJELQVJDDSBOPQUAPKZUXWAEIMYOJGDULPULYWBZLLQIKXUDPKZYACCMHBATMPVPQHZMFREVGHVYUDWWKKWKXYBGSRCLKVNCPONNZRRAGIWFFSVFA");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.24937501699212117;
    tmp_msg_0.lon = 0.28968529490898765;
    tmp_msg_0.speed = 0.5965164410621376;
    tmp_msg_0.speed_units = 193U;
    tmp_msg_0.duration = 53803U;
    tmp_msg_0.sys_a = 62668U;
    tmp_msg_0.sys_b = 60905U;
    tmp_msg_0.move_threshold = 0.36238261089318524;
    msg.data.set(tmp_msg_0);
    IMC::Map tmp_msg_1;
    tmp_msg_1.id.assign("LKWIBCKYDWCNOVFHMEGJUFGXFUSGABBINRDAZEQBJXQOIMCDNFKKSJVEYYVYFWJJDTWNZPDSIZVGRBOLZYHFIXWJZQBLJENUMQZSFMIMTLUOBKCKRFOHTLJYEIEPXHEATVIMLSYSPSJTUCNQMSWTTUEDVCYHZGYSUAFXAQZPDUWVMX");
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.9653060502787968);
    msg.setSource(47431U);
    msg.setSourceEntity(57U);
    msg.setDestination(13509U);
    msg.setDestinationEntity(109U);
    msg.maneuver_id.assign("ZSXUIEPTKRVVFFDOSRJTTLCZEJCMZMJEDBWRMCPZJAUBZJXZGXHKLIGNTNWGOHARYGUJTVYQTODIAETKOOWTFCWRVGYAJCMISKSPXUOPJQAAMNWZPALYVSLXIUIOHREWRDOAEMHXRCBNKUYFHAQONKKDMZUTPBZM");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6814847580894631;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 60945U;
    tmp_msg_0.custom.assign("AHOEZPTMEWNTZLSMHCACASIUKTBHHBBWCERXJGKQFPFQDJYODCUXLCMZEHTGTJGWKKSTO");
    msg.data.set(tmp_msg_0);
    IMC::EmergencyControl tmp_msg_1;
    tmp_msg_1.command = 108U;
    IMC::PlanSpecification tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.plan_id.assign("BQRLSZOSVMEUVYLKHFEKDXPWZUJNLOZGPXLXYUFTAHCQARWAYYPTEBBZPAYGELRMRVOZVBRRRFXZOSIMJIUFKAUCBXJDNESSHXNHQI");
    tmp_tmp_msg_1_0.description.assign("MJWPAHKJIXGBPESMFZECFYUJRASSQXHCCFUEMHADIXSPLNZGQKWNBRTYOPOMZUGSAJZAYFBVWKYIWBXNVHYBVTEDHDPOSJSNWREARANYUGXZYPXJBWQGQYIUBELASUQROCFGEPLSXJFZBJKMKZURNGOLHHNRVTUWBOKUUVFLVWTMLXMQDORPIIALJNWX");
    tmp_tmp_msg_1_0.vnamespace.assign("EYZWFEMRQHJVQTKCYBGUPADBULAYGAHFDDSKKOIQCGJOWVWQUNFPUSBNEIZTINNLKRUJKZAYEDVQ");
    tmp_tmp_msg_1_0.start_man_id.assign("XGCCOIULAWUBJFGTYHOWQJAXYNTZPMVLYUVFLUOSDCTQIALJZOVDBNWXPMQKBCKUZIAYWEXSMDRFLWEPUQFTVINPKFKYENVLKPBRDFHGFWANDEROUHRUCZGPYTHWRMMNVHHXCNEDCSPUOPIECMESBDVHDGHYHVAOFWCSNIKXQQTEOKQGAIBRPZSLVMMKZLCKQYSIZ");
    IMC::FineOil tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.value = 0.6768689393277264;
    tmp_tmp_msg_1_0.start_actions.push_back(tmp_tmp_tmp_msg_1_0_0);
    IMC::PlanStatistics tmp_tmp_tmp_msg_1_0_1;
    tmp_tmp_tmp_msg_1_0_1.plan_id.assign("VTQVZXIMNJFTHASTJKJZIRUYAHYMFKSXIMDPUIBFXIHQJLMIKZQMVLGRDTLZNGKDOAYREACEHDXUFDMSSOYQTUTDKRQDFLPWDJKBGMEZCWNSJIGWEOAWCCVZFOARYWMBUNOXLLQOAQYRUPJZOWESNSGYVKPWACVTEDCJRBUZAXBEHVHWYFFGKRMFIKJQLRBEAKCQQVEOXZVDICXTRUSBYGCWWUTNSPNHXGTOUNOPPSYGHNHPPBBVCXILHP");
    tmp_tmp_tmp_msg_1_0_1.type = 90U;
    tmp_tmp_tmp_msg_1_0_1.properties = 32U;
    tmp_tmp_tmp_msg_1_0_1.durations.assign("LGSAKXZMXIFABJHVITZOQBPGEHRWKHTITODHOVABKEVCITAGCJVAZSNXUQZDCZJYFGKDMKIFPZDPWYQNRYLOYCEPEZRNGVQGVVJQQNHEUFWWVIMLUDEKZLIBTUDYJZORXPIMBGQCSMWWHWXUUS");
    tmp_tmp_tmp_msg_1_0_1.distances.assign("GCSRXIZAIKYVVKFGKHRUXFBDZTIOFJEUKNQHBLGDSNXAQABSAJCIPUMRHFEIQTOCVOQWIVWDWDTSWNRRIHWMNAEQJLJYGMJS");
    tmp_tmp_tmp_msg_1_0_1.actions.assign("EDVUCFOOXYGQHTVEHSZXSWCQAQCNKKKTPXFODJOEUAVAZXCUHOORSLMVSGXNIXWHNUWQBOAGOMFJLRRQNTOATCSKIMJDPZYCGBMLAIWTMIIQGGMNGSTLEUZHYXSYESNDKLBKBIYAUYCXDHGNBULIRDXRQTDZUHDIVQWCAINTBKYJVPLRJRKALLHSWVTJUNCZQPUDPKWMWVVRLZSFWYPFBVGPFFZJQJ");
    tmp_tmp_tmp_msg_1_0_1.fuel.assign("STEBXNZRGDSBYHNMJMTGXJIVSDJNHJRWWGVRLDMWBIYLXTGPAWMPYVDUZOBDLTCOTDPVTYCLUITKIREFTMJHCSMIFICKPZVZDHKOUNSERSQTWFUEPUGGXWHGLSYOLVUJXBCMDQ");
    tmp_tmp_msg_1_0.end_actions.push_back(tmp_tmp_tmp_msg_1_0_1);
    tmp_msg_1.plan.set(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.48706585000386915);
    msg.setSource(35825U);
    msg.setSourceEntity(173U);
    msg.setDestination(45277U);
    msg.setDestinationEntity(254U);
    msg.source_man.assign("KJECXMUDGQWLWAERFQRKWJGDCQSZATELMEJBSVSIKGVWHJGRUWHUZFUNODOCCYTFBJNAHOUTTVKTIRTXZQRYISPQJWBVA");
    msg.dest_man.assign("NECFQBZNRORFFGPYYSAWDQWBCFBDZYWNPOJYBXQXLPSQKRGPKATTZWVCAAUAMSCRLNDOMSEZGJNQEYSLXTOGFZQCSCBVCZTOOSMACKPVVVVKFIRMXEORJEJZDIHLBGOQFAYTAKIDUGKWPULGXHZSEUJMOFKIEWJ");
    msg.conditions.assign("UMKYCHWNCBISAVUAHNXNUGWFGLFDYBWCOHCJIFHVPXRZSPDEUIGUMGIAMFFBTKPVQQLPATLZLGQWYXYUOYVRQANAJIZJPXLGEKRAOYTCPOHLUKLBQXAZCAOFGZDIHTEQBCZJP");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 36005U;
    tmp_msg_0.control_ent = 34U;
    tmp_msg_0.timeout = 0.4974927293924811;
    tmp_msg_0.loiter_radius = 0.5779244410857678;
    tmp_msg_0.altitude_interval = 0.1460220594466881;
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.11172335536587086);
    msg.setSource(64866U);
    msg.setSourceEntity(221U);
    msg.setDestination(25056U);
    msg.setDestinationEntity(241U);
    msg.source_man.assign("JLQXAMLDFTIETRZYSVMMDSJQZVVEWMTHKDEQUBAQXDCXEGISYSJGUNYXMWUJWGXYFWKUZNASBD");
    msg.dest_man.assign("ZHCTRFOVMJPUBLJGTZZRPLNYEHXDFCTNXGZVXSKAQAU");
    msg.conditions.assign("ABJFCRGBGEYESEZRITIMGQLKIEXLOMDTTZSUBBPKCIWPWOTRQLNXZHUGSYUXZVHYTLFVYFLLFGKKHVNBTUOWSDRDLZVVVPRTKDDZWEVGCXBJQXNJNRMORHCIPICBHCGYDF");
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 245U;
    tmp_msg_0.op = 115U;
    tmp_msg_0.request_id = 13395U;
    tmp_msg_0.plan_id.assign("ACZXYEPAGPWFEARCDKDRHUKVZEOAFVGITUPLIOHTNGXEWLVGPGCJLMQRLAQPHTVFCIZHWYNLWESNXYOVLZXSDSKOUWIJCQEEDSTXBPMMLQNCBGWTSTCLRYQSAJQGISNLCYZKEYRWAHDEOOVIXJYQBBAVQSHGJWRJDMAZUKMONUJRTJBFHBXNIZBLDJSTPHX");
    IMC::Pulse tmp_tmp_msg_0_0;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("TUZIHTYYLWBICAXQLVXCSIBTTGRZTOVFJOXYFMRWLLKJYHXRFOSUHAGFCWCZGUBPDQVKTOKZZPMFGTDXGNQKOLMJRAEYSZIIPQVSXKLWAVPTAKCOAMOPBGQAEEGUMFCDEJNJDJHHKETWTHPDDLZHDARIWIBYHPUMREQICDNSORPVOQDMEGDRY");
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
    msg.setTimeStamp(0.971651952783537);
    msg.setSource(188U);
    msg.setSourceEntity(214U);
    msg.setDestination(18067U);
    msg.setDestinationEntity(172U);
    msg.source_man.assign("LVJWWOTKLHYSMQRLPDKCYLYXRSMBQMTNDUCXWGAWRMMGTTFUUKCXSEQEDBFVFMIPLDZGRBDKGEHHMGDIONLBUYVW");
    msg.dest_man.assign("JZVJJCNWKDBHVQMOCELAGYOTWBLCAEVGITDVNISEZAIQYKZRCLMELABQFNKKPPHMESDOATAREOLWOUYBWTSXRAPSJKAHMPYIFSUMCHVUDREGJHJRYK");
    msg.conditions.assign("JYOFXLIQKSANVAQQSQCMTCVKGMDARXLML");

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
    msg.setTimeStamp(0.6609328740950559);
    msg.setSource(40937U);
    msg.setSourceEntity(70U);
    msg.setDestination(19341U);
    msg.setDestinationEntity(183U);
    msg.command = 242U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XHXTLDDGYRBOBDWSKLIBLOOQZVCJRYEPANUSMHHTHBBBIDUSYIPFNNQYZUTPUORSVLEUTGZYLZMIDHWXYBNVHGYLKJUG");
    tmp_msg_0.description.assign("QYWYIBJBPKAFNTHSIDEBPUBHBMSZLIXZKMNVGSFTRXNPQPUKZLBYFOHIASWOKQYHXNHAFSNOYSTAQOSMKIOCFWIWY");
    tmp_msg_0.vnamespace.assign("KSJDKQFDIVJAAVIFLQRPUVPFHTNTEYVLOXTNEWHOMNBBPNYQHCDZJZVNVIRSDDLDHJUROGWZFMUDRLBXUEXYWMRAXLHQRKQGPQUAIABISFTLJDENPDYAJMXYKESMZHFZPKMSGFCOVCYQJHASJGNNEUKPR");
    tmp_msg_0.start_man_id.assign("LSNEALTNZXFXOCOLDHPLASHDACVHIERBVGVTNTRKGTDQTYQFETMFNFJDOSIWRJKMYXDKEAZGCSVHSUGTUPZKNYOIQIAUXRVWKTMMMYXCGWGMJDYXUQQENPJIAQFPRYIEDQZLMXDPYFHHCVXZQPKBLYRWOSZYPKSIWJLBVBZQOPDFZWGPSMWJKCBIRRTBVTNEWXHAHNXIHEGGISQZOVLUEARWGOALUMAOCKUUJBLSMNFYBBUEVNHJDPJBFUCJ");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("CXEXBEGHOXXPMJOVBOIEAHJVIOUTMPGYYTIKYJIVPAHWK");
    tmp_tmp_msg_0_0.dest_man.assign("ASEIFYVECCLMEXXLJPHRPHNUUSMOADJACTFJVWIOIYFMNJBEBARTPXETBGMKMHSZVAWHOJYDXKOOXXCNBLGFULOMLTADFJZPNQKKWTCMUGCSGKZYURVBJNDCJNYMNNBEAISSTDCERIUKVQPVUTVVLYHLQYDHOXEROUGXISKYQLAGMYZQZ");
    tmp_tmp_msg_0_0.conditions.assign("SUXVCYTYXYQFKFGRZNOVEAZDNRRRWJUTJQJZNHIIVUELBZDHESCFOCIAZL");
    IMC::FineOil tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.34096899310773576;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.48842552730326616);
    msg.setSource(40917U);
    msg.setSourceEntity(168U);
    msg.setDestination(39449U);
    msg.setDestinationEntity(132U);
    msg.command = 40U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TLOZYEATGCINAURCCLKKXNDHHVUXAGTYYYWPVAHNRQSBRRJCGZBGUHKAWXKEIQNXJQGKPRMOUFBQMAPNSMZEEJIDGGPENXLFUWBCNYIZYRWNSWLOUWYABJQFVRUSDPQLQXFQULPSTTXABLM");
    tmp_msg_0.description.assign("VIZNISDMKPASIORONYMCRYASGSOEDCCUBRQWPW");
    tmp_msg_0.vnamespace.assign("ODIFGIZIROYQZSVTABBYTPRKFYAANPJOHTXBVDKAKLHOUYFSHARRRGVRLPNEPBWBUXPEQGNTMKIHIHLJJBYKUTTZJJOFYNDXTGUETCDLWEHULFXJZJOCVXNCSNIANEWMRQWLTUVCDFOXRQMBBAHSDHQG");
    tmp_msg_0.start_man_id.assign("MBEROLAKQWZJYMHWGIIXET");
    IMC::DesiredZ tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.310912015735084;
    tmp_tmp_msg_0_0.z_units = 190U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.3925747294504287);
    msg.setSource(56934U);
    msg.setSourceEntity(243U);
    msg.setDestination(18238U);
    msg.setDestinationEntity(97U);
    msg.command = 18U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SNJSYRICCIYNXECBWPZXTIBDMVLJGOLDUSNZMMJRNLTTYGDBNQIRCVFNPPMGLUBFNHYZAZGFMTUKCFQJTJJDOAPJQOJCARTQHKKYELZZWCTOGPWNVXHFRYITBZHELYOBEVXVYEOKAFGUKBGUECSNQWJWMMMXYAOGPWDZKJVUDSIHMIQFUNHHRIDXEFIBVPAPEHWMVKGDKBV");
    tmp_msg_0.description.assign("NPKXEFRNDAPEITNLZIRVIIQKIDFURVGXGKAGTXNQIYKNXZUVFREQULANFSHQ");
    tmp_msg_0.vnamespace.assign("CGIVTHGKSMVMGFAHIIFQEVXZYOEDTHSGYCPPQMBHOINDANBZRHDSTAGOLAJATONVFESRDRLMJKWQQWJXLLAIOYIOHUNQZLZVTWXRFFRNODZWKCKPJUCPKENARPJUXDBNR");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JHCLEVQPVURVMUQOAKJZNFH");
    tmp_tmp_msg_0_0.value.assign("NHHYQUYXSHUKYOPNFHCOEBRRTPJZPYOLITDQEMUEQFJAKZQOUDAVAVLNYWQNHRWMNVTWHCHKGOKQGRDECZYNVNWQJHS");
    tmp_tmp_msg_0_0.type = 170U;
    tmp_tmp_msg_0_0.access = 93U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("XUENZIRULMFPWYAQDJPMHPNXSSIGKYDUAENYOCRYAIBUQZNQHCWNBPRGYQRPUDAFKTBQQWZHXF");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("AYEXMZPUDCSNMAPUTVSHGZGOLBEPVAZHEBUYERWGZEECJKCPFVKEQDQRNRPOWCQAMQSKBTPSAZNCFWGJMKRPBSQOSIJXMKUSNGOWOLVCDHVMJIYFXRXLMOLK");
    tmp_tmp_msg_0_1.dest_man.assign("VZZAUPDLUXINZZWOCZTAPJESMSSBFFVYOPSWQRANHYLLEJPBIWNHXCSLSXFJMMBPCVJNQCKQHTUTJBIMRATVYOGFOGGBMPXBOOKXVGIWORMTDXHWKDBJFCGKUHAPBGUAJELYFCINVJKUKDVRSDCDVAYERYQ");
    tmp_tmp_msg_0_1.conditions.assign("PFBVTPWOFSUUCMF");
    IMC::LoggingControl tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.op = 251U;
    tmp_tmp_tmp_msg_0_1_0.name.assign("GRENWPNWMKKTJSLYFHXTUJZWPALTBPVZEWQKHIPRITUVCYCXACRLYIJQZKOTAANOVLBOMFYCKFWHCGVGNQSIOXMOQYWTDPYXPMGCQNCBEFDKGFIZUDQQGSRFOESSDCXFBZPJAUTLMEISSTTBULDERRXENEBHYAPGZHKYDMIVJJLUPBRJQMWBEHRGYODCJVOPUQXDGRL");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::SimulatedState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.3008138269659021;
    tmp_tmp_msg_0_2.lon = 0.08900054256789858;
    tmp_tmp_msg_0_2.height = 0.0397521307006824;
    tmp_tmp_msg_0_2.x = 0.3689279805141562;
    tmp_tmp_msg_0_2.y = 0.6897348699108751;
    tmp_tmp_msg_0_2.z = 0.0942416177551606;
    tmp_tmp_msg_0_2.phi = 0.4167131634600021;
    tmp_tmp_msg_0_2.theta = 0.6354622823009625;
    tmp_tmp_msg_0_2.psi = 0.23655643382013536;
    tmp_tmp_msg_0_2.u = 0.03250521536370843;
    tmp_tmp_msg_0_2.v = 0.24732214628749716;
    tmp_tmp_msg_0_2.w = 0.36918441613884834;
    tmp_tmp_msg_0_2.p = 0.979676197411994;
    tmp_tmp_msg_0_2.q = 0.6115461733024796;
    tmp_tmp_msg_0_2.r = 0.41694702224272695;
    tmp_tmp_msg_0_2.svx = 0.2951063010982037;
    tmp_tmp_msg_0_2.svy = 0.5096842481899431;
    tmp_tmp_msg_0_2.svz = 0.1102288546531317;
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
    msg.setTimeStamp(0.835306006015793);
    msg.setSource(59438U);
    msg.setSourceEntity(86U);
    msg.setDestination(62529U);
    msg.setDestinationEntity(77U);
    msg.state = 199U;
    msg.plan_id.assign("ECCORIRWJAEFKKNFFJRFYEISVZWYUXBBCHKB");
    msg.comm_level = 2U;

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
    msg.setTimeStamp(0.9503273622289234);
    msg.setSource(27807U);
    msg.setSourceEntity(17U);
    msg.setDestination(64649U);
    msg.setDestinationEntity(9U);
    msg.state = 35U;
    msg.plan_id.assign("VUMWLYCIJTMKXFAWHQJHSGAEZVTMXHNTRHGDOIVTXBUNJEGUIRGFIEIZLWVFRUZTNSQHYNRFDRHUBDSTXMMQAAKAOYKWMOXLIWEPSYDOHRITPUDBNXN");
    msg.comm_level = 39U;

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
    msg.setTimeStamp(0.34825083484955965);
    msg.setSource(14095U);
    msg.setSourceEntity(163U);
    msg.setDestination(19784U);
    msg.setDestinationEntity(241U);
    msg.state = 51U;
    msg.plan_id.assign("RPREOJRFVFRFAESXJVVJVKSKHDTMGZHEWCF");
    msg.comm_level = 62U;

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
    msg.setTimeStamp(0.20802267470663616);
    msg.setSource(33183U);
    msg.setSourceEntity(106U);
    msg.setDestination(16302U);
    msg.setDestinationEntity(247U);
    msg.type = 108U;
    msg.op = 200U;
    msg.request_id = 45802U;
    msg.plan_id.assign("QIWPYGMZJLXFTGUHKSVEKOGLMKMFMDWOPXLTCAIEFZSNBIQZODGZJCRETLVBSVCBAMXDSUZANUANNDCYLPHWWVAJUGWFHAOMMHCOQPGKEJJAVGESTNQQRTTYDHPVPZYPLJXVUBCPBNREEDORJDSKNKFWVYHZY");
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.33928929501063787;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NZPYIRFUFRDTWDNRHRXDMADIGBHMCEDUGECGKOILNKWDFCEHQPZMSFICRJFQHHESGYCZLJYYPAOZP");

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
    msg.setTimeStamp(0.6004698557548297);
    msg.setSource(10569U);
    msg.setSourceEntity(64U);
    msg.setDestination(64275U);
    msg.setDestinationEntity(206U);
    msg.type = 0U;
    msg.op = 55U;
    msg.request_id = 46450U;
    msg.plan_id.assign("AQANGBQSRVFVHDNYCRGINOYYGQFTSVMSWWCFOZHZANXFBYLEDTXVSMIXRDAJAKJJAERUOLSQGZAUHLBTOMEAWTPXTYGRPUPCKPLOXFVJXCUYYPGRBHVGHFMDGLTNPTKOJPNMJHDWBAUGRDUELJMHVILKQZFIMQJYCQTTRZNLWRUSHSOBAQGMFTZKXDDSPIZZNXFIIYZOKDEZOLCHQSRCIIKMEVCEKVQUDCFHPWVMYEUKSNOICBJBXKNXWLJ");
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.8254185632098745;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ESWHGWATWGIZBQJBQWHWRYIKFCNWKVOLLOJLSUOMGDAZPHXQNENSLPTMIQLRVEQHANSYODUIZODCCDICWTKKPLAUDPVPXNXSKYGKWTUDFYGMGUFAQZSBTPMYKHZELEFJXNRUIONCMRYMJSFJ");

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
    msg.setTimeStamp(0.09136429041295813);
    msg.setSource(24358U);
    msg.setSourceEntity(252U);
    msg.setDestination(48484U);
    msg.setDestinationEntity(2U);
    msg.type = 224U;
    msg.op = 67U;
    msg.request_id = 60971U;
    msg.plan_id.assign("DDTTRYHYKZKLBUEUAEFATPWSJFMVTKUIJOQNFYFQRUZHLOUQGKIYEMWBULEZYDCKVNILRGTVAJMRIZIDBDRDSRPNYCYZEVJVMBZHAXSKSFLOMTFGVWPNZLTRMAQBNFJAEXZNRZAIHPFWVCGPPJGOKCKLBTSPRIHEUTXUHCTONYDBLECOSOQJJNJUWUDHODXOIDAXYWLXK");
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 34U;
    tmp_msg_0.speed = 40104U;
    const char tmp_tmp_msg_0_0[] = {-76, 18, 77, -37, -95, 88, 60, 119, 3, 106, 16, -123, 14, -93, -27, -96, -107, 90, 39, 42, 65, 78, 49, 62, 106, 73, -11, 94, -83, 22, -23, -52, 93, 105, 45, 40, -30, 86, 117, 27, 53, 42, 80, -2, 51, -46, 17, -99, 6, -56, -75, 118, 78, -54, 52, -69, 31, 23, 54, -6, -36, -28, 60, -46, 106, -24, -109, -55, -73, 86, -109, -87, 75, 3, -96, -48, 74, -110, 2, -19, 75, 19, -46, 116, -49, -122, -80, 92, 106, -5, -92, -46, -34, -56, -107, -98, 92, 20, -96, -108, -9, 24, -40, -36, 48, 99, -50, 23, -66, -128, -115, -28, -64, 93, 13, 53, -28, 57, -64, 33, -42, 64, -26, -75, 125, -122, -92, 27, -80, -39, 77, 78, 126, -117, -41, -56, 77, 65, 19, 56, 29, 101, -46, -29, -7, 7, 61, -89, -29, 31, 18, 0, 111, 73, 9, 44, 109, -118, 12, -10, -121, -58, 72, -61, -36, -98, -93, -116, -34, -56, 65, -116, 29, 31, 29, -63, 59, 120, 117, 68, 48, -61, 122, -51, -68, 101, -2, 77, -84, -117, 78, 55, -66, -11, -104, -27, -47, -67, -55, -65, 31};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CEESAAFRMOGEYPSSWTJBJIUNWMDOORBDUFPZWVMTQHYDKLZSHAMGBIVWSJPLKTRNKFEQOUYPVQBLOLDWQNLDQOTUKFWAWCVSBEWLYVJBFJWYAUHOHINKDCHZCDLGJXUAKGATGTSXEDAXMUUPICRFHCLXQXMXQNBSTJKIYPNYNJZAFINPRNNEGZQRWMEQHIZBXVKXGYF");

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
    msg.setTimeStamp(0.467786361858749);
    msg.setSource(44417U);
    msg.setSourceEntity(109U);
    msg.setDestination(34324U);
    msg.setDestinationEntity(183U);
    msg.plan_count = 45561U;
    msg.plan_size = 721555808U;
    msg.change_time = 0.49254194997689005;
    msg.change_sid = 18715U;
    msg.change_sname.assign("WVYQRQBZIEVXQLXIPWGGNIWYFNGIXGXAHRPLODVPVLKVAUTMN");
    const char tmp_msg_0[] = {109, 75, 107, 51, -66, 94, -106, -96, 43, -34, -20, -82, 104, 16, 68, 102, -20, -19, 48, -103, 125, -59, -27, -45, -88, -10, 86, 66, 94, -44, 47, 83, 78, -108, -59, -120, 11, 25, -107, -44, 79, -29, 0, -116, -69, 104, 10, 28, 119, 118, -74, -121, 65, -109, 116, -105, 111, 118, -28, -43, -3, 75, 21, -128, 100, -38, 18, 27, -77, -115, 110, 111, -17, -30, -44, -106, -8, 26, 2, -24, 43, 70, 77, -16, 44, -103, -6, 23, 4, 103, -26, 23, 0, -85, -62, -23, 110, -34, -16, -81, -28, -82, 90, 16, 94, 116, 90, 80, -94, 93, -120, -3, -3, 102, -73, 34, -115, -107, -1, 86, -78, -41, -76, -21, -102, 11, -100, -4, -56, -110, -126, 15, -120, 78, -54, 73, -73, -37, 91, -33, 79, -39, 104, -127, -102, -49, 91, 27, -58, 92, -120, -48, -126, -52, -114, -8, -127, 61, 16, -21, 106, -32, -1, -68, 32, 74, -71, -3, -107, 11, -4, 10, 65, -10, -95, -108, -51, -13, -82, -30, 66, 49, 125, 6, 34, -83, -86, 121, -10, 27, 101, -30, 59, -15, -107, -76, 7, 42, 93, 97, -6, -117, 94, 42, -54, -111, 103, -9, 112, 103, -98, -53, 21, -116, -26, -9, 47, -84, -80, 100, 11, -98, -43, 10, -38, -66, 64, 4, -29};
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
    msg.setTimeStamp(0.9462262894897414);
    msg.setSource(19867U);
    msg.setSourceEntity(82U);
    msg.setDestination(40622U);
    msg.setDestinationEntity(155U);
    msg.plan_count = 34942U;
    msg.plan_size = 3435970350U;
    msg.change_time = 0.6719930813213242;
    msg.change_sid = 61623U;
    msg.change_sname.assign("YQOVIYSTNMYFLUYFTBRVLGGDGISUUKXITQTPJRDPWINJZONURARFWFHUJXIXYXLIHMFECHLTTMBX");
    const char tmp_msg_0[] = {12, 8, 98, -62, -120, -9, -12, -6, -56, 29, -8, -16, 8, 114, -125, 58, 34, -109, -101, 87, 93, -77, 37, 90, -109, -4, 16, 36, -20, -48, 96, 91, -119, 101, -102, 35, -102, 6, -55, 85, -71, 24, 109, 50, 113, -103, 77, 109, -72, -48, 97, -67, 41, -72, 46, 83, 110, -26, -19, -99, 40, 33, -95, 16, 85, -118, 75, 7, -49, -67, -120, 17, 24, -116, 113, 79, -101, 46, 126, -111, 104, -89, 98, -109, 123, -15, 110, 88, 126, 121, 6, -86, 75, 73, 54, -86, 105, 38, -102, -29, -51, -58, -125, -102, 20, 120, 90, -40, 122, 7, -49, 88, 29, -58, 27, 91, -55, -123, -84, -110, -121, -117, 48, 107, -19, 124, 68, 46, -24, -100, -8, 43};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZSHNNCRDPIJZCZQDIXKYFQQLUYHAHHDVSCYNSTZUXNMGSLZOVHCMGUWBNYXMPJXKOQTEFWJXJCNRNTYUNVQVJBWKAJAUGKAEXIBKWDFVCQMZWOPGZLIQGNBZFQBSZIGCYJREXDAOT");
    tmp_msg_1.plan_size = 15839U;
    tmp_msg_1.change_time = 0.7943517931770471;
    tmp_msg_1.change_sid = 61553U;
    tmp_msg_1.change_sname.assign("RKITRCBFZKRUBZLSVSJOUFSATLWWRHXLTUKTNWJACIRXJZJUWQQVONFNVZPMHBFOBREUOG");
    const char tmp_tmp_msg_1_0[] = {81, -24, 123, -52, -27, 84, -5, 9, 67, 81, 46, 43, 52, 81, -33, -16, 65, 89, 42, 23, 59, 67, 4, 123, 91, -101, 32, -101, -64, -33, 123, -3, -58, -119, -34, 48, -64, -118, -102, 86, -70, 5, 123, 116, -125, -49, -1, 29, -76, -124, 120, -97, -117, 64, -48, 1, 124, 37, 83, -73, -47, 36, 2, 17, -33, 61, 56, 27, 35, 64, 45, 78, 73, -67, 23, -53, 2, 63, -19, 11, -115, 15, -62, -42, -35, -87, -72, 53, 124, 55, -61, -53, -55, -126, -109, -9, 41, 8, -103, 43, 41, 46, -4, 115, 47, 66, 108, 1, -76, -55, 54, 15, 103, 64, 69, -98, -50, -23, 27, 73, -122, 90, -16, 35, -43, -88, 93, 63, 78, -72, -12, 90, 29, 17, -108};
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
    msg.setTimeStamp(0.2976323135844685);
    msg.setSource(24781U);
    msg.setSourceEntity(115U);
    msg.setDestination(48885U);
    msg.setDestinationEntity(86U);
    msg.plan_count = 27622U;
    msg.plan_size = 3291844558U;
    msg.change_time = 0.4037433922541728;
    msg.change_sid = 41741U;
    msg.change_sname.assign("XPQCHEYGGMXZCTODULXZLTBEHVRKULGORQPPAMTOMMJEASQDXAILYXTNESOIGIVZXLJFINPYZPNGIUVQUYYHWBQLAHQHWZRFBODJJRMCRWCBCVEWBAWNOAZABZFSIZTMKVYTXWFJINSSGVLEMHKGPHZUCCTSQUVODYRK");
    const char tmp_msg_0[] = {28, -124, -23, -17, -112, 53, 110, -117, 24, 63, -78, 13, 83, 4, -97, -111, -24, 112, -58, 55, -57, -90};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.9271100547280144);
    msg.setSource(19368U);
    msg.setSourceEntity(77U);
    msg.setDestination(2762U);
    msg.setDestinationEntity(172U);
    msg.plan_id.assign("BVZQINPQHVWLZUGDXGWFDYQPHZYJKCFVJFKFKPMEQJNSDQXNCYGTRATDDSCXCKBSIEIVQUUIXBWVBKPJWSPTMMYWXXJDBYQJWTOUBHZGOQCYTAZNHAVQHRHMNDNIZOWNILOOMXKOILRYPJHSOHCMAZYSTBACRSTUANPJJPTOGYESAEPUEUNKZLMTRQUA");
    msg.plan_size = 38493U;
    msg.change_time = 0.007111387164581595;
    msg.change_sid = 9983U;
    msg.change_sname.assign("TUKUDOBPRZJBWRWIKAUQANIXKYQMESQKVEEVXFRYSFZADDRVSSOUMXFWDQJDFCFRHGNWLVBHAYMNEGRDPNOFTCXPCDNULJEHVXIZZZUOWHOMDCRTAFBPUWTWIGPKZWQXIEIEEAUJPCBTPANMHBACOJVYNGGIYCVTLKDSLJLVGOBR");
    const char tmp_msg_0[] = {40, -101, 122, 52, 42, 87, -23, 110, 120, 39, 25, -41, 124, -110, 107, 90, -125, 54, 83, 85, 102, 21, 71, 37, -1, -82, 104, -85, -124, 90, -45, -120, 31, -79, -41, -14, -104, -73, -48, -16, 5, 24, -57, -51, 18, -83, -57, -2, 87, -70, 23, 39, -96, -46, -3, 73, -66, 41, -39, 99, -68, -91, 44, 122, 52, 2, 111, -36, -47, -74, -58, 107, 96, 18, 79, 64, -33, 124, -80, -41, 105, -115, -76, 10, -31, -66, 72, 1, -112, 58, 119, -115, 52, 13, 32, -102, 47, -93, -114, 80, 107, 126, 118, 114, 85, -28, -127, 11, -59, -16, -71, 115, -78, 63, 5, -58, -98, 4, -99, -118, 121, 104, -118, -4, 34, -126, -118, 75, -64, -98, -43, 30, 118, 61, 84, -18, -3, -22, -90, -122, 73, 87};
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
    msg.setTimeStamp(0.7229616479503228);
    msg.setSource(11869U);
    msg.setSourceEntity(3U);
    msg.setDestination(52829U);
    msg.setDestinationEntity(157U);
    msg.plan_id.assign("TUJGLSMLHTQRGVNBMJDTBFBZXHRLYTXXRKPJHKDIXREHQXNQEHROCWLEWQXVLVYJVOMOANAYSDCCIASQQJYOYZKBQUUBZPFNAZVRGOHHQWBGFEDTWCIXMNBKHTFWCHRSPFPEKSOCDFPUXDGBJNAWCIORIDLZWLWKIEBTJMGVMGUQJKAUQFIDOPRSIDYVCVBISFKAKMNDMUXJPENGSUUZMAWZPEN");
    msg.plan_size = 50619U;
    msg.change_time = 0.8638766073215993;
    msg.change_sid = 57559U;
    msg.change_sname.assign("RXAZZFRZLVEFEBRPISTJPABXRVBYKHTOCGWIFEDWHTGDYIACQFDOTSGCVZXTYVKMRVQLTTKTPVULORWEANMUHKPXNLQKQZIGOHSWWSDJESLMGMEQHMPKNXSFIKWOJDNRFPYAHOXZSXQBNVZBCKPUJGAZKFPNHDGVETRLBLPGJUQUHYDQCYMDMTCVYUM");
    const char tmp_msg_0[] = {-67, -103, -73, 100, 105, 42, 34, -96, -50, -123, -1, -56, -25, 107, 102, 10, -66, 61, 110, 52, 47, 115, -123, 23, 29, -43, 63, 122, 73, 17, -118, 34, -87, 118, 49, -100, 117, -96, -18, -87, -64, -92, 125, 21, 1, -65, 84, 104, -55, -52, 92, -39, -12, 75, -110, -16, -90, 52, -10, 118, 15, -80, -32, -71, 41, 54, -65, -28, 89, -69, -116, 21, -2, 51, 33, -57, -12, 1, -103, -5, 69, 18, 91, -127, -128, -5, -86, -34, -47, 38, -118, 21, 24, 33, -56, -4, 26, 50, -29, -83, 104, -37, 10, -90, -90, 97, 64, 110, 43, 124, 59, -74, 21, 119, -106, -89, 9, 36, -21, 5, -51, 20, -60, -115, 7, 31, -52, -94, 44, -31, -96, -38, 88, 110, 9, 39, 52, 38, -95, 34, 38, -94, 103, 87, -102, 52, -66, -27, -32, 39, 37, 81, 107, 116, 116, 3, -107, -15, 50, -54, -39, 63, 8, -62, -37, 57, -58, -61, -120, -3, -109, -6, 29, -11, -72, 95, -73, -73, -53, -65, -36, -57, -5, -34, -127, -22, -114, 35, -123, 112, 116, -126, 108, 99, -57, 66, 46, -121, -77, 14, 123, -60, -70, -97, 36, 50, 63, 108, 3, 71, 11};
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
    msg.setTimeStamp(0.4216124843865472);
    msg.setSource(64943U);
    msg.setSourceEntity(108U);
    msg.setDestination(17736U);
    msg.setDestinationEntity(31U);
    msg.plan_id.assign("CYCTJEBYIYFXRUIITPBLLQNWZNBVXKMERRDBHRVTQYZKUIAXFCAQTJNLZDMGZJHOZLIUOJG");
    msg.plan_size = 23410U;
    msg.change_time = 0.2712557840826415;
    msg.change_sid = 31387U;
    msg.change_sname.assign("EDCBNOOIVKRECANSQKCUCRZVHACLALRUZYYQHHXSMBKHFMIISMRGRXLETCRJADJYPWVTWJCDNTLMRGZTSSGYFZBDFJQOKTPAIZAZAQBYNKFIXEDDXANMGUMMEDJFPHWKLPROPVIJHPXFKBRDISMQJUBYQQKCWVWEHGYLBENWKBVDBZOPUJZWJYKNUJXGNMLTFVPOIAMQFVXSVPXFYSSGRUWGQYTZONAGHUOOGELIQFXHXPBTLUNWSU");
    const char tmp_msg_0[] = {-83, -2, 64, 93, 100, -35, 1, -25, -5, -101, -37, 36, -120, -124, -91, 22, -114, -91, 69, -84, 68, -18, 52, 81, -69, 93, 101, 44, 88, -19, -120, 92, -10, 87, -65, -46, 46, -106, 27, 106, 21, 125, -81, -57, -106, -106, -95, -27, -40, -19, 86, -5, 119, 74, 60, -88, -80, 55, -37, -14, -26, 106, 126, -91, -11, -108, 42, 101, -69, -94, -118, 61, 70, 52, 67, -97, 71, 107, -114};
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
    msg.setTimeStamp(0.8135058187079457);
    msg.setSource(20526U);
    msg.setSourceEntity(36U);
    msg.setDestination(7179U);
    msg.setDestinationEntity(229U);
    msg.type = 165U;
    msg.op = 203U;
    msg.request_id = 42156U;
    msg.plan_id.assign("TCQBMYBTSHFWHIHFRPJWZHVFOOCCGSKYQXWPAONVUYXSTLSJURWYAUPLIXTRENJCNNUWTVICFDGORKVFITDMRORNAXTPWWDKGQLQEVAPAPZQSUBOYUMIKCNYWNUBINGRBMDVWMOYLFSXQBAEPEHYHKZBYFKGXPGZEMYLLMJZTVCNMCCJSJLKRBTIGKRLQAAHZDSFZUIQHZPMOERKIJXJXAEEAQOVKXGDJT");
    msg.flags = 39459U;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.39421165527603286;
    tmp_msg_0.lon = 0.4697152228807542;
    tmp_msg_0.height = 0.4163114537586827;
    tmp_msg_0.x = 0.6559666791312956;
    tmp_msg_0.y = 0.8885807627703624;
    tmp_msg_0.z = 0.5628560921035268;
    tmp_msg_0.phi = 0.027695760546999737;
    tmp_msg_0.theta = 0.6831545041478221;
    tmp_msg_0.psi = 0.2438915774351873;
    tmp_msg_0.u = 0.42317162361492555;
    tmp_msg_0.v = 0.3960081447046141;
    tmp_msg_0.w = 0.15907529290716516;
    tmp_msg_0.p = 0.1762955052994689;
    tmp_msg_0.q = 0.5293392864568898;
    tmp_msg_0.r = 0.5177331846674332;
    tmp_msg_0.svx = 0.9918269432316605;
    tmp_msg_0.svy = 0.9173412869657236;
    tmp_msg_0.svz = 0.9519887926691438;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NSQJBJMWSUJNLMWKUHRETGHHIYJLTHUOLIQNUWINQRPOVCBHXRDCGWIAYXOPQBTHVKCRTHJJAZCY");

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
    msg.setTimeStamp(0.37540663763837445);
    msg.setSource(35845U);
    msg.setSourceEntity(58U);
    msg.setDestination(13545U);
    msg.setDestinationEntity(113U);
    msg.type = 114U;
    msg.op = 24U;
    msg.request_id = 33208U;
    msg.plan_id.assign("QJGFAQJNYLZTMYFIBKDLBREKKSDKUFZPZBIVNDINWWYZNYBJAHWNXOAI");
    msg.flags = 50699U;
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 126U;
    tmp_msg_0.tas2acc_pgain = 0.05814719755687814;
    tmp_msg_0.bank2p_pgain = 0.87918525515031;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SGTGZVDPUDPBGXIRCMZVWQCWZTJAFCRCKNXDKKIMZDXCUZQOIBQQADQEDKVYELHBQYOXRHPAYMGARAUELGFOIJQNXENTAWOSVXDRBYNPAVMKPWHHRQOCCSHDMCIBUXWDZOFCGIKBUOASRYNPGTFKSIZNUJULGIWFDRVLEW");

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
    msg.setTimeStamp(0.4732141014591511);
    msg.setSource(26829U);
    msg.setSourceEntity(15U);
    msg.setDestination(10101U);
    msg.setDestinationEntity(170U);
    msg.type = 62U;
    msg.op = 231U;
    msg.request_id = 7695U;
    msg.plan_id.assign("WUGBZCSYMWLNNEXFDEFWBKKBZTHQFISZRXNFKVLBAGTQSGJOKPULCCJPLJTPLKHVAVZKYGYITGSCHOGZQPGBDDQHIUKPI");
    msg.flags = 43539U;
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.7263870517764245;
    tmp_msg_0.z_units = 146U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IPWKFRLEHJXQGBEATFSNZGVYEWTHMJKLSDYBQCRWEISPKAMBVUTAOOWURKHXQZNTFTYDHFCDNP");

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
    msg.setTimeStamp(0.17577077173003897);
    msg.setSource(57062U);
    msg.setSourceEntity(34U);
    msg.setDestination(63565U);
    msg.setDestinationEntity(72U);
    msg.state = 180U;
    msg.plan_id.assign("BGIVKWBOWGYQCTOVEYPXFKYEFVHDZFJTBQMCYLJRCNQUHTVSBSADGKZZGULFDBKTOLXEEDQULAONIMJUPCIIIBVSTHDSJCGARPUMJCRGOVFENNVMPYBPJXMKTHTODUBAHWMAKHAXRQCNDQETWGWMPPDAWQZZCBOTYJMJSWXSQRZFRRYSIXS");
    msg.plan_eta = 122786163;
    msg.plan_progress = 0.8166758332767232;
    msg.man_id.assign("TLCOHVWTYXOEBZEQZCABLPBDVSUKQDMISLGGXKDUKIFOVHMJKFGIESIVOACYZOUPMNQURWHADSHSZWYUUCWRYVQHCLEERBAMSYQAWZSNFKQBOGJEYTRMTGNQTHCIYIKRAIKODJXVFRZAEDUKPFNRDFEUPCLVUAFCYPTHORDJMTQLSPMWCRIPHFMWDXBWMLLKBBXKOJNBWXQS");
    msg.man_type = 65522U;
    msg.man_eta = 1286971783;
    msg.last_outcome = 104U;

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
    msg.setTimeStamp(0.39547742295178656);
    msg.setSource(58696U);
    msg.setSourceEntity(201U);
    msg.setDestination(55457U);
    msg.setDestinationEntity(145U);
    msg.state = 66U;
    msg.plan_id.assign("YMLCHNKLSOTQKHCVAAQOAEFWCBZFBMNKFXSCBTOPWZLFDROWPSSBVJAJTRCYXGULLMNITCSZAUURAVZHIBDMBMYDIQCVUHCESYAUYPLQCTMFTQYJIXZMDPSKXZIZOVKZLJJUGGOQGJW");
    msg.plan_eta = 969001053;
    msg.plan_progress = 0.23519156028327914;
    msg.man_id.assign("XKFIXNFMKEQPZBUZEYBKGIJBHRELVGGMZZTDTGORCQDPCWODHBVKQXRLODUOVAWINVWHKYQYNEJFWRXSYJLEFHIPRYYBLQJCMSHFHRXQBBTGTPTEIRDNBYVUTAUXLEHXUROJXPPWJZSLIQSHOVSDJWNFSVAVCECKATJXIJFUVANMGETIYNGYRWBWGSUKZQCILSHAFEWADZMCOFAKMLPHDLNMCCUWPGZZSSAJNMCOUPKVYXGMDTROMIBUDN");
    msg.man_type = 10145U;
    msg.man_eta = 1385503526;
    msg.last_outcome = 85U;

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
    msg.setTimeStamp(0.4045728432086586);
    msg.setSource(3952U);
    msg.setSourceEntity(14U);
    msg.setDestination(57709U);
    msg.setDestinationEntity(110U);
    msg.state = 46U;
    msg.plan_id.assign("SIABQSVLYMKJCNTVDOFPBEDIHZXXJXORAQRIYDFUWOJMGHATBLGCUWSCDTLKEQEJWMXEVELMCTZMQPKUURDKYQWSAJFXNYPZXYIDIENSPQTIKBRLQHYOWWJVSXGNKFFIFKQ");
    msg.plan_eta = -1964814146;
    msg.plan_progress = 0.32039253707843485;
    msg.man_id.assign("XQJJLBEQYSIQIIMTVSNQLKUOUFQAYUIZDYIPETKADYLEOTCZGLVNZQZMNWAGRHIWCDGWMESBRBITFDQREDRYGYBFMHFTFHEWMDHXAXREVAOPCGGCCHJIIMYUQBRPXWDJCBRRMGDXNLVNNUGOMWPFKNAIDUZPUJKWXYFHTSAKBRKSLLOQVZHXXJEHOVOJVSBPVHCGFTOKNOJLWUKXSPYQZUAZWTTWXDVOEFRYVLAMGCJZSSHUZEBKPNS");
    msg.man_type = 26222U;
    msg.man_eta = -1154642458;
    msg.last_outcome = 6U;

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
    msg.setTimeStamp(0.2260848346172294);
    msg.setSource(34306U);
    msg.setSourceEntity(244U);
    msg.setDestination(45388U);
    msg.setDestinationEntity(114U);
    msg.name.assign("ZNPCSEGKBWOETUYGMPYHCFFTYUBQLYDCCXVSIEHYLAGHBBWKMQIOEVITJAKMHFLMUGKQUXMNYSNZQDF");
    msg.value.assign("LWYOFBVVTKGTMPQGBPKWYXWBXZDRIHQDMITMMJZNGLPTOUQUDHDAVGZTADVGEMAHFZSRLFNIOOJCJVLYMEWAHWAFELNPQZGCEVCKTVQUIFXWLDRWCYJSAPKZRHBUPKOMNPRUGVKORXJERCCYCQOAEDSJBYFULFNPUQANXKFILKLWSHVUKNZISRISOTJWSEZTLIDXASGJBXFBEJANOYYYNMDHDBEVXESBPSXMHOWMUYUCTCZKHRR");
    msg.type = 163U;
    msg.access = 86U;

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
    msg.setTimeStamp(0.7099542335038531);
    msg.setSource(43139U);
    msg.setSourceEntity(151U);
    msg.setDestination(4976U);
    msg.setDestinationEntity(225U);
    msg.name.assign("LKQQSUIOBLKLFBFNQAKYNDSVOXTZTXGKDSCBHZPNCDEPXXUGDULAENTTKJSQPQNOQYWYYCAONDKBOLDAHIHLZVZMOPWGNEFGLWOKGENCZERGVDBZXTUQIJJIRJAHBKAJUBCYXIVSFXRYGDIR");
    msg.value.assign("FZAITMMUGJYLLJHNXMVTGIJAFSPQTNMZRZPURQGCBONLVQDXAIKNJDUULH");
    msg.type = 165U;
    msg.access = 155U;

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
    msg.setTimeStamp(0.20377955164561834);
    msg.setSource(13315U);
    msg.setSourceEntity(73U);
    msg.setDestination(28984U);
    msg.setDestinationEntity(238U);
    msg.name.assign("ZWZLETQITTWMGWRPHKLFKEMAMEYCLABBADVCBVFJXOOAUPSBJNGYR");
    msg.value.assign("FTVXCKDGOBBHUIRZYEDSZWJUCODRGGPIOLTVPUNMNNZNAZYHHLPDPEHGDCWLYESRGZQCEWJMUCPFWPJSXPFHUXQAYRJTUWDRKSXKDCLNURCHMIKQCDSFXAXGBIVFPAXHITZSVVCRDJGBAQOKYYNWKFARZMQWMLXVNETILJWYHQOWULTKKJHOGAAKYPHMETQJBSTBIGO");
    msg.type = 98U;
    msg.access = 97U;

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
    msg.setTimeStamp(0.8114844584402828);
    msg.setSource(45335U);
    msg.setSourceEntity(252U);
    msg.setDestination(50150U);
    msg.setDestinationEntity(21U);
    msg.cmd = 119U;
    msg.op = 83U;
    msg.plan_id.assign("HYFHSWGZISGXOKDDUXAGGOVSUUMMTCFXTWTAYPFWQFJRRPAOUHGATORPAINTGXPYSJVKXKYNOGLZVVHDOSRFDBJSMLWBIHGJZMBWQILLVQRQCODWWBZBZSEFEJIIYNHLLSQNUZVBSDKXJDJVRENAKUEJTXKYRZQTMRYKMXXRVKECHFCPNCHQFIYEPPNPERTQCQJACALGWPBFQUMDDVAGYPFZEUTIIWBMYOVUBJNNLCHHK");
    msg.params.assign("KFHAOSHGXVMMRIKTCQTAOCROU");

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
    msg.setTimeStamp(0.6619848840741467);
    msg.setSource(10017U);
    msg.setSourceEntity(219U);
    msg.setDestination(9082U);
    msg.setDestinationEntity(117U);
    msg.cmd = 167U;
    msg.op = 24U;
    msg.plan_id.assign("UCNHRVDTBWAPGITURYHYSMNBCZIICKSBVEINUNOUFKLQSDPDJGZCTJHKLAWRJWAKXMGXHQBZSZUYFAXKAJCAEBQNZLBDYJYRDISIDOVNQQZDJGUFMVPLKGAJTUHNSOOXWBBEOXATGUVICGWXPQQNKLXEQOEDRCXPHMTUEWUISRTCGOHYLMCHVLRVVPJWRZMYSRGEJXQGBHPZYQ");
    msg.params.assign("OUDZRFVUHFZLGQXLGCNEPXXKMBVVYUPKZPLSUFAVYSDSQWQYETHAHWSZJWIPJXHRSITVBZGMJEWSIAGZGTZKOIIHKUTVFSJGQLIJSKIQDNPGINYCNDDXSVUYACNDXGCNAFEHBBWSPETOUOEUFBCXRMLAWVHRTW");

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
    msg.setTimeStamp(0.878822854256335);
    msg.setSource(48387U);
    msg.setSourceEntity(234U);
    msg.setDestination(38492U);
    msg.setDestinationEntity(176U);
    msg.cmd = 222U;
    msg.op = 146U;
    msg.plan_id.assign("ZEKGFDZJVLTCYSQDROTFQVRBHARCNWLNAUQRXZESDCOPQWPODYIEGCFPCQJMDYZLHHWNRGMCZAOEKREXHEYZMKDBHMLLNVTSAPBCGDEUMVIXOMLFBXPQTSWTIDBPHAPRBXJHWVPAUXSOGVYHIZGXVXRIJUSEXIBLMFVBDBWNWLOUKVYWZKUKPFQANTTOXNCVIGJYUWFL");
    msg.params.assign("DXMKESTMUWYHSEAKQOZHICJWUHAQDBVPAEQIGITTTQIDYALXDFCBLOQGRXMZLONKOMHDRYLVLSPLYHWZZJYCVXSISLTZBNMBHUBJAXYOOUPQ");

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
    msg.setTimeStamp(0.3022932396062977);
    msg.setSource(54411U);
    msg.setSourceEntity(176U);
    msg.setDestination(43093U);
    msg.setDestinationEntity(98U);
    msg.group_name.assign("VPUCLXBISFHXHQCQYEKRSALQKBGPBHUKUZQIPCHWYSDVVTFGQFUJLFDMFZTKJJXHXFGFUNZSZEJYAWCCGHAWBMCJFYZIMDJHDZQSOLZCLQMWGRRMAVPWTKKOXEXADMOIKRKEOQEMHJZXNVLTSBJSMGGAXIEIWNSSEOJNVTOKHXVNINMGLDWSQRNOORZTYDRTFVGALBEOPNHDQBUZ");
    msg.op = 114U;
    msg.lat = 0.9329804427824587;
    msg.lon = 0.48907990340340246;
    msg.height = 0.42194716707644364;
    msg.x = 0.7009373046501194;
    msg.y = 0.26697579245939806;
    msg.z = 0.21850511751481605;
    msg.phi = 0.7454237969037999;
    msg.theta = 0.218510208973975;
    msg.psi = 0.8828060388146448;
    msg.vx = 0.6002025313396105;
    msg.vy = 0.9262415835121878;
    msg.vz = 0.46190978563928375;
    msg.p = 0.0019301976969477996;
    msg.q = 0.29669435671009203;
    msg.r = 0.19531865205560295;
    msg.svx = 0.15493924575655726;
    msg.svy = 0.1406972521021057;
    msg.svz = 0.4230726947941206;

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
    msg.setTimeStamp(0.46848478034401797);
    msg.setSource(36996U);
    msg.setSourceEntity(186U);
    msg.setDestination(43485U);
    msg.setDestinationEntity(188U);
    msg.group_name.assign("MWDODRXUQJVTVMZIDZYHCVGBERLYAQXXOEBNTXZSQCRAOCYADFKATTQMNEDQRVHLAUWUQNJYMMHAKTPAHZLSKIKTERICIWHHJIWSKSAMQKGURSUZJIBFPNYSVBRFOFGYWPYGBNCRSMPQZWBYZWSKWLRPUFBBSNIOFWBELIXUQPCKDHPVUWBJPQMXOTTGTNMMSLIANVYFZLPONHEJEXVPUALCHHEFVDVGNJDEECKCOOURIFXXLL");
    msg.op = 228U;
    msg.lat = 0.5400863529009746;
    msg.lon = 0.16654749239616762;
    msg.height = 0.24612705648388955;
    msg.x = 0.08456711751991841;
    msg.y = 0.2210184340833934;
    msg.z = 0.33847802417954465;
    msg.phi = 0.5461286185364834;
    msg.theta = 0.038746055106673616;
    msg.psi = 0.6627616625923656;
    msg.vx = 0.2407456256725512;
    msg.vy = 0.8217822997118013;
    msg.vz = 0.3647232377959879;
    msg.p = 0.569632716991736;
    msg.q = 0.7411573832871577;
    msg.r = 0.4638148556339011;
    msg.svx = 0.7269248957513946;
    msg.svy = 0.6271396777820463;
    msg.svz = 0.38287338289539596;

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
    msg.setTimeStamp(0.2848955188937843);
    msg.setSource(21225U);
    msg.setSourceEntity(238U);
    msg.setDestination(13328U);
    msg.setDestinationEntity(98U);
    msg.group_name.assign("CTUUCGAJDLYRSWPEMNQXSWVXSDBTXVAKBRDVWMPZHGQXFVUXSWVJRUOTKKOCZEXPMRQFKBTEPBROLADLNTSEHMBJZBKESEEAMLLAAZGFKJZXNFRDPIVHDLHIGTGIQTQJUWHOG");
    msg.op = 194U;
    msg.lat = 0.35230810724087946;
    msg.lon = 0.8856532855320824;
    msg.height = 0.9452776332620638;
    msg.x = 0.832727691413082;
    msg.y = 0.21193462654915562;
    msg.z = 0.5824199932987629;
    msg.phi = 0.05334221634466607;
    msg.theta = 0.2158443293678749;
    msg.psi = 0.28662910253377405;
    msg.vx = 0.5524839486876486;
    msg.vy = 0.2485723964769504;
    msg.vz = 0.7071110660192432;
    msg.p = 0.0508081588105912;
    msg.q = 0.6159532554173792;
    msg.r = 0.29144783864440504;
    msg.svx = 0.977909094947443;
    msg.svy = 0.6286194446185613;
    msg.svz = 0.136086806029047;

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
    msg.setTimeStamp(0.12106135381981575);
    msg.setSource(16935U);
    msg.setSourceEntity(25U);
    msg.setDestination(6534U);
    msg.setDestinationEntity(45U);
    msg.plan_id.assign("OCIWLVMFZGYBGQPZATRLPHFJBDGLSPMDIIKUFJXPWAUCNEWOQHSZYCHQJNLPJMRECZIYVBKGAIHUTLQXOQRXFZTELDHHIJSMMUCHVSCBYYEFUU");
    msg.type = 207U;
    msg.properties = 97U;
    msg.durations.assign("VORQAFSSVXQQBZLKECHGMIGLDPORNUBFTDZLFOSIXRTHBWLYYUATBKAFXCCNHGDBQTIOSNLWSFYNRXWXWXKUYJXCDMTGAIJVHXPROJDFPODEBRUZUJCBVGAZXJMEMGECQPUEYBRHIPHFUTAEDKFPPYDIDJRWNNVQKEOADEWIT");
    msg.distances.assign("PLJUFFCBTAEMHJPBXXFGZHVJCQSXOXVBDVCNBSUIJOUUJCWSNSDRBAEAIYNSLMOQOKCLENDEEIDKZTTDQPTBVUMKRRV");
    msg.actions.assign("GEAPSUZQVCDXHZVGPFJKBQXJKFOCYDGDDXLTIEGYCWTQGTAMWFHMRRPEKMYJABULXXNAYBKIOYFATDQRBHLGPWLSSEEVSCDBSUAHGOMEUCOPCALDTUBFNOHKRCRMXIPJDVWHKJPJRIXUNHVASQYUWESKKZAQIEDHAFNIFTBBQWWMZXFTVNOYGLEJRXIQUCPWOLLTFQGVYJRWORMZPVOIVGJMFMQZENUYNKHJILCPNCZTZSKRUXSN");
    msg.fuel.assign("YFJODTSELATYRMWOUAFGEORCOLXFGDEUNVSN");

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
    msg.setTimeStamp(0.8981448585939916);
    msg.setSource(43719U);
    msg.setSourceEntity(150U);
    msg.setDestination(60138U);
    msg.setDestinationEntity(89U);
    msg.plan_id.assign("SDOZSKFEBJAYEZOAMCVYWMCWLOVOJNQEFHKDZWZRXYIUHKRRNNCJGWRVYW");
    msg.type = 139U;
    msg.properties = 25U;
    msg.durations.assign("YPOUPILCCBZBIYBQFVNEHQUIBIOLEKALDDOSTHZPEXXGCDCZGXRLEJONNBNROJUOWNXNEFRWIILKCKTBWTZHBWJVFSPFMMVJKAPLBPYHXGEWYEAHVJFMVGEQFAKMUYVECZTRMSDIDTVQO");
    msg.distances.assign("JQHWJGOLDIMFNLMDTOVIMAYOKJMBEPTXDGCRFQRQUKBEVWFUXYWWPXYQJINOZVFMCNCCJYFYPMPOMZIVLTSQZMRNGJHASSEZZRELFLBCVPDUDZIJPHGORAHUPTXQVPBNEHBNZHDYTVULXNYWHSAVWLFEQLHAXZQIHTAAOJINQWPKI");
    msg.actions.assign("VKIOBXBVMFLPOBKIBDOAFKENHADUAKNFMKTGCVLRHVYPPQRATEXBTPNQGSUCPREXZFLIYZCWIIVYEWWDNFSWOPMHTQWJZIJBBGHAXYSYJJXOUUYVVGPNQEFHPFSESHXYMJOVUCGTHAJXJUUWKQIQQKZ");
    msg.fuel.assign("TEYMKDAQIFISCACALMLFNJRBVYIEHWDHJECOBCQYQIDTNDDSNORKWUWBZYDVPKIJMYVJFRJTLDLTFVJPXHYUYLAWZXYRIPEVZZXXLNOSUXCRHRIHREFWTBLFKRWCVJOV");

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
    msg.setTimeStamp(0.09781727474294277);
    msg.setSource(38471U);
    msg.setSourceEntity(200U);
    msg.setDestination(50406U);
    msg.setDestinationEntity(226U);
    msg.plan_id.assign("TGHTSIHZQVBCVWOWJHUUJZIJUFTMFJPFKXIWQXDJVECWENFKROQIEOOZIHBOIYLMMYCHFUGQBRCBGYHOTSMLQNZZAROUMDKXVVGPGPLZIPVYPKFZVWMLAITBQUWHTYOKBSUNNUIQXCRCEABTSWYMREGKGGLUWUTPD");
    msg.type = 45U;
    msg.properties = 15U;
    msg.durations.assign("HBJTSZNDCGEQZXUAFRRAMJIAHQKUYSROAOPVTIAFBDDIZMXTREUWXPCTQOGEPDTHKUFLZVCHJGIFFGVRTPOSVLMKKQXTLAOZWLURRTVFUZMGQVSSNAPZOWGKZWJJICYHNASUJNXPVHGYDDXQONVYCPDRNMBAFBEEYSWYTMXMHNXEQDELHBRFGSWGPEQCOYKBRYKJPQWKWOLEFHUZKMJWLZEITQMIVBBXNDNPACSJFHCYULV");
    msg.distances.assign("YXMVBLLFCODAWNATGVDUSXKKFAXHUATOIECGSHDCYQXOJZUPPLSMCINMPAOJZLYLHLOHGRUGEJAMBRXYGBWQEFTMQXOEWPWJSYSQQTALYDHVWEZNUTEEZIOHDWZITFYGBRGKCQHFALOSDPCOMAJZJZTFKNVJFXTGXNXSAJDBRWBHQHBVEPPSRINSCCSNBVJDWWZBHRRTUNDKYCIGFTRKROYVLVQUQQGMVKKINZPVFKJXLUUUI");
    msg.actions.assign("TSDNEKAABOGFZWUCIDVLDXKCGTQQQYGXKMMBJWNFYYJCICUCTUVJLXVSWUSBOAKKWXHYVPPPQLCR");
    msg.fuel.assign("QFCCXSGZEVVVVIWGMPLDUDNTRJXROYRQHPKUAMYDXNQMYGUHTAKNLHWBCAPBFYQWBUVLAHUFMVJONNHJBHVGYZGYKUWFQJELEPBEDORFUCFAQ");

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
    msg.setTimeStamp(0.12370838742168189);
    msg.setSource(3178U);
    msg.setSourceEntity(192U);
    msg.setDestination(50852U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.07084333608905546;
    msg.lon = 0.20551331628968317;
    msg.depth = 0.24841790855312196;
    msg.roll = 0.35241412853379084;
    msg.pitch = 0.5490388852547673;
    msg.yaw = 0.17761782499114043;
    msg.rcp_time = 0.9448366664419009;
    msg.sid.assign("XSVYARIMQRBNXYPUVQTQGENWDWAWPBROPYKVYPJNGZONMFSEQFYKRROKZJSALLQBHPCVEPHNYXZTCDSJUCBGDVEAMRLWQHXTOCYTHFUMHMJGGPUKITBVTLEJAJQJXFUKJPLRSSTFSOVMDRTPKCARDOZ");
    msg.s_type = 226U;

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
    msg.setTimeStamp(0.4010562856549882);
    msg.setSource(23296U);
    msg.setSourceEntity(143U);
    msg.setDestination(35249U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.21013520074602166;
    msg.lon = 0.003450494753436284;
    msg.depth = 0.05246125423136938;
    msg.roll = 0.46777515200852904;
    msg.pitch = 0.15299264631832155;
    msg.yaw = 0.9192726422765498;
    msg.rcp_time = 0.494595975399182;
    msg.sid.assign("TPJWMJOHCETKPTKIKBILYLEUDWJCEXZXRBBSLURMRYNBOJRHVWPONVVIDXCPOCLNKGAQVAEKWSJNFTUXYQDDTLZVAIXVDDVFUOYHUESBWGBZGRWYQVPJWGCATSQFAZNBDLCLSTYYEUPARDRWIQQNMPRETHKCGLHPEADJUYG");
    msg.s_type = 243U;

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
    msg.setTimeStamp(0.8633576280336798);
    msg.setSource(11300U);
    msg.setSourceEntity(84U);
    msg.setDestination(32438U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.239694277527438;
    msg.lon = 0.056538451533067136;
    msg.depth = 0.3829582657850814;
    msg.roll = 0.5736106462263121;
    msg.pitch = 0.17793685051578523;
    msg.yaw = 0.11560464443956742;
    msg.rcp_time = 0.5558756585803484;
    msg.sid.assign("YMYPAJESTFCSZMIJFXXZOAKTXLZNE");
    msg.s_type = 251U;

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
    msg.setTimeStamp(0.9052080739017124);
    msg.setSource(25330U);
    msg.setSourceEntity(19U);
    msg.setDestination(15452U);
    msg.setDestinationEntity(206U);
    msg.id.assign("OWSHCDEVGQLOLPRWIGLKXJPCYSELBXMSCWZZMPNQCVZNXLQIYGYSDSSWMAHPHMPBKYUUUFOLSHIJBDCOYOSJYDSKEGUQBKATQHKPGLORARCMQWFMVEWADPHPNFVFAKNZKNBIHIRDIENJJVGDVAUFXVXIWKBPTFTNYWLD");
    msg.sensor_class.assign("LQAMLKDXLGCGHZTAAMSSDEHIBRYIUQJCXNPJHYWETWXRZAVTQNVDPEBGMKKHMYQIVRSVTRHWGWAQSXPPGRPUALWRKMQIJGXQNNHJZCPZUHSPEDLTCFBALKUOXFMHROGBSYPMNOFFYAXTEKWYMNBIFNWJLAGZOJRDUCZIJIFUVDJWLGEUBEKBKTVHYSJFSOUUSUVEQBIOHFDB");
    msg.lat = 0.32341789541037125;
    msg.lon = 0.04929707341268963;
    msg.alt = 0.748562524462978;
    msg.heading = 0.4270627881956435;
    msg.data.assign("UYVSOJYAQHZQIVDTEAPJHFTTUAKZCYOXSMXDSVMCIJSSDNIPRSEQWKTKGRSBAFKBBZOBWQCOQVWTHKEDGEWVZFRMRAOIUPBHFXFZPOZXFODPPQEPXMKAKXIWYEAVJGBDCVUIRVYUCXDOLZRLCJZBNGCCAAZLMIGJGHHMMQJJWLTIQWCNQNPJTRTZRSINDXK");

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
    msg.setTimeStamp(0.9333114249922944);
    msg.setSource(32410U);
    msg.setSourceEntity(49U);
    msg.setDestination(40222U);
    msg.setDestinationEntity(160U);
    msg.id.assign("HWELZOTJSXGAZCQXJFMDLTNQFPHCGBUUAUPFGWAEGRVQQKMLGXSSAICVBVGABTZBUCPSYOKGXNUEDUTANJDFNDKDNWOWHNPZFSQYSRLBDMMVWMCHXVTEQUJHDOCVIBQJOXWTTQOYIDPINPEJYJZSYRFHGYZHRBFVJORCJCMNYO");
    msg.sensor_class.assign("TDTPYWNPXKXIKKHUIHKWFMSRCTATVUFBWFWYQGCZCLIRGRMCGLZ");
    msg.lat = 0.7393971737433325;
    msg.lon = 0.8255683366733041;
    msg.alt = 0.19346889724921335;
    msg.heading = 0.7334006544979959;
    msg.data.assign("OMYKYCAOESPEZWHXOSCCJQAKUHRRSAHVCWZULINFICORKLXDNVOKLDOIOTZQTAIUGVNJMVTUEABGGQBBNITVKRBWSCXLAYNMYOXPCSRPJXYIRXHRQPMVHPDNTYTGREVCFLONANDZLBEJUKTPJCVXDFRQZLHGRUSEQWPQUFDEG");

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
    msg.setTimeStamp(0.7398254487252172);
    msg.setSource(53034U);
    msg.setSourceEntity(123U);
    msg.setDestination(56414U);
    msg.setDestinationEntity(194U);
    msg.id.assign("ZKMHPECGUVIBRWCHFBDASZMDJQSFTRRBVGVSAQTYSGZKABQDCTWNHLNYUXFYSHBSJMNPNOVIWRLZEPIOBAGLE");
    msg.sensor_class.assign("JICHSOILCFFYEPFLLNRYVHWAPTFZBKDGEDZOSEDBCHKRDFLRYHTSJQOBBNYGALXMSTQIZUPYBHWXQZPEKXUQCXMAAGNGFSBMOWA");
    msg.lat = 0.8748952092471485;
    msg.lon = 0.8479878755169674;
    msg.alt = 0.96694196932863;
    msg.heading = 0.7160160158832674;
    msg.data.assign("KELVHDWSRLWTENYWTIAYJNLSOJELKPYFKVOXQJHHMKDTWBIECNYYPPARLXODURFQUQOYGZUAQUKJSFAHYAHTZNIATMBOCGEMYRSIBTJHWYDPARUAWMQIFGTLFQIENCP");

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
    msg.setTimeStamp(0.2600618584035691);
    msg.setSource(9079U);
    msg.setSourceEntity(242U);
    msg.setDestination(56047U);
    msg.setDestinationEntity(58U);
    msg.id.assign("ZLDDLWHUKKYWDPSXNFBAVRJZDPLEURSXVOAVXRDEGMBGBGGESZEYHHPMIHKWRGNMNAJEMUJYJTHFGHTEZMVFJILPQVIVENTOLCYURSGGWMJNOBJXNQUVROTZWTDHDUO");

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
    msg.setTimeStamp(0.9680271744137698);
    msg.setSource(7894U);
    msg.setSourceEntity(141U);
    msg.setDestination(29343U);
    msg.setDestinationEntity(78U);
    msg.id.assign("IOAUQRWZDYLENIAQRMPUIHNCHFSQQARFXGCEPFNSEGQNILVIEMRHTKBMBPRHLBNXGWVFSWTTJQTKEVQDZFVNFFLKRTXGWJKJZDBGYRULHHSMJKVNZMDBUOPBSKOEXTRKIWKJANYXYGYCWYZFOMDSBBODYXEVOOUDYRNPXSETSIBGUWSHPRXJZAIQTXJEWJHZEHTGOWTGUYCCZULLDA");

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
    msg.setTimeStamp(0.7948355059940546);
    msg.setSource(44739U);
    msg.setSourceEntity(247U);
    msg.setDestination(20252U);
    msg.setDestinationEntity(154U);
    msg.id.assign("ILNRYLLWYRBLSAMLRKFZURERKUPMHYLACVCNRBHKTYJPOOQZCWVHTHJHSKKJDWXCFGSMZYBQZEGLPNZCJNEXBVAHAJRQGZFGVDBWEXFZDMUYUOEISUNQWOTJWBEKIGZHVIIVPDDLIUFKPQCFCOPAVTQGR");

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
    msg.setTimeStamp(0.8593493771164534);
    msg.setSource(13230U);
    msg.setSourceEntity(154U);
    msg.setDestination(39300U);
    msg.setDestinationEntity(250U);
    msg.id.assign("IXYUYEZKPQFOJLGJYPTCLQVZISQMTHCGVYUHTZRECWDALZMUUPZMMTRHGWTTAQVKLDSQHVJFGVKGFICNTXYKRRLBCZKPWBFJNLMWOCUTHXKNEVNQFFUQSESJMKGSLHXFQJZXWDBPDPVMGIXHEJZOLABCUYMZI");
    msg.feature_type = 220U;
    msg.rgb_red = 9U;
    msg.rgb_green = 5U;
    msg.rgb_blue = 248U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.2700964242264612;
    tmp_msg_0.lon = 0.26161291208063053;
    tmp_msg_0.alt = 0.016612428685981784;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.02285300482929631);
    msg.setSource(13352U);
    msg.setSourceEntity(29U);
    msg.setDestination(44200U);
    msg.setDestinationEntity(148U);
    msg.id.assign("EVTBKQMPOJEXOLSURQS");
    msg.feature_type = 97U;
    msg.rgb_red = 167U;
    msg.rgb_green = 247U;
    msg.rgb_blue = 15U;

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
    msg.setTimeStamp(0.8273397510179614);
    msg.setSource(38585U);
    msg.setSourceEntity(251U);
    msg.setDestination(15566U);
    msg.setDestinationEntity(144U);
    msg.id.assign("YIQQATYESMEUEPGQIHDVOKDXSWTVTUDBJKNXLU");
    msg.feature_type = 155U;
    msg.rgb_red = 99U;
    msg.rgb_green = 171U;
    msg.rgb_blue = 139U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0021276274326246236;
    tmp_msg_0.lon = 0.43918420645223866;
    tmp_msg_0.alt = 0.24546718994932715;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.10424356791967593);
    msg.setSource(31562U);
    msg.setSourceEntity(140U);
    msg.setDestination(19455U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.2687455676617;
    msg.lon = 0.4835047276012886;
    msg.alt = 0.38006403056316906;

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
    msg.setTimeStamp(0.6617422075842951);
    msg.setSource(7066U);
    msg.setSourceEntity(79U);
    msg.setDestination(35244U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.9247624483673781;
    msg.lon = 0.507071326362846;
    msg.alt = 0.4339044352700774;

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
    msg.setTimeStamp(0.7829764648347987);
    msg.setSource(27548U);
    msg.setSourceEntity(175U);
    msg.setDestination(25993U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.6613355985519254;
    msg.lon = 0.5051768491045038;
    msg.alt = 0.355337807695139;

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
    msg.setTimeStamp(0.2143311000468512);
    msg.setSource(26701U);
    msg.setSourceEntity(225U);
    msg.setDestination(59730U);
    msg.setDestinationEntity(143U);
    msg.type = 65U;
    msg.id.assign("KAPRSJTGXEMYDGOGPWGALLUYCUXERZUPHJXAWPOWQHANGQWTTWGKCUBEXPCHUCJEPSVLJXVTNPFTEZRDIBBVMFEBZXOZWDOOMFJVRBIFJNHXGDJVYNCEWAOPOZMHIQNPCANIYOXWOCYXQZEVDFBFDJGBFHMVKLNZKKCSYLSLRFBVHQZQREUIIRSEHVDATSMUSNCSJYTXKUGTNDIIZH");
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.11553356299443118;
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
    msg.setTimeStamp(0.09017640432194374);
    msg.setSource(64433U);
    msg.setSourceEntity(14U);
    msg.setDestination(32787U);
    msg.setDestinationEntity(250U);
    msg.type = 235U;
    msg.id.assign("KKQNVXQJVQZLHEPREYFXRGGXVNUSQRMKFHPOOCFIICW");
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("MNSVUGKVDLFBCTXVEUYSFWFQZIQORGQQPEDITWLLKGJNHAXNURDQPJYZHCCZWDTNDGKNTYTNLSPYGPKEXEEZBHPOMTAWEOSFWECYQVFFEUIZDYLVKHCEZITLSETFHXNKTAXORUPAMOZNWBWGXKRYJCWHSHMZCCNBVDVMRWUZLIXBAPRYOGGBI");
    tmp_msg_0.htime = 0.6402012036909507;
    tmp_msg_0.lat = 0.7399923516483363;
    tmp_msg_0.lon = 0.9139698609424145;
    const char tmp_tmp_msg_0_0[] = {-21, 10, -57, -48, 44, -127, -15, -57, 121, -22, 42, -118, -13, -21, -19, -69, 95, -61, 76, 94, 44, -101, 13, 19, 100, 43, 16, -93, -90, -14, 97, 18};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.33826929278759355);
    msg.setSource(57274U);
    msg.setSourceEntity(145U);
    msg.setDestination(3508U);
    msg.setDestinationEntity(20U);
    msg.type = 214U;
    msg.id.assign("HHXZOOVDZIAVXLNWXXPFJLDVELHRCPIPGMTYGDOKTPZXUGAZWCSSYNGSYNDBFQWTYEPHLIEDSRZVBMDIAZITKUVTPRQELBIAZSFLUOLLSERKMBVBXKCWN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SNVLZKEXTTOFLLWADSLCSGUJJMBURY");
    tmp_msg_0.value.assign("GQAUWAKGYDORCPJTWRYPMZWUUMQECQEHWKTJLVBFLYGOFDTZXMRPBQYSSKAPJWTOARQDSILFTAPXCHMLEZJLXYLFCBKUKIIJDAVGTJNWGDZTSUMRZOVPQSZNIYSKHFDVFEUXVZKNQBCRXOXQZUNCMNRUIMWHPBGXUIAVHJDYKAMBWXWOICRFZIVYTNVRPEHJELZJHVFOORJNSXIBLDCLBWHTBYKP");
    tmp_msg_0.type = 42U;
    tmp_msg_0.access = 174U;
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
    msg.setTimeStamp(0.07381360973036766);
    msg.setSource(37889U);
    msg.setSourceEntity(163U);
    msg.setDestination(56686U);
    msg.setDestinationEntity(95U);
    msg.localname.assign("BBWUCOGUJGFDXCSFLGTKMCQEEEIGYXVNLDLVPKOTMKYALSUDEQDNGDJTZN");

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
    msg.setTimeStamp(0.8371314770004332);
    msg.setSource(64800U);
    msg.setSourceEntity(30U);
    msg.setDestination(7637U);
    msg.setDestinationEntity(101U);
    msg.localname.assign("LQAJOWYXWCBHHUPTJTPBWRTZOEOCVMZYPVNNIQJLRRPQHJFVGEOTQPCGCFMHCFIBAKNBLSYECKQGSBVXSVBXDLMXYBSMVDHIWSJSNBPUQNZOUSXGIGSXTKKKHWNLCWMJMQVUAIAMFKFEUUZEJDVYDQPOZAWTYHIEGUBONEGZNJFSHOV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DDCYTPHFRZMSGOSABFTGWKKFERNIWBBTLAZUVMBLTQSOGJVWYWWMEYJXSOSFXHZXEUXYMMYOMUJPDGYWIIORGDCRWBPHRBRFSLMNMULKQTTPNOCKJFUJNIDVO");
    tmp_msg_0.sys_type = 232U;
    tmp_msg_0.owner = 20002U;
    tmp_msg_0.lat = 0.3749051114437121;
    tmp_msg_0.lon = 0.12583597409786917;
    tmp_msg_0.height = 0.3370374161708012;
    tmp_msg_0.services.assign("MJLDULSBNSEGUEYGSDRWKMLWFPRCJNOZMOKNFBFRSKDEUPIWRTZEXCMIHWIMEQPYWOPPZXCEPXKAHZYOKHDJKSYDJBPNVWMGBYFABBUZWOPZCWGTJAJHQINTUKZZXKJAUVFGVDZYUHDFSCQ");
    msg.links.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.418693876654594);
    msg.setSource(65497U);
    msg.setSourceEntity(226U);
    msg.setDestination(11496U);
    msg.setDestinationEntity(71U);
    msg.localname.assign("AHMNWWYMNZNLIXUFVAVKZNXPNDTZUXOVWZQUAHWTIFYVBHOZLQVKQMRRENEEMFQVIGQHZJCIDROWRDVUFGRJULCQGBTUKKDTEUOXPXNKSCJYEYPIAVPXHJWBDZACCOELGACKUSRQCVRWRQFZICGSLJHSCYAPPWOUJYLPRDQGNEVBHBECYNAGWSHP");

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
    msg.setTimeStamp(0.3458732802770077);
    msg.setSource(49735U);
    msg.setSourceEntity(65U);
    msg.setDestination(34893U);
    msg.setDestinationEntity(56U);
    msg.timeline.assign("MZQUWDBDXEHIBJVJQOGLEOMUIVXCPDYRQJEZMMPLKRJLBBXKEHZNBVMFDKFATZCORYAZXAKBCSYITEMYWRJRGHNSYFCZOYTSCIVSCXOIAVTKLWOTDWGMZJSCJQYLXMHPWBFY");
    msg.predicate.assign("RZMBZMQWGSTOFVUFBECADMMMDHMOXHMEOXDIKTURYBGOHVMCPITOLZRERSKNZXGDOTFLWKFVREPGJZEIJDACNOFTLHQAMSKTPBKPFHWI");
    msg.attributes.assign("LTEKIUGKVNHZBYMXZUFDCULASASNIMTFRGHWGHKDPOCSUHKVEMDUFXYBAEAZZNFBPDTZKQDKQCSNGGAVJLRWPCSUEXRDLNZEFHPQKMMNURXVLKQXTZWXGOLAHXM");

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
    msg.setTimeStamp(0.32972543005406096);
    msg.setSource(33500U);
    msg.setSourceEntity(165U);
    msg.setDestination(14174U);
    msg.setDestinationEntity(253U);
    msg.timeline.assign("XUPETDGHXJFCSAHDRCBANFVVPMNMSFGTDOBTAHKMAOBRLRULKMZQKBWFWHISMRVAGIJLSZDZUBDQCBGSQRKNXFHNKJHRKOCYZNHDMPVPJUQLKWGSFOTBPIFOQASCHPXPJZEXGREZARIVNEZDVTMXTYDRGELCLNIJAPOOYKZBUAIEIFLHPWOBXYTNOWUCZQKQVUWLQUEWLTQYOCYICTVTGIFUYMLDUSWVQEXHWJKVJSSPXGMYXGCJFY");
    msg.predicate.assign("VKFMGOBGNDCARHDCKFIWBFFZGHVLUGSEAPEWSGMBAPHKJFPSBYMYJMHXAMCVYYBHLDDYZTLEZZWRQNPTOHADJOISIETKFKNJEXGIOBJJXGYCRUPOQSKRDWEICLCHXKBQCVNQGTNAXLMGIINDLMNOEQDCSTMPYEFWLXWOUNKJQRCWBIMBUPRYHFCLKDBKUUPJUWX");
    msg.attributes.assign("FRSETORVBLPYUONACJHSERLFTWKMFNVDLSDQAVUVQYGUZZCJDBZBOGDHGOMBCKAWXXXWSYMFSCVHVCNFBBSHHOBSFEETGMLYWGWGKQJTWQTXPUAFIWRZNZICEILATCADRGDPMQVHUJFZIRKQAGIYMNOZPQSIHVUXNJMKNADWARXIWTVQPKYHLXKJOJAYLXYERUBZXZYYJKQCOFSVBEP");

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
    msg.setTimeStamp(0.2500059041260022);
    msg.setSource(48899U);
    msg.setSourceEntity(50U);
    msg.setDestination(45274U);
    msg.setDestinationEntity(147U);
    msg.timeline.assign("TIRGHCCZNVJOWNPS");
    msg.predicate.assign("JJCMAWLMGFXQGBQJGLYDHAHBSSUQYRRJIGXZYEROUUVFBFRTAEDXSLSVGMAQCOTGOCZIZPOCPPJECOVTQVK");
    msg.attributes.assign("KNCLPHSCRSRWBWZOWUPZHEAQRLRXNHJNITBFVXJAQTZTEFPKYLJXGBSGMGYBHRMESIUDMEIOQNYBINCKTCBDIKTJWPWLABFVJDNHUBOXMPBVEJGYCCFEHPBQZCXVQEFRYTHAGDFGSNSOVWAPMECCSTHXIPPQAKMJ");

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
    msg.setTimeStamp(0.42932031712597474);
    msg.setSource(7260U);
    msg.setSourceEntity(126U);
    msg.setDestination(21476U);
    msg.setDestinationEntity(168U);
    msg.command = 15U;
    msg.goal_id.assign("ALYEAJPSWTAEUZUFYVBQVMPXVZKTPLKJROYIQYKSUTPOBASFJJGNUEHWRDSVWLLMBYIAPSKROZRJRIXXLKIPCNJVSFINVVGGINHYBMSBZKFOLVFGYFVXSGHTCUUMLFJOQWRGDZTO");
    msg.goal_xml.assign("AXFEZTMWGSDRUTXOHVZUIBZSPGCTXOYTJLUDZVCKZQACLRFOJDSTBGIFPZKMYJLHCMLKHMUPMWTYQUDCELEUEUVIPECWHOWYGDMYANLDYLLXXOKBYRWEVCVZWNUBQWRAFFAYHKNNEOQWERSKHGHAOSIHXKAFQCVDSPJXQNSMIWLJRJIJVOBIVBNZKGRXDPSHBEHGXCPVQOBAGSUTIFXTAAPQ");

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
    msg.setTimeStamp(0.34268368746676214);
    msg.setSource(56070U);
    msg.setSourceEntity(12U);
    msg.setDestination(48747U);
    msg.setDestinationEntity(138U);
    msg.command = 128U;
    msg.goal_id.assign("MQUTDFEAKTWEGLXYSCRJPSWJYQMDUIFAPHRCGDSZELBFMGE");
    msg.goal_xml.assign("NCBPULMSWEWROSGJEXYSIAZBIDBMKWKCSTJHATFTZ");

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
    msg.setTimeStamp(0.3679333111935412);
    msg.setSource(12840U);
    msg.setSourceEntity(185U);
    msg.setDestination(25822U);
    msg.setDestinationEntity(114U);
    msg.command = 198U;
    msg.goal_id.assign("PBOCVRGOKFHQGMBGYXCPWVSAFBXSJJQEWKFPECWNPYJOXTZUXYCNAPGZFOZTSIFDWAWZXMZMMEIQCHIVRNEHPKTYGMLRSSSSHANKNZDZGKPTJWBKHEBURTMAKQNYZWXEPKOEYTJONYZLFPBFUR");
    msg.goal_xml.assign("JAKERZBLWLQETHZPOIUAOHNOKNLWZIUHPMNFNCOSAJSDTUVTWCRJFUURXYZVIMTWDCYNVJSGWICPHRSECMGGHFYNQIGPETARJDBSVPCJLIMGLPKLQDVXTZFSFWGJO");

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
    msg.setTimeStamp(0.25839084293767833);
    msg.setSource(21422U);
    msg.setSourceEntity(213U);
    msg.setDestination(54142U);
    msg.setDestinationEntity(174U);
    msg.op = 183U;
    msg.goal_id.assign("FDEXVHSHIYKTASQMHZIQVKRIGUREAMOMLISPZTHNIQKJCZFNGYNTTSUGZRHUBKYOMBPTMGFOOWGBHOAFNUVZYNAFPSFBXJMLTVBEDZWKZZYBCBYDMVRNRWLXWUJXIORUYQSLTXQPSHUWAKDSREQVLOQPAOYAVECLJUXDZPXDRHIQWPREGECEIWNDRQLPKENWWVSTBPGDSYKDDGCQTCUNLVHWUMXLFLITJJFZHXKNKGCABAV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FFUQZRKDCTIVDDUGDTZODCPLORKAAQVCIBUTOVIAYYWENMEDOJTPUQWVBPYWAWFADLRIEJPLFQLXIOUGKZSHYGFBWREUJDBVCZMCIFQETUSELKJYKEN");
    tmp_msg_0.predicate.assign("FKDEPFVFYKOZBGMFHVWJYKOBVYOPAYYWWDSHEMGADCVUETTQABSVLHHUXFURNXGYQHNMALSQWEUFRIXHHELQBRIBZHOVVFAWUPAGDMQIOILRJZCKXHDFBQSXZWOCXMTLADKMZZQZTUJYNYAQPZMCPRVRIBNILXJPOEICRYIPCEENLNELWKDOICDPGAKLUOC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CDCGPXGMGMGNEBWXFAZOBIVTONFWDTRMDSLJUBTDQJTNYBUIDAAECEVQIMIVOQ");
    tmp_tmp_msg_0_0.attr_type = 191U;
    tmp_tmp_msg_0_0.min.assign("EQMZRMUPEAGFVWQUYEZVUMRTZOHLXODDFGSFLJIAHQDOJITJIKYETKCCGCIGKNZNNJHC");
    tmp_tmp_msg_0_0.max.assign("GGLMUJNGOSRBPSEHMGQYRPOJXQJVZVMYUMCPBFEEHIUVRXYTWQGTBKEJXMLPCESNSAVJHWUMWUOXCQFZBSIDTZVFZWWGCQFYFKWPYKGS");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.734018514285682);
    msg.setSource(2166U);
    msg.setSourceEntity(52U);
    msg.setDestination(48755U);
    msg.setDestinationEntity(139U);
    msg.op = 184U;
    msg.goal_id.assign("SJBKWTPODRLKERZMXVMJFDDMGNJOZSVNRRKQJBPNJTKKPUWYTILIZICXNKFTZNPUOSSCCWQIFXKGFMHRSVAQGBAEDGNCRFBOLKTYFVEVLHBUQCBXSJLVLNVTZXVHKAAYILRCXXCDWGAFDGDXWRFAMGHGBHESBXABNIOUHQMYTYHHDOUNCJYQVSZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XUWFGVVODCHWLXJSRNGUQELGCCNEPFZITBHBQTKLLDOEGFSHANSYTVSYBWUMPPWXSZXYLEAKMBZSHVSJIMIEZNIQVLNLPPJAFFBNPWYTHMILBTIXWCERJIUKVYRYZAOWUGEQKUHXRARKHQEVRJCOYJWYMVGKFHQEXPLQFUBITDJTNXSCOPMOFNOPMWCBRRXIKAQDPAELUGRQZHIVSSRKNTAJFCMWDXGHOKONATTOGZZMUMVD");
    tmp_msg_0.predicate.assign("DZZMUSXTNVSYXEVNCLZFBZEOLETSPSYVLITLHKTQRXXARJXOHIAORBJFMXSMFZV");
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
    msg.setTimeStamp(0.12317168261874378);
    msg.setSource(2881U);
    msg.setSourceEntity(36U);
    msg.setDestination(7729U);
    msg.setDestinationEntity(249U);
    msg.op = 8U;
    msg.goal_id.assign("BXNTPRRNCSRQOTDAETPXYNQIEOOOBUHYLVRMUNVORWXCJYXKXEUYJWPUSGIRBLLSGXOKABCQGJYVVKIDFMGWLEIIJTDHHKCDMOTRLZDVBFSQNYFVPZHWQOCZICBZNJWQLFHPSKBPJALYHFWFHSCXTFTLVSGAAAAWGEWNXSPJGFZUPYAMUKNGHHWXIQLSPMVCRMEEFDIRAJXRME");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VGYWLTLWDNXDRNKYHXKTMEJOIZEYEHSATMNMDIIETVVFUTJLIKAGJOOLAXRHSAZMPCVVOGRLWAKBYPQRBONQUYRWGPWSXQOJEMECHWGGSNTLRQGDFPKXFEIOKHZLGFFHYJELJCRB");
    tmp_msg_0.predicate.assign("QFDHEVTEVZUVIZUXNDUPDYAAYHSITKMZPFHXKGEWDMCBAZLPIGBUFOJKXHKVLROSHOGRLVIKYSXCXAHKNHUSMLLTQHMNZPWL");
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
    msg.setTimeStamp(0.7354051516695171);
    msg.setSource(27076U);
    msg.setSourceEntity(148U);
    msg.setDestination(50195U);
    msg.setDestinationEntity(51U);
    msg.name.assign("PDZTSDSJLTW");
    msg.attr_type = 219U;
    msg.min.assign("OVRBAHLKSTXABCRWJMR");
    msg.max.assign("ILSEDSCILBOHMXUYFPOJZIQRNNQAUNIBPQFZKJKNVTFRBLRWXOHHOTCUBEYFCTUYCXYXURMHORVVGPHFAUHFKWNLMTZYXATPB");

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
    msg.setTimeStamp(0.4381040802090792);
    msg.setSource(9478U);
    msg.setSourceEntity(134U);
    msg.setDestination(55261U);
    msg.setDestinationEntity(39U);
    msg.name.assign("FJNKJQVBAOTUOGTBYNYEPTVICKWRRXVDTXRCIIAPQDMPJSXELCBNAUVIYFZ");
    msg.attr_type = 71U;
    msg.min.assign("IADPMARDQKOQKRJAISAURFJCUSLVJOVGKDPHXIRRZGDYAJOUZM");
    msg.max.assign("BOKIPRQXGBCINISCVDNRLPWDCEDPIAFGJNGLZFBHGEHDZUFAYTYJTXLV");

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
    msg.setTimeStamp(0.4283721497662357);
    msg.setSource(34018U);
    msg.setSourceEntity(201U);
    msg.setDestination(64042U);
    msg.setDestinationEntity(181U);
    msg.name.assign("KYQCYNPKZYPXKJIIQOWUCQZROQJEVRJMSXEHFLXSGAOVUQBLZGSJZEPIFJWCIDQGKQGZTDFLKHUJUHDBBYIAAFYQALTWGKD");
    msg.attr_type = 50U;
    msg.min.assign("IQKHIQUZKGJGFHAIPOYUHGLPFFUCSOWUSMAEMCISOHQXCUKWHGJSWRPJELBWCLMXNAGCNBKDPSRDHTCZYBOQJCEXYKZOTETQDUMPZPGEXNQSZWZTIVLOIPRNTGXLAVLCOELPQZWJKWHYIUFAWTRSJKJXGHRRFRVTBNMZAJN");
    msg.max.assign("YEZYQBQFDIJPZCFATBVCGEGAPXRNMCCNWENPOMLDFNLWT");

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
    msg.setTimeStamp(0.6287665821391805);
    msg.setSource(61416U);
    msg.setSourceEntity(45U);
    msg.setDestination(48451U);
    msg.setDestinationEntity(229U);
    msg.timeline.assign("FAPOWZPRNJXDQVEESSKBUCMCPMGIKOJRIKUZJJFOINSJYAXSSYGMGGKZCFBMBHDIYLNPXFCWZVRLCKRPBUFITDUXOAONZKVWMSOPRNWVZAXQAEASXJHGIWISISRBYLTLFQTTOBVHUDUEXZCAJK");
    msg.predicate.assign("WODXXEHEZRUIFPWCJOVDISMFALRMANGTOHLBFOZCVAUFKYKJDAQEZDZCOBPVJPVSOFWYYTGHKKQBGBPERZGWFFYELFXBTMTJER");

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
    msg.setTimeStamp(0.20036281547133128);
    msg.setSource(27869U);
    msg.setSourceEntity(209U);
    msg.setDestination(9158U);
    msg.setDestinationEntity(120U);
    msg.timeline.assign("RMWZNPIBHSHGNOASZKUMFISRURCPWYXGKZYKSRDUX");
    msg.predicate.assign("OESJQQSPFBGHZNWMZPYDETBWRVWNCURMLNRICHANRARZDXIHUNJICKSPQMZUBVWMW");

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
    msg.setTimeStamp(0.05663855193658485);
    msg.setSource(3627U);
    msg.setSourceEntity(84U);
    msg.setDestination(35888U);
    msg.setDestinationEntity(1U);
    msg.timeline.assign("TBLVOHAHMBKSZZIQMGIOALLHNSTUECXORGVBWYMNJRHTFAODGTSSKEYBOCENCJFZZPRFZBXCJQNEKFCBGSZOPGSKXXXZWCFDWDYRNHCPSIMIVHJKZIDXXCQDIJNODKGYAPOETDAUBTYCDANUPWWHNVKVQPHHYRMFUEVLZ");
    msg.predicate.assign("GXWAMBVOMBUWWJAZJNAVMZNUHKVTSNROKCZIRWQEPKWOARGWCEVXJXFQBFYNXTBBLBYSGSQFHJOLOJAWSINQAALQZYWTKGQVCHZRWPTKDDKRXGFMZDGCEEYRKIFSXNDPYFJFODYKUAJME");

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
    msg.setTimeStamp(0.18965051941127387);
    msg.setSource(48551U);
    msg.setSourceEntity(230U);
    msg.setDestination(29934U);
    msg.setDestinationEntity(165U);
    msg.reactor.assign("YIXFGZUBSDJJKVSWLSTCIKRNJJYMVPVLAVKZZRTNFGQYRQCBETEBBJQEPGMAAYWGWLTJIRGWFVHPWNPUFXLFZYTTIKUOIBVDKDUTQGJWMAQQQHLLVOISBYDKZOJUBUEGYFYATHPWMCSFXRCRRDMOADNL");

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
    msg.setTimeStamp(0.21640525991555493);
    msg.setSource(17284U);
    msg.setSourceEntity(254U);
    msg.setDestination(49319U);
    msg.setDestinationEntity(221U);
    msg.reactor.assign("LTNTQPQQJDWZQPYAPGXSWCHMSIXJFHMEDFBZFCZVCRNFOSCTJWVVNBZYEJDDGXKXMQWVMVIKLWDSEELKKBUFTMHIOVXBLHVAASCYXKIZCOGAHGHEWUFJCAFGPRFJBGNREEAQYUQGRDUXSOUYZQKRSLTQDCNBSQUVNZRMWWANSINMJMZPSGHHPBXKUHXAPULEOLTWYKYOPJKABIYZBUTNDJLROJD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SPFVNSRPJKSJARYUGQWZQBQYDDUCLRSBEFKLPDOTOMJOMQCNYJDBOPLSHVCV");
    tmp_msg_0.predicate.assign("MWYOEHVVDPTCAMRRFBUXKDESXPLDCERPBPLKAFGIZNYQDKNLTJZPSYUHIZXMIZFCWTQLTGVLDIERYHBDTUGFSROYIJVGMVCRUVQJIOGFRDFSS");
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
    msg.setTimeStamp(0.8810306862826329);
    msg.setSource(61445U);
    msg.setSourceEntity(13U);
    msg.setDestination(40569U);
    msg.setDestinationEntity(171U);
    msg.reactor.assign("OSOFPZWGETGJIZFLUESXORAJEQIXIVMEQWRLHHEVMFAQFCPBKOAWSYNRVKQGEFXOTITPSRTDANFWGZEMVZTCHUWCSYHPNWEBCYEJUCBKQYAWKFSZYNYSHB");

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
    msg.setTimeStamp(0.8229494488524784);
    msg.setSource(40946U);
    msg.setSourceEntity(111U);
    msg.setDestination(19698U);
    msg.setDestinationEntity(241U);
    msg.topic.assign("ABGNLTUMZSZMLRHYJQNWJOVZLYPUFKGKPXIINJMWDYOEMHCTPXUYVSPNLQZK");
    msg.data.assign("RXHCSKELHLJJBKZYOSRTZIVNNROAFXTDXKGUDGVDKJWAZKVMJPEOIZRNQJUNOYGQFKBKEANULHFSFJNLWPMKTIVVPEDACEGRYMUO");

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
    msg.setTimeStamp(0.6693422973616544);
    msg.setSource(2179U);
    msg.setSourceEntity(108U);
    msg.setDestination(26598U);
    msg.setDestinationEntity(119U);
    msg.topic.assign("NDIDDMGRNQKPUHTAEBATLAQQZDOFPFKJWTHCHDBEGAJLAAWCNKECHLAOGCIMWENOGBJMRZYHKRCVTWSMOLIXVYDKEFQIIKVSJUW");
    msg.data.assign("RSTIYRURKQFTJXZVBZARXVPNKMWICETJKWORLHXXYCLPWHVVPAJIBQADNRLAWUXIRMEOEOFDAISAGWXGFWYZTSGMPZDHCBOTHFLUCRFAUQSMVQJWGMLHCNMUCBEDFVBPOBZQGTXGYEHMBURYPOOGKHAUWJALHLHNGVIHBWDJUTPZSXSQOMR");

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
    msg.setTimeStamp(0.2489138379227661);
    msg.setSource(24229U);
    msg.setSourceEntity(19U);
    msg.setDestination(31703U);
    msg.setDestinationEntity(206U);
    msg.topic.assign("VEHPVZNIVMEKESWCISQXMBU");
    msg.data.assign("CGHXQWJVMPIWNNLESCPUZTPRFICNNHI");

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
    msg.setTimeStamp(0.9320579293855195);
    msg.setSource(52669U);
    msg.setSourceEntity(77U);
    msg.setDestination(16051U);
    msg.setDestinationEntity(99U);
    msg.frameid = 142U;
    const char tmp_msg_0[] = {-67, 28, -100, -81, -35, 119, -6, -24, 26, -68, -19, 115, 41, 64, -108, -37, 81, 78, 57, 45, -128, 101, -104, 23, -96, 92, 29, -54, -8, -39, -38, -12, -95, 80, -48, -45, 55, -92, -108, -29, 81, -24, -25, 118, 75, 25, 11, 115, -105, 36, 116, 110, 125, -63, 104, -1, 62, -112, -54, -109, -14, -82, -37, 78, -67, 117, -39, -27, -3, -51, -44, -64, 85, 109, 42, 6, 32, -63, 10, -94, -19, -92, 80, -108, 126, 75, 124, 16, 26, -20, 119, -124, -11, -10, -122, -80, -43, -78, -45, 112, 16, 16, -46, -103, 17, 91, 0, 22, 111, 10, -18, 7, 96, 1, 11, -28, 98, 62, 21, 12, -56, 61, -90, 105, 122, 60, -78, -54, -89, 92, -69, -126, -97, -44, 75, 45, 34, -116, 20, 95, 53, -100, 99, 117, 108, -5, 60, -109, 1, 64, 76, 3, 98, -101, -78, -13, -50, -38, 54, -32, 8, 37, -66, -75, -118, -42, -79, -89, 118, 104, -7, -96, 33, -111, -33, -79, 50, -118, 117, 23};
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
    msg.setTimeStamp(0.09203418736395685);
    msg.setSource(64018U);
    msg.setSourceEntity(68U);
    msg.setDestination(45050U);
    msg.setDestinationEntity(13U);
    msg.frameid = 113U;
    const char tmp_msg_0[] = {78, -47, -14, -21, -62, -117, -10, 12, 28, -15, -117, -30, -49, 100, 109, 8, 29, 58, 64, -16, 3, 103, -80, -19, 99, -5, -117, -41, -34, -85, 1, -106, -49, -122, -91, 115, -18, 24, 110, 98, -51, 51, 26, -34, 31, 9, -53, -78, 116, 67, 89, -35, 17, 89, -59, -10, 81, -16, 122, 58, -82, -3, 1, 68, -116, -115, 42, 48, 63, -35, 17, -98, 0, 4, -88, -100, 117, 78, -50};
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
    msg.setTimeStamp(0.9047171943402937);
    msg.setSource(58176U);
    msg.setSourceEntity(101U);
    msg.setDestination(29615U);
    msg.setDestinationEntity(58U);
    msg.frameid = 36U;
    const char tmp_msg_0[] = {91, 67, -23, 60, 43, 77, -58, 52, -33, -114, 15, 16, -73, 48, 33, 41, 53, 22, -120, 36, -43, -20, 45, 95, -52, -66, -61, 91, 114, 2, -122, -35, 54, 38, -15, 111, -117, -57, 15, 44, -83, 60, 104, -78, 55, -5, 70, -75, 67, 122, -28, -61, -15, -109, -38, -9, -85, -22, -48, -43, -19, 75, -19, 5, 41, -6, -4, -118, 47, -60, 56, 110};
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
    msg.setTimeStamp(0.8964300027582417);
    msg.setSource(14065U);
    msg.setSourceEntity(199U);
    msg.setDestination(59487U);
    msg.setDestinationEntity(167U);
    msg.fps = 79U;
    msg.quality = 83U;
    msg.reps = 1U;
    msg.tsize = 111U;

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
    msg.setTimeStamp(0.5660600327020487);
    msg.setSource(21740U);
    msg.setSourceEntity(64U);
    msg.setDestination(44395U);
    msg.setDestinationEntity(217U);
    msg.fps = 51U;
    msg.quality = 211U;
    msg.reps = 71U;
    msg.tsize = 45U;

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
    msg.setTimeStamp(0.4844021850327943);
    msg.setSource(51133U);
    msg.setSourceEntity(192U);
    msg.setDestination(63673U);
    msg.setDestinationEntity(108U);
    msg.fps = 108U;
    msg.quality = 195U;
    msg.reps = 172U;
    msg.tsize = 204U;

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
    msg.setTimeStamp(0.9591581099139352);
    msg.setSource(57453U);
    msg.setSourceEntity(139U);
    msg.setDestination(7282U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.4800654321132699;
    msg.lon = 0.6437854640529408;
    msg.depth = 124U;
    msg.speed = 0.09615116922458822;
    msg.psi = 0.8054026226744052;

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
    msg.setTimeStamp(0.45966897234765414);
    msg.setSource(43771U);
    msg.setSourceEntity(244U);
    msg.setDestination(9434U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.43810003961867405;
    msg.lon = 0.020194213839134112;
    msg.depth = 19U;
    msg.speed = 0.30656126975421083;
    msg.psi = 0.5896532107405419;

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
    msg.setTimeStamp(0.07282557546095292);
    msg.setSource(28818U);
    msg.setSourceEntity(218U);
    msg.setDestination(61842U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.8398946419885736;
    msg.lon = 0.6432665696804505;
    msg.depth = 112U;
    msg.speed = 0.26837607853139134;
    msg.psi = 0.23992519770370457;

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
    msg.setTimeStamp(0.8042170756249652);
    msg.setSource(14803U);
    msg.setSourceEntity(174U);
    msg.setDestination(42625U);
    msg.setDestinationEntity(127U);
    msg.label.assign("UEEDSDSBKAENEZEVGLLTNDAZBWVKSHFCJHTKOBMQMVZTDBRFNHGSYHGVAJFRULTWUTNXWBQDPQVUFICJCOJUYLFNJTCGSTPVWCRCLNEWPSHXCMMZHTAIKLOYNMYLJJPVZPXFLPBCQEQZUZRZCVATKGXNIQMKKGQNOKVFDWZHDAMUIXYBHDIKEFQKIQVTDUGXARSOPYMGUOJIAOOJNSIYARBPYWFXRFHEBRGJLAMPWXIRWULE");
    msg.lat = 0.8335205149663814;
    msg.lon = 0.1324403018835687;
    msg.z = 0.9250306398172511;
    msg.z_units = 15U;
    msg.cog = 0.2524659977615672;
    msg.sog = 0.8465321992412137;

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
    msg.setTimeStamp(0.9192041267265223);
    msg.setSource(5349U);
    msg.setSourceEntity(72U);
    msg.setDestination(11800U);
    msg.setDestinationEntity(218U);
    msg.label.assign("DLXQZNASQDSHQBLYKNMTWTXHYPDHTSVENUOGWFPUPVMSJSTZWPCRZLTJZGQVFJKBXRFFXZICRIYFOFXCXIXRVMZPWGGSVWUKEDDWVFVPZVTJRLBEGTHHAIPJDCBHCMRIEQZSZJIUBCNMGKCUASARKWGSJLUBTNFOONKPMCNQDYLJWJVUVYDBRXBPEUFWYAQIARGQOYENKYAMCKTEAEQUWOLIMLBHAONXOXJDOK");
    msg.lat = 0.42337142714265763;
    msg.lon = 0.3376726614957113;
    msg.z = 0.7707175786098291;
    msg.z_units = 67U;
    msg.cog = 0.36133875451056585;
    msg.sog = 0.32879364571838354;

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
    msg.setTimeStamp(0.4817199840014944);
    msg.setSource(28719U);
    msg.setSourceEntity(251U);
    msg.setDestination(6083U);
    msg.setDestinationEntity(251U);
    msg.label.assign("TAMZQVXSSXOZLTAVWRRHHFUEFRQONMCARLEOFNZBCWEETLWKJKCHQWZXBPGNNFKKUNZJNRAANVYOPUQRCJVPPNPXCKUDOBBKOHLBMRCPGHAAHVLDJHTBKYAXWEKGVBGIYTJJ");
    msg.lat = 0.032691823948648224;
    msg.lon = 0.643730786808666;
    msg.z = 0.233395513864057;
    msg.z_units = 122U;
    msg.cog = 0.8309747431331728;
    msg.sog = 0.39825958686691953;

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
    msg.setTimeStamp(0.17471922932825323);
    msg.setSource(16770U);
    msg.setSourceEntity(241U);
    msg.setDestination(11239U);
    msg.setDestinationEntity(219U);
    msg.name.assign("FQKDZWVXUGKDAGRMEAQMAQZORNIZQHBFEZI");
    msg.value.assign("NZQJEYDGMRRWTXSCCXYUFQMWYEKAWASHFTPRNHMTPAWCEWVKIOOVXHEFVSDBGYYBIDLILBULDTDOJPVU");

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
    msg.setTimeStamp(0.9021431651786147);
    msg.setSource(41998U);
    msg.setSourceEntity(98U);
    msg.setDestination(34162U);
    msg.setDestinationEntity(145U);
    msg.name.assign("PDNRGYJCGOILLHTZNKTOMBDDXZOMTRKZKFGDIQJIYEPBYLDZFQHJEIFEECMSENUFJTPNXCIXCADBRJSOQZTQVDHUKHCHRMDPVLVMGYXYJGZPKPLVYWEOAQESQRAZCAMVSPTWHWWIZAGTSQOXLCPBFNAALUCERVYMKKMVNCWMSJONSJHLVTQXWIYLHJRUJXX");
    msg.value.assign("DAQLUQBXLPEDZASXDCWHIXXLEUXLPROYMDNPKKHEZOMVRHJUEFFMPZDAFCGZZYTUJUSFHGWQARSFPAYTSQKMUDGMWMDEVGLKYREJTVAKGD");

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
    msg.setTimeStamp(0.09108679343386805);
    msg.setSource(17861U);
    msg.setSourceEntity(50U);
    msg.setDestination(2556U);
    msg.setDestinationEntity(106U);
    msg.name.assign("NQDUKKWIVYDADKSLRAWLNJDOLHEPNWVYUPBERKFCQPPUETMTARLYBYLUTIZUCRGGHKULGHQEBWSYRHRCLASIUFOJZLBPCDVMDIJYTDFIPONUDECGPAKGGSBTAZVDXKNVHJCJMQBNXOIESTJBSNAODVRGXXEWRF");
    msg.value.assign("MDIJMNHLLTZOSTQQNINLUGUPWXEVYXVNYQNHXEACPQZXRAOSGZFNJSSDTFPFMXZSGULEEQLGJBWUEVJICZYVWLTRVTCWADDIWXJOWWMDVLWKSNIFHEHJZIOKIFJAATBSWKHGKPLPETADEVBVIPTOMBDBYHMTQCFKIJRHXR");

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
    msg.setTimeStamp(0.802889256384539);
    msg.setSource(8101U);
    msg.setSourceEntity(107U);
    msg.setDestination(25525U);
    msg.setDestinationEntity(186U);
    msg.name.assign("XBVGYMDQBIGOQDUSJUELWOJTWDLAZPNLCULCKQISZNFWJTDURMXSCAWBEIMVWGZYUANUSIJSMHEVPHESZGAFBPAJKIKOUOOVDWPYLGUZAFNFNYTAZHNDIHZFDYKCSIGTCXZAQOPQSTGJCHTCMRZGFYLYBHDCIGMMYEEDTTBQK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JLFLIFZGMCPCCNYTVLUYHYOBNKDWUVLPRXOAOQSLRQWHODBIMBKSY");
    tmp_msg_0.value.assign("WFAHTDSINQJBVVHAMDLVGPRBTXAGRMMGSQPXYLTDBAIRLHFOINYUARLMMKNKJGQWKIDCGCCQCYJKUDSGPTUVBNPOYCMNPECBEIEETUZQWFPDVCEYFTCHLMZGFROGATWISPBCIGFSLBUXJDVRSZLXHHBNUPLMAHLRIKIDZBDJVUQNFEAZEWYMZOVXJOJPKYKOEZQJBWVRSZFQNYJOQQKOLWZGRHTXUYRNU");
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
    msg.setTimeStamp(0.03596141994205815);
    msg.setSource(59305U);
    msg.setSourceEntity(209U);
    msg.setDestination(42315U);
    msg.setDestinationEntity(234U);
    msg.name.assign("GUHMSOEUVCSTJYHLDAFGVZXTKOCHEJCCAXESPZOTDCHIRPVTRIXYKVCKQBNZWZOGNADUXZQEKLFPBRW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SLFAKCBRBEDDLPURYXSYQJQLIQSNIDZETUHGTIHZOXDPAIWNWSTZLCESAHBQBHWGFGXQCVHQKAMTTMJYARBZKNMEKOZDSSNUMMFDCDFAFYEHKYUCXOEMBHOIYZHIOMMKJ");
    tmp_msg_0.value.assign("UQFSEEDUQXRUIOQMIVQNYADOBYLKXUMCPWLZYIGENJNNLGKIJKAYMDUHZMSIYSDEKSVMVNDUPKUMECHVLGWVHIDLFXJPFEWINRRXKOHOPZNQHPSQWJTCCKDOXRPWBR");
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
    msg.setTimeStamp(0.26425233858667274);
    msg.setSource(13807U);
    msg.setSourceEntity(163U);
    msg.setDestination(22626U);
    msg.setDestinationEntity(173U);
    msg.name.assign("GEWXQXLYKXPXNDVLDFOXKGSRU");

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
    msg.setTimeStamp(0.5649052104458184);
    msg.setSource(16698U);
    msg.setSourceEntity(7U);
    msg.setDestination(15312U);
    msg.setDestinationEntity(203U);
    msg.name.assign("LQLRINXXBIFOFWZURMSSJKTWHCWOIX");
    msg.visibility.assign("QTFHHOHVJWGBQ");
    msg.scope.assign("AJKIJOTDBSANEMXTRZSVWULMXMIGHAQKWUEXBGYJBXODCWZQOGPGZKMRZXEPWAMQPHSGTHTDJKNYXLNEWJPCZSRMIBFAOQSSSANDPNHMKBORYYSXWOQOLPLVGGTBDBLUYGAZJELYVFPZVXMFMDUSIWBKLRNUJHTLACNTDVLYRPIUUNYEZCKYWFDCHIIQV");

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
    msg.setTimeStamp(0.6202260281134955);
    msg.setSource(14035U);
    msg.setSourceEntity(174U);
    msg.setDestination(4468U);
    msg.setDestinationEntity(200U);
    msg.name.assign("EUBEBZWPDKEVYZXBKAWASZFGIWJETYOSWIMAMTCGWRDVPJTSGGTXRROCCMTRFJAVPCCMXSUZZNUODOLGWIDLYJDBFBXKVPGLPNIOXFZGJYOSMUWVXKUCYKHBZJFERRFNRLTMKPYYTTDIWDPRYUZWVLGIIQVHHKQCFYONLQHSGOU");
    msg.visibility.assign("SFQYMEDYJXLTQBPJSMALZVFNRMDKIGBKBLDJJIZJJOVMNWPSDMTHSVEFJTOSGHBYXSXKPNOXZWJWBVFRGQRLIATHVOUAXRSKGUDFIWQNICEGCAHZAOEYHBEMZGXLMSWYNYVPZDWCNLOLPUXZHFDXMME");
    msg.scope.assign("HYHEDXWIMFEKYFCVXVFKVCQFUJUHXBIANALQLMYIRICYVEBCJNJKBQERLCWOSVQUFHSVQKGPFXWGUIMBQJBIGTMOITCHQKIRBKSXRLMRJCPTGMDPDNSDCSTDPDXNQSTOQNHTZOKUE");

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
    msg.setTimeStamp(0.38918694124566433);
    msg.setSource(26631U);
    msg.setSourceEntity(211U);
    msg.setDestination(15619U);
    msg.setDestinationEntity(84U);
    msg.name.assign("IBJCEITHKQVYPEAOYLVUAMRBGIPNDAQLENLWEQSOVJGIBXBWRDSKWAHZXNVNSXBDOSLJQZWTRFPDTETZHCUSOHCDPKBLZEPDLAFMYJLCTYNEJCGWRLKLCMMOBPPWMZPWIUAYOKGFGYABSUOE");
    msg.visibility.assign("SQZUAMFJHNOLJNONBSODEMISHBRDABOQRZLDGPDAFUKFWHRGGSHVVNWQIFIUKOLDEXBCPSGMWEDVWGDWIUHBSHNQNXLITRTFTXKRVEYTKTQMYQT");
    msg.scope.assign("MKRSOQYRYDGVAJYMIYETZZVSCOCCYEILAXQMJJSEDFABOVQQWHYPQUSURLMUKNMXHNNWTVSMHGERRCLTUVQPDXIDRKBWXFBTDVKTWDGYXAIOATPXZGQUKHAKUVPATWCYIECFOKBRIMJHBWDTCNTWBLEXVLLFV");

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
    msg.setTimeStamp(0.9192105317783753);
    msg.setSource(25729U);
    msg.setSourceEntity(206U);
    msg.setDestination(64622U);
    msg.setDestinationEntity(250U);
    msg.name.assign("YOLQGIGIFTTKBZGGNEHJMXKFKIFVZWWZYGRVNTZZBHSFRQLEQGNANWXBMESSJABPATPUDODWNNWPCJDTYLBRVJCGETRKYQGMBQOARMAXEOEVCLWDNUSAGMCKPHUJWHUCARBZDIMVMCUVPASDYPWHPLZRJDOISYFLLPCRYKLUNYUMTQFJVJNUQRSCTXQXHMOSDWFHNYLUVKMXZXXEKIXEHFYTZFPZQQDBBCVEIIWVS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BHVAIRVDBCGQBKBTZTDCNUWDFPAUUDHRLWRXOKYWTFWRUTGNWQWKYDHJCKQVDSLUPPMXOOIFCZEGTQEZEOXTKSVJEOXLCYPJBEBNOBYDECSJKWJVKZMLJFAAIMONVXFJRKHPGMLAFCQYAGXECBNUPTVSLIQMRQYAOPSTFEZGHULRQTKDJAILMQLXUTOSBHEOYNGIYFGPPADSWFAZHINVZVMJXHYZBMCYIFGSGKPINUZRJNEMIHRDV");
    tmp_msg_0.value.assign("LQDOVWXCQZWURIVBFIIGRJBJVMIVCUNRINTKOKZLLWBDZDPECUPAKWJZTNBENUPWHDPUYGLSNUBHCJAFUQZEENZYFDILXJWDTVYJQMEQMKCKEMJLWFDSOEXCIACFPVHXWAQOLBOYOCXEZQTKTPYOMHEGXPASRIALYFUBSGMKWKSRNGZFXMIEFLDSHXHHYQXBBFNPHVSMNPKRHDZDIT");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8679292666794377);
    msg.setSource(7404U);
    msg.setSourceEntity(28U);
    msg.setDestination(59073U);
    msg.setDestinationEntity(73U);
    msg.name.assign("HKWBPNIQRRIFFXNBDNTLRZOGCHMNBUVLHJZYFSYKYARBKYURHPPNACCAGVAXEJGEGGTTDKEPXCONFPEIICSCQPNJDZL");

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
    msg.setTimeStamp(0.29251914226185427);
    msg.setSource(63189U);
    msg.setSourceEntity(188U);
    msg.setDestination(35527U);
    msg.setDestinationEntity(227U);
    msg.name.assign("UHIKXGSAPFMMJRERCOMSFAKGYBDTXRHDIGAPASRRQSHLPWFIXZNBCZNYHQTHUXVNQDLHNVAWJWKDDOAPNJPCNEQYU");

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
    msg.setTimeStamp(0.06331355910680381);
    msg.setSource(57601U);
    msg.setSourceEntity(54U);
    msg.setDestination(41360U);
    msg.setDestinationEntity(186U);
    msg.name.assign("JBBSNVPTLEOBIQIMLFRZOSTLBHTWYMJTNVQYYCZOQEWDZUQKUGUXLSJWBFNKUSQNOGFVLCIPMLRELHQBVCPMVNZLXPDUBO");

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
    msg.setTimeStamp(0.585640591098296);
    msg.setSource(17246U);
    msg.setSourceEntity(79U);
    msg.setDestination(13291U);
    msg.setDestinationEntity(105U);
    msg.name.assign("NBUWAVMXJJTICIXSQSSODFCLIEDVUYCHCIGCDBUJPDKEYLZAGPYHRRFZTMTSHUOKJVGFLVVSDNFXMXEQJKRRRXVFVNBYZPMOZPQPEWTXOKYWDTQGNEHMFUOSQWDPGVKXJQTDGPCAKNOZGAIEYKTLCACZUHGBLLYOZ");

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
    msg.setTimeStamp(0.03179291645496929);
    msg.setSource(35649U);
    msg.setSourceEntity(93U);
    msg.setDestination(52883U);
    msg.setDestinationEntity(233U);
    msg.name.assign("OXWFECUXGKNVYWBWLDYMXJ");

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
    msg.setTimeStamp(0.6072911384083195);
    msg.setSource(23727U);
    msg.setSourceEntity(131U);
    msg.setDestination(41756U);
    msg.setDestinationEntity(121U);
    msg.timeout = 1251111141U;

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
    msg.setTimeStamp(0.6295441618790883);
    msg.setSource(37937U);
    msg.setSourceEntity(222U);
    msg.setDestination(10578U);
    msg.setDestinationEntity(81U);
    msg.timeout = 3320397960U;

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
    msg.setTimeStamp(0.9367002013921334);
    msg.setSource(6714U);
    msg.setSourceEntity(141U);
    msg.setDestination(11803U);
    msg.setDestinationEntity(241U);
    msg.timeout = 3236919168U;

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
    msg.setTimeStamp(0.22474012371454477);
    msg.setSource(21016U);
    msg.setSourceEntity(130U);
    msg.setDestination(57815U);
    msg.setDestinationEntity(224U);
    msg.sessid = 4031009888U;

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
    msg.setTimeStamp(0.2305443355167872);
    msg.setSource(55299U);
    msg.setSourceEntity(65U);
    msg.setDestination(41345U);
    msg.setDestinationEntity(87U);
    msg.sessid = 1758131890U;

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
    msg.setTimeStamp(0.4445766211154901);
    msg.setSource(6870U);
    msg.setSourceEntity(230U);
    msg.setDestination(28312U);
    msg.setDestinationEntity(117U);
    msg.sessid = 645689097U;

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
    msg.setTimeStamp(0.07498233282973699);
    msg.setSource(26079U);
    msg.setSourceEntity(178U);
    msg.setDestination(3613U);
    msg.setDestinationEntity(145U);
    msg.sessid = 2570510497U;
    msg.messages.assign("QTHLJSITXOKMKGXWLMPPTBHULRGNTPLEPSXCCOZKTNDJNBJQNBUXBGAFMNGLKSJARGJVRQMOGAAORXCKIWGNIUWQNCVCUQWYHKOIBPJIXUXIQODYNKUEEHKTMZVFRUGYQZEUPSYLLAVHBDFYTDZKGGLWWIMYVAQODELJXFUTPRYSAEETCIBEMDAMILZFRCZDDCRFXSBHVZOOZSKERIHPVFNYYAFFOJJXVBQZZV");

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
    msg.setTimeStamp(0.30572783045220153);
    msg.setSource(56225U);
    msg.setSourceEntity(219U);
    msg.setDestination(31891U);
    msg.setDestinationEntity(52U);
    msg.sessid = 570086872U;
    msg.messages.assign("BLYDFFXXJVPOWHDZANQAXKGGOFVZYUOVIVIMVOUBXJISNZQOCHZTPGGTHUJMLPKPHBYPRTKHQSISJLKIBGJYCJWVFOMTZQNIBQPEFKGEACASJOTDAEZCWWFEFTLKMZSCPNMACEZMUQXLLXHULNNVKWHGNKSNEAQRICRIVUPYOQBMEMRYDUYHWVPHBCLXOUCCLQKVREMDTWARMJJDKWZRGEWRUFXJABDEQRFDSYNXHISBXRTNIDGOT");

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
    msg.setTimeStamp(0.36675562182370713);
    msg.setSource(18903U);
    msg.setSourceEntity(131U);
    msg.setDestination(750U);
    msg.setDestinationEntity(211U);
    msg.sessid = 1592598938U;
    msg.messages.assign("YPBFELOAQOMPFGUOHFWNJARLJIPUTAXGRZGDDVOTYJJMSHTBAQETCWFGCHKVVYDNCRUPSXKCMJPTMSNIOSJQKTVPMXMZXLDOZEUWENXMOEISNDIGYIXBJOAUPSZHYPQREKKYFITLIGWVRBDDZAFPENSRDHILQZBVJFBKQGIQHHYBLSHFVYKCLURAVBZUXHZUGFNYTTZKDHWRAFNDOEEEGNCVSWUVSOKCXMWCLKBZXQQWALRYQRNTCJJGMMLXP");

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
    msg.setTimeStamp(0.8269034948487523);
    msg.setSource(27648U);
    msg.setSourceEntity(113U);
    msg.setDestination(44845U);
    msg.setDestinationEntity(65U);
    msg.sessid = 3242289104U;

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
    msg.setTimeStamp(0.694595135889646);
    msg.setSource(40006U);
    msg.setSourceEntity(231U);
    msg.setDestination(42954U);
    msg.setDestinationEntity(65U);
    msg.sessid = 3978524577U;

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
    msg.setTimeStamp(0.1530886117150646);
    msg.setSource(21979U);
    msg.setSourceEntity(191U);
    msg.setDestination(3609U);
    msg.setDestinationEntity(206U);
    msg.sessid = 3596232239U;

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
    msg.setTimeStamp(0.10735602206273076);
    msg.setSource(17038U);
    msg.setSourceEntity(116U);
    msg.setDestination(52473U);
    msg.setDestinationEntity(243U);
    msg.sessid = 3553876954U;
    msg.status = 244U;

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
    msg.setTimeStamp(0.5743569623832133);
    msg.setSource(14065U);
    msg.setSourceEntity(130U);
    msg.setDestination(38956U);
    msg.setDestinationEntity(77U);
    msg.sessid = 3592102233U;
    msg.status = 221U;

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
    msg.setTimeStamp(0.20601848993068916);
    msg.setSource(39484U);
    msg.setSourceEntity(168U);
    msg.setDestination(13479U);
    msg.setDestinationEntity(10U);
    msg.sessid = 2635903384U;
    msg.status = 214U;

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
    msg.setTimeStamp(0.8133301042828743);
    msg.setSource(18917U);
    msg.setSourceEntity(41U);
    msg.setDestination(30603U);
    msg.setDestinationEntity(185U);
    msg.name.assign("UZSFUBABYABYYXIQOJTDZLCTJPLHPYISRBCHBGBTLGNRJEVQVRJIJDXGVLDNBSLBQGCGOPTASMYVQOPIOZVUBIFQMWYWDSHGDWAAUTSUTQMAZOHDAUXRPVWYMKDZSFKFTXHRKCOZHQSTRWLKEFJKWMEJZQPKNUBPEGNNAELLLWCRCZUDWNPXEFUOJJSIYKVDYYNVQHLIKWIMPFMZNRGXEUEMOCODMJTNXCIXXZOSGFCKRNQWHHR");

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
    msg.setTimeStamp(0.2588006532287538);
    msg.setSource(43157U);
    msg.setSourceEntity(79U);
    msg.setDestination(20338U);
    msg.setDestinationEntity(140U);
    msg.name.assign("XYDLZXKPIRDEQHQJTOPPNUXFGQCAMTAJVLFSLZIHTPSSPHJJDIVLRKQBLERZFKRYTLWVADWZKBRNVJDYGANHTTOUQGLDYKYCKJLJADITPSOVSRDYTMUOZUNGWXCNPZGEWEAQBJHEJBMHIYKSTLHURSEBFJIPWAOQMNMAIHQUHZGVYUTDNOQCNXAVVBUCGRFGEZWZMRMFDXOOQCS");

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
    msg.setTimeStamp(0.9411997882549826);
    msg.setSource(61315U);
    msg.setSourceEntity(79U);
    msg.setDestination(1329U);
    msg.setDestinationEntity(21U);
    msg.name.assign("TVTELKCATHGNUFYVKDKPSNPUDKFANLRMPWBCLKJVJXFJPRDINWWRAPMMBBJGJGRAPYDMHCQLRQNQUCOXLUEZVHVXZWEUBXRAYYCHBFCKSPGQBOIEGIFTQNGRURXOYQVBHQNSJWVNNZJO");

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
    msg.setTimeStamp(0.2533113560305045);
    msg.setSource(26366U);
    msg.setSourceEntity(187U);
    msg.setDestination(15699U);
    msg.setDestinationEntity(234U);
    msg.name.assign("BODFNQAIMLUNGCBLSVCYYFMQXJWUUCJKMBSQHSHQRZWDQRGTSRMO");

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
    msg.setTimeStamp(0.27595818612907175);
    msg.setSource(46321U);
    msg.setSourceEntity(103U);
    msg.setDestination(36987U);
    msg.setDestinationEntity(67U);
    msg.name.assign("SFGAPOSNDQXVNEWRYTUAQYCBSXRGWWQBFNYGCECVPAZLWYCOZJBWMGEKCMIRELIFMGSOBDLSOCYAZHTHXIDKUNPJRBKAZFIKQBZVWNRTOVZJAFIAIPR");

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
    msg.setTimeStamp(0.34589605504783527);
    msg.setSource(61543U);
    msg.setSourceEntity(51U);
    msg.setDestination(27621U);
    msg.setDestinationEntity(148U);
    msg.name.assign("HUUTKCWUUKNYLKLJXDFTPOCCT");

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
    msg.setTimeStamp(0.0229774831012739);
    msg.setSource(1136U);
    msg.setSourceEntity(50U);
    msg.setDestination(47253U);
    msg.setDestinationEntity(245U);
    msg.type = 31U;
    msg.error.assign("SEBQXCHSNZJEMUAYTMIZVAUBEYLGYEUFYQPPRIHOTSTVLVJDQAKPGRQZZGAKVKKZFDNTPQNHNQVPRXZOBOMZHFOTLVSBG");

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
    msg.setTimeStamp(0.9236956751758908);
    msg.setSource(9024U);
    msg.setSourceEntity(158U);
    msg.setDestination(53053U);
    msg.setDestinationEntity(30U);
    msg.type = 80U;
    msg.error.assign("FSSDHIVIZLTFUERQJQHSVXRMPFPAGJYCLHJCHURCELXXVOVZKLCKKEWQRX");

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
    msg.setTimeStamp(0.915709449893786);
    msg.setSource(13655U);
    msg.setSourceEntity(35U);
    msg.setDestination(15236U);
    msg.setDestinationEntity(131U);
    msg.type = 141U;
    msg.error.assign("TOBDJMKRQHLRTUXOPC");

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
    msg.setTimeStamp(0.6745940566872252);
    msg.setSource(32970U);
    msg.setSourceEntity(190U);
    msg.setDestination(63539U);
    msg.setDestinationEntity(33U);
    msg.seq = 29205U;
    msg.sys_dst.assign("NTXWNJWMZBHDIACGQUQYGXWFBUOWANTFGFQWEMUOVYZMKVKNZEYMQIQDQSLW");
    msg.flags = 64U;
    const char tmp_msg_0[] = {-75, 101, -107, -76, 10, 20, 0, -89, -123, 20, 25, -85, -71, 3, 13, 46, 20, 109, 93, -41, 100, 103, -113, -96, -2, -44, -106, 54, 2, -58, 86, -120, 7, 118, 59, 102, 65, -24, 97, -56, -29, -7, -97, 85, 25, 30, -63, -119, -12, 67, -86, -30, 63, -77, 110, 28, 91, -124, 14, 1, -128, 17, 76, -46, 69, 115, 98, -102, -64, -42, 100, -128, -118, -85, 30, -127, -88};
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
    msg.setTimeStamp(0.3948099314807447);
    msg.setSource(25129U);
    msg.setSourceEntity(102U);
    msg.setDestination(55232U);
    msg.setDestinationEntity(50U);
    msg.seq = 27356U;
    msg.sys_dst.assign("QRVARZZSNWICJZMTENAZUSXOEOJDLVGMWWGYUTQEJBBLDTHMREEKPYNQSFONZTDMTOOMQPMQLBHPKGUBHSVQAOFUACABKVFQKXLHIGWYFOYVAJEQGUGISVXZJXVYCH");
    msg.flags = 36U;
    const char tmp_msg_0[] = {-122, 74, 11, -72, -81, -38, 119, 123, 22, 42, -21, -42, 97, 20, -86, -34, 31, 78, 25, -106, -51, 2, 89, 32, 66, 59, -94, 9, 82, 4, -63, -104, 66, 21, 72, 39, 73, 38, 70, -26, 3, 121, 64, -22, -56, 47, 99, -3, -111, 50, -65, -12, 70, 27, -18, -58, -57, -55, -29, -82, 20, 30, -53, 110, 94, 110};
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
    msg.setTimeStamp(0.47387086225932706);
    msg.setSource(23438U);
    msg.setSourceEntity(233U);
    msg.setDestination(54899U);
    msg.setDestinationEntity(7U);
    msg.seq = 59360U;
    msg.sys_dst.assign("UGDQDNEOPLLHFHJGJOGWIAZVB");
    msg.flags = 208U;
    const char tmp_msg_0[] = {49, -17, 85, -89, 66, 102, -50, 29, 12, 98, -123, 55, -88, 69, 66, -113, -24, -81, -51, -82, -123, -2, -92, -21, 5, 94, -58, -9, 75, -30, 101, 97, -68, 1, -32, 20, 75, -71, -16, 0, -14, 36, 119, 66, -100, -66, -58, -58, 81, -48, -98, 115, -127, -58, -96, 89, 70, -69, 102, 56, -26, -32, -12, -82, -21, 74, 13, -94, 118, 23, 113, -101, 126, 70, -46, 83, 25, 92, 50, -82, -62, -77, 34, -65, 54, 21, 119, 28, -38, 106, 0, 71, -87, -100, -13};
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
    msg.setTimeStamp(0.564832012046395);
    msg.setSource(9207U);
    msg.setSourceEntity(216U);
    msg.setDestination(14198U);
    msg.setDestinationEntity(239U);
    msg.sys_src.assign("YZJPQQZBFNPLFICNERLTMCHNRICMHVKJYOEPTXVKQKGGZFKSIWXROYHUXPUMVXDVPLDNFTZAELJBQQZGGJIBNUDLMUSILLWWCSIPERLNRWPHRVDTEJBSCZMLJEZSHJUTWGSHASAFVSURQTABKBPFMVFYEIZETXYOIHUDICUOVYKYXAMTRSHAOEWFXDAQKMG");
    msg.sys_dst.assign("ICLAXRGWFQ");
    msg.flags = 108U;
    const char tmp_msg_0[] = {78, -114, 56, 71, 29, -18, -89, 32, -60, 100, -123, 109, 98};
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
    msg.setTimeStamp(0.016443943430200614);
    msg.setSource(46210U);
    msg.setSourceEntity(233U);
    msg.setDestination(60940U);
    msg.setDestinationEntity(80U);
    msg.sys_src.assign("YMIGEPUVAPGDNHKDDVKACRSCJQVFZFJEKTJCYMSFUBUJTZIWQKOFXULMCIQXEWISXONGVGTWRDWTYLXDOEZQRNNYYVWCQSR");
    msg.sys_dst.assign("GUPSZFVMVWLXMRKQZBKLTYEAPQAOONTIWLGYIJVRTQEHICDIWKODTWCBCNQULIPDYJKMQTQRJFYVQBOMBBRGEJSUUGHTMBATSYYDUEXPUJSGXSZCIDVVGLZTBNAHVPKHOLNNFJCPGFUDGRPRHCEYXAWPBZCYJNFSKIFFOCWEIXUNXUAKTZMNMXEATWARWZZQJLDEDKSMHOBVVRHXDGGKSZISINRO");
    msg.flags = 85U;
    const char tmp_msg_0[] = {82, 104, 118, 45, -91, -26, -72, -104, 75, -37, 62, -8, -24, -122, 12, 93, -113, -23, -34, -113, 50, -45, 5, 16, 90, 23, 80, 119, 5, 121, 63, -65, -45, 64, -121, 124, 119, 125, 57, 23, 24, 36, -71, 58, 61, 76, -83, -106, -93, -2, 52, -77, 87, 54, -37, 61, 14, 98, -119, 19, -108, 81, -50, 25, 71, -75, 31, -118};
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
    msg.setTimeStamp(0.411177753987806);
    msg.setSource(19883U);
    msg.setSourceEntity(117U);
    msg.setDestination(19553U);
    msg.setDestinationEntity(230U);
    msg.sys_src.assign("WDFGZMGIHJAMAPXSJZKKBKZUHUIASBXWOVUEMMJXUWQSWAORVYBPYJSRQRTSQCSNFXTXFHRKPUXIIUCQYOUTNLYVDTDCALFBMSTIPGMOUTGRERFDMESIMWEGPIBKJELZQHQFHLW");
    msg.sys_dst.assign("GGJAHKOPHYCFGQBEUJXRWPIUPCRVTNUMMZEDTKFVAYVHSGUGATSYKSZTCIHTWBMIRMIJENIZYRKZNXDFVWRLJLBJESXQLXPDZDCJWQTUBVCYDEEGHRFYUKYICXJPACQZBMEHYWEVWYJXSEFFOFXOUTAOFPVBNGQHLVOFOUAIXCKAWLBDTGPDSQBNMEUGQPZNBTFKKXZKCUWNDIHJAHOVQQCSWPMDLMNZLZVI");
    msg.flags = 235U;
    const char tmp_msg_0[] = {100, -62, 116, 53, 60, -114, -31, -107, 41, -8, -66, 117, 98, 36, -122, 44, -24, -110, -62, 124, 107, -73, -52, 88, -81, -22, -13, 90, 110, 103, -80, -62, -95, -108, -105, -97, -88, 71, -60, 25, -52, 23, 8, -29, 85, 116, 126, -121, 8, 106, -110, 37, 36, 15, -112, -26, 3, -89, -71, 113, 31, 89, 74, -85, -86, -17, -101, 17, -81, 66, -75, 86, 100, -69, 71, -114, 44, -75, 29, -10};
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
    msg.setTimeStamp(0.7699144595765773);
    msg.setSource(10580U);
    msg.setSourceEntity(133U);
    msg.setDestination(22182U);
    msg.setDestinationEntity(65U);
    msg.seq = 34144U;
    msg.value = 70U;
    msg.error.assign("NTCQKRGWBKPXHSFMPFEWBHAZLOYVGQACELZPKDOZUEIXZNPKSBSMPIKQMJWIJFBYFTXNLBTNMBYFYJZPTGVVZEDVOEIQUZSZDVTRZFSMVBGUTGUGFCSCNLIXULRORJLRPRVPQCWMDUXUZYDVGCHXN");

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
    msg.setTimeStamp(0.13830797843251452);
    msg.setSource(29720U);
    msg.setSourceEntity(26U);
    msg.setDestination(7220U);
    msg.setDestinationEntity(136U);
    msg.seq = 46628U;
    msg.value = 92U;
    msg.error.assign("FOCDYLOKWTGGAEDVAQKTNAZXFMYRRIJWPHIRSBTHFMWBFEYEZGNAPIWAEOSDNTWUGMKZEYEXQXJCWBGIRLSDCUISROYBCMKPXUSKPRHQPBZNTTPXVWIMHIJBLFUVDAUTKDLACDKFLCYQZNSSYZICQJVHCPJXYVQGOTWMPHUHZMX");

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
    msg.setTimeStamp(0.14874544385139765);
    msg.setSource(32073U);
    msg.setSourceEntity(245U);
    msg.setDestination(16384U);
    msg.setDestinationEntity(247U);
    msg.seq = 11883U;
    msg.value = 250U;
    msg.error.assign("TRCLXPRFCKTWCAOHOPZWGHXINZPHEWDZLIHCAIBOCSZUSALVIPQCXLBFGUHALLBEWSYAGZRETOHGBPGQIXBFFPEBUBYNONDTMEJQHKCGFJBMMOJJEYYMZTYHDRKAJFWDKTYSVYWQONIQUGLGXDNKEMJFSIPFCZAQXOMPVOPXBTRVVWNCQUZQDQRNSPYBVLQOXVSNYKRNLRJIUXVKMAUJUEIWNDUGMHKJHYJSZWEWGRDMFSXFA");

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
    msg.setTimeStamp(0.8486318801935739);
    msg.setSource(63544U);
    msg.setSourceEntity(72U);
    msg.setDestination(34039U);
    msg.setDestinationEntity(139U);
    msg.seq = 33063U;
    msg.sys.assign("XNYDDMZTBIRSHR");
    msg.value = 0.6072505041619709;

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
    msg.setTimeStamp(0.6873082714231926);
    msg.setSource(8219U);
    msg.setSourceEntity(94U);
    msg.setDestination(25270U);
    msg.setDestinationEntity(103U);
    msg.seq = 45494U;
    msg.sys.assign("LRLBMDIKBXRIJSFMUXUHMKLLLVPFOKIZLIRKMDVOSODUARTJAASQLFRMFXGNFFIPILBRFGHHRC");
    msg.value = 0.2455904302636841;

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
    msg.setTimeStamp(0.8036196591109046);
    msg.setSource(8311U);
    msg.setSourceEntity(236U);
    msg.setDestination(62533U);
    msg.setDestinationEntity(138U);
    msg.seq = 10669U;
    msg.sys.assign("FNFTEITTDULIIOJOTCCXUIXESBELCYGMUFCUIWQLVPEEMK");
    msg.value = 0.6936299734948281;

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
    msg.setTimeStamp(0.1911413245707937);
    msg.setSource(24526U);
    msg.setSourceEntity(61U);
    msg.setDestination(23438U);
    msg.setDestinationEntity(84U);
    msg.action = 216U;
    msg.longain = 0.9645019578559985;
    msg.latgain = 0.8485448426516676;
    msg.bondthick = 2193175979U;
    msg.leadgain = 0.3385153930390713;
    msg.deconflgain = 0.08707348991164421;

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
    msg.setTimeStamp(0.3143628233496881);
    msg.setSource(46227U);
    msg.setSourceEntity(109U);
    msg.setDestination(26220U);
    msg.setDestinationEntity(112U);
    msg.action = 9U;
    msg.longain = 0.11544113185659144;
    msg.latgain = 0.6098888484353848;
    msg.bondthick = 1661499334U;
    msg.leadgain = 0.7450000790082514;
    msg.deconflgain = 0.5733715777529927;

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
    msg.setTimeStamp(0.5604735503797562);
    msg.setSource(23264U);
    msg.setSourceEntity(24U);
    msg.setDestination(47208U);
    msg.setDestinationEntity(190U);
    msg.action = 205U;
    msg.longain = 0.5592916300425252;
    msg.latgain = 0.6738872320446012;
    msg.bondthick = 168316399U;
    msg.leadgain = 0.3605478721312064;
    msg.deconflgain = 0.802788233479252;

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
    msg.setTimeStamp(0.6700369079856594);
    msg.setSource(28090U);
    msg.setSourceEntity(193U);
    msg.setDestination(9664U);
    msg.setDestinationEntity(217U);
    msg.err_mean = 0.29339393727920937;
    msg.dist_min_abs = 0.6586244286599432;
    msg.dist_min_mean = 0.000621567296819725;

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
    msg.setTimeStamp(0.6784266483925534);
    msg.setSource(46738U);
    msg.setSourceEntity(238U);
    msg.setDestination(26745U);
    msg.setDestinationEntity(49U);
    msg.err_mean = 0.7752056678317936;
    msg.dist_min_abs = 0.13381147929238635;
    msg.dist_min_mean = 0.6006648110841613;

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
    msg.setTimeStamp(0.8557788343579307);
    msg.setSource(53491U);
    msg.setSourceEntity(245U);
    msg.setDestination(30487U);
    msg.setDestinationEntity(127U);
    msg.err_mean = 0.4820590682176392;
    msg.dist_min_abs = 0.14453426424333882;
    msg.dist_min_mean = 0.6137052371765745;

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
    msg.setTimeStamp(0.1516540461101874);
    msg.setSource(33059U);
    msg.setSourceEntity(70U);
    msg.setDestination(9227U);
    msg.setDestinationEntity(213U);
    msg.uid = 185U;
    msg.frag_number = 68U;
    msg.num_frags = 17U;
    const char tmp_msg_0[] = {-98, 27, 18, -61, -35, -94, 7, 19, -66, -83, -117, -109, 116, -80, 107, 94, 31, 58, 16, 16, 32, -78, 86, -18, -8, -108, 41, 35, 19, -106, 116, 68, 55, -8, 51, 6, -13, -124, -83, -62, 56};
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
    msg.setTimeStamp(0.02592724576159855);
    msg.setSource(48430U);
    msg.setSourceEntity(5U);
    msg.setDestination(58964U);
    msg.setDestinationEntity(193U);
    msg.uid = 21U;
    msg.frag_number = 103U;
    msg.num_frags = 76U;
    const char tmp_msg_0[] = {16, 30, 49, -31, 124, -91, 98, 102, 43, 2, 27, 20, 40, -10, -8, 104, -120, 71, -79, 3, -53, -60, 18, 104, -117, -53, -108, -96, -117, 75, -24, 69, -88, -18, -8, 110, 28, 35, 39, 108, -75, 120, 43, -126, 125, 70, -47, -24, 122, -69, 31, -44, 82, -2, 69, 24, 14, 61, -71, -40, -96, 114, 36, -64, 101, -60, 79, -69, 39, 88, -45, -89, 97, -57, -79, -39, -6, -10, -10, 101, -122, -92, 80, -74, -8, -80, 27, -113, -43, -91, -28, 24, 31, 110, -127, 6, 76, 88, 63, -110, 54, 52, 18, 25, 48, -40, -128, 29, 51, 61, 102, -128, -126, 92, -123, -46, 30, -98, 71, 75, -90, -111, 91, -20, -34, 77, 104, -95, -95, 46, -7, 7, 61, -94, 69, -43, 40, 105, -47, 54, -54, -105, 92, 7, 103, -11, 27, 111, 18, 12, 66, 101, 19, 25, 16, 119, 126, -5, 26, 95, -28, -104, 12, -119, 13, -87, 73, -9, 66, 101, -59, 49, 89, -33, 121, -90, 42, 94, -124, 79, -19, -68, 20, -70, -119, 32, 37};
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
    msg.setTimeStamp(0.8423051850379963);
    msg.setSource(29379U);
    msg.setSourceEntity(58U);
    msg.setDestination(27534U);
    msg.setDestinationEntity(9U);
    msg.uid = 174U;
    msg.frag_number = 17U;
    msg.num_frags = 63U;
    const char tmp_msg_0[] = {106, 59, 12, 98, 24, -118, -102, 71, -92, -120, -8, 101, 9, -80, 25, -88, 5, -122, -119, -28, -37, 79, 71, 40, -44, 104, -128, 88, -8, 94, -17, -2, -107, 28, 91, 74, 119, -3, -82, -108, -87, 14, 125, 25, 23, -30, 54, -65, 55, 69, -32, -17, -48, -39, 58, 46, 59, -89, 7, -61, 19, 73, -26, -83, 112, 46, 77, 10, 110, -104, -76, 33, -68, -85, 41, -14, 105, -21, 119, 35, -4, 104, 117, -57, 75, -29, 111, 67, 66, -50, -89, -52, -60, 96, 114, 92, 65, 106, 100, 11, 18, -115, -15, -32, -67, 105, 83, 20, 70, -108, -27, -38, 109, -69, -117, -78, -80, -94, 118, -8, -17, 76, -65, -50, 91, -81, 58, 25, -39, -21, -51, -127, -119, -45, 94, 60, 17, -18, 66, -104, 116, 83, 98, -77, 51, 98, -66, -63, 38, -44, 75, 111, -44, 126, 62, -64, -20, 53, -76, -60, 103, -48, 96, -17, 42, -31, 112, -76, -68, -60, 14, 66, -68, 108, 70, -110, 77, 98, -61, 116, 120, -90, 84, 66, -83, 70, -70, -10, 40, 100, -93, -123, -33};
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
    msg.setTimeStamp(0.04692412078373409);
    msg.setSource(45540U);
    msg.setSourceEntity(123U);
    msg.setDestination(12U);
    msg.setDestinationEntity(4U);
    msg.content_type.assign("VRSFFODGFWQKBOTMSEIUEXKVPSRIZGLXUPXENDCTUPXIIBWGIMBRIWVXAUGHJKKMAQLUXMRGJCMQALFVLNTCRPOVZFMKRDHJOUYOBPNEVLQEHDNKLURAYXIYFZCSKWWHZJLFSYWOZWQBHQJAUODOPKYEZACFLDSAUBMPFDRSPWZDYBJWAQPTERJITYLTTQFOJRHZNEGKACSSZNCBXA");
    const char tmp_msg_0[] = {93, 8, -23, 13, -118, -87, -25, -6, -19, 120, -93, 92, -15, 84, 53, 35, 122, -110, 44, 109, -119, 117, 62, -80, 76, -9, -11, 21, 34, 43, -56, -78, 88, -35, 66, -5, -58, -100, 40, -36, 46, 5, 67, -69, -67, 50, 114, -28, 73, -112, -50, 47, -27, 56, -61, -111, 112, -2, -87, -19, 49, 2, 101, -116, 0, 87, 58, -30, -14, 78, 64, 125, 74, 2, -33, 60, -68, 82, -44, 50, 42, -38, -60, -79, 22, -40, 18, -4, -100, 115, -81, -101, 111, -99, 10, 5, 81, 35, -27, -113, 117, 110, -82, 115, 38, -40, -108, 100, -56, -123, -7, -112, -77, -100, 87, 56, 111, -31, 82, 25, -41, -31, 116, 58, 19, -24, 67, -39, -20, 30, 47, -84, 104, 53, 25, -59, 123, -87, -75, -82, 8, 38, -108, 26, 112, 90, -20, 20, 73, -85, -116, 34, -125, 122, -66, -23, -89, 43, 9, 48, -36, 126, -113, -80, 35, -128, -112, -96, -21, 111, 35, -127, -8, -112, -50, 59, -23, -127, 94, 71, -22, -55, 83, -124, -84, 70, 55, 32, 81, -8};
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
    msg.setTimeStamp(0.11602099080838246);
    msg.setSource(553U);
    msg.setSourceEntity(42U);
    msg.setDestination(212U);
    msg.setDestinationEntity(104U);
    msg.content_type.assign("FRQEUXGDARCEMXAIXTWBZQLOFRABLVWSVVCHZKUNOFYBFIZMLXPWURCLDMOBERQFCFEYSTQFOVTOVLPBMZYFIWYHIEORXMDBQOPXJMTIGPSWVCMZDPWZGINFTQQJYRSDHSMOBHJE");
    const char tmp_msg_0[] = {106, 17, 80, 44, 109, -1, -123, -115, 60, 2, 61, -22, -24, 114, -53, 120, 15, 57, 109, -11, -3, -83, -95, -15, 10, 86, 16, 65, -66, 67, -121, 117, 31, 6, -21, -83, -88, -72, -33, -64, -27, -42, 0, -86, -97, -67, -81, -95, 2, -38, 68, 49, -107, 122, -36, -122, -99, 98, -128, 78, -74, 71, -104, 41, -32, 8, 25, 111, -37, -6, 2, 56, 1, 52, 37};
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
    msg.setTimeStamp(0.4356542064805261);
    msg.setSource(10150U);
    msg.setSourceEntity(163U);
    msg.setDestination(62201U);
    msg.setDestinationEntity(47U);
    msg.content_type.assign("ROTONHMTXEKEZMBSUHGRTFVJAKXINIYTAOYSIPQYOHQPPTWLBDBFREPUAAEYZYXSOSCZGLXUGUTHZJIZYFSKIAJQRCGVLBCIGYJESWQSTRLVDZVXJQQDNGCXQZQBDJKJFWXUKPZOUNGVUDMPJYCDGONAHBEWLCVFHIBUKMIETEMQFLCYMSRPHLMWFXUVENFDKZJKRIVPKCDUOTPSATFNRWSWGRBDXWPLNLLHIFAOXDWQVMAHYWZEKNMGJVC");
    const char tmp_msg_0[] = {53, -42, -31, 27, 35, -103, 109, -89, -90, 15, 28, -76, -29, 58, -44, 113, -39, 88, -34, -110, 16, -27, -90, -91, -16, 94, 36, -52, -27, -88, -74, -69, 12, 105, -48, -23, -58, 113, 121, 105, -76, 0, 119, 17, -52, 107, 107, -112, 29, -103, 86, 23, -20, 96, 84, -34, 126, 5, -48, 116, 49, 62, -3, -114, 110, 98, -81, -75, 105, -116, -64, -49, -109, -75, -92, -123, 123, -83, -64, -7, -119, 24, 58, 115, -103, -30, 17, 70, 22, -31, 86, 25};
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
    msg.setTimeStamp(0.44211216164585954);
    msg.setSource(22074U);
    msg.setSourceEntity(84U);
    msg.setDestination(50545U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.874811478550493);
    msg.setSource(56904U);
    msg.setSourceEntity(161U);
    msg.setDestination(30268U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.10410044961353682);
    msg.setSource(24429U);
    msg.setSourceEntity(198U);
    msg.setDestination(50910U);
    msg.setDestinationEntity(117U);

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

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.18313579834025095);
    msg.setSource(45997U);
    msg.setSourceEntity(68U);
    msg.setDestination(41532U);
    msg.setDestinationEntity(118U);
    msg.target = 38773U;
    msg.bearing = 0.5276841512964799;
    msg.elevation = 0.6319953344310623;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.6931708693427845);
    msg.setSource(59935U);
    msg.setSourceEntity(106U);
    msg.setDestination(26641U);
    msg.setDestinationEntity(160U);
    msg.target = 37619U;
    msg.bearing = 0.3187589200292653;
    msg.elevation = 0.4180194914926302;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.6389813851316578);
    msg.setSource(63363U);
    msg.setSourceEntity(109U);
    msg.setDestination(27359U);
    msg.setDestinationEntity(109U);
    msg.target = 49872U;
    msg.bearing = 0.8726916118555957;
    msg.elevation = 0.14923333163761532;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.5511546153199554);
    msg.setSource(26325U);
    msg.setSourceEntity(245U);
    msg.setDestination(42638U);
    msg.setDestinationEntity(60U);
    msg.target = 22312U;
    msg.x = 0.4933748237561729;
    msg.y = 0.8243660482884596;
    msg.z = 0.39901250409541356;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.8826781886428748);
    msg.setSource(45136U);
    msg.setSourceEntity(164U);
    msg.setDestination(60745U);
    msg.setDestinationEntity(221U);
    msg.target = 39321U;
    msg.x = 0.19784886931426804;
    msg.y = 0.44235085633265203;
    msg.z = 0.895858730046106;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.1457055629127253);
    msg.setSource(4401U);
    msg.setSourceEntity(131U);
    msg.setDestination(63544U);
    msg.setDestinationEntity(12U);
    msg.target = 13624U;
    msg.x = 0.7714454822012606;
    msg.y = 0.11914032453469747;
    msg.z = 0.7841519570473559;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.1972291022156687);
    msg.setSource(57226U);
    msg.setSourceEntity(41U);
    msg.setDestination(38599U);
    msg.setDestinationEntity(172U);
    msg.target = 41570U;
    msg.lat = 0.04416844224895533;
    msg.lon = 0.6596509937282296;
    msg.z_units = 61U;
    msg.z = 0.028733528202039893;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.7703080493960973);
    msg.setSource(62471U);
    msg.setSourceEntity(190U);
    msg.setDestination(169U);
    msg.setDestinationEntity(91U);
    msg.target = 28848U;
    msg.lat = 0.2662514496393449;
    msg.lon = 0.2885031020795392;
    msg.z_units = 211U;
    msg.z = 0.9175707561745254;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.31344752346936855);
    msg.setSource(58245U);
    msg.setSourceEntity(68U);
    msg.setDestination(15793U);
    msg.setDestinationEntity(31U);
    msg.target = 49408U;
    msg.lat = 0.6669147197151518;
    msg.lon = 0.4606454249819133;
    msg.z_units = 101U;
    msg.z = 0.6790557600365118;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
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
