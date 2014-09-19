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
// IMC XML MD5: 4ab0411c6256574a5ac1785347d0a9f2                            *
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
    msg.setTimeStamp(0.35961716274612054);
    msg.setSource(35379U);
    msg.setSourceEntity(140U);
    msg.setDestination(44901U);
    msg.setDestinationEntity(46U);
    msg.state = 230U;
    msg.flags = 187U;
    msg.description.assign("SFDSARYGHEDGVRSJYZXMEFZJKMXPCFSFXNOVXEQRVEOWKKTPVCOVVLHQMZEGMDTNUWEPDLWWMWJJUBLKJMBBHWWBTSU");

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
    msg.setTimeStamp(0.3600239363412351);
    msg.setSource(42418U);
    msg.setSourceEntity(217U);
    msg.setDestination(28587U);
    msg.setDestinationEntity(150U);
    msg.state = 193U;
    msg.flags = 143U;
    msg.description.assign("ZFAHUSKDVQYLOTNMLSCRDFNROWKWIOCKLHLOFPUKEOYPYYMVVTKXXIGGARGJQBDZGJBQIEXXJEXBLPZFUJDDJDSVYHUWPYQZRIEFJBIKQRAANAIZAUZGQTFUNJVEOLTOMBFOXUQITLHBNTTLMVDULCHGMJMDPZFBLGYHFXRURMKRPCAVSNBZSNI");

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
    msg.setTimeStamp(0.12319577502720236);
    msg.setSource(25943U);
    msg.setSourceEntity(188U);
    msg.setDestination(10907U);
    msg.setDestinationEntity(247U);
    msg.state = 55U;
    msg.flags = 82U;
    msg.description.assign("WGLDTGSFMKINZJILKZELORKYPCNTDPFKZCOLBVCUZPUFPGKOGQFFDJDCSWGXZRZPPNTAANIBKMVJJVIYPASOZBUIOPGOWTHRYQDVMJWIQOQBIOELRIYMZTJLXEBUYKLMRHVSSAQRBIOYAHKVUL");

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
    msg.setTimeStamp(0.41913108803448174);
    msg.setSource(7083U);
    msg.setSourceEntity(119U);
    msg.setDestination(62205U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.6518913115151037);
    msg.setSource(22988U);
    msg.setSourceEntity(121U);
    msg.setDestination(39629U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.718324253014389);
    msg.setSource(30059U);
    msg.setSourceEntity(175U);
    msg.setDestination(36804U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.2034146614346959);
    msg.setSource(10342U);
    msg.setSourceEntity(252U);
    msg.setDestination(23444U);
    msg.setDestinationEntity(2U);
    msg.id = 231U;
    msg.label.assign("FBTCGQCUUIJZXOPXNTUBQQOIACPIPAHEFFCIJZGOBVJRVORDUFCANKMYIALXXBDFSSRRKGYKFIDYBBPGNRMFUYJSUSCZLRYMNRKYTHEMKQIWXTUQVHXVAEDKKFJBFTRNOPOYHIFXHPCNSWPSTGBKCVMASZVJLHZUSCKWCGJODDDXOMMNNHMREVZVHQWEPTWTYTXUQB");
    msg.component.assign("ETWDYQKYIMACOFRIYNOBIIAYLCEASTPBJZBKYARQRMTSTDESTSCXECDSFXZTWJPHI");
    msg.act_time = 26075U;
    msg.deact_time = 18244U;

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
    msg.setTimeStamp(0.69190548613165);
    msg.setSource(17539U);
    msg.setSourceEntity(187U);
    msg.setDestination(61375U);
    msg.setDestinationEntity(224U);
    msg.id = 68U;
    msg.label.assign("UORKUODXRSYGPZXJCWBLTVLBPKEZEQPXIWIDJLCJGOIHDGFIRUPTOTHGVHJHAOBTJNJZYEQUNKNFUZPGHSQVWVZZMKPRQSYRXNFEYYFBMXLZUTVHXFINTIVLAKYLDWNUDJOZAHJSGYLDUXMBHQAIMZXUMCUYJCBMIHKCMAFQHEFWMWSTESQZDECPPQAVFBESKSSBGVFDVNCORKNGAWYIDWRQBLCEGAGTMWMRPTNOONJSQWOXEVCLRKACXF");
    msg.component.assign("EIQWMUGTMSLFIIPQGQFYARYWHPWMHVJBQPSRLRMZINENHZKFTP");
    msg.act_time = 22627U;
    msg.deact_time = 40546U;

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
    msg.setTimeStamp(0.3572240664216092);
    msg.setSource(7373U);
    msg.setSourceEntity(109U);
    msg.setDestination(35997U);
    msg.setDestinationEntity(77U);
    msg.id = 46U;
    msg.label.assign("LBWNVHOWBBEOCEWAVHMNJDYOFRPPQDTOWKEFPHZPMULBRBDEPLUKIBZNLCWSXOVNHFSZGTFDYXOKIBXVXNQWIEHQSFADGWOGDKHFQIFUNGASTSHLCYTJSOGZJP");
    msg.component.assign("VFBIXAVOVVHZVUKZBGYPBPFXESHIQFJZSSHGMWZLMXDVASJGRJYGCPB");
    msg.act_time = 35361U;
    msg.deact_time = 52599U;

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
    msg.setTimeStamp(0.7559919348155486);
    msg.setSource(32416U);
    msg.setSourceEntity(205U);
    msg.setDestination(62072U);
    msg.setDestinationEntity(91U);
    msg.id = 85U;

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
    msg.setTimeStamp(0.9237615717037717);
    msg.setSource(25860U);
    msg.setSourceEntity(40U);
    msg.setDestination(55424U);
    msg.setDestinationEntity(194U);
    msg.id = 211U;

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
    msg.setTimeStamp(0.15689648902438236);
    msg.setSource(9581U);
    msg.setSourceEntity(27U);
    msg.setDestination(8502U);
    msg.setDestinationEntity(142U);
    msg.id = 11U;

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
    msg.setTimeStamp(0.9427998182619364);
    msg.setSource(34958U);
    msg.setSourceEntity(218U);
    msg.setDestination(51491U);
    msg.setDestinationEntity(162U);
    msg.op = 161U;
    msg.list.assign("QPVMSNGVCFYMPWKVWCBKNPRRMVFNDANYTQAFGEOYIMDGPCLBWKPFDBMWBLEDGOJXGOLZEDFNRFHYHMXMSIZUADCZVBASKZIRTRJPSUTYUGUQHOWSBPEONXZQFLJMQGEFRTSAIYVZEYRXIWTLILISEUUVJCHXFCYZCLSDAALFLOXHLIUJAWKCRXOINNJNWJGSJDMVPXIOCVHHDKXVCEUTODK");

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
    msg.setTimeStamp(0.0981092089445712);
    msg.setSource(46345U);
    msg.setSourceEntity(211U);
    msg.setDestination(41360U);
    msg.setDestinationEntity(126U);
    msg.op = 248U;
    msg.list.assign("DMLVWSVBAFUYKXPKQBRYGSATVSOEKVHTJTJCTIVXVRWFVUSEQUDCLBAKXHZEOCHEWCAGFNAANASECOKWLWDKURJZCWWKSFXREZSOXZUXIOFMMPQAGXHOOJQQZVFBMHZLENZKYTWBYLAIDSDPDVEMOLXPTDGEHWLPNRTIMRVBMTEKYJLUTPJKMUGLGQLNUPINHPYIUNQCTC");

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
    msg.setTimeStamp(0.045574830092154794);
    msg.setSource(52444U);
    msg.setSourceEntity(138U);
    msg.setDestination(39753U);
    msg.setDestinationEntity(237U);
    msg.op = 29U;
    msg.list.assign("TSCOHPHKLFNXKRWLVZRUEKBMXEPTSTEFCGYMALRYQBCPSDYHGBBTRASWQXPHZQNPKMYWCHCNZKYOAJIYUCKCADRQFIZJCDCYLDZRFZRBOLIMLWGSMMMIFTBYDOQOJXOELWQNMJGIBXVSPNACGWZIHJHJWJALISKYAEUESADWZBQUGKUOKYPDFEUNEVTSHLJXXQVGIEPRGTOUSFXWDJPINFNLTUBHIJRVUNGNZQHZVT");

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
    msg.setTimeStamp(0.460085656151782);
    msg.setSource(32586U);
    msg.setSourceEntity(76U);
    msg.setDestination(40273U);
    msg.setDestinationEntity(173U);
    msg.value = 215U;

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
    msg.setTimeStamp(0.588974852857839);
    msg.setSource(37916U);
    msg.setSourceEntity(56U);
    msg.setDestination(17372U);
    msg.setDestinationEntity(107U);
    msg.value = 197U;

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
    msg.setTimeStamp(0.31143502261659206);
    msg.setSource(53314U);
    msg.setSourceEntity(240U);
    msg.setDestination(52553U);
    msg.setDestinationEntity(152U);
    msg.value = 55U;

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
    msg.setTimeStamp(0.06001322092906147);
    msg.setSource(2352U);
    msg.setSourceEntity(16U);
    msg.setDestination(23360U);
    msg.setDestinationEntity(221U);
    msg.consumer.assign("FAYYXISDTTFAUNCDTTGNVVXJBPODEWIHZRIJYZOGXNWLVCAOBDDSVLERJCSREZJEOLBFIWFFMPQPCMLLJTLZXWEMYWLMOHEUPQYNZKATUQVALUHSRKPIOAFNUCQLGSXMHSJNGFEOKRWWDDDPZYGCWXFBSZICHFPUVQKKEIXRAYUMHOCHQPDVIKXUAUAPJVLXMSNHGXJQKYTTRJBMOU");
    msg.message_id = 11504U;

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
    msg.setTimeStamp(0.7051599487194075);
    msg.setSource(56867U);
    msg.setSourceEntity(183U);
    msg.setDestination(1759U);
    msg.setDestinationEntity(187U);
    msg.consumer.assign("IPARRSQAJQSBOOQDCRECRTVHYBYIEWWFFUZMGAVMGNQZUHLZMEWLCUGLLPKSPDVZLXWDJYTFHWRTGDSCTKHVTRPZBXOSNVHLJDJQZIGXYWCBLITNBKXFIJBSYCGNFZMLIKPSYEAAONJUGQORNNQHZEBGDUDLMKPCSTVMASWSHJFHMBXUEEWKVLGHFRPTNUBFTIPUXFMWVMIXGKKECMDBEOEKQCDUAVQPZPIWOYRRYYTDNXAJYNFJKOCAVAOQI");
    msg.message_id = 39556U;

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
    msg.setTimeStamp(0.7077348351940425);
    msg.setSource(10305U);
    msg.setSourceEntity(143U);
    msg.setDestination(17170U);
    msg.setDestinationEntity(213U);
    msg.consumer.assign("VSROOZGBLLJQPUPVCYAAWWYWKZDRNYLENAUTTZRADITCXFZETDNYUNLXMJHHMUEEVYMZKXCFQONCTWEBSMEROFLJQRFYGCTVVZJBYGKHQJGMIXJXOMZDUFCQYSHHROXNETPPIAWHSIDOVJENS");
    msg.message_id = 57365U;

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
    msg.setTimeStamp(0.017837606854529064);
    msg.setSource(29508U);
    msg.setSourceEntity(56U);
    msg.setDestination(5783U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.6615600253142183);
    msg.setSource(28960U);
    msg.setSourceEntity(63U);
    msg.setDestination(58839U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.2447177962106406);
    msg.setSource(29193U);
    msg.setSourceEntity(18U);
    msg.setDestination(52648U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.712231463243318);
    msg.setSource(60696U);
    msg.setSourceEntity(85U);
    msg.setDestination(43841U);
    msg.setDestinationEntity(188U);
    msg.op = 65U;

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
    msg.setTimeStamp(0.40837716176308214);
    msg.setSource(55620U);
    msg.setSourceEntity(178U);
    msg.setDestination(36487U);
    msg.setDestinationEntity(226U);
    msg.op = 37U;

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
    msg.setTimeStamp(0.9738125907283564);
    msg.setSource(8693U);
    msg.setSourceEntity(125U);
    msg.setDestination(31605U);
    msg.setDestinationEntity(7U);
    msg.op = 137U;

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
    msg.setTimeStamp(0.8532566475592759);
    msg.setSource(15121U);
    msg.setSourceEntity(164U);
    msg.setDestination(8499U);
    msg.setDestinationEntity(31U);
    msg.total_steps = 134U;
    msg.step_number = 47U;
    msg.step.assign("VQOUKGJWBNNWCNGPWWZC");
    msg.flags = 110U;

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
    msg.setTimeStamp(0.0760930153472601);
    msg.setSource(62943U);
    msg.setSourceEntity(25U);
    msg.setDestination(62800U);
    msg.setDestinationEntity(108U);
    msg.total_steps = 205U;
    msg.step_number = 85U;
    msg.step.assign("ENFZXJTBGXJLSAMAMYHWGNMWCPKJVGUZKNBPPSTICLKDFTBYBKDHEMAUBKSLSISWAUNIIGFCRWJQWGVRYDCZYBCGRPHLANQCLHHBQYMEFSINGHUDRUVTXFXMJNIXPVOPDITYELDOODWZKPCWHFTJVNUBAKEOUXZDZYEFATLVSEACUUXRZAJTIXJXEZOOPYGFGRMAOIMQQQGDYKRKIPVLJBFWWDS");
    msg.flags = 59U;

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
    msg.setTimeStamp(0.9376890926749453);
    msg.setSource(19240U);
    msg.setSourceEntity(109U);
    msg.setDestination(35294U);
    msg.setDestinationEntity(247U);
    msg.total_steps = 125U;
    msg.step_number = 60U;
    msg.step.assign("LJIFCGEPWJGNHLDYLWITUBNTHCTSDDMNVYZUBCNCLJGBWYLRBMKCUPIZFVXWJCIDDXDKOIXTQWOGDTURFABJNLFAVOTIXZEHKBKRNESVXOYRUYBAZKQIEJOXHGGSZTUBMGYRPXDZSXWAFMQPMPLRQQZWGESVCVSNAOKMWALRYFQTJ");
    msg.flags = 211U;

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
    msg.setTimeStamp(0.7062105794424038);
    msg.setSource(31618U);
    msg.setSourceEntity(58U);
    msg.setDestination(64776U);
    msg.setDestinationEntity(37U);
    msg.state = 182U;
    msg.error.assign("ZTLMSGXWXVAMIHVEFXFWSRTHVRQKNIFUGIHUTHWXBQPDAAOHZPAHLFKYLTFMCESMKZWJJGECZPGGCQVTXVBLKCEXWDPQTPGAMASCIBFHOBRLQIKMUHYNJYWVZFNPRTCKCTPLGSQHFUY");

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
    msg.setTimeStamp(0.14488746933640217);
    msg.setSource(31890U);
    msg.setSourceEntity(106U);
    msg.setDestination(16422U);
    msg.setDestinationEntity(73U);
    msg.state = 24U;
    msg.error.assign("ADDWZXMPLPGABYCRMBNCYXAG");

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
    msg.setTimeStamp(0.7381516442689712);
    msg.setSource(47061U);
    msg.setSourceEntity(19U);
    msg.setDestination(45633U);
    msg.setDestinationEntity(148U);
    msg.state = 194U;
    msg.error.assign("BFOXLMKHWACZKANEOXTWWYFJFTHSVIRYJLEIUSZESTDTZGOZISPONFRWHCIXILUATZBIYACVRPJFGHVR");

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
    msg.setTimeStamp(0.7461991068164374);
    msg.setSource(25878U);
    msg.setSourceEntity(38U);
    msg.setDestination(4228U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.03499399585235574);
    msg.setSource(43751U);
    msg.setSourceEntity(105U);
    msg.setDestination(60928U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.7356896726702911);
    msg.setSource(52083U);
    msg.setSourceEntity(239U);
    msg.setDestination(49911U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.8630775242189005);
    msg.setSource(53656U);
    msg.setSourceEntity(97U);
    msg.setDestination(30726U);
    msg.setDestinationEntity(188U);
    msg.op = 120U;
    msg.speed_min = 0.6786622947635913;
    msg.speed_max = 0.10066994446805377;
    msg.long_accel = 0.6389642464946872;
    msg.alt_max_msl = 0.4171921301198557;
    msg.dive_fraction_max = 0.6196448715796196;
    msg.climb_fraction_max = 0.8441667446245412;
    msg.bank_max = 0.06742596635342013;
    msg.p_max = 0.004591840685537973;
    msg.pitch_min = 0.0679308476951005;
    msg.pitch_max = 0.24631914920630005;
    msg.q_max = 0.18531053807028175;
    msg.g_min = 0.2858690837516741;
    msg.g_max = 0.988281427460367;
    msg.g_lat_max = 0.8794119634778867;
    msg.rpm_min = 0.20280213844743555;
    msg.rpm_max = 0.19723572866120886;
    msg.rpm_rate_max = 0.0939355813510181;

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
    msg.setTimeStamp(0.28451751081959376);
    msg.setSource(65436U);
    msg.setSourceEntity(163U);
    msg.setDestination(53211U);
    msg.setDestinationEntity(201U);
    msg.op = 239U;
    msg.speed_min = 0.4458521368383591;
    msg.speed_max = 0.8359689994808641;
    msg.long_accel = 0.6976410480707641;
    msg.alt_max_msl = 0.5747161286964134;
    msg.dive_fraction_max = 0.9495712618210245;
    msg.climb_fraction_max = 0.5340806192935057;
    msg.bank_max = 0.3569857743044703;
    msg.p_max = 0.5862796045326811;
    msg.pitch_min = 0.5426075323420472;
    msg.pitch_max = 0.2953888047392468;
    msg.q_max = 0.8638607565220969;
    msg.g_min = 0.3449259254773843;
    msg.g_max = 0.09999094206931924;
    msg.g_lat_max = 0.9453858902937933;
    msg.rpm_min = 0.23916929176050616;
    msg.rpm_max = 0.07403843637941498;
    msg.rpm_rate_max = 0.9723222738974567;

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
    msg.setTimeStamp(0.4481049088613839);
    msg.setSource(29143U);
    msg.setSourceEntity(171U);
    msg.setDestination(20465U);
    msg.setDestinationEntity(209U);
    msg.op = 196U;
    msg.speed_min = 0.09589055754946785;
    msg.speed_max = 0.8215913324200785;
    msg.long_accel = 0.42087884746381343;
    msg.alt_max_msl = 0.7424152328538022;
    msg.dive_fraction_max = 0.7788046937507556;
    msg.climb_fraction_max = 0.3525979019696803;
    msg.bank_max = 0.6629428935923387;
    msg.p_max = 0.5123570250780829;
    msg.pitch_min = 0.990663701911006;
    msg.pitch_max = 0.29001690150484194;
    msg.q_max = 0.7211080243029472;
    msg.g_min = 0.602671132984709;
    msg.g_max = 0.85692256613732;
    msg.g_lat_max = 0.0056977995344468235;
    msg.rpm_min = 0.014366734585824381;
    msg.rpm_max = 0.2472134087013803;
    msg.rpm_rate_max = 0.5233627178192444;

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
    IMC::MsgList msg;
    msg.setTimeStamp(0.1962473181695341);
    msg.setSource(18641U);
    msg.setSourceEntity(220U);
    msg.setDestination(21725U);
    msg.setDestinationEntity(78U);
    IMC::Aborted tmp_msg_0;
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
    msg.setTimeStamp(0.5208384932397109);
    msg.setSource(29826U);
    msg.setSourceEntity(166U);
    msg.setDestination(1840U);
    msg.setDestinationEntity(90U);
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.7472524262158525;
    tmp_msg_0.x = 0.8051351592592088;
    tmp_msg_0.y = 0.17638512606885226;
    tmp_msg_0.z = 0.9645819644551872;
    tmp_msg_0.timestep = 0.40664458522977165;
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
    msg.setTimeStamp(0.3726124734465216);
    msg.setSource(48740U);
    msg.setSourceEntity(25U);
    msg.setDestination(6307U);
    msg.setDestinationEntity(174U);
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("GLMEOICPDTJPIFPELAWCGZZOIXLOSZDRFFPYAHWTVWFGDMNKJXUJMJDRECRKUJGXWTZDMGCIZYQONETIIXNDUIJTEEZQESHHSZFLAMNGSRBKXLTHMNRFQBAIYJPLMEDYFZCUAJUOSNENUXGNQPRBZRYFAKUVLGBNWSRYLHOQXKEKSVAUAWPPMCSDIBAXVJWGOWC");
    tmp_msg_0.state = 133U;
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
    msg.setTimeStamp(0.8293651419841351);
    msg.setSource(47299U);
    msg.setSourceEntity(249U);
    msg.setDestination(45035U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.6547935069838832;
    msg.lon = 0.3755428091759043;
    msg.height = 0.7316694771006982;
    msg.x = 0.7861051542070819;
    msg.y = 0.7193948032334279;
    msg.z = 0.9465590190292946;
    msg.phi = 0.39859178484858615;
    msg.theta = 0.37095262511554317;
    msg.psi = 0.24092618433773938;
    msg.u = 0.2528650621450238;
    msg.v = 0.31686733203176587;
    msg.w = 0.8966072041408566;
    msg.p = 0.11889943770025535;
    msg.q = 0.6942484709738933;
    msg.r = 0.3148689262042752;
    msg.svx = 0.6549062591330308;
    msg.svy = 0.38403889498656263;
    msg.svz = 0.6326435262308093;

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
    msg.setTimeStamp(0.5258834747594586);
    msg.setSource(31372U);
    msg.setSourceEntity(62U);
    msg.setDestination(33681U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.9551984076911341;
    msg.lon = 0.5492649199516413;
    msg.height = 0.6675083743720426;
    msg.x = 0.6818448148250833;
    msg.y = 0.24285038673868298;
    msg.z = 0.6273025279994093;
    msg.phi = 0.3738622189215688;
    msg.theta = 0.10741644484079127;
    msg.psi = 0.4819597203634505;
    msg.u = 0.818311921440962;
    msg.v = 0.17566539037967632;
    msg.w = 0.35577379930228714;
    msg.p = 0.9052192357442336;
    msg.q = 0.8886010793605;
    msg.r = 0.2093640556270122;
    msg.svx = 0.8223093600234754;
    msg.svy = 0.5596230532477289;
    msg.svz = 0.5344148807374954;

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
    msg.setTimeStamp(0.8916790807759579);
    msg.setSource(29159U);
    msg.setSourceEntity(20U);
    msg.setDestination(17044U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.1735491026247734;
    msg.lon = 0.6317156846398657;
    msg.height = 0.13075800835138407;
    msg.x = 0.041237647732147886;
    msg.y = 0.18739062917628713;
    msg.z = 0.3967397407069758;
    msg.phi = 0.3407328371182107;
    msg.theta = 0.9779260780142287;
    msg.psi = 0.2793949894849732;
    msg.u = 0.43749900460802815;
    msg.v = 0.7658737776324405;
    msg.w = 0.2564110619321871;
    msg.p = 0.2303803969431173;
    msg.q = 0.5323790655415834;
    msg.r = 0.7737046358649854;
    msg.svx = 0.18661296076489453;
    msg.svy = 0.4584341116853847;
    msg.svz = 0.1744937467026414;

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
    msg.setTimeStamp(0.09898290578230973);
    msg.setSource(55278U);
    msg.setSourceEntity(117U);
    msg.setDestination(40018U);
    msg.setDestinationEntity(189U);
    msg.op = 32U;
    msg.entities.assign("TCZWRAFLUS");

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
    msg.setTimeStamp(0.7276440180949121);
    msg.setSource(27708U);
    msg.setSourceEntity(138U);
    msg.setDestination(22368U);
    msg.setDestinationEntity(178U);
    msg.op = 20U;
    msg.entities.assign("GQJXSFQPHEEFFTKIXVLOVHJWYJDBLKPROCDKFNXHYTCFSPXMLQDMGRQHABMZWCWGXPCCOTKZMQONEQSGVQEUSYOEBZYCBTNAPAZIFWHQILWJBIJZUGNQURHTNXYDACPRLJHDLPHZUWWE");

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
    msg.setTimeStamp(0.7591382983323813);
    msg.setSource(60660U);
    msg.setSourceEntity(7U);
    msg.setDestination(16165U);
    msg.setDestinationEntity(141U);
    msg.op = 240U;
    msg.entities.assign("ZFZWGYXKXMGQDRRIGVCKLSYZRKOBTLGDPYMAAMDIWABMAKBHMEUPXBGFCOYQGPHELUOJRUNTNPMNGDHAECHUILMCEPCVSJKESUZGFTBEYIRLOKQONSHLPAWRIWLNWZSRDESYLBFXSIDNIVZSDRFTVZNHJNTYDQWMWOUHKPLTWOUYPQACEPQBJBCZTBXBVCRVXTSTVXTJAQFLJGKRSCDUEFIIUVIWADM");

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
    msg.setTimeStamp(0.348018305501807);
    msg.setSource(89U);
    msg.setSourceEntity(10U);
    msg.setDestination(23108U);
    msg.setDestinationEntity(228U);
    msg.type = 202U;
    msg.speed = 49124U;
    const char tmp_msg_0[] = {24, -97, -57, -48, 64, -1, 27, -85, 94, -106, 6, 80, -33, 59, -12, -101, -109, -96, 86, 78, 76, -74, -71, 47, 42, -21, 24, -89, 89, 63, 59, 23, -5, 11};
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
    msg.setTimeStamp(0.9919643601881761);
    msg.setSource(55160U);
    msg.setSourceEntity(200U);
    msg.setDestination(16569U);
    msg.setDestinationEntity(165U);
    msg.type = 121U;
    msg.speed = 14976U;
    const char tmp_msg_0[] = {26, -33, 63, -67, 119, -34, -36, 30, -7, 60, 92, 112, 63, -30, -4, -61, -122, 89, -113, -98, -35, 63, 89, 119, -122, -101, 63, 4, -24, 71, 89, 80, -127, -120, 86, -110, 42, -66, -68, -31, -37, 88, 28, -80, -65, -52, -109, 109, 95, 15, -58, 49, -4, -39, -18, 91, 49, 15, 126, 88, 7, 39, -19, -113, -123, 24, -127, -123, 83, 106, -80, -25, -17, 65, 118, 53, 91, -86, -112, 19, -57, 87, -76, 14, 93, -102};
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
    msg.setTimeStamp(0.6245962512973342);
    msg.setSource(42131U);
    msg.setSourceEntity(13U);
    msg.setDestination(42659U);
    msg.setDestinationEntity(113U);
    msg.type = 120U;
    msg.speed = 52930U;
    const char tmp_msg_0[] = {-98, -80, 45, 24, 114, 19, -61, 14, 69, 17, -32, 25, -79, 28, -49, 78, 56, 103, 57, 94, 35, -45, -77, 125, 83, -27, 65, 24, 117, -117, -99, 116, -67, -96, -73, -49, -127, 123, 10, -105, 87, 77, -8, -44, -53, -53, 3, -78, -77, -38, -119, 123, -104, 22, 92, 18, 25, -105, -108, 43, 73, 126, 12, -73, -62, -57, 73, -18, -39, -82, -22, 72, 19, 123, 117, -99, 114, 74, 113, -14, 35, -112, 107, 63, 8, 63, 107, -100, -74, 35, -93, 46, -83, -55, -96, 15, -113, -21, -115, 45, -4, 19, -21, 110, 73, -80, 75, 59, 11, 116, -10, 117, -29, -94, 16, -109, 107, -87, 27, -13, 48, -119, -44, 96, -51, 42, -81, -30, -97, -93, 23, 85, -26, -10, 55, 10, 13, -74, 14, 53, 90, 81, -55, 70, 10, 93, -106, 75, 86, -27, -103, 10, -30, 4, -85, -102, -78, 95, 52, 35, -34, 18, -95, -73, -60, -84, -27, 107, -86, -42, 115, 116, 55, -10, 113, -127, -10, 96, 82, -128, -15, -70, 41, -16, 33, 8, 24, 58, -23, -96, -123, -3, 108, -41, -81, -44, -33};
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
    msg.setTimeStamp(0.5151400674909735);
    msg.setSource(44691U);
    msg.setSourceEntity(114U);
    msg.setDestination(6415U);
    msg.setDestinationEntity(224U);
    msg.op = 142U;
    msg.tas2acc_pgain = 0.22229060287732472;
    msg.bank2p_pgain = 0.9856077109061941;

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
    msg.setTimeStamp(0.3320091371689996);
    msg.setSource(15664U);
    msg.setSourceEntity(212U);
    msg.setDestination(29196U);
    msg.setDestinationEntity(204U);
    msg.op = 144U;
    msg.tas2acc_pgain = 0.0453169743815689;
    msg.bank2p_pgain = 0.6922968889832547;

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
    msg.setTimeStamp(0.29618895404690715);
    msg.setSource(22068U);
    msg.setSourceEntity(75U);
    msg.setDestination(19946U);
    msg.setDestinationEntity(102U);
    msg.op = 110U;
    msg.tas2acc_pgain = 0.8422905739798905;
    msg.bank2p_pgain = 0.3792872941302552;

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
    msg.setTimeStamp(0.21203849361649185);
    msg.setSource(26532U);
    msg.setSourceEntity(206U);
    msg.setDestination(27133U);
    msg.setDestinationEntity(8U);
    msg.available = 1226429408U;
    msg.value = 185U;

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
    msg.setTimeStamp(0.26286175840432247);
    msg.setSource(54545U);
    msg.setSourceEntity(149U);
    msg.setDestination(20376U);
    msg.setDestinationEntity(31U);
    msg.available = 2914943168U;
    msg.value = 127U;

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
    msg.setTimeStamp(0.07345179687461878);
    msg.setSource(28141U);
    msg.setSourceEntity(99U);
    msg.setDestination(53523U);
    msg.setDestinationEntity(130U);
    msg.available = 4135257975U;
    msg.value = 41U;

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
    msg.setTimeStamp(0.9299185953659501);
    msg.setSource(27154U);
    msg.setSourceEntity(150U);
    msg.setDestination(58955U);
    msg.setDestinationEntity(28U);
    msg.op = 57U;
    msg.snapshot.assign("VPXJCMOLDQWCFDNARBOAQXMENUUHUSAMFBRQKKDPJPFCFWTGHUMNLGEPRTKJTTDUZVQBXTZKLJNJCV");
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("TLROBOAJPDHDTRKZYVSWAWQQCMIWCUXYOYWJBEXIRZCVZJMJRZWCGKXDWFXSQCELCNCRBUHFOPHF");
    tmp_msg_0.value = 149U;
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
    msg.setTimeStamp(0.9664149478893492);
    msg.setSource(33554U);
    msg.setSourceEntity(250U);
    msg.setDestination(34296U);
    msg.setDestinationEntity(188U);
    msg.op = 39U;
    msg.snapshot.assign("QXRFWYCVJMKTOUPNETFZUBHJGRMZLCDXSJKSBSEVRUTRRJHSHWTSZEPGJIABKJDYKNLLQSBTRFDOBPMYHQJQEGSJOZYEGOMOAAKITZHFBUEQUHPGLILGMLEVYWMVBFCRCZBSFARDTCWHBEKLHI");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("ZZVXTSDRZLPZDKMIHEOMBABIMANFYGSSPZLDNFKDSXJTQNRSLGAHHXISMHIQJUITCUHQRRLHCRWWQFRHLSEKECFKYGJDATRFOPOWNXUMKGXG");
    tmp_msg_0.visibility.assign("ZEASOUZNPBCSDQUCXCJVRCNYBWMGGGOQVRGCNWFVLLTNFPDKEKPPXIVXLKBGJFRYMXOICCDCKBJIXFCMXGGNXLHR");
    tmp_msg_0.scope.assign("RQXUBMYNWNWDYZJOPQNEPPMLCSIDSFBWPIZHPIPPKWNYWEPUCAFEQVBUQOKXVMGCXVMNUBSIFVSFKXZFIZYLGBJFAYPHKFZQRACTEGEJBOHOXDHGSBOUBCZIADVMDFSKTJGEXNWOQELSHSTAIGJTKBVWOLJISBJYCZDARXTEKRCZKEMUYXLEDLRTLRQHYMTMOYNLKWHLNQMLFJIFNANUHRTGJQCGUZIKCRVXRCDZDOWHAMRTJVGQXHYO");
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
    msg.setTimeStamp(0.7737294090052231);
    msg.setSource(23082U);
    msg.setSourceEntity(85U);
    msg.setDestination(29463U);
    msg.setDestinationEntity(10U);
    msg.op = 11U;
    msg.snapshot.assign("RVBLXCPHKABXFSUBRTWHWRQRPOOLZBQFVBJOMHZKIFNHTYIUFQEGBLJSQUKILIAHWCGJIIETXENEWAXZRAZSBYPMVOXTYDJYWRCDKPCCFVILVMUTSQSJQMQNNBZPTMPXXTMGQNDSSIGWCSYFVGOOWEWKLDQTGFNHPHOZJSBEKCKLFYAZYLMAMUNPVUANEYUDUKOIGUAJTJLROGDRMJPXKB");
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 180U;
    tmp_msg_0.id.assign("RQEVGKOFBUKQHZYSZXNYZFTJFLEMIEZDMWCDXPUHYMUHTEGIXDTZPSIHIMYEJSHZALRWMXEIOOUCZIQJJBFFBDSRKHITLJXCGAUWORWWTKYMEUIBYGOLVTCTLANAOUSWFYWJKXKNOHDVMFFSJOWREJQNIGUOLHPVQRDBVGHSBPBYKYPLABLDXZNADDCGKERGXZXSQCDPPPILCMGCCSNLAQEHJXJQPRPKNKN");
    IMC::MessagePart tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.uid = 5U;
    tmp_tmp_msg_0_0.frag_number = 133U;
    tmp_tmp_msg_0_0.num_frags = 91U;
    const char tmp_tmp_tmp_msg_0_0_0[] = {-86, 40, 120, 73, 20, -100, -72, -106, 92, 28, -3, -14, -4, -80, 94, 81, 125, 97, 55, -114, 41, 48, -105, 75, -73, 25, 65, -113, 101, -56, -14, 68, -65, -59, 2, -100, -43, -127, 71, 36, -91, -113, 27, -62, 25, 79, 37, -84, -64, 12, -125, -31, -37, -72, -9, 15, 31, -11, 126, -21, -40, 27, -83, -35, 108, -73, -75, -114, -67, -87, -57, -39, 61, -35, 124, 72, -50, -27, 34, -63, -28, 31, 116, 40, 66, 36, 4, 29, -20, -117, -127, 89, 39, -79, 66, 98, -79, 114, 14, 121, 68, 76, -24, 17, 103, 22, -20, -90, 28, 6, 120, 78, 119, -54, 12, 50, -111, -77, -75, -75, 103, -81, -67, 41, 21, -58, -112, 21, 47, 52, -121, -27, -61, -127, 123, -125, 87, 118, -101, 118, -40, 52, 117, 117, 73, -126, 41, -31, 122, -100, -33, -82, -34, -42, 93, 47, 107, 116, -114, -110};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.938826815070614);
    msg.setSource(40913U);
    msg.setSourceEntity(233U);
    msg.setDestination(58197U);
    msg.setDestinationEntity(254U);
    msg.op = 58U;
    msg.name.assign("ESLCQCIPXZDVZDGOTLNWJGKIALGYSQFDXYFPPRLQYBELOUBVHUIGTBTAEQNJLJMYCHBJHVOWBRWVEQBXTRMRIKSOLSCXVKENGOKWCHPYYYMAOPEQAZWUAKKTTEEOHYCLVUKFAXRMDZLAUZCKCVFPCHNMGSQNWRAJKJJBUIITDFUIRTGXMMQAOXBWVWRXEEJFWFQPWISZFNXUSFVTNOFGRHSQZHTDMMBNYDONCDBZUMZZJGPXI");

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
    msg.setTimeStamp(0.7697554800881952);
    msg.setSource(44606U);
    msg.setSourceEntity(208U);
    msg.setDestination(51953U);
    msg.setDestinationEntity(55U);
    msg.op = 211U;
    msg.name.assign("ENFMESDVXZABONTVQZXJBKSHQLJYRIOTHUWS");

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
    msg.setTimeStamp(0.806238973534754);
    msg.setSource(33704U);
    msg.setSourceEntity(186U);
    msg.setDestination(21163U);
    msg.setDestinationEntity(179U);
    msg.op = 140U;
    msg.name.assign("LGACUNPGPMVNFNAWHFIWOZYYGHPYOUBBYFXGLHEFIAJZPIMRCSMKKZPVTTCZRFHGPUNRKJUQTMYQJJLCWSDOLPDVPJHKVQWMSWNENTKWXILFOIJFZCRSQDFVLHDEOOZBJSNQFMXTHXHIWSVVWNUNGETYAIELBLDIKUKTI");

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
    msg.setTimeStamp(0.7449143538063769);
    msg.setSource(43057U);
    msg.setSourceEntity(232U);
    msg.setDestination(23515U);
    msg.setDestinationEntity(112U);
    msg.type = 130U;
    msg.htime = 0.732102909989506;
    msg.context.assign("QTRWWDMBJLIURQBKNJYGYPXEJVPXWKUVZHCOCREQBOTWHPSRZKAFOKNXFYYJDKCQGGNLITHWUSGANFEMFQGMSGLHVBCLVILLJOMOASSHDUMETENPRZFOQIVGDSIAOLWLHDMJTTNGQYQYRYWPNRHHUPBCNCJUIYFPIIDEZVGBUFKWBTNWZLGXMPOFXDDNBVAFMKZAYQTJO");
    msg.text.assign("KGACWFFDMEHOUCERWAUXWHLNDXFXIIKKJTFXBCBHOMPOFSKSPQVTIGKLCWCCIYTPQDH");

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
    msg.setTimeStamp(0.8862699983401453);
    msg.setSource(59981U);
    msg.setSourceEntity(43U);
    msg.setDestination(25458U);
    msg.setDestinationEntity(149U);
    msg.type = 129U;
    msg.htime = 0.5211556484227768;
    msg.context.assign("GALRXOZLXJUSKLHKCALPQKNVLFAGZOCAIZVMCEOIYZHJGAXPGIHPXFSCMYODQWOUHE");
    msg.text.assign("WIQVNMDRNAWPTPAGWZOHHLQVOSCLDVCVKOWGYCKDRJDTXEKHZUYMGMBGJAYKZGAUPPQEYPHKPAMMTLIBWFDUQTLCBVELSLJBWGOZERUBXSEIOEICPCDDAUICGTVVRHFHKUYNKQU");

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
    msg.setTimeStamp(0.29681513565036577);
    msg.setSource(51145U);
    msg.setSourceEntity(195U);
    msg.setDestination(20683U);
    msg.setDestinationEntity(116U);
    msg.type = 108U;
    msg.htime = 0.5040987939566968;
    msg.context.assign("LSGYWWSVGDZPKPKXZYTEBQVXQJLEJKMUBXGTFLYMKGACZPYQXMIWRMOYIBNTYSHCWBDUNTOOJCMELDUDUNRECPSNAJRIAOIRQAELFVZPFTTCQRFHWEGSDJFOFHOGZVLTWAKEEHIDKQAWIEVXVSUXFOJRAOBGMWPOCYQGHITQPBHAVJIVZW");
    msg.text.assign("WDIYUVTFTMMNRKMAQSAGBKLXYNBSYWKQUPGUHBPXSZUSSPEBKCJVCHRWQAXKMMNOKYYDLZEEIRQXAKDOTRNHXFUMXLGPOZLUSDAWKMGIJJPXQIJUOSRGEXPEOLIPVNNEAPAGPSDZVJANVBTNXHZGDYYZFVBOWJFVNLMHP");

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
    msg.setTimeStamp(0.06157395668550869);
    msg.setSource(62200U);
    msg.setSourceEntity(214U);
    msg.setDestination(19764U);
    msg.setDestinationEntity(236U);
    msg.command = 2U;
    msg.htime = 0.2909822310160114;

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
    msg.setTimeStamp(0.8138584021863493);
    msg.setSource(26321U);
    msg.setSourceEntity(112U);
    msg.setDestination(31133U);
    msg.setDestinationEntity(27U);
    msg.command = 164U;
    msg.htime = 0.4689160143447406;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 219U;
    tmp_msg_0.htime = 0.07162312987867858;
    tmp_msg_0.context.assign("VSJWKPTHQEGOMNWDYQFSMSGFNOGPWLTRZIVIZORBPTAWQKKCVXAPNJYARYQLBXDOFPVNVCIGZMOVCHRKMTIXORXMHFNLPKQYGVJXJBDWUJZVIKKEYXBURNRCCRGYTAKDFMKUVQPZBJMMGSZUMKCDHBXAGBPRWQATJDCFS");
    tmp_msg_0.text.assign("ZHBQLXSDYYGN");
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
    msg.setTimeStamp(0.7392020037260164);
    msg.setSource(44446U);
    msg.setSourceEntity(218U);
    msg.setDestination(15425U);
    msg.setDestinationEntity(0U);
    msg.command = 40U;
    msg.htime = 0.6814269711517051;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 250U;
    tmp_msg_0.htime = 0.25705432334347134;
    tmp_msg_0.context.assign("YSNVZKBSKRQPHKLDGMNZZQPNWYMEXCLTJMNTXMPPWYXIOLNOGLLLXNFUXQTOZBHACPYUIPNQYIDEWFZAGBGJVZHKJBESUJKQBEDVVOUPAQLXFGLLEHWEYRNEDPZSONBRFAQMRTFMCM");
    tmp_msg_0.text.assign("PFQWCHXVVGUVPEJEZIAYDUJPBJYHHGTLRSXZSDYWZUQIBKFSULG");
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
    msg.setTimeStamp(0.09234843325218878);
    msg.setSource(64070U);
    msg.setSourceEntity(14U);
    msg.setDestination(39874U);
    msg.setDestinationEntity(100U);
    msg.op = 124U;
    msg.file.assign("UEOCVLDAEWZLXAWEVLGFZBFKYOJTLHUPLDQQZAYYKBAQQMSZNPTXUOTDRDVPIFYHKOAIWGPDKBFMFEKFNJREMQMYNFUBLEWYHVOWVIIEITPBMRQKRCPDZFADAHWSJJZTEKMSIJASYIGYTZNTNMCXJBJXKSHTTXPMXCZWCRHNKFJINXBALPVIULVEGRRRGJJBZUULEOWASNUVIYHDSNMZDGGGVHODQKVXOSHLQWTPSNSCQCFXHCYOCUCGBRUXB");

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
    msg.setTimeStamp(0.6817154233072572);
    msg.setSource(32893U);
    msg.setSourceEntity(56U);
    msg.setDestination(42878U);
    msg.setDestinationEntity(48U);
    msg.op = 149U;
    msg.file.assign("UPEYNCDDIVKPCLGKTUZVSTYEASRLRGZZEIMQKUKRUYFKDFRSICTVWVMBLQKTWVNZKJFAKUWBBFCCWVHHOJFWXDHIBBTEZXCZJYDRNZPYTJCQPMYSEXLDYAPIUIHJEUAN");

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
    msg.setTimeStamp(0.6307699955253567);
    msg.setSource(25673U);
    msg.setSourceEntity(130U);
    msg.setDestination(14063U);
    msg.setDestinationEntity(12U);
    msg.op = 185U;
    msg.file.assign("DYRSDJTKUOJJAZUCQUIYJRTDEXQSCLRDAKJFXNGJACNSUYTBDIRFEMKPAFMEVPHCPFTLVZZAAWIHGBW");

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
    msg.setTimeStamp(0.27033674844669275);
    msg.setSource(42267U);
    msg.setSourceEntity(145U);
    msg.setDestination(55386U);
    msg.setDestinationEntity(152U);
    msg.op = 84U;
    msg.clock = 0.13260488842831286;
    msg.tz = -78;

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
    msg.setTimeStamp(0.7992544701221733);
    msg.setSource(28849U);
    msg.setSourceEntity(110U);
    msg.setDestination(15459U);
    msg.setDestinationEntity(226U);
    msg.op = 217U;
    msg.clock = 0.8989893698919166;
    msg.tz = -41;

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
    msg.setTimeStamp(0.5558303894537363);
    msg.setSource(63718U);
    msg.setSourceEntity(95U);
    msg.setDestination(8142U);
    msg.setDestinationEntity(247U);
    msg.op = 100U;
    msg.clock = 0.8020043082574113;
    msg.tz = 40;

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
    msg.setTimeStamp(0.853722458213837);
    msg.setSource(17180U);
    msg.setSourceEntity(235U);
    msg.setDestination(52323U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.26298365016876557);
    msg.setSource(54703U);
    msg.setSourceEntity(123U);
    msg.setDestination(21174U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.44718831100838186);
    msg.setSource(9834U);
    msg.setSourceEntity(124U);
    msg.setDestination(12284U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.5155834944003438);
    msg.setSource(62777U);
    msg.setSourceEntity(24U);
    msg.setDestination(55030U);
    msg.setDestinationEntity(167U);
    msg.sys_name.assign("LUBZAMRFMJJEDOXDWMGGSSZBIMZTLKTBTNNOLSXSZYNBJPSERDMJTXPIATAETPOPOCNVYKWJOLWEUXQUDCCOFJKWHZNONKQDPCJHUIMCIARUVTRYXKPESXCIALGXWFDYQHYAVWSLCQEABGVSBWHNJRHBCTMNUVYRBZFERRELBQVVQJYQDWILEFTUGXIHNMVUYHSPLVTPCZQZGUMXGALODYO");
    msg.sys_type = 108U;
    msg.owner = 64963U;
    msg.lat = 0.6043787016962852;
    msg.lon = 0.09919685059409888;
    msg.height = 0.4172655803660098;
    msg.services.assign("EVNZDMHIJYZGGGIQSDOPIAMYUKNLFCWBVYHKDAGOULZQXEKRNASEXPPQICZEXOUYNIBUFKWD");

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
    msg.setTimeStamp(0.9654397805274549);
    msg.setSource(45998U);
    msg.setSourceEntity(212U);
    msg.setDestination(14592U);
    msg.setDestinationEntity(33U);
    msg.sys_name.assign("UOSXXSCRQVICKEDYCCXPOZFQZAMQELOLSUGWNHPYVCNFNIEYLTDIHISHFTLMOZIVDUJUVGCWGNWXNPCNYGMTXTGW");
    msg.sys_type = 178U;
    msg.owner = 7482U;
    msg.lat = 0.5171417064232787;
    msg.lon = 0.5853626791621748;
    msg.height = 0.31459817654569544;
    msg.services.assign("KBGFCHYFRFKJEXNHQVUDSYMXMTEZWAFRQUAFWSDNEPPSKJBPPMXPDLQMSWOAVXUYEWRGCICBQZWILLNXANDJTPCOCLPXZVGAEKQIVKOEWLCEGGPWUDHUZCYJYNIAIMYSHVHOBZAHVCXRMEBXPIMBLRDRTSZVBTVJBDDHPFRRNZYOJINYFOLNQJLSMCSIATHNFZFSNOEMK");

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
    msg.setTimeStamp(0.09799291254266052);
    msg.setSource(55982U);
    msg.setSourceEntity(7U);
    msg.setDestination(32612U);
    msg.setDestinationEntity(182U);
    msg.sys_name.assign("SLZGBSWQYNZNMEGICUQQJULCJUHHEVKGDIQQXKJDAISBBPLARGOINOTECTRUGTNUOBHREUKPVXMBWXNAADWSIOQPWJMR");
    msg.sys_type = 67U;
    msg.owner = 26307U;
    msg.lat = 0.7537433484384103;
    msg.lon = 0.8761574093104942;
    msg.height = 0.05807849886254823;
    msg.services.assign("PULCBIGKHZGNGWJEVKGPCUEDOHNJDSJCPXUBMJLFBHJDBIJBFLYBBAMVZIITLQRWKPWKXPWERNORABXRXJEASHNDRRIGHSAMXVTHSJQVODWFPKMJMMKUQECZVYNUCWCPQHAVFZYVSYMOFIAYXPBTTOETKTFUCIWXGUEQOUFNSDSKLULYNNYVGKZH");

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
    msg.setTimeStamp(0.39551001525777285);
    msg.setSource(19256U);
    msg.setSourceEntity(38U);
    msg.setDestination(50987U);
    msg.setDestinationEntity(48U);
    msg.service.assign("VHTOVAPHJWILOECYHJZOSVIAGFRKGAQTWUDCQEDQRJPUYDHMDSNRUSZZHJKJRNKSMMDJDAQKUQZVISFBRRLMGAWSOEQCBMYECYTBGMBZWAXTKXZGAEZMLRYIIHJOGNBRCPOWDOQLZTTCUHBPILOHWLCHMQVBPXVKVQISPWQVUNR");
    msg.service_type = 174U;

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
    msg.setTimeStamp(0.39219411724985875);
    msg.setSource(43651U);
    msg.setSourceEntity(130U);
    msg.setDestination(42271U);
    msg.setDestinationEntity(215U);
    msg.service.assign("DCJOIDABHGGFULASWDDUVKJKYMCGMHGNNABKXTZGRHFQTQATXSZMHPRMUPVFSMFIPZPRMJYHERINGOQAWTBMXVGXJURWIFWJUNAQKCRCLCKXNUKEVDJMEVPJEFYIIMIQYYGSHNXLZBWOLTISLXUUXYWDSFBTBORQWEXKYZGPPQURASZCTOQJNWJCRFODKVELPPAFZELZ");
    msg.service_type = 220U;

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
    msg.setTimeStamp(0.16580489790847763);
    msg.setSource(57850U);
    msg.setSourceEntity(230U);
    msg.setDestination(53166U);
    msg.setDestinationEntity(12U);
    msg.service.assign("RBPJCSKTFIDOAKYVCVHQKYKBFSOXDYSBSGIIVTOMHEBLOQDNMULZOTHMZNTCEGSJGFFWSOYTMXXUDEGYFCQXHJUNQEJWYXKIPLZGDEEVYCZPBLIBAVHJPGMPMLNXBOTQ");
    msg.service_type = 218U;

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
    msg.setTimeStamp(0.05540734836489547);
    msg.setSource(18190U);
    msg.setSourceEntity(169U);
    msg.setDestination(12440U);
    msg.setDestinationEntity(152U);
    msg.value = 0.46975812100375813;

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
    msg.setTimeStamp(0.9015106797391866);
    msg.setSource(33979U);
    msg.setSourceEntity(162U);
    msg.setDestination(45137U);
    msg.setDestinationEntity(140U);
    msg.value = 0.5885594292466582;

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
    msg.setTimeStamp(0.11800629953826014);
    msg.setSource(7155U);
    msg.setSourceEntity(41U);
    msg.setDestination(50460U);
    msg.setDestinationEntity(42U);
    msg.value = 0.7338152390181772;

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
    msg.setTimeStamp(0.09289044246640432);
    msg.setSource(27882U);
    msg.setSourceEntity(0U);
    msg.setDestination(38256U);
    msg.setDestinationEntity(210U);
    msg.value = 0.7853773836988525;

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
    msg.setTimeStamp(0.4480040398655577);
    msg.setSource(59548U);
    msg.setSourceEntity(223U);
    msg.setDestination(4201U);
    msg.setDestinationEntity(56U);
    msg.value = 0.2665318933211087;

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
    msg.setTimeStamp(0.9246209943090014);
    msg.setSource(31415U);
    msg.setSourceEntity(28U);
    msg.setDestination(2325U);
    msg.setDestinationEntity(98U);
    msg.value = 0.5814996215140078;

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
    msg.setTimeStamp(0.3083971795527508);
    msg.setSource(25926U);
    msg.setSourceEntity(171U);
    msg.setDestination(8968U);
    msg.setDestinationEntity(202U);
    msg.value = 0.8141981962679005;

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
    msg.setTimeStamp(0.1430463560789993);
    msg.setSource(40416U);
    msg.setSourceEntity(128U);
    msg.setDestination(8131U);
    msg.setDestinationEntity(169U);
    msg.value = 0.815520908588344;

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
    msg.setTimeStamp(0.03566909910281568);
    msg.setSource(46472U);
    msg.setSourceEntity(232U);
    msg.setDestination(46994U);
    msg.setDestinationEntity(83U);
    msg.value = 0.7045363916861966;

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
    msg.setTimeStamp(0.1661698903077108);
    msg.setSource(19036U);
    msg.setSourceEntity(212U);
    msg.setDestination(59193U);
    msg.setDestinationEntity(151U);
    msg.number.assign("OXTNGWASIEN");
    msg.timeout = 35421U;
    msg.contents.assign("XBQIXWZQUQGRNYILFLLTRSQDEQYQXXSUYZYEFMYDTCLBSDTMGLUZJBXRLWFYCNPBZIWMVIVGESQKSBXPIRNBPLIVMDNONOUFJCMHWPOACNBTHRKOTAWUOQDJOKWPZYJNCTWVGXICKSDMGRZJAFALBNRMHUMATSINGIFSBTURCVEKJJAOSAJXFHHDVEWXZGKHKHIDKPNJWJYUOCGPTOMCHSQLCZERVEBZYDXEVAHFKFK");

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
    msg.setTimeStamp(0.9427931733821955);
    msg.setSource(58793U);
    msg.setSourceEntity(93U);
    msg.setDestination(59356U);
    msg.setDestinationEntity(96U);
    msg.number.assign("SAEHBLPICEDGUNSXXDXWMAZSYFMABPTMKINGGGBIYOPIKFJXGCAKVOARYJXMMLDHJZZBYTAQLHNZEEDSQFRUFJUHSCWHEIFIIVYQLLEDQTOQWYGKWBZCOWLVFZYMHKNBJEJBNIJTVLDOXNVOMGXJIDBFCSIQOWNHZRUHRMPCKAWQJQTCXTGELKZXXVZRUPDVWKEKW");
    msg.timeout = 26192U;
    msg.contents.assign("IIOWRTBVQSTDJALTJLPWSJMYFRWZDWUVDXEJAUNJBMCPNRIKJFUWOQMDXMMSLYEFILXQZJFZYGNSHSGZRGVEVQQKYUMCICZETQPHMLLADKBIOEFVEFAKTTUZINHBQCKJCNGVWWXFVWSHQZCUHHFWPOMWLXUCOZEYNTOGQAISOTLHGTOXJSXKUDLAFVHXDPDBNBPCA");

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
    msg.setTimeStamp(0.7872942578673084);
    msg.setSource(61796U);
    msg.setSourceEntity(76U);
    msg.setDestination(14744U);
    msg.setDestinationEntity(208U);
    msg.number.assign("DLZLFNTKQZCADRHABVVAQAXVJEXVMXGNONHSUBJK");
    msg.timeout = 35398U;
    msg.contents.assign("GLSAJDDRPZXJHFEVLYVCKHRCVSZTNHBCMIGDGRMODWKOUYERXNBAJUXNBZYIPEMYKPPYKXMDKDBKXTJKVLHZXNUHJPKGNXCUHSHKLFSYNBAOSWSCKMNBFZJDOYEQORILVWMCGLMAAIUOWUFNSGSOIZVEJXOWLIPPGJIGXQGFRPLFZBYZXSBDHZWGVDBB");

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
    msg.setTimeStamp(0.6533187382344219);
    msg.setSource(36235U);
    msg.setSourceEntity(206U);
    msg.setDestination(55548U);
    msg.setDestinationEntity(147U);
    msg.seq = 3949607599U;
    msg.destination.assign("UBZZHOXIOLNYULDKQZTMRWGGZQHRPDKGBQGZCJKWMNIEMTWGTNELUQVRFHLECLZROHXEJGFJVPQRNKUKRDZFIJBBTPVHOLNDMAFZAVAVDVDTVUCXCFWYNJPYPKOTQAZPWHGFQOOVYYJAYJLTEUSHDEYESACILSXVWWPIXSDMSSAJBKEXB");
    msg.timeout = 43950U;
    const char tmp_msg_0[] = {80, 67, -108, 15, 83, -41, -99, 5, -22, 89, 28, 82, -22, 57, -70, 3, 27, -29, 52, 60, -118, -97, -115, -71, 65, -84, 63, 42, -100, -92, 21, -124, 79, -110, -60, -104, -125, -10, 101, 66, -55, 95, 74, -38, 110, -104, -111, -74, -97, 116, 111, 122, -62, 74, 34, -112, -19, 55, -10, 72, -25, 43, -52, 74, -53, -20, -104, -23, -95, 66, 126, 35, 39, -45, 18, -106, -52, 58, 73, -127, -124, -67, -1, -32, -86, -13, -125, -52, 48, 32, -111, 67, 43, -109, 106, 44, -70, 126, 11, -126, 62, 35, 118, 5, -34, -122, -73, 56, -41, -83, 35, 24, 59, 50, 21, 3, 107, 27, -21, 105, 114, 63, -37, -8, -79, 52, 91, 94, -55, -46, -31, -96};
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
    msg.setTimeStamp(0.22985982858150722);
    msg.setSource(63747U);
    msg.setSourceEntity(106U);
    msg.setDestination(46079U);
    msg.setDestinationEntity(254U);
    msg.seq = 50015326U;
    msg.destination.assign("CGQNPKLNLFIIHPMNOLMTWLYHKOZTJCCBDENPGSW");
    msg.timeout = 6724U;
    const char tmp_msg_0[] = {-77, 96, -71, 75, -83, 99, -96, -48, -69, -103, -59, 41, 55, 50, 124, 74, -51, 2, -62, -18, 9, 89, 110, -69, 1, -32, -33, 23, -9, -14, -19, 61, 51, -8, -25, -80, 45, 93, 110, -44, -51, 59, -125, -62, -119, 76, 110, 36, 90, 37, 41, 91, -117, -121, 105, 31, -125, -73, 80, 6, -121, -104, 84, -60, 13, 114, -30, 57, -59, -89, 75, 82, -73, 31, 53, 88, 108, 57, 28, -40, -30, -128, -68, -112, -81, 66, -125, -80, 34, -51, -94, 83, -99, 74, 60, -47, -23, -57, 31, 27, -2, -114, 7, 114, -110, 68, 36, 31, -117, -110, -8, -99, -10, 30, 67, -58, -16, 51, 118, -64, 8, -23, 34, 64, 1, -58, 12, -23, 90, -13, 71, 21, 95, -43, -5, 92, -67, -54, -59, -43, 1, -44, -10, -125, -1, 75, 125, 102, 11, -31, 100, -118, -6, -35, -32, -108, 74, -117, -44, -58, -102, 18, -87, 29, -33, 57, -117, 36, -15, -17, 95, 107, -66, 118, -40, -37, 102, 66, 37, 49, -43, -38, -127, -83, -4, 80, 108, 36, 56, 95, 2, 99, -108, 75, -89, -109, 105, -108, -75};
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
    msg.setTimeStamp(0.5081932705450284);
    msg.setSource(45252U);
    msg.setSourceEntity(37U);
    msg.setDestination(50289U);
    msg.setDestinationEntity(177U);
    msg.seq = 4140778816U;
    msg.destination.assign("LVXNPZBKQRPOCRIQDGQZFUBZMYKYPXSBZAXDDFTDFJJSFOXHDVWPGCTVUHSQBQCOGOTXKWNWDAPNYHXWWFJYPWUSBXOIFHTGQDYZLTIYFJLBKSZQVPGXEDBMNJIRYMHNWRIDYEMANCHUTUVMRQKCEGNPLSYDUCVUFFAGEPGXUZEZIMNZLTRKN");
    msg.timeout = 33185U;
    const char tmp_msg_0[] = {2, -42, 50, -24, 18, -56, -99, -55, -39, 70, -115, 115, 90, -59, -9, 61, -117, -20, -39, 47, -60, -112, -126, 50, -105, 86, 8, 40, 42, 84, 85, -104, -71, 111, 85, -14, -6, 52, -7, -14, 12, 44, 54, 86, -20, 5, 88, 31, 120, 61, 110, -113, 76, -41, 17, -99, 103, -66, 35, -3, 117, -36, -94, 92, 42, 108, -110, -47, -54, 51, -65, -15, 81, -30, 66, -103, 119, 17, 81, 3, 19, 92, 86, 107, -127, 21, -28, -80, -104, -65, 26, 19, 117, -121, -103, 55, 79, 126, -18, -4, -36, 103, 52, 79, 82, 70, -125, 76, 32, 96, -93, -124, -8, -99, 106, -123, 106, -39, -32, -39, -25, -65, -8, 3, -102, 29, -87, -16, -76, 82, 76, -72, -49, 20, -74, -63, 18, 66, -21, -5, -125, -57, 44, 17, -40, -20, 82, -95, 30, 97, 28, -119, -71, -26, -22, -82, -8, -37, 28, -85, 112, 13, -101, -116, 121, 13, 124, 53, -45, 105, -121, 13, -86, 14, -35, 34, -80, 68, -75, -17, -68, 81, -44, 117, 4, 24, -74, 71, -125, 121, -113, 97, 82, 95, 21, 111, -48, 111, 65, 87, -101, -49};
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
    msg.setTimeStamp(0.5826399656372028);
    msg.setSource(24073U);
    msg.setSourceEntity(211U);
    msg.setDestination(3626U);
    msg.setDestinationEntity(45U);
    msg.source.assign("HKKBEGOOEFCRUPXUWITJZWJVPTNEOSDDFLDDZYYSPVRCTYLJJFVOANQLVMMOTYWGAFWLPSXTFWGSKILHQQSWWMZGCAAUJKWKSHFCQYXXNQMPTGGQIURFOB");
    const char tmp_msg_0[] = {119, 102, 97, 116, -109, -38, 54, 14, -77, -116, 14, 68, 53, 78, 98, 70, -43, -32, 84, -89, -26, 41, -21, 44, 18, 90, 107, -72, -85, -52, -112, 126, -122, -58, -48, 94, 47, -51, 56, 32, 105, 59, -22, -93, 12, -14, -55, -93, 77, 33, 91, 14, 68, 18, 102, 108, -42, 100, 1, -37, 117, 20, 58, 14, 81, 26, 28, 27, 118, -30, -58, -60, 101, -89, -46, 75, 23, -68, -24, 43, 103, 39};
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
    msg.setTimeStamp(0.5163409487306105);
    msg.setSource(45289U);
    msg.setSourceEntity(28U);
    msg.setDestination(43940U);
    msg.setDestinationEntity(215U);
    msg.source.assign("WAUUEVJRBCBKVKORLZADZGIVCKXLQPQUFZEXLVBINRNQONMBP");
    const char tmp_msg_0[] = {-77, 115, 82, 119, -2, 77, 19, 90, -116, -125, 56, -37, -66, 54, -51, -58, 96, 32, -87, 63, -61, 98, 87, 99, -128, -18, 9, -99, -21, -65, -82, 8, -126, -48, -58, -77, 38, -18, -95, -1, -71, -73, -17, 109, -126, -2, 23, 111, 48, -78, 91, -87, -111, 25, -103, -57, -81, 20, -109, -95, 78, -41, 75, -58, 25, -123, 45, 81, 18, 66, -100, -52, -27, 74, -115, 19, -119, -109, -111, 28, 118, 29, -105, -34, 20, 23, 39, -74, 12};
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
    msg.setTimeStamp(0.6882163922459547);
    msg.setSource(24941U);
    msg.setSourceEntity(232U);
    msg.setDestination(55210U);
    msg.setDestinationEntity(125U);
    msg.source.assign("YOCRSJAKMJJXLYUKVAUWYGDDCQTOEPWRWBPLTTONYTDAYZOFILVVPFKGIOMJGMHVPDFZBATAHLXMIBXAESYKLDVXAJTALANNKZOXSZGHTHLNZXXWBCJDJMKIQOGSRBPPZFRRZKROVEDJIWSDRMECVHSHXUKOLFCPVZAMBEUCRZQWULEXVPFUGJUSLKIICFC");
    const char tmp_msg_0[] = {-106, -67, -66, 13, 23, -114, -7, -109, -114, -51, -104, 27, -57, -42, -54, -88, 85, 25, 36, -20, 110, 34, -18, -112, 70, -64, 43, -24, -93, 37, -108, -36, 41, 22, -108, 13, -49, 74, -2, -30, 43, -99, 102, -116, -69, 46, -119, -124, -46, 87, -36, 112, 63, 70, -112, -54, 97, 100, 121, 7, 12, 110, 47, -108, 26, -60, 84, -111, 66, 3, -57, 117, 84, -30, 71};
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
    msg.setTimeStamp(0.2787378643342684);
    msg.setSource(49731U);
    msg.setSourceEntity(127U);
    msg.setDestination(29106U);
    msg.setDestinationEntity(202U);
    msg.seq = 4127717337U;
    msg.state = 175U;
    msg.error.assign("SBQRDQDBVCWKXKTWJCDPTWIJVPPHGNAFUFVRDRSJWLPHWJULUQQZWUYBGZGCZDSEAYJJOAPMQNVUTBOQREVXQCUFFSGAJZKKLPASMHFXXVYXCPOFZVJAUKRSATCRIUMHNIPMUXECIJLTTNHKOTXCPBENGOTNHMCIWZXYMAGOYNRSBGCELIKGLVTNMWLBPSAOQZJFIBMVHSNRTUED");

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
    msg.setTimeStamp(0.05211090299091814);
    msg.setSource(21136U);
    msg.setSourceEntity(145U);
    msg.setDestination(54650U);
    msg.setDestinationEntity(58U);
    msg.seq = 629958139U;
    msg.state = 197U;
    msg.error.assign("MGBVFLAVIXPVMFPO");

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
    msg.setTimeStamp(0.22402816510312396);
    msg.setSource(53663U);
    msg.setSourceEntity(128U);
    msg.setDestination(56078U);
    msg.setDestinationEntity(7U);
    msg.seq = 1757710510U;
    msg.state = 163U;
    msg.error.assign("IUXJDMWVCCAQZMSDJBAOBUVYPTSWTJLIKYYJPGSOUPXBOBZBSRLMPFLYHYXTULMXRQNXQTHBLNVELRVPPXRFQMAWKOWJCHHOGZATKLSFMPDZLPSIEOWRZYAWMLKIIMTCEHAULDKEUKKWKIYVCUHFAZGYDGNQBXVDNBRNCOGSZADWTU");

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
    msg.setTimeStamp(0.2648311224203128);
    msg.setSource(54356U);
    msg.setSourceEntity(127U);
    msg.setDestination(9346U);
    msg.setDestinationEntity(56U);
    msg.origin.assign("CSBLJWOZDPXNVQFTDQXITEXTFTHCBJCOVSFRRPMUIYKUCMGDCTCHBAGEENMIMKGYDMJQXUE");
    msg.text.assign("YGKTCWVZGJUYCRLEZVAGNFVSZDQQASCXVGECNYUQFJPVFGZMFBEOU");

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
    msg.setTimeStamp(0.8064587198777046);
    msg.setSource(38191U);
    msg.setSourceEntity(43U);
    msg.setDestination(33811U);
    msg.setDestinationEntity(136U);
    msg.origin.assign("MBWWQSGZNEHMKPHRZYLGLDCEJUKJVZULKQFUEYMNTHAFBFQQYSGDROAHXUVJZIXVKYFRQGWAXSABSENJXNMXDBTEPPBRFGVQZXAPTSHXIGTSOKQLGIMYVDCOILYUGJYRNWVETXPUFUNLSVDREWBFOYBGPXYBIRJWCKCVEWOMBQJICMTIHIZDFJAKTADMJWCHMPCOJZZGECAILKZODRYHH");
    msg.text.assign("VCMMJAGXZEMBEPOGCLHAHULQJIVCBRUGYAIMSHTQGNZYVCUIQYJLWHWPDVRWDVATPXVHRHZEPWFFIWDDAQMBWXNKXWBFLCDIBMZPAKATUDMNAYFKETUIPJINOFGZKWOBMEFNEOAIXSLXLCQYGFXJEKBCHZAVMGJTOUHRJRNRPXVSZHYHWFVZRKJSLKLPSFDQBIPOCTXTDO");

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
    msg.setTimeStamp(0.6929030987823771);
    msg.setSource(1322U);
    msg.setSourceEntity(2U);
    msg.setDestination(1138U);
    msg.setDestinationEntity(147U);
    msg.origin.assign("SEBZFFQURSYHCSGYSHJHTQAUVBTOWXKCQQEOLGDUHFHXJBILYQGLIYMNUYKBBMMIEHQKRMKFHFNLBWKTMAXHFPZUDCVEIMXBJVLRYDMNWVVCAXBVDGDZSOIPQOGOAKRNNEEPDYACTUVPQOZURUVBEGGTGDCJGPCHQIFZTMMJXGZWFIJXONVLSALNUWRSBWALNYMWYOEKFACIEQXHPVZ");
    msg.text.assign("SRYJNQMPRDTVFOUKMGKDSAVZGAUPHXJAGCZXMMJVYSRFEPISSLJADGGIPPWWJJUCXRRLUBVLZLDBGGCANIHYEHNLIEYMNZBI");

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
    msg.setTimeStamp(0.04282888935017315);
    msg.setSource(34031U);
    msg.setSourceEntity(65U);
    msg.setDestination(43155U);
    msg.setDestinationEntity(252U);
    msg.origin.assign("FKSTMQORCRFDPVJDXRYNBXCUZEMSPRFYRPOJAALQGFEJRUXZMVWVAXQNHCNXNSKYHOOUBPDJBNRKAQLCLSGWXIOUFHYWEAHBKUQLRKNHUDTFYBIIIOQRCTVDTTHRJPSHAINEZPHEUUJLWVIFVSZWTYMWZOEIBWSVGMYXUOWGM");
    msg.htime = 0.8545947185444339;
    msg.lat = 0.3815739595370057;
    msg.lon = 0.6766411884222664;
    const char tmp_msg_0[] = {-100, -48, 107, -88, -3, 106, -99, 25, 117, -40, -85, -78, -66, -20, 116, -55, 68, 94, 40, 51, 41, -45, 75, 41, -57, 67, -92, 37, 49, -68, -103, -87, 5, 54, -79, -21, 120, 28, -79, -34, 16, -94, -10, -45, -65, 66, -109, -78, 73, -42, 94, -90, -58, -62, 114, 81, 12, -66, 70, -77, -80, 28, -41, -111, 72, 66, 23, -26, 13, 25, 12, -100, -91, -48, -124, 9, -26, 74, -120, 107, 93, -116, 40, 24, -92, 28, -114, 19, 96, 16, -48, -116, 54, 19, 56, 85, -36, 72, 20, -121, -45, -112, -19, -45, -68, -48, -82, 74, 22, 25, -108, 6, 69, -76, 80, -4, -73, 106, 19, 29, 74, 70, -120, 33, -50, 86, 119, -55, 27, -123, 114, -61, -101, -79, 79, -91, 46, -123, -86, -119, 3, -84, 85, 63, -64, 38, -64, -47, 64, -60, -115, -29, -47, 43, 87, -120, -95, 76, 99, -43, 125, -47, -72, 92, 58, -71, 88, -111, 26, 99, -93, 7, -21, 8};
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
    msg.setTimeStamp(0.7608621483619159);
    msg.setSource(51089U);
    msg.setSourceEntity(209U);
    msg.setDestination(4170U);
    msg.setDestinationEntity(110U);
    msg.origin.assign("JDPYPPNFPKFLADHTGWTBPNEGEMYSFWMEEXZHUHLB");
    msg.htime = 0.768600598087832;
    msg.lat = 0.5031535740318639;
    msg.lon = 0.49010209674292626;
    const char tmp_msg_0[] = {-16, 34, 50, 104, -93, -80, -57, -59, 110, -58, 31, -51, 26, -83, 118, 40, -80, 52, 111, -3, -52, 28, 116, 97, -21, 33, 109, 48, 38, -23, 41, -15, -19, -40, 93, -87, -54, 85, -61, -40, 40, -32, -87, 67, 80, 85, 55, 59, 45, -125, -90, 31, 13, 74, -49, 49, -72, 76, 65, 112, 34, 115, 74, 120, -61, 50, 9, -128, -74, 74, 75, 53, -97, -5, 64, 32, 49, 8, 16, 57, -121, 57, -65, -64, 37, -60, -83, -4, 44, -32, 0, 1, -11, 56, 118, -93, -106, -43, 49, 2, 80, 19, 55, 62, 96, -94, 118, 77, -32, 39, -20, 52, 126, -98, -28, -14, 119, 105, -102, -95, -122, -73, -65, -47, 81, -126, 6, 51, 65, -94, 18, 13, -22, -88, 31, 10, 125, 80, -14, 99, 42, -47, -88, -1, 2, 44, -126, -30, -95, -40, -94, 35, -15, -120, -77, -113, 117, 39, 81, 27, 58, -82, -111, 103, 37, -75, -78, 65, 2, -33, -118, -21, 93, -31, 119, -15, 29, -105, -2, 53, 6, -107, -11, -47, -35, -5, 30, 107, -98, 38, -111, -127, 36, 2, -69, -15, 52, 111, -48, 10, -125, -92, -108, -124, -91, -64, 96, -62, 89, -124, 19, -107, -18, 109, 124, -106, -41, -5, -99, 51, -83, -33, -13, 97, -27, 3, 91, 62, -72, -4, -80, 11, 38, 96, -52, -28, 55, -24, -26, 82, -80, -98, -15, 20, 70, 57, -110, 33, 67, 97, 114, 34};
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
    msg.setTimeStamp(0.580621815352516);
    msg.setSource(39490U);
    msg.setSourceEntity(42U);
    msg.setDestination(25470U);
    msg.setDestinationEntity(141U);
    msg.origin.assign("BMDKAPDTWQWJJLKIKOFRHMTOPKTNAFNKRDNQIYWPBPJBRCANNANJSZQFOZECIXPBRYFSUGNZQSUDEZFZUDCAUGMJTFCSOBFMVMXUNXDWHVSQVOITEJVI");
    msg.htime = 0.0006170053045668755;
    msg.lat = 0.014074151571150773;
    msg.lon = 0.8301720551006121;
    const char tmp_msg_0[] = {-47, -58, -108, -53, -11, 76, 86, -119, 12, 126, 63, -87, 77, 17, -41, 121, -84, 119, -21, -33, 91, -35, -29, -62, 46, 27};
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
    msg.setTimeStamp(0.9071648862126265);
    msg.setSource(31250U);
    msg.setSourceEntity(99U);
    msg.setDestination(20013U);
    msg.setDestinationEntity(111U);
    msg.req_id = 30883U;
    msg.ttl = 17586U;
    msg.destination.assign("FQLDHPNVLYPQLMPBOVNAZFTDOZLXRXWTRSKNCZCWAIXJJTRMQEHNWXENAIUKDYKMYUMBBPJVJFXAGDAXKRTLFSORLGIDLIUUGSOHCBRMVCZYYQ");
    const char tmp_msg_0[] = {-6, 82, 49, -93, 25, 16, 74, 41, 119, -93, -125, -42, 19, -2, 98, -113, -85, -8, 102, -2, 86, 57, -111, -100, -73, 8, 86, 71, -104, -67, -15, 103, -59, 68, 90, 78, 83, 68, 53, 123, -80, -110, 125, -96, -110, -76, -32, -61, 105, -18, -49, -50, 111, 39, 35, -24, -48, -26, 106, 43, -17, 37, -44, -9, -63, 4, 72, 108, -8, -55, -91, -6, 78, 57, 63, 76, -107, -67, -1, -86, -75, 115, -38, -84, -13, -112, 103, 94, 6, -112, -14, 113, 87, 111, 120, -45, -41, -10, 26, -48, 99, -53, 24, -94, -33, 120, 30, 111, -102, 17, -2, 43, 63, 12, -102, -80, 44, -122, 41, -50, 96, -126, 56};
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
    msg.setTimeStamp(0.6578024159347812);
    msg.setSource(7620U);
    msg.setSourceEntity(178U);
    msg.setDestination(6050U);
    msg.setDestinationEntity(254U);
    msg.req_id = 7981U;
    msg.ttl = 3000U;
    msg.destination.assign("FZMRGMMDAPRZCQDVMHFXJOWYVAXYFHSLPHGHUOEXBUTJPSWXNQZKTUCNSNUJEDSYAGXCLMACBJFYXQQEDHKRLXILMPGTIEIBENVBIQIDNCGNCYAZBMTSCRMTFXHBJCCUNVRKSKVVYHEDHARHOUQJFFPDTFULIPQGAZRDWQQIAVNSZEOIKLXLRXTKJKVMPGW");
    const char tmp_msg_0[] = {-114, -107, -30, -100, -73, -116, 12, 85, 15, 18, 38, 77, 56, 37, -59, -35, 65, 35, 50, 91, -40, 38, -117, 116, -44, 28, -19, 64, 70, -99, -62, 12, -102, -22, 14, 43, 60, 95, -13, -17, 52, 87, -84, 92, -56, 57, -112, -49, -64, -101, -45, 66, -74, 110, 68, 106, 62, -10, -6, 57, -5, -118, -3, -107, 20, -25, -126, 16, -3, 106, 66, -70, 49, 89, 64, -42, -54, 126, 115, -63, 2, 114, 49, 108, -75, -102, -81, 40, 96, -88, 75, 3, -55, 73, -1, 113, -78, -24, 79, -108, -109, 82, 18, 115, -101, 90, 123, -22, -83, -26, -41, 76, -127, -95, 25, -108, 45, 42, -55, 34, 61, 96, -77, 124, 3, 11, -71, 95, 33, -5, 114, -72, 121, 66, -56, 89, -3, -125, 82, -94, 5, -115, 46, -57, -98, -21, 104, -31, 112, 58, 52, 42, 97, -113, 57, 27, -50, 88, 46, 76, -12, 75, -7, 32, 97, 50, 27, 25, -121, -77, -77, -34, 56, 0, -76, -64, 84, 87, 53, 23, -42, -116, 0, -55, 86, 97, 12, -1, -7, -44, -66, 9, -13, 59, -4, 43, 0, -17, -121, -37, 48, 104, -102, -88, 60, 85, -11, -70, -116, -106, -19, 8, -111, -118, 92, -82, -26, -69, 100, 100, -53, 50, -37, -5, -16, 5, -24, 120, 43, 125, -24, -46, 96};
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
    msg.setTimeStamp(0.22697710813551508);
    msg.setSource(1118U);
    msg.setSourceEntity(96U);
    msg.setDestination(41488U);
    msg.setDestinationEntity(104U);
    msg.req_id = 13136U;
    msg.ttl = 42043U;
    msg.destination.assign("LKSHCZIUBPSWRFELPXBOZNCFCIAJ");
    const char tmp_msg_0[] = {44, -116, -44, -36, -38, -84, -123, -104, 40, -122, 124, 39, 31, 62, 2, 52, 89, 67, 17, -96, 74, 109, -119, -52, -20, 107, 73, 83, 58, 81, -101, 80, 8, -35, -116, -55, 119, 86, 15, -86, 49, 100, -41, -35, -101, -85, 41, 88, 102, -75, 14, 13, -101, 69, -123, 82, 2, -124, -79, 3, -125, -62, 125, -40, -89, -27, 105, -67, 46, 9, -54, -17, -103, -115, -52, -87, 26, -109, 15, -61, 84, 124, 93, -54, -101, -77, 73, -11, 8, 21, -27, 53, -81, -112, -98, -103, 74, -81, 45, -57, -27, 23, -22, 7, 32, 120, -104, 46, 85, -28, -35, 82, 65, 1, 54, 30, 71, 35, -89, -54, 73, 117, 40, 26, 4, -98, 79, 19, -34, -2, 115, 36, -55, 45, -119, 88, -12, 80, -84, 77, 67, -81, 88, 61, 19, -76, -50, -112, 48, 122, -104, 47, -49, 26, 122, 12, 70, 46, -66, 17, -61, 119, -51, -79, 18, -25, 76, 77, -123, -48, 121, 47, -16, -102, 42, 41, 4, 97, -90, -72, 58, -64, -29, 48, -75, 115, -89, -33, -28, 126, -48, -80, 69, 20, -14, -25, 100, 108, -92, 99, 89, -128, 70, 103, 51, -47, -49, 20, 59, -98, -24, 81, 44, -123, 44, 14, -19, 120, 111, -121, 42, 122, 24, 46, -120, 60, 75, 72, 17, 15, 37, -82, -29, 47, -94, 90, -43};
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
    msg.setTimeStamp(0.33291591543688404);
    msg.setSource(43850U);
    msg.setSourceEntity(116U);
    msg.setDestination(20308U);
    msg.setDestinationEntity(35U);
    msg.req_id = 1059U;
    msg.status = 36U;
    msg.text.assign("VBKZQENGMJWCUWFFKQJFHCPTOGMIXSOVCLWYSKTXTYNBSMPELDZRFCRAIAXZWUCWNLINZYYNZSUWQNDUNQIHIQEWJDVCGXMVDIYZPTYVOUOYAVGBCWCQFEMRIUGFQJIHASKWMHQGJKTCHRVKFLJSUREWOHPSVGPOBMKONGZLUMXLUHBCBYQHGZDGNRLLAJOIKLTJTTOAOAXEIJ");

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
    msg.setTimeStamp(0.4105868060352579);
    msg.setSource(21150U);
    msg.setSourceEntity(158U);
    msg.setDestination(53675U);
    msg.setDestinationEntity(3U);
    msg.req_id = 42800U;
    msg.status = 49U;
    msg.text.assign("EKUQNKQNLXANEXUXBCVSIJVZWTJKJRRVWJXWMLTQMSQCHYAXEUANYUZADVDXIBDRHBKCMDBLFUJCFHSTZPRSTQPWBZFNODFGDGQULZWCWDSIEPWBFUASPOGUOKCWDMHYGHBIWTJOALHZMOHMULPTMNVYIWGGZRMDNAXYQYUVGSQCVFTIEHTREXJPFJ");

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
    msg.setTimeStamp(0.7359727499532152);
    msg.setSource(3450U);
    msg.setSourceEntity(137U);
    msg.setDestination(15492U);
    msg.setDestinationEntity(15U);
    msg.req_id = 30500U;
    msg.status = 148U;
    msg.text.assign("MSFXOMIMDMPXORIINQHUCHIGYHYQKUQPQPYKBHTVJWJKAHDZNSBZACUTIUSCFNFDQHDPYHJEDJSZOKZPVWORFFRNAQVBLGGDNDYUXRGMVXKNSNPZUHRSEPJOXITTALGJKLLYCGBFOFEOGGWSBCTKYSYIVRHEJWVBLXODBE");

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
    msg.setTimeStamp(0.1343959711551591);
    msg.setSource(31071U);
    msg.setSourceEntity(29U);
    msg.setDestination(60937U);
    msg.setDestinationEntity(87U);
    msg.group_name.assign("SJJZSPCCBCCKFRKWQVTMTQTFDSVSBIADFWYUBGULHJIIPCZXQVMLNYDUWFJMMPTVEYEXOXXOULNXARTWMKYQZDHGVTFP");
    msg.links = 1149693486U;

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
    msg.setTimeStamp(0.39559997767642463);
    msg.setSource(40478U);
    msg.setSourceEntity(82U);
    msg.setDestination(48907U);
    msg.setDestinationEntity(59U);
    msg.group_name.assign("OTUEOZHBIAESYVZBDNKMTVZYUNTCASLGRNLLVFSWWLDKVBTTWRKRXPEFDIIYQBCDHHYKLZCKSZGCYTXPMKUUJLQCAGXUFIKWHDBAQDMRQPMIJFNEBEMAYWWJAMVGRCHZMGAJEVUGODIRMVHBCNPRLJWSKILOTOZBAEUUOQRBTEQWGPNXHGNPPKXJZAYYSKMSUFAPQNOFEWSJINGOQYLVQRPYLJVXGCZPJROS");
    msg.links = 422689339U;

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
    msg.setTimeStamp(0.10986606546821032);
    msg.setSource(11567U);
    msg.setSourceEntity(190U);
    msg.setDestination(49249U);
    msg.setDestinationEntity(243U);
    msg.group_name.assign("MNRFZYHZICLHIFAPZQLSAZVSHNUXUWALOWYMXMQQTZEIKAUUKZAFRONYPJCTGRYCNJGTGTNVCEVGRBFRNQWHOAGOCAVJLMWRFAXSDYLWKBSXJXIEWQPKEHAECCLZXQIQVCXGTJXFGRWYBBNJTK");
    msg.links = 1823111598U;

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
    msg.setTimeStamp(0.9969665139448076);
    msg.setSource(11168U);
    msg.setSourceEntity(53U);
    msg.setDestination(10957U);
    msg.setDestinationEntity(140U);
    msg.groupname.assign("JFAVBSOYYQEKZAPZIKKRCLYNOPVOGNDDMLUXWCRJTTRUBLYEDXVIRGKHBHSICNYQABMIONNFWMPWTEXXVCOHYBGHTHFCUULJSTELKBUGDAAFYPRZAMTQEHZQISKSXYTHZRHPJOWQBLQUGGTZX");
    msg.action = 18U;
    msg.grouplist.assign("RDZZEGTWFDWEBMLLNLCXBJZ");

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
    msg.setTimeStamp(0.8049104844157785);
    msg.setSource(49753U);
    msg.setSourceEntity(45U);
    msg.setDestination(42741U);
    msg.setDestinationEntity(97U);
    msg.groupname.assign("HJORDAPJDOJIYOYOXYPUYFPJFIWBLVTRZGQQCQECDIHOLXSAD");
    msg.action = 58U;
    msg.grouplist.assign("GOQPPITGZPVUSJRZYHWWWNDHVCRKENVRKBHNOJORIGICKULXGKBAPEIFISRDKNQBGOEEZWYNEWWCVMZUXHBOMPBTPXSDDNAZYJOBZGSHILUIXEVWDGUAKMTMMYPZFUFAAJEPAVMYROT");

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
    msg.setTimeStamp(0.6117210167815667);
    msg.setSource(37492U);
    msg.setSourceEntity(80U);
    msg.setDestination(28627U);
    msg.setDestinationEntity(210U);
    msg.groupname.assign("CBAOECRAFDZAKUMIWGHUWCDTQSQRYIQQVZGQVZJOXSSXZYVBEGJOVYXKCNHJRASAIXIUFKUEKYDSPEBSDCLZOXGUVLIFTLZKRPBPBWKDZHJPAJLIMTD");
    msg.action = 89U;
    msg.grouplist.assign("JPDZUXFGRVEEBKMYANIKHYVWARRIFFNRPZIAIGDWLLXYLPEEHOUQFOGEDALWRQHVYSHMCUBS");

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
    msg.setTimeStamp(0.5904016100403736);
    msg.setSource(29003U);
    msg.setSourceEntity(59U);
    msg.setDestination(18699U);
    msg.setDestinationEntity(0U);
    msg.id = 254U;
    msg.range = 0.04350424655971252;

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
    msg.setTimeStamp(0.06886808578329895);
    msg.setSource(7569U);
    msg.setSourceEntity(177U);
    msg.setDestination(20277U);
    msg.setDestinationEntity(175U);
    msg.id = 60U;
    msg.range = 0.7731855072856566;

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
    msg.setTimeStamp(0.4225478923786651);
    msg.setSource(24188U);
    msg.setSourceEntity(226U);
    msg.setDestination(42458U);
    msg.setDestinationEntity(60U);
    msg.id = 175U;
    msg.range = 0.0723156841494218;

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
    msg.setTimeStamp(0.04952587299328737);
    msg.setSource(57214U);
    msg.setSourceEntity(68U);
    msg.setDestination(64891U);
    msg.setDestinationEntity(62U);
    msg.beacon.assign("ZMWVMRAYFURJPNQZOQOGUBOSNZKQSNZOBCCVJBVZTFROLYEJLNPKGNASIIUVWDMFXLWIUDHZOELEXUEBCOYZTTKGXTCOQLQCBMAMNQDBHRCKVBLNJEHGCJIASHTBTBXGRSTKWFXNSVKDIXEYVDWEIXRUFGIYSBZDPJHFMLC");
    msg.lat = 0.13122353271477916;
    msg.lon = 0.7182458967709412;
    msg.depth = 0.008007573004334967;
    msg.query_channel = 45U;
    msg.reply_channel = 197U;
    msg.transponder_delay = 190U;

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
    msg.setTimeStamp(0.5289815974710145);
    msg.setSource(778U);
    msg.setSourceEntity(142U);
    msg.setDestination(15609U);
    msg.setDestinationEntity(147U);
    msg.beacon.assign("HJGLTZTLNSSICBGJPQUPHLOKBMOSFENBXDWFAFVCZNNQKYMGCOMVARTMRUSRYPCELEFJVDNMFYITDJRCGIKWQUQZWUQGVTKJAFTGVLWQIDYRZWRRABXECSLJITCSTLHKLXPEOPUCNGSIPJBXBZZXCMESNOUUYWSXVDPXQAVLFXUJVUNFHEDMKYZAGMGWAKPDZKBMEEFAH");
    msg.lat = 0.17736723194503745;
    msg.lon = 0.27277072872909847;
    msg.depth = 0.5173674637427859;
    msg.query_channel = 159U;
    msg.reply_channel = 139U;
    msg.transponder_delay = 78U;

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
    msg.setTimeStamp(0.5272040965326308);
    msg.setSource(64994U);
    msg.setSourceEntity(191U);
    msg.setDestination(56039U);
    msg.setDestinationEntity(25U);
    msg.beacon.assign("TFEKVWNXFPRQVPZIRRQVRAT");
    msg.lat = 0.6620231327090482;
    msg.lon = 0.21451340390760332;
    msg.depth = 0.4799920211709141;
    msg.query_channel = 62U;
    msg.reply_channel = 112U;
    msg.transponder_delay = 174U;

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
    msg.setTimeStamp(0.6201314158099911);
    msg.setSource(58500U);
    msg.setSourceEntity(137U);
    msg.setDestination(48637U);
    msg.setDestinationEntity(56U);
    msg.op = 75U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HWGBTLTQUDFAXEITEQNMQXQGTKGCROJMVJAYECNIWVZEWBREUHPYXEFQAMQFOADIIUECANGBMMUASNYZXTKWZOBLTLJAVKHDCKLQUVOPJKSXTBMNRWILHRLJQSRLCYJFVXXLRDNLBOHUWTZTDAHIRGMYYIGSHVNELIZEBAGUYOKSPNFMJWZCPYPYKMXRJSDDASGHVC");
    tmp_msg_0.lat = 0.650983808459095;
    tmp_msg_0.lon = 0.41336480862599834;
    tmp_msg_0.depth = 0.07686455107458634;
    tmp_msg_0.query_channel = 61U;
    tmp_msg_0.reply_channel = 46U;
    tmp_msg_0.transponder_delay = 35U;
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
    msg.setTimeStamp(0.9781374328909914);
    msg.setSource(2471U);
    msg.setSourceEntity(17U);
    msg.setDestination(50363U);
    msg.setDestinationEntity(96U);
    msg.op = 216U;

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
    msg.setTimeStamp(0.21101409069332666);
    msg.setSource(61890U);
    msg.setSourceEntity(141U);
    msg.setDestination(61447U);
    msg.setDestinationEntity(79U);
    msg.op = 92U;

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
    msg.setTimeStamp(0.8368709797458294);
    msg.setSource(151U);
    msg.setSourceEntity(66U);
    msg.setDestination(36720U);
    msg.setDestinationEntity(32U);
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.1106753814020971;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 55108U;
    tmp_msg_0.custom.assign("VMTADSTTZCAQTFQBMHDGVKGASYTUGBJHFKIRFJOQXWCPDPIWDLGFHMQBHXQBQLILULZBBFBMHPXXZWSWPAASHCPWIKMQWHURTXXIXNZUBDWOSNUJNCEYHUJEUKJNAQYFYZKEXECTYANWAEGTOZOFPLMVDNJRPYOKALUGDFSEZNSSNCOJPCVEXVZFVLVEOUEWBZCNGYKDRRXQRLSCDRMISCM");
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
    msg.setTimeStamp(0.6242915262329861);
    msg.setSource(44541U);
    msg.setSourceEntity(108U);
    msg.setDestination(19088U);
    msg.setDestinationEntity(109U);
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.08154266659995624;
    tmp_msg_0.lon = 0.5110352810158844;
    tmp_msg_0.depth = 168U;
    tmp_msg_0.speed = 0.39506903277393257;
    tmp_msg_0.psi = 0.11748224373020755;
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
    msg.setTimeStamp(0.24986481723769927);
    msg.setSource(18863U);
    msg.setSourceEntity(121U);
    msg.setDestination(33864U);
    msg.setDestinationEntity(7U);
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 9818U;
    tmp_msg_0.lat = 0.11655105958437262;
    tmp_msg_0.lon = 0.2946160209819717;
    tmp_msg_0.z = 0.8144886159580786;
    tmp_msg_0.z_units = 12U;
    tmp_msg_0.duration = 41774U;
    tmp_msg_0.speed = 0.6425501528720996;
    tmp_msg_0.speed_units = 143U;
    tmp_msg_0.type = 31U;
    tmp_msg_0.radius = 0.7147988055059445;
    tmp_msg_0.length = 0.8155254322332225;
    tmp_msg_0.bearing = 0.8064198829536433;
    tmp_msg_0.direction = 87U;
    tmp_msg_0.custom.assign("VEPJGRBTXZHCKEFPMMODSMQXVXRLDLDYDSOIITWYJBRUEFOSGANRXDZGKWOOBKASGKRDJFNCLWNBJQGZNTXBNPRUOYHCTYCEWIWGMGOBWQCFIXVUSBAQFCIOMITUVZNZZSZEBSYSWBDLCHJOPRVZKUWIWKMPPZUJGAEMEFOPTAJARLHVFKXAQMFTEHAPAQQTYVSUJBLRFPKRZLEDVUJ");
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
    msg.setTimeStamp(0.31461602635314045);
    msg.setSource(2544U);
    msg.setSourceEntity(162U);
    msg.setDestination(31508U);
    msg.setDestinationEntity(254U);
    msg.op = 75U;
    msg.system.assign("BXRJPCUCCDEPMMDWTTAEVLLFYFZFGJCORBXHRRYFJZNOQIXTCSADSJTOWPLUKLLXJUFWGIBWMO");
    msg.range = 0.5840729623336015;
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("LDGNHCFGCUCREAONGKPJZANBDKFWSZRJGAHDVUOMLKPHMAZHUEEYYOGGKHKANEGFDDRMC");
    tmp_msg_0.op = 57U;
    tmp_msg_0.sched_time = 0.18881501278712232;
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
    msg.setTimeStamp(0.9846471467206793);
    msg.setSource(12772U);
    msg.setSourceEntity(146U);
    msg.setDestination(30574U);
    msg.setDestinationEntity(148U);
    msg.op = 72U;
    msg.system.assign("TVDQDLPVGEUKP");
    msg.range = 0.6924082903998456;
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("JANIEOUZJJZUZXBBSSOBTQCWUXFLDZSGRTHZCEMSNUKFMJ");
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
    msg.setTimeStamp(0.9478803928968357);
    msg.setSource(43795U);
    msg.setSourceEntity(190U);
    msg.setDestination(42079U);
    msg.setDestinationEntity(166U);
    msg.op = 235U;
    msg.system.assign("AGXIVXROKUZGSXIUDJUIKXSRIAHKBJFXFNLRFTONUGZYKSRPAONYGJKOMZXUSHAQKTVXVISFHBWYWCWYCSZPHLOIRUHSVITJMUUALRQWKEZCFBVWLQLGHEEMYRWSCKIKELGPCDXANCTPEFWMAPAFYTBORUVTUEOAXTTVLPDYLZXPIYQMTRYDAVQQDCYEGOLZOQJIWFNEEVBMRMVQQJHH");
    msg.range = 0.9226615181030694;
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.946199129594376;
    tmp_msg_0.z_units = 84U;
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
    msg.setTimeStamp(0.12764422166928502);
    msg.setSource(35585U);
    msg.setSourceEntity(251U);
    msg.setDestination(15104U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.8511408517875829);
    msg.setSource(29389U);
    msg.setSourceEntity(119U);
    msg.setDestination(58544U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.08061440147464505);
    msg.setSource(24399U);
    msg.setSourceEntity(192U);
    msg.setDestination(25398U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.025514533409473072);
    msg.setSource(8007U);
    msg.setSourceEntity(73U);
    msg.setDestination(41052U);
    msg.setDestinationEntity(92U);
    msg.list.assign("PAXXCCIBJOEBPJCGKNRXNVSWKFDYMAAIIMVQPKUQYUIGDLXZEJTXKLZOKDFSSHLBWWBWCFXFFYGDLVYTNVXDEQIFQKZORTJWXHZVUQYHLTGUHJNATGKJCAZBERHUUABNYEHVPESOUMAIMZLNDICPOVJCTVBAWMGF");

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
    msg.setTimeStamp(0.12397686045035117);
    msg.setSource(12276U);
    msg.setSourceEntity(153U);
    msg.setDestination(49523U);
    msg.setDestinationEntity(153U);
    msg.list.assign("RYDVETMWBIYOGLDEHIPYULOYVBQXMXIQULWFMNRONFQNWQGFSDESNLLNTGCBFPTRZTPHQIPBLWSHCKYFMBIAJPZPKZOAHJTBCUDYE");

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
    msg.setTimeStamp(0.1844786670545805);
    msg.setSource(15358U);
    msg.setSourceEntity(123U);
    msg.setDestination(15453U);
    msg.setDestinationEntity(41U);
    msg.list.assign("NWDNYPHVOOWCKJOINDAVUNGAYFINYQDHEXLKTVQFWUXMOESGICPSQDEBVBHHHFTLBXRUZBRKWHSEZRFPMLWWWDYUPVIGKCJTTMTKYANCULVKBGNOTCTPFNLELKHEYASVEOJXZFWXPDIWXKHFZSTBIPROQGSNKSGBJOQTZMJAZJMBBVGSEJSRJLGYRQHWGMIMCHXRQJXJPKIIPRAU");

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
    msg.setTimeStamp(0.7399025927696911);
    msg.setSource(37985U);
    msg.setSourceEntity(202U);
    msg.setDestination(13122U);
    msg.setDestinationEntity(196U);
    msg.value = -6095;

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
    msg.setTimeStamp(0.8925020051459428);
    msg.setSource(21497U);
    msg.setSourceEntity(182U);
    msg.setDestination(50330U);
    msg.setDestinationEntity(71U);
    msg.value = -28001;

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
    msg.setTimeStamp(0.31494893089003484);
    msg.setSource(22963U);
    msg.setSourceEntity(225U);
    msg.setDestination(18279U);
    msg.setDestinationEntity(194U);
    msg.value = -29018;

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
    msg.setTimeStamp(0.7758964528866605);
    msg.setSource(30602U);
    msg.setSourceEntity(25U);
    msg.setDestination(13721U);
    msg.setDestinationEntity(252U);
    msg.value = 0.8464787828078687;

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
    msg.setTimeStamp(0.6898250502127762);
    msg.setSource(52413U);
    msg.setSourceEntity(109U);
    msg.setDestination(41767U);
    msg.setDestinationEntity(123U);
    msg.value = 0.559109652701012;

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
    msg.setTimeStamp(0.7569566200328184);
    msg.setSource(7785U);
    msg.setSourceEntity(219U);
    msg.setDestination(17046U);
    msg.setDestinationEntity(3U);
    msg.value = 0.04407205876749143;

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
    msg.setTimeStamp(0.47835335622520414);
    msg.setSource(12246U);
    msg.setSourceEntity(216U);
    msg.setDestination(58294U);
    msg.setDestinationEntity(53U);
    msg.value = 0.4932341640178656;

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
    msg.setTimeStamp(0.6464828582771381);
    msg.setSource(23665U);
    msg.setSourceEntity(123U);
    msg.setDestination(24486U);
    msg.setDestinationEntity(131U);
    msg.value = 0.2387463969604242;

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
    msg.setTimeStamp(0.6494671264880515);
    msg.setSource(1319U);
    msg.setSourceEntity(26U);
    msg.setDestination(60379U);
    msg.setDestinationEntity(160U);
    msg.value = 0.4681239629831333;

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
    msg.setTimeStamp(0.5165329369511392);
    msg.setSource(58128U);
    msg.setSourceEntity(212U);
    msg.setDestination(42057U);
    msg.setDestinationEntity(188U);
    msg.validity = 33158U;
    msg.type = 180U;
    msg.utc_year = 33240U;
    msg.utc_month = 39U;
    msg.utc_day = 131U;
    msg.utc_time = 0.4484287112686256;
    msg.lat = 0.2079823748747418;
    msg.lon = 0.6635293805162553;
    msg.height = 0.44798430957094226;
    msg.satellites = 41U;
    msg.cog = 0.00044277140381021596;
    msg.sog = 0.15605293447558743;
    msg.hdop = 0.6422251891948959;
    msg.vdop = 0.7715923987964645;
    msg.hacc = 0.7570330008063226;
    msg.vacc = 0.48346867404258853;

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
    msg.setTimeStamp(0.5801298573487249);
    msg.setSource(41833U);
    msg.setSourceEntity(217U);
    msg.setDestination(11857U);
    msg.setDestinationEntity(125U);
    msg.validity = 36290U;
    msg.type = 105U;
    msg.utc_year = 27150U;
    msg.utc_month = 8U;
    msg.utc_day = 180U;
    msg.utc_time = 0.6422874892826612;
    msg.lat = 0.7505945319084485;
    msg.lon = 0.08005408722793872;
    msg.height = 0.8605236342825398;
    msg.satellites = 203U;
    msg.cog = 0.0832047544160166;
    msg.sog = 0.39192266353820504;
    msg.hdop = 0.52852248730105;
    msg.vdop = 0.46634824098302274;
    msg.hacc = 0.6330490693936215;
    msg.vacc = 0.5204355727756963;

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
    msg.setTimeStamp(0.13688679786752678);
    msg.setSource(23117U);
    msg.setSourceEntity(45U);
    msg.setDestination(62494U);
    msg.setDestinationEntity(185U);
    msg.validity = 44381U;
    msg.type = 129U;
    msg.utc_year = 36554U;
    msg.utc_month = 61U;
    msg.utc_day = 40U;
    msg.utc_time = 0.6794486644216133;
    msg.lat = 0.49673167305523114;
    msg.lon = 0.8011075637597195;
    msg.height = 0.7982323305894589;
    msg.satellites = 150U;
    msg.cog = 0.856200345615259;
    msg.sog = 0.8778611067210766;
    msg.hdop = 0.15271999969386352;
    msg.vdop = 0.031122566056610568;
    msg.hacc = 0.8310293609996064;
    msg.vacc = 0.6895261028587705;

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
    msg.setTimeStamp(0.9796759144926129);
    msg.setSource(17388U);
    msg.setSourceEntity(127U);
    msg.setDestination(4627U);
    msg.setDestinationEntity(116U);
    msg.time = 0.9319547736090287;
    msg.phi = 0.6421112313888369;
    msg.theta = 0.1317869818919939;
    msg.psi = 0.2027548412235498;
    msg.psi_magnetic = 0.9863188069067876;

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
    msg.setTimeStamp(0.5011070951155006);
    msg.setSource(58876U);
    msg.setSourceEntity(224U);
    msg.setDestination(46387U);
    msg.setDestinationEntity(220U);
    msg.time = 0.8728133989422652;
    msg.phi = 0.43684739464207;
    msg.theta = 0.1660977161853603;
    msg.psi = 0.7717364841208074;
    msg.psi_magnetic = 0.8499576492545007;

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
    msg.setTimeStamp(0.8923643206514799);
    msg.setSource(18629U);
    msg.setSourceEntity(136U);
    msg.setDestination(2227U);
    msg.setDestinationEntity(127U);
    msg.time = 0.14077649731289132;
    msg.phi = 0.20829121641806359;
    msg.theta = 0.3616537774690035;
    msg.psi = 0.7496043012581185;
    msg.psi_magnetic = 0.8812648958332119;

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
    msg.setTimeStamp(0.9205040610538965);
    msg.setSource(41080U);
    msg.setSourceEntity(223U);
    msg.setDestination(18349U);
    msg.setDestinationEntity(103U);
    msg.time = 0.09389275671027097;
    msg.x = 0.8652305054682156;
    msg.y = 0.022171232535422747;
    msg.z = 0.6777272577986742;
    msg.timestep = 0.47207831030852954;

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
    msg.setTimeStamp(0.47616632046836704);
    msg.setSource(57503U);
    msg.setSourceEntity(133U);
    msg.setDestination(43993U);
    msg.setDestinationEntity(101U);
    msg.time = 0.6477415174973202;
    msg.x = 0.40607516442054525;
    msg.y = 0.8290790923218988;
    msg.z = 0.19612057495707502;
    msg.timestep = 0.9677403859545788;

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
    msg.setTimeStamp(0.49471329589458);
    msg.setSource(22737U);
    msg.setSourceEntity(151U);
    msg.setDestination(27833U);
    msg.setDestinationEntity(105U);
    msg.time = 0.5996421416180949;
    msg.x = 0.11034362459301272;
    msg.y = 0.22715904235201967;
    msg.z = 0.35018170135276583;
    msg.timestep = 0.40791617592762475;

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
    msg.setTimeStamp(0.6049243853833877);
    msg.setSource(45897U);
    msg.setSourceEntity(44U);
    msg.setDestination(18690U);
    msg.setDestinationEntity(227U);
    msg.time = 0.6209272722776352;
    msg.x = 0.8715442455492572;
    msg.y = 0.65612427108173;
    msg.z = 0.7203665802886433;

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
    msg.setTimeStamp(0.01192614895791333);
    msg.setSource(40590U);
    msg.setSourceEntity(9U);
    msg.setDestination(40658U);
    msg.setDestinationEntity(144U);
    msg.time = 0.9648862536088428;
    msg.x = 0.1509709878049591;
    msg.y = 0.9080711523828726;
    msg.z = 0.43960983059306746;

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
    msg.setTimeStamp(0.17466964826753095);
    msg.setSource(43331U);
    msg.setSourceEntity(247U);
    msg.setDestination(17377U);
    msg.setDestinationEntity(28U);
    msg.time = 0.7592415848267614;
    msg.x = 0.8216387527481294;
    msg.y = 0.3994452991338353;
    msg.z = 0.8812625228657381;

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
    msg.setTimeStamp(0.8425757593190972);
    msg.setSource(15328U);
    msg.setSourceEntity(58U);
    msg.setDestination(35607U);
    msg.setDestinationEntity(188U);
    msg.time = 0.013677554339378784;
    msg.x = 0.4160092140540691;
    msg.y = 0.2627805799498749;
    msg.z = 0.783854206283153;

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
    msg.setTimeStamp(0.8569549520484835);
    msg.setSource(57143U);
    msg.setSourceEntity(138U);
    msg.setDestination(9503U);
    msg.setDestinationEntity(85U);
    msg.time = 0.6725417170170412;
    msg.x = 0.8853170097572391;
    msg.y = 0.9165721942981737;
    msg.z = 0.6660442696978112;

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
    msg.setTimeStamp(0.39507965480128693);
    msg.setSource(14125U);
    msg.setSourceEntity(141U);
    msg.setDestination(25799U);
    msg.setDestinationEntity(54U);
    msg.time = 0.8958754842252341;
    msg.x = 0.5874449352856396;
    msg.y = 0.7550468693999178;
    msg.z = 0.5465649337379711;

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
    msg.setTimeStamp(0.5438211410683141);
    msg.setSource(3531U);
    msg.setSourceEntity(184U);
    msg.setDestination(12868U);
    msg.setDestinationEntity(247U);
    msg.time = 0.8244495258869576;
    msg.x = 0.3702984052200011;
    msg.y = 0.2704679240116208;
    msg.z = 0.3675103069259643;

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
    msg.setTimeStamp(0.4620299211297805);
    msg.setSource(65524U);
    msg.setSourceEntity(174U);
    msg.setDestination(55626U);
    msg.setDestinationEntity(86U);
    msg.time = 0.7256622386366754;
    msg.x = 0.3947450103605654;
    msg.y = 0.03224673791182997;
    msg.z = 0.24496006472449317;

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
    msg.setTimeStamp(0.14396793060926627);
    msg.setSource(5434U);
    msg.setSourceEntity(99U);
    msg.setDestination(48301U);
    msg.setDestinationEntity(218U);
    msg.time = 0.17335532656139307;
    msg.x = 0.19133896769574843;
    msg.y = 0.21014017300060683;
    msg.z = 0.07693475166222186;

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
    msg.setTimeStamp(0.5397325344080405);
    msg.setSource(26736U);
    msg.setSourceEntity(105U);
    msg.setDestination(57026U);
    msg.setDestinationEntity(85U);
    msg.validity = 113U;
    msg.x = 0.9580787782523628;
    msg.y = 0.1643926428342949;
    msg.z = 0.9599614579218505;

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
    msg.setTimeStamp(0.296894896369451);
    msg.setSource(63386U);
    msg.setSourceEntity(102U);
    msg.setDestination(63491U);
    msg.setDestinationEntity(133U);
    msg.validity = 208U;
    msg.x = 0.6639675881653283;
    msg.y = 0.9606387399456382;
    msg.z = 0.9182564918114587;

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
    msg.setTimeStamp(0.8732960012168344);
    msg.setSource(3391U);
    msg.setSourceEntity(252U);
    msg.setDestination(5551U);
    msg.setDestinationEntity(93U);
    msg.validity = 49U;
    msg.x = 0.018411289339326897;
    msg.y = 0.6246963899550018;
    msg.z = 0.8833743740989166;

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
    msg.setTimeStamp(0.7243997996536541);
    msg.setSource(30115U);
    msg.setSourceEntity(109U);
    msg.setDestination(47033U);
    msg.setDestinationEntity(40U);
    msg.validity = 140U;
    msg.x = 0.5166115559143685;
    msg.y = 0.9040349133703793;
    msg.z = 0.48066883872024324;

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
    msg.setTimeStamp(0.5109354593900863);
    msg.setSource(16609U);
    msg.setSourceEntity(21U);
    msg.setDestination(3449U);
    msg.setDestinationEntity(128U);
    msg.validity = 217U;
    msg.x = 0.1706143223210489;
    msg.y = 0.1981854255281359;
    msg.z = 0.9168170497647212;

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
    msg.setTimeStamp(0.7319936487940483);
    msg.setSource(45962U);
    msg.setSourceEntity(0U);
    msg.setDestination(48406U);
    msg.setDestinationEntity(195U);
    msg.validity = 34U;
    msg.x = 0.5304670861918278;
    msg.y = 0.224257051491498;
    msg.z = 0.057612339166533966;

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
    msg.setTimeStamp(0.46149771510086746);
    msg.setSource(9949U);
    msg.setSourceEntity(25U);
    msg.setDestination(31667U);
    msg.setDestinationEntity(192U);
    msg.time = 0.015063575288237208;
    msg.x = 0.9394504303306339;
    msg.y = 0.5240366710287698;
    msg.z = 0.07040341360244984;

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
    msg.setTimeStamp(0.7704094326744255);
    msg.setSource(24006U);
    msg.setSourceEntity(142U);
    msg.setDestination(32220U);
    msg.setDestinationEntity(189U);
    msg.time = 0.0709082607873679;
    msg.x = 0.6054861715343799;
    msg.y = 0.4078018426336465;
    msg.z = 0.8780746398220536;

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
    msg.setTimeStamp(0.6894781367093078);
    msg.setSource(61011U);
    msg.setSourceEntity(236U);
    msg.setDestination(14911U);
    msg.setDestinationEntity(229U);
    msg.time = 0.12559979817960099;
    msg.x = 0.2573237664772716;
    msg.y = 0.41665820566877854;
    msg.z = 0.5040398037760325;

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
    msg.setTimeStamp(0.6044985256457373);
    msg.setSource(51440U);
    msg.setSourceEntity(66U);
    msg.setDestination(1049U);
    msg.setDestinationEntity(171U);
    msg.validity = 103U;
    msg.value = 0.2716060921179787;

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
    msg.setTimeStamp(0.32331643207856875);
    msg.setSource(17781U);
    msg.setSourceEntity(164U);
    msg.setDestination(60653U);
    msg.setDestinationEntity(253U);
    msg.validity = 13U;
    msg.value = 0.30290829440519773;

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
    msg.setTimeStamp(0.3608203390917031);
    msg.setSource(32355U);
    msg.setSourceEntity(186U);
    msg.setDestination(28789U);
    msg.setDestinationEntity(27U);
    msg.validity = 207U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.15360444539534113;
    tmp_msg_0.beam_height = 0.7450368643019634;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.1838828927521906;

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
    msg.setTimeStamp(0.1199481404863556);
    msg.setSource(25813U);
    msg.setSourceEntity(171U);
    msg.setDestination(19302U);
    msg.setDestinationEntity(195U);
    msg.value = 0.8476562415287102;

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
    msg.setTimeStamp(0.7348839317322993);
    msg.setSource(15291U);
    msg.setSourceEntity(219U);
    msg.setDestination(29026U);
    msg.setDestinationEntity(57U);
    msg.value = 0.84293329904949;

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
    msg.setTimeStamp(0.05968398123015217);
    msg.setSource(7366U);
    msg.setSourceEntity(40U);
    msg.setDestination(21377U);
    msg.setDestinationEntity(93U);
    msg.value = 0.3369876293250742;

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
    msg.setTimeStamp(0.3313592776143539);
    msg.setSource(32853U);
    msg.setSourceEntity(56U);
    msg.setDestination(5122U);
    msg.setDestinationEntity(221U);
    msg.value = 0.8507784659497676;

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
    msg.setTimeStamp(0.6039513981414177);
    msg.setSource(55511U);
    msg.setSourceEntity(26U);
    msg.setDestination(43191U);
    msg.setDestinationEntity(233U);
    msg.value = 0.8293842505559654;

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
    msg.setTimeStamp(0.11464468400765337);
    msg.setSource(1213U);
    msg.setSourceEntity(8U);
    msg.setDestination(15698U);
    msg.setDestinationEntity(135U);
    msg.value = 0.5940077880986309;

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
    msg.setTimeStamp(0.8475535463676936);
    msg.setSource(38120U);
    msg.setSourceEntity(178U);
    msg.setDestination(61690U);
    msg.setDestinationEntity(228U);
    msg.value = 0.5683928908100526;

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
    msg.setTimeStamp(0.8371239756717553);
    msg.setSource(16670U);
    msg.setSourceEntity(113U);
    msg.setDestination(13398U);
    msg.setDestinationEntity(168U);
    msg.value = 0.8884765218309086;

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
    msg.setTimeStamp(0.9410695976862242);
    msg.setSource(22672U);
    msg.setSourceEntity(219U);
    msg.setDestination(57600U);
    msg.setDestinationEntity(76U);
    msg.value = 0.056964621479563826;

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
    msg.setTimeStamp(0.14579618646995174);
    msg.setSource(28890U);
    msg.setSourceEntity(173U);
    msg.setDestination(3308U);
    msg.setDestinationEntity(240U);
    msg.value = 0.94044930283025;

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
    msg.setTimeStamp(0.7622521247006326);
    msg.setSource(65438U);
    msg.setSourceEntity(106U);
    msg.setDestination(24291U);
    msg.setDestinationEntity(44U);
    msg.value = 0.7533602402096391;

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
    msg.setTimeStamp(0.5345260425454739);
    msg.setSource(5034U);
    msg.setSourceEntity(195U);
    msg.setDestination(61694U);
    msg.setDestinationEntity(197U);
    msg.value = 0.980112914976848;

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
    msg.setTimeStamp(0.5360951754428805);
    msg.setSource(20416U);
    msg.setSourceEntity(135U);
    msg.setDestination(60313U);
    msg.setDestinationEntity(22U);
    msg.value = 0.11676835542117903;

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
    msg.setTimeStamp(0.7439015212922913);
    msg.setSource(7250U);
    msg.setSourceEntity(205U);
    msg.setDestination(21248U);
    msg.setDestinationEntity(49U);
    msg.value = 0.3411207745213475;

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
    msg.setTimeStamp(0.10776638826684426);
    msg.setSource(44499U);
    msg.setSourceEntity(127U);
    msg.setDestination(48242U);
    msg.setDestinationEntity(33U);
    msg.value = 0.9208197819151368;

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
    msg.setTimeStamp(0.387082378654499);
    msg.setSource(59713U);
    msg.setSourceEntity(141U);
    msg.setDestination(52579U);
    msg.setDestinationEntity(76U);
    msg.value = 0.08848693184799583;

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
    msg.setTimeStamp(0.1858700920277736);
    msg.setSource(47398U);
    msg.setSourceEntity(3U);
    msg.setDestination(52513U);
    msg.setDestinationEntity(189U);
    msg.value = 0.8875503298752688;

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
    msg.setTimeStamp(0.43937482391467997);
    msg.setSource(15102U);
    msg.setSourceEntity(174U);
    msg.setDestination(14195U);
    msg.setDestinationEntity(166U);
    msg.value = 0.28930253080385115;

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
    msg.setTimeStamp(0.26875113048515764);
    msg.setSource(31910U);
    msg.setSourceEntity(59U);
    msg.setDestination(59316U);
    msg.setDestinationEntity(112U);
    msg.value = 0.7401119836140104;

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
    msg.setTimeStamp(0.7875326803687752);
    msg.setSource(39122U);
    msg.setSourceEntity(201U);
    msg.setDestination(58599U);
    msg.setDestinationEntity(170U);
    msg.value = 0.3981999139340414;

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
    msg.setTimeStamp(0.7669913390319945);
    msg.setSource(20545U);
    msg.setSourceEntity(152U);
    msg.setDestination(25562U);
    msg.setDestinationEntity(107U);
    msg.value = 0.4146560665622133;

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
    msg.setTimeStamp(0.5158234587247275);
    msg.setSource(21304U);
    msg.setSourceEntity(4U);
    msg.setDestination(35525U);
    msg.setDestinationEntity(171U);
    msg.value = 0.9507567928329349;

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
    msg.setTimeStamp(0.7124351907985801);
    msg.setSource(28135U);
    msg.setSourceEntity(129U);
    msg.setDestination(4644U);
    msg.setDestinationEntity(220U);
    msg.value = 0.4235257311628876;

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
    msg.setTimeStamp(0.9792432954311677);
    msg.setSource(28108U);
    msg.setSourceEntity(1U);
    msg.setDestination(55330U);
    msg.setDestinationEntity(60U);
    msg.value = 0.21411007897710965;

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
    msg.setTimeStamp(0.1927907819046497);
    msg.setSource(61296U);
    msg.setSourceEntity(235U);
    msg.setDestination(40060U);
    msg.setDestinationEntity(92U);
    msg.direction = 0.574912488273783;
    msg.speed = 0.8717359091048713;
    msg.turbulence = 0.19687446590711077;

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
    msg.setTimeStamp(0.5153384575675078);
    msg.setSource(8035U);
    msg.setSourceEntity(221U);
    msg.setDestination(27350U);
    msg.setDestinationEntity(192U);
    msg.direction = 0.8970895889130879;
    msg.speed = 0.6038735463707604;
    msg.turbulence = 0.7729667914270685;

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
    msg.setTimeStamp(0.2667231390083902);
    msg.setSource(15359U);
    msg.setSourceEntity(43U);
    msg.setDestination(9626U);
    msg.setDestinationEntity(131U);
    msg.direction = 0.7436026947539752;
    msg.speed = 0.4058495900284206;
    msg.turbulence = 0.7167883313891292;

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
    msg.setTimeStamp(0.8205708396376838);
    msg.setSource(7707U);
    msg.setSourceEntity(45U);
    msg.setDestination(49109U);
    msg.setDestinationEntity(244U);
    msg.value = 0.5114359376728984;

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
    msg.setTimeStamp(0.388018886344104);
    msg.setSource(33301U);
    msg.setSourceEntity(71U);
    msg.setDestination(11180U);
    msg.setDestinationEntity(106U);
    msg.value = 0.11135291603384756;

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
    msg.setTimeStamp(0.7658729872360173);
    msg.setSource(17908U);
    msg.setSourceEntity(239U);
    msg.setDestination(30998U);
    msg.setDestinationEntity(117U);
    msg.value = 0.7762364559512984;

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
    msg.setTimeStamp(0.5269937177100007);
    msg.setSource(7659U);
    msg.setSourceEntity(109U);
    msg.setDestination(38384U);
    msg.setDestinationEntity(166U);
    msg.value.assign("DFHIVOLLMTWPRIDABOBIGLJ");

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
    msg.setTimeStamp(0.4460335448773147);
    msg.setSource(42283U);
    msg.setSourceEntity(121U);
    msg.setDestination(65161U);
    msg.setDestinationEntity(127U);
    msg.value.assign("NUZZLEKHZOWOYBPXTSFUPQDAXVCLNWRDWTEDQIFGDUHUNZLWMDPFFYTZNTBEJMVQLRJHYCBKPKRBBRNYHGISNHHFTLIRKGJLRUKKUTPVYLXMOPNAVHEOIZXNCUIXRVVJZSSWXMWY");

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
    msg.setTimeStamp(0.45642944596444934);
    msg.setSource(2965U);
    msg.setSourceEntity(243U);
    msg.setDestination(57005U);
    msg.setDestinationEntity(27U);
    msg.value.assign("DEYSPDXJQBANUNCTJVUYFUHQSNBN");

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
    msg.setTimeStamp(0.1813548972228587);
    msg.setSource(3778U);
    msg.setSourceEntity(223U);
    msg.setDestination(62930U);
    msg.setDestinationEntity(135U);
    const char tmp_msg_0[] = {-70, -41, -126, 18, -112, -33, -36, 0, 5, -100, -8, -63, -28, -42, 63, 89, 35, -49, -123, 16, 103, -122, 2, 42, -107, -22, -19, -105, 121, 106, 47, -34, 27, -114, 45, -96, -123, -49, -44, -68, -127, -10, 104, 3, -89, -33, 36, -52, -82, 99, 12, -58, 87, 83, 94, 108, -65, 0, 93, 55, 74, -94, 117, -98, 23, 73, -121, 9, -85, -117, -65, 109, -35, 14, -76, 112, 30, 25, -97, -22, 122, -46, 119, 39, -83, 113, -95, -4, 71, 61, 103, -79, 56, 75, 61, -62, -121, 103, -61, -10, 77, -103, 107, -58, 115, 3, 52, 3, 57, 126, -121, 16, 51, -87, -115, -119, -101, -30, -81, 17, -16, 39, -123, -99, -98, -91, -17, -4, -122, 74, -112, 12, -16, -2, 57, 114, -58, 72, 24, -30, -88, -78, 29, 106, 101, 68, 103, 121, 7, -90, -78, -68, -38, -32, -27, 124, 110, 73, -26, -75, 72, 49, 72, -23, -28, 8, 22, -47, 4, -104, -72, 29, 32, -85, 56, 82, 13, -18, -12, 29, -8, -127, -36, 33, 122, 117, -110, -53, -75, -123, 126, -43, -75, -48, 107, 61, -90, -94, -55, -121, 80, -55, -5};
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
    msg.setTimeStamp(0.04564353650505304);
    msg.setSource(44070U);
    msg.setSourceEntity(148U);
    msg.setDestination(55973U);
    msg.setDestinationEntity(31U);
    const char tmp_msg_0[] = {-90, 87, 33, 64, -5, 83, -3, -41, 38, 27, -126, 102};
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
    msg.setTimeStamp(0.6573419200600694);
    msg.setSource(54384U);
    msg.setSourceEntity(203U);
    msg.setDestination(7815U);
    msg.setDestinationEntity(231U);
    const char tmp_msg_0[] = {-67, 49, 22, -14, 101, 122, 36, 1, 5, -46, 102, -109, 126, 107, 26, -7, -126, 90, -11, -77, -110, 1, -71, -30, -54, 84, -55, 115, 36, -128, -112, 7, -61, -62, -8, -103, -75, 27, 59, 102, 27, 37, -23, 25, 66, -68, 123, -100, 24, -119, -3, 52, -127, -2, -123, 41, -5, -105, -29, -88, -91, 8, -69, -82, 22, -52, 50, -90, -42, 118, 102, 1, -54, -6, -25, -55, 95, 4, -66, 118, -78, -80, 104, 97, -50, -92, 7, -107, 56, -120, 58, -112, 14, 59, 22, 102, -32, -126};
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
    msg.setTimeStamp(0.6489996534123629);
    msg.setSource(23598U);
    msg.setSourceEntity(196U);
    msg.setDestination(18608U);
    msg.setDestinationEntity(6U);
    msg.type = 108U;
    msg.frequency = 1860296631U;
    msg.min_range = 31448U;
    msg.max_range = 28886U;
    msg.bits_per_point = 90U;
    msg.scale_factor = 0.6206131331842568;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5679891170156114;
    tmp_msg_0.beam_height = 0.9855202399956551;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {102, -22, 118, 53, 65, 62, -30, -114, 104, 91, 58, 58, -96, 52, -25, 53, -98, 88, 71, 25, -57, -82, -24, 74, 80, -18, 26, 37, 4, 102, -30, 79, -57, 96, 79, -64, -66, -107, 49, 73, 45, 114, -48, 85, 76, 67, -15, -86, 105, 6, -12, -112, -106, -125, 67, 17, 48, -17, -16, -21, -8, 18, -72, -110, 70, -4, -76, -66, 45, -123, -19, 120, -126, 85, -29, -67, 73, 19, -25, 19, 90, 41, -56, 13, -31, 70, 66, 109, -41, 25, -66, 22, -101, -105, -62, -6, 94, 20, -30, 78, -106, 63, -13, -69, -21, 69, 64, -52, 33, 126, 53, 102, 8, -101, 123, -96, 82, -117, 100, -94, -47, 54, -10, -44, 110, 61, -5, 7, 119, -77, -60, 109, 74, 38, -96, -13, -108, -119, 99, -85, 35, -2, 67, 58, -40, -78, 19, -96, 86, -96, -7, 87, 45, 17, -125, 59, 25, 91, -1, 113, 24, 81, 76, -107, -28, 70, -75, -69, 9, -66, -102, -125, -61, -39, -64, -10, 102, 85, -1, -76, -49, 22, 38, -88, 46, 20, -85, 31, 65, 43, 110, -7, 60, -82, -52, -127, -60, -101, -23, 124, 54, -86, 36, -12, 56, 72, 41, 84, -32, -76, -123, -2, 7, -85, -83, -44, 74, -8, -123, -111, -64, -89, -80, 93, -122, -25, 18, -116, -15, -61, -83, -101, -3, -122, 118, 82, -77, 113, -48, -28, 97, -80, -41, -98, -65, 90, 21, 95, -42};
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
    msg.setTimeStamp(0.1500381053974209);
    msg.setSource(24954U);
    msg.setSourceEntity(24U);
    msg.setDestination(10098U);
    msg.setDestinationEntity(217U);
    msg.type = 67U;
    msg.frequency = 1200540191U;
    msg.min_range = 11924U;
    msg.max_range = 60295U;
    msg.bits_per_point = 189U;
    msg.scale_factor = 0.5030213611527724;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5371130192585374;
    tmp_msg_0.beam_height = 0.329350873468237;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-81, 105, -53, 31, 111, -99, -20, 83, -73, 106, -59, 40, -73, 38, -41, -10, 103, 109, 103, 22, -8, 23, -120, 86, -20, 26, 85, -68, 94, -63, -3, 50, -70, -63, -126, 7, 40, -46, -13, -33, -53, 119, 121, 59, 12, 9, 82, -123, -98, -67, 64, 22, 93, -40, -43, 12, -120, -30, -23, -37, 60, 125, -79, -1, 81, 60, 100, -76, -42, -54, -126, -117, -126, 39, -1, 90, 28, 43, -25, 77, 97, -108, 85, 11, 99, 51, -22, 118, 85, 91, 116, 113, 68, 89, 60, -36, 74, -52, -27, 78, -59, 71, 59, -47, 25, -61, 12, -8, 107, -19, -128, 94, -88, 42, -63, 24, -75, 31, -76, -78, -4, 5, -46, -126, 1, -37, 21, -67, -41, 72, -8, 77, -54, 77, 97, -64, 124, 25, 18, -125, 70, -36, 119, 91, -54, 52, 102, 48, -119, -100, -12, -118, -94, -33, 0, 109, -124, 40, -10, 116, -117, -107, 21, -124, 38, 110, -48, -47, -120, 121, 110, 12, -72, -115, -28, 79, -43, -74, -84, -2, -111, -29, -11, 113, 29, 56, 60, -18, -21, -128, -62, -103, 123, 50, 84, 56, -120, -106, 54, 82, -59, -110, 63, -63, -117, -72, 123, 10, -82, -113, -126, 1, 91, 2, -53, -108, -52, 0, 8, 19, 95, 32, -70, -43, 8, 116, -77, -82, 58, 56, 64, -103, 78, 119, 70, -45, -75, -81, -59, 87, -24, -23, 113, 88};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.4835133733314436);
    msg.setSource(43793U);
    msg.setSourceEntity(217U);
    msg.setDestination(15986U);
    msg.setDestinationEntity(61U);
    msg.type = 175U;
    msg.frequency = 1303194802U;
    msg.min_range = 43221U;
    msg.max_range = 41454U;
    msg.bits_per_point = 31U;
    msg.scale_factor = 0.35651282069787216;
    const char tmp_msg_0[] = {42, 14, -113, 1, 63, -56, 108, -52, -22, 58, -52, 111, 51, 96, -12, -79, -35, 16, -25, 93, -112, 39, 109, -101, 72, 54, -53, -60, 43, -2, -121, 18, -57, 92, 49, -45, 119, -103, -11, -74, -85, -39, 90, -33, -86, -38, 95, -105, -56, -50, -35, 86, 91, -77, -33};
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
    msg.setTimeStamp(0.7289899793948578);
    msg.setSource(23036U);
    msg.setSourceEntity(133U);
    msg.setDestination(40056U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.7069743189552554);
    msg.setSource(46977U);
    msg.setSourceEntity(44U);
    msg.setDestination(51683U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.2325924982525429);
    msg.setSource(11749U);
    msg.setSourceEntity(107U);
    msg.setDestination(3117U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.6665694305601952);
    msg.setSource(53287U);
    msg.setSourceEntity(177U);
    msg.setDestination(39924U);
    msg.setDestinationEntity(252U);
    msg.op = 209U;

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
    msg.setTimeStamp(0.1305591845542562);
    msg.setSource(41812U);
    msg.setSourceEntity(230U);
    msg.setDestination(44001U);
    msg.setDestinationEntity(61U);
    msg.op = 39U;

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
    msg.setTimeStamp(0.6240694170604878);
    msg.setSource(33854U);
    msg.setSourceEntity(254U);
    msg.setDestination(63948U);
    msg.setDestinationEntity(190U);
    msg.op = 7U;

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
    msg.setTimeStamp(0.7997151187296421);
    msg.setSource(63673U);
    msg.setSourceEntity(252U);
    msg.setDestination(38316U);
    msg.setDestinationEntity(133U);
    msg.value = 0.897317751527162;
    msg.confidence = 0.7420897137808293;
    msg.opmodes.assign("KKQHALBCPCGJMITMNLBMMYAAOFUWUMFHCPEGSHWQSXINZXQABQIARNBGCHMFGBCLPXTQYNPSLYWKNRGFCUOZVVXQJITYLODJPDDBJIXOZJURJZWCHLEKEIHKBMIWBGAXMDRRMETSLWNOSKFSKZZCJO");

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
    msg.setTimeStamp(0.04803703763232614);
    msg.setSource(11735U);
    msg.setSourceEntity(157U);
    msg.setDestination(47768U);
    msg.setDestinationEntity(222U);
    msg.value = 0.6010023240922681;
    msg.confidence = 0.5387271574069549;
    msg.opmodes.assign("GCMGKCTMEBOBUGPVDLVUFZFSRRRQXHLKQSCKJYWHSQFBPEJJEWXXXUUKDHGULONBEYHADGKPFJDDTVRLTLCGOXJONSYGCIGXYQSPVAMEDPWBIDDLUEVBFAPQCIVKJAUXHDOZJSWWYPNNCZVWSFTBKBOZ");

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
    msg.setTimeStamp(0.4895176440620427);
    msg.setSource(19974U);
    msg.setSourceEntity(48U);
    msg.setDestination(8650U);
    msg.setDestinationEntity(197U);
    msg.value = 0.6629501736987713;
    msg.confidence = 0.15248219828270015;
    msg.opmodes.assign("ZVTWRSVGXVRWVXNFKUJMTYFILACXJXWDUYMUFROECGKAQONUBQNPTBOREZYLMEKAZONGMKIRMSCSBGPQIHCOZLWQAHCKOTIYTBQWYHPLEJVXPHZMEZ");

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
    msg.setTimeStamp(0.5360160528369458);
    msg.setSource(29865U);
    msg.setSourceEntity(175U);
    msg.setDestination(63356U);
    msg.setDestinationEntity(48U);
    msg.itow = 2822412647U;
    msg.lat = 0.537288163955491;
    msg.lon = 0.9968618393429469;
    msg.height_ell = 0.6866661389630397;
    msg.height_sea = 0.019159173488242587;
    msg.hacc = 0.662920926481439;
    msg.vacc = 0.6578488015906792;
    msg.vel_n = 0.00447112017477147;
    msg.vel_e = 0.6297403937484245;
    msg.vel_d = 0.07908757514026887;
    msg.speed = 0.9994644728714404;
    msg.gspeed = 0.02738480922626685;
    msg.heading = 0.9688151884072408;
    msg.sacc = 0.9853066267796027;
    msg.cacc = 0.6835104623424264;

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
    msg.setTimeStamp(0.5583862357241991);
    msg.setSource(13376U);
    msg.setSourceEntity(56U);
    msg.setDestination(17561U);
    msg.setDestinationEntity(154U);
    msg.itow = 1532289794U;
    msg.lat = 0.32427213668980404;
    msg.lon = 0.40735552600563707;
    msg.height_ell = 0.7344127043578149;
    msg.height_sea = 0.15883959335153308;
    msg.hacc = 0.018956507007395818;
    msg.vacc = 0.6949295343425504;
    msg.vel_n = 0.444455453911097;
    msg.vel_e = 0.3322055334954723;
    msg.vel_d = 0.0423830239469879;
    msg.speed = 0.35396515280568674;
    msg.gspeed = 0.4437010725455506;
    msg.heading = 0.9155379378480448;
    msg.sacc = 0.8192856800685877;
    msg.cacc = 0.1536613731462002;

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
    msg.setTimeStamp(0.4968179674704578);
    msg.setSource(26018U);
    msg.setSourceEntity(150U);
    msg.setDestination(8694U);
    msg.setDestinationEntity(187U);
    msg.itow = 3108443068U;
    msg.lat = 0.709308169691615;
    msg.lon = 0.7451552048296904;
    msg.height_ell = 0.8395867656728003;
    msg.height_sea = 0.22796068628374;
    msg.hacc = 0.6213911600733123;
    msg.vacc = 0.18975696281514298;
    msg.vel_n = 0.704342965024646;
    msg.vel_e = 0.9736549123755006;
    msg.vel_d = 0.42808010962871146;
    msg.speed = 0.8270171184117489;
    msg.gspeed = 0.4197839714992502;
    msg.heading = 0.7551387463581783;
    msg.sacc = 0.2036429733003765;
    msg.cacc = 0.39221845740821315;

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
    msg.setTimeStamp(0.9919597724567776);
    msg.setSource(50945U);
    msg.setSourceEntity(23U);
    msg.setDestination(9355U);
    msg.setDestinationEntity(194U);
    msg.id = 197U;
    msg.value = 0.061852615765820684;

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
    msg.setTimeStamp(0.7756406809406303);
    msg.setSource(7383U);
    msg.setSourceEntity(181U);
    msg.setDestination(11086U);
    msg.setDestinationEntity(97U);
    msg.id = 23U;
    msg.value = 0.7677272375856489;

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
    msg.setTimeStamp(0.10219971128987482);
    msg.setSource(62169U);
    msg.setSourceEntity(92U);
    msg.setDestination(46277U);
    msg.setDestinationEntity(17U);
    msg.id = 142U;
    msg.value = 0.16630321353766908;

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
    msg.setTimeStamp(0.11597527023341336);
    msg.setSource(34206U);
    msg.setSourceEntity(63U);
    msg.setDestination(37118U);
    msg.setDestinationEntity(26U);
    msg.x = 0.8030302357534972;
    msg.y = 0.7631989818475025;
    msg.z = 0.4600501918961676;
    msg.phi = 0.9815378589344533;
    msg.theta = 0.9012614616143249;
    msg.psi = 0.8442238200100544;

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
    msg.setTimeStamp(0.5873160428973712);
    msg.setSource(34874U);
    msg.setSourceEntity(155U);
    msg.setDestination(29371U);
    msg.setDestinationEntity(155U);
    msg.x = 0.4236095431111925;
    msg.y = 0.44178424346269674;
    msg.z = 0.34559939502903936;
    msg.phi = 0.611533888642319;
    msg.theta = 0.7117847257674669;
    msg.psi = 0.5427901588707259;

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
    msg.setTimeStamp(0.5665811101886497);
    msg.setSource(40233U);
    msg.setSourceEntity(61U);
    msg.setDestination(64506U);
    msg.setDestinationEntity(23U);
    msg.x = 0.4022181776314776;
    msg.y = 0.8458585264463654;
    msg.z = 0.8996488143411748;
    msg.phi = 0.23271749981801337;
    msg.theta = 0.5466840681642591;
    msg.psi = 0.7567599009108995;

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
    msg.setTimeStamp(0.8416898054321772);
    msg.setSource(837U);
    msg.setSourceEntity(186U);
    msg.setDestination(42144U);
    msg.setDestinationEntity(37U);
    msg.beam_width = 0.4716732659656997;
    msg.beam_height = 0.9745752270067968;

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
    msg.setTimeStamp(0.41624219095960946);
    msg.setSource(28431U);
    msg.setSourceEntity(232U);
    msg.setDestination(49471U);
    msg.setDestinationEntity(106U);
    msg.beam_width = 0.1334114739858373;
    msg.beam_height = 0.8771905732001716;

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
    msg.setTimeStamp(0.614103679436312);
    msg.setSource(55941U);
    msg.setSourceEntity(179U);
    msg.setDestination(23685U);
    msg.setDestinationEntity(112U);
    msg.beam_width = 0.09563167561008634;
    msg.beam_height = 0.30395281558108034;

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
    msg.setTimeStamp(0.4698605585671839);
    msg.setSource(33864U);
    msg.setSourceEntity(142U);
    msg.setDestination(16519U);
    msg.setDestinationEntity(147U);
    msg.sane = 227U;

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
    msg.setTimeStamp(0.5329227153370538);
    msg.setSource(9752U);
    msg.setSourceEntity(161U);
    msg.setDestination(26691U);
    msg.setDestinationEntity(233U);
    msg.sane = 82U;

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
    msg.setTimeStamp(0.13279374770691654);
    msg.setSource(17725U);
    msg.setSourceEntity(79U);
    msg.setDestination(52692U);
    msg.setDestinationEntity(43U);
    msg.sane = 153U;

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
    msg.setTimeStamp(0.3418054330384689);
    msg.setSource(64862U);
    msg.setSourceEntity(10U);
    msg.setDestination(16642U);
    msg.setDestinationEntity(195U);
    msg.value = 0.591232987241302;

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
    msg.setTimeStamp(0.757929375118357);
    msg.setSource(19298U);
    msg.setSourceEntity(23U);
    msg.setDestination(53042U);
    msg.setDestinationEntity(172U);
    msg.value = 0.21220593964990797;

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
    msg.setTimeStamp(0.13731902701940857);
    msg.setSource(63532U);
    msg.setSourceEntity(43U);
    msg.setDestination(59971U);
    msg.setDestinationEntity(191U);
    msg.value = 0.3293137787851692;

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
    msg.setTimeStamp(0.6070749514753481);
    msg.setSource(13367U);
    msg.setSourceEntity(175U);
    msg.setDestination(63290U);
    msg.setDestinationEntity(98U);
    msg.value = 0.8202999961889005;

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
    msg.setTimeStamp(0.9741264562293114);
    msg.setSource(4405U);
    msg.setSourceEntity(128U);
    msg.setDestination(61594U);
    msg.setDestinationEntity(228U);
    msg.value = 0.8545158160319343;

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
    msg.setTimeStamp(0.989970459095266);
    msg.setSource(45660U);
    msg.setSourceEntity(159U);
    msg.setDestination(7979U);
    msg.setDestinationEntity(50U);
    msg.value = 0.6058274740346773;

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
    msg.setTimeStamp(0.3317432768033868);
    msg.setSource(25339U);
    msg.setSourceEntity(90U);
    msg.setDestination(37045U);
    msg.setDestinationEntity(162U);
    msg.value = 0.09419022476540417;

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
    msg.setTimeStamp(0.8912473261418826);
    msg.setSource(21869U);
    msg.setSourceEntity(135U);
    msg.setDestination(8035U);
    msg.setDestinationEntity(31U);
    msg.value = 0.8785074448881719;

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
    msg.setTimeStamp(0.8804137232429832);
    msg.setSource(9090U);
    msg.setSourceEntity(168U);
    msg.setDestination(58112U);
    msg.setDestinationEntity(250U);
    msg.value = 0.3712944661910127;

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
    msg.setTimeStamp(0.3718671016742817);
    msg.setSource(27062U);
    msg.setSourceEntity(30U);
    msg.setDestination(705U);
    msg.setDestinationEntity(194U);
    msg.id = 42U;
    msg.zoom = 73U;
    msg.action = 141U;

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
    msg.setTimeStamp(0.437319302622983);
    msg.setSource(20968U);
    msg.setSourceEntity(175U);
    msg.setDestination(24793U);
    msg.setDestinationEntity(160U);
    msg.id = 50U;
    msg.zoom = 20U;
    msg.action = 142U;

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
    msg.setTimeStamp(0.8805192163863195);
    msg.setSource(17672U);
    msg.setSourceEntity(119U);
    msg.setDestination(19000U);
    msg.setDestinationEntity(181U);
    msg.id = 80U;
    msg.zoom = 148U;
    msg.action = 206U;

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
    msg.setTimeStamp(0.7929325894406927);
    msg.setSource(24055U);
    msg.setSourceEntity(106U);
    msg.setDestination(57168U);
    msg.setDestinationEntity(57U);
    msg.id = 80U;
    msg.value = 0.6008519905265313;

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
    msg.setTimeStamp(0.9170342067040541);
    msg.setSource(52768U);
    msg.setSourceEntity(36U);
    msg.setDestination(47619U);
    msg.setDestinationEntity(79U);
    msg.id = 194U;
    msg.value = 0.7508006272530156;

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
    msg.setTimeStamp(0.11708495077871861);
    msg.setSource(9554U);
    msg.setSourceEntity(75U);
    msg.setDestination(53015U);
    msg.setDestinationEntity(183U);
    msg.id = 25U;
    msg.value = 0.074326261897665;

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
    msg.setTimeStamp(0.09178903282617612);
    msg.setSource(17627U);
    msg.setSourceEntity(59U);
    msg.setDestination(25401U);
    msg.setDestinationEntity(5U);
    msg.id = 78U;
    msg.value = 0.251943383175107;

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
    msg.setTimeStamp(0.7147128968803335);
    msg.setSource(52436U);
    msg.setSourceEntity(143U);
    msg.setDestination(18309U);
    msg.setDestinationEntity(236U);
    msg.id = 187U;
    msg.value = 0.25776984710430006;

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
    msg.setTimeStamp(0.3767632967899225);
    msg.setSource(62287U);
    msg.setSourceEntity(76U);
    msg.setDestination(30815U);
    msg.setDestinationEntity(74U);
    msg.id = 32U;
    msg.value = 0.930555709258223;

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
    msg.setTimeStamp(0.5585659574723315);
    msg.setSource(27930U);
    msg.setSourceEntity(243U);
    msg.setDestination(11088U);
    msg.setDestinationEntity(134U);
    msg.id = 62U;
    msg.angle = 0.09049074465426754;

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
    msg.setTimeStamp(0.08999029247467016);
    msg.setSource(15226U);
    msg.setSourceEntity(153U);
    msg.setDestination(16348U);
    msg.setDestinationEntity(195U);
    msg.id = 182U;
    msg.angle = 0.9121512972673073;

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
    msg.setTimeStamp(0.6775738256272975);
    msg.setSource(48524U);
    msg.setSourceEntity(241U);
    msg.setDestination(28447U);
    msg.setDestinationEntity(91U);
    msg.id = 35U;
    msg.angle = 0.7776092645288972;

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
    msg.setTimeStamp(0.9016550092680367);
    msg.setSource(46331U);
    msg.setSourceEntity(50U);
    msg.setDestination(16355U);
    msg.setDestinationEntity(91U);
    msg.op = 193U;
    msg.actions.assign("PALXADZKKVWQMCTYPNUOFIMGJODFLHIKJTVRFCWAQDALBHUUNIPVIOIUKTFBNWLMGAZLFIPUIBYJNOXNNWXRTAYJRBUEMSECHHPTLSAYMDRUEKCXEGYKTQGZUCKCPDZCVZNTBHKMVSYZLDPGYYEMRLIOFXGXGPBMMVBCWQQTAJUOEJSRFJWRQFPAVADBEHZSWSXBZMKVYRHRCGQZRQXNQOSVSWXEFNXHLGSWIJOLFWCNTIUDJYTOHJDHGZEKSO");

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
    msg.setTimeStamp(0.38118032744409835);
    msg.setSource(63162U);
    msg.setSourceEntity(86U);
    msg.setDestination(54302U);
    msg.setDestinationEntity(227U);
    msg.op = 11U;
    msg.actions.assign("RHBCSNRIBDDUAWFGOZFAKVPOPCBZOQEDQMXLDGKQBSMZCMOOLMLFHKYZDQOQYCVWERWSFSKCUKQFMNZNVVDBALPINHQWAGEXBVGCLOTGTHXBWJEVHJJSIWITKTMHUWUYXCIBJVRFDTVAZLJGEETUPUQDUOCPINAXBOTLIYKLKZFEKRADYJTQSRUYIJXSZENYSUFGJGVRNGAPMCQIIRAVCXM");

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
    msg.setTimeStamp(0.16322758907977553);
    msg.setSource(8609U);
    msg.setSourceEntity(0U);
    msg.setDestination(60264U);
    msg.setDestinationEntity(163U);
    msg.op = 148U;
    msg.actions.assign("NMGLTEOHXVXPFEQKJRXQKBZTZLRQHLWNVATDLEACYXODFUIVBMHKQTLLC");

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
    msg.setTimeStamp(0.29024604247505903);
    msg.setSource(27987U);
    msg.setSourceEntity(49U);
    msg.setDestination(16991U);
    msg.setDestinationEntity(117U);
    msg.actions.assign("OGMNSFCTAFVJWLGTNFAUBHFMRDVISPCMWVJBZIIARUHVPVKNHNWPONGRDEGTPCEYZDISNXDLOUZYFOMUKJAUAKEYBBOIKVGQBKTQRHLBRNELXSUQQXCIXPLSEQJI");

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
    msg.setTimeStamp(0.8134660099643941);
    msg.setSource(23705U);
    msg.setSourceEntity(133U);
    msg.setDestination(18758U);
    msg.setDestinationEntity(86U);
    msg.actions.assign("NQEFRRIUBTVLMLPGWGZZHFPHICUNUCCUTFAOKUBOXSDFJUVGQETZIYLUVLYYRHJKFDZLYDAWWMSPLDSVOKHDQXJTIQJZOLKRGMOHTEIYBKEFMJMOIQJCSPZOYSHAAZQYREBHVRBWVZ");

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
    msg.setTimeStamp(0.47803894740329633);
    msg.setSource(13956U);
    msg.setSourceEntity(64U);
    msg.setDestination(63958U);
    msg.setDestinationEntity(12U);
    msg.actions.assign("OGQBZIRLKUTPLXTLMHKDZRDJVXFRMXGRHJNUSUNXMGFTYTPDEYAJSQSVLFPOHAPYCXOKVDMFMBWSZEF");

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
    msg.setTimeStamp(0.5126230445994072);
    msg.setSource(41572U);
    msg.setSourceEntity(211U);
    msg.setDestination(52406U);
    msg.setDestinationEntity(4U);
    msg.button = 175U;
    msg.value = 172U;

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
    msg.setTimeStamp(0.5718741460421588);
    msg.setSource(58357U);
    msg.setSourceEntity(232U);
    msg.setDestination(57317U);
    msg.setDestinationEntity(91U);
    msg.button = 60U;
    msg.value = 227U;

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
    msg.setTimeStamp(0.6214365352272261);
    msg.setSource(39890U);
    msg.setSourceEntity(1U);
    msg.setDestination(16054U);
    msg.setDestinationEntity(63U);
    msg.button = 154U;
    msg.value = 136U;

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
    msg.setTimeStamp(0.1459953440064704);
    msg.setSource(1102U);
    msg.setSourceEntity(2U);
    msg.setDestination(30336U);
    msg.setDestinationEntity(93U);
    msg.op = 147U;
    msg.text.assign("TBJZOKESBYGUUSEFIPDHWTMJFWQFFQUHRWPAWUHFUNTNINGHCGSBMDPWIEXYABTRVHXZXSXUYYKQQHFUVERJHKIDCLZNHUGTJALCSBGYSMPZVTPZORDVMDEMSSNZYGPGQZERLKWLRFECKDQVVHOFNHAPZJNXOQCBJBRTYLVKUXWMLKIL");

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
    msg.setTimeStamp(0.6499977514100754);
    msg.setSource(33120U);
    msg.setSourceEntity(40U);
    msg.setDestination(63229U);
    msg.setDestinationEntity(53U);
    msg.op = 212U;
    msg.text.assign("LAYENEYCDKKDIGWULRWPBKKKXQPWDKTNYMZTLMQKQPOAHGZMSDFSTOPOGVUZXEWBZSCSHVBAYVZENGMFFCKOUSJOMHQULHGYJPDALMTPRIICNAGFILHVFVTLMFTHRSYDZFIJBNUMAZRVRCJUSXEKMBWOQUNHQOERIMBJBGFWIOWKTCJDLYTBQYRXLAWXNE");

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
    msg.setTimeStamp(0.6578571111940185);
    msg.setSource(10238U);
    msg.setSourceEntity(159U);
    msg.setDestination(63228U);
    msg.setDestinationEntity(240U);
    msg.op = 107U;
    msg.text.assign("KBRFZWFQLTJCGNFRXYNWTLWLXSPBQBUSCLCTZZHHXVIQLQTGXIQZCVZAJDKYOFELMJLJMBFEEZXGUHPFVXTHJHPCXNNRHKMMEWHOQYTBLHLGIBVNURDOPVSVM");

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
    msg.setTimeStamp(0.44104481605831436);
    msg.setSource(11236U);
    msg.setSourceEntity(238U);
    msg.setDestination(43156U);
    msg.setDestinationEntity(211U);
    msg.op = 145U;
    msg.time_remain = 0.8193262776346961;
    msg.sched_time = 0.3279506472742586;

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
    msg.setTimeStamp(0.636933726447779);
    msg.setSource(3519U);
    msg.setSourceEntity(80U);
    msg.setDestination(42684U);
    msg.setDestinationEntity(177U);
    msg.op = 47U;
    msg.time_remain = 0.30410296960698247;
    msg.sched_time = 0.631480645212747;

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
    msg.setTimeStamp(0.26516658304586027);
    msg.setSource(63655U);
    msg.setSourceEntity(101U);
    msg.setDestination(47347U);
    msg.setDestinationEntity(0U);
    msg.op = 204U;
    msg.time_remain = 0.4829754870526315;
    msg.sched_time = 0.35718926443152355;

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
    msg.setTimeStamp(0.7318870540088692);
    msg.setSource(46820U);
    msg.setSourceEntity(40U);
    msg.setDestination(51828U);
    msg.setDestinationEntity(223U);
    msg.name.assign("VNIWMVGWQSZQZBYBRSSEFOXYHQOUECFTMTTXQLYPAHZJYSARGRCSUPLVDHDHBMKBDAIEUBPZKEXFXRSXFSVYFECITKOVAKENKHSYLUPLDMERRFXYADMBNOUOBJTMNPDKGKMRWVZTTCAOACEAPHWGWMXJFZNVYLIPCUNQQDCCIRGZBZVBVJIKPIWTBLKVEJJJXUAOTDFAONNLOMNYJGLHPRQTHWW");
    msg.op = 81U;
    msg.sched_time = 0.8562842591784551;

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
    msg.setTimeStamp(0.989077263264486);
    msg.setSource(1946U);
    msg.setSourceEntity(181U);
    msg.setDestination(22752U);
    msg.setDestinationEntity(198U);
    msg.name.assign("IHBMDJNRBXOXWALJKLIRVQBZWHQLQMINYUSNLIDKJDMZKDJTRWHRSRVFAELPTZHCQEOUCMFQGHPOBCMDWJIMTFETPNAKDFSLXGAZYPJPXGMQKTGONEDOKZDAHLWTFGYIONPBORRMCZFUJWVSZVWUEXE");
    msg.op = 46U;
    msg.sched_time = 0.24174511139566812;

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
    msg.setTimeStamp(0.653176286332158);
    msg.setSource(2793U);
    msg.setSourceEntity(226U);
    msg.setDestination(25269U);
    msg.setDestinationEntity(141U);
    msg.name.assign("BYRRSSPMLWGVZODBCQVGEUCSFSHGMYYYJQXCAFCXPXIOEDM");
    msg.op = 29U;
    msg.sched_time = 0.7534656503448499;

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
    msg.setTimeStamp(0.9583955386131774);
    msg.setSource(11101U);
    msg.setSourceEntity(194U);
    msg.setDestination(55252U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.2346864224306161);
    msg.setSource(25583U);
    msg.setSourceEntity(101U);
    msg.setDestination(22387U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.7551798906214683);
    msg.setSource(36641U);
    msg.setSourceEntity(80U);
    msg.setDestination(37415U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.4886776895048547);
    msg.setSource(39558U);
    msg.setSourceEntity(65U);
    msg.setDestination(42145U);
    msg.setDestinationEntity(92U);
    msg.name.assign("QXIIADRHZWDPGIFDSYRJRCINOKJHOVMKKYKECFWFUKEBTIOVTUFJPIHFTZCJWJMAYBNPSVDRMTYRMXUPSMNJCZGCJUETCSUCGBQEOBXLHALKDVXWVLZLVXNAYTWANLAZWPSZKHMWVFNQELIPSTTEPRHAOQOGMQEUPEGOCBDXNQEYGZVWGIGUBNCYUFTYAGPWMFXLYHOFSRJKBD");
    msg.state = 203U;

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
    msg.setTimeStamp(0.3707806361545445);
    msg.setSource(4024U);
    msg.setSourceEntity(14U);
    msg.setDestination(15200U);
    msg.setDestinationEntity(46U);
    msg.name.assign("NZPXFVZHUCPEOHWLBMIFPATRQFUPEFAFJITGBCLZOCXWHGESDAKTJRDBKXQUVJRYTJTUWYPSPZBRWGYEHQBFOOSYRVISPAVWXKKUTDHJSMT");
    msg.state = 117U;

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
    msg.setTimeStamp(0.768438531619636);
    msg.setSource(46203U);
    msg.setSourceEntity(3U);
    msg.setDestination(27099U);
    msg.setDestinationEntity(26U);
    msg.name.assign("YVZOMLYRQMJEHUOECRVPNWWAOILPLP");
    msg.state = 218U;

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
    msg.setTimeStamp(0.2236533830359141);
    msg.setSource(52044U);
    msg.setSourceEntity(222U);
    msg.setDestination(21567U);
    msg.setDestinationEntity(168U);
    msg.name.assign("QJDPOFTKLOYGUHWEXQCMHOZRYUYXEUNFSXYGCQBYBHWKOHYVBXCMQGDMXBKAOHLFBPVBFGPRTWSHAFRWDJIATUBZJOZDZJJIJSBCRREXQTSXISRAAHNNYERMVNCFKKCLUEOKCRWBLLWJKBEQLIVAYTLTPRCXHSGGDSUWUZUNOYNXQWZNMGFUVLOPMTIQKICPEPEFSKPPNWMDNAGJZGVIVZHDQFTVADYZKIMDEAWIRITHQJZDCMOAUVJTPSN");
    msg.value = 8U;

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
    msg.setTimeStamp(0.5932624031772236);
    msg.setSource(59512U);
    msg.setSourceEntity(118U);
    msg.setDestination(57990U);
    msg.setDestinationEntity(174U);
    msg.name.assign("DPJKGUHAQFCONPCIZXUOLYIQZMJZ");
    msg.value = 220U;

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
    msg.setTimeStamp(0.9851624297681619);
    msg.setSource(36397U);
    msg.setSourceEntity(158U);
    msg.setDestination(32056U);
    msg.setDestinationEntity(222U);
    msg.name.assign("FWMDBWNXMRZGHGWKMLLZCDRHWFECYBZIJVXCRXCCLTHYETORFOCPUPKSILUHWDLBSHLKEFOSEQMKTJDRNAQMNBGQSUYKITHLGPITHGVTQDVMFXVGDXSEXJMGYYASEJXVKAVANASVSPYLIVZEACHJFPTBSJJYQUNAULOTZMORRPIYKWNGZYDBNTUOFUQRBZFPFBWWDJONXHNJKCGLXXBNCAQE");
    msg.value = 83U;

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
    msg.setTimeStamp(0.7162983323437869);
    msg.setSource(1285U);
    msg.setSourceEntity(205U);
    msg.setDestination(19370U);
    msg.setDestinationEntity(143U);
    msg.name.assign("ULWJLLYAUUROMVTEWIARIFNDQSPRSHWGHJPEVMXYIRKIDGPRTLWDNXBEBQJDAUKKCGCAJKQDWAPYHXTEZSSJYYVPKZMGXNZDAIBXFAVLJPSIQCHKGQABLXTHAHWTSTEETVKQUFMCGKXSIZNNUKQSQFPLYRNUZUARGEBBZVNJOBLHTEHZPBDENVWTICIWGDPLOCXPUVIZYWJOFMFBMVZH");

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
    msg.setTimeStamp(0.7768526972853724);
    msg.setSource(58170U);
    msg.setSourceEntity(178U);
    msg.setDestination(37682U);
    msg.setDestinationEntity(66U);
    msg.name.assign("KCETCVIWNPRVBFGMQQEYSAYDUAOVHTC");

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
    msg.setTimeStamp(0.34202989404837536);
    msg.setSource(16366U);
    msg.setSourceEntity(229U);
    msg.setDestination(34209U);
    msg.setDestinationEntity(98U);
    msg.name.assign("FCOPJNFOWWIACHRGENJJLPAOWXXZPGYLRUPRAEVHIRYXTQTTOUGEJILHWBCKZMETNYIGYOIITXUJOFSZFRGDMHGKAYUQIFAXOSRUWPSCVDDKHTDGZRNOBCDBZHUQMEJVKBLDPUSKQMLMNIMKAYNXGZVUCIQCWBESQIUZQJOFSQLEYOAPBKBCANAWXSHNTSBRJFMVPYHGWLZZTFVMHHENKLTFDJLDYJVCKZVCFQXBXTRBYPVSEEXSW");

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
    msg.setTimeStamp(0.4563551165412215);
    msg.setSource(35283U);
    msg.setSourceEntity(10U);
    msg.setDestination(65154U);
    msg.setDestinationEntity(208U);
    msg.name.assign("BXSUQXMDUGLFFSUEMAFSBOEWHNGPSOQMBJHILCSLHMYAWUHNNHEHOQNETLJTKRTKOAUCNDZXSVPQNPSRKUPDCVKJGVWE");
    msg.value = 184U;

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
    msg.setTimeStamp(0.03609580128510381);
    msg.setSource(27823U);
    msg.setSourceEntity(71U);
    msg.setDestination(21073U);
    msg.setDestinationEntity(155U);
    msg.name.assign("QPKREMXDSDSGJVMPLUUASBJDUTYQLRIEMNJYUTCOZLCFYKIOQETCVHPQSTYWXIUJOVINHJM");
    msg.value = 110U;

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
    msg.setTimeStamp(0.9754396673353499);
    msg.setSource(21833U);
    msg.setSourceEntity(145U);
    msg.setDestination(21436U);
    msg.setDestinationEntity(146U);
    msg.name.assign("LHPFMWKYUPOQWJPKLVLKZOLVLISBXIDTMGOEEYG");
    msg.value = 181U;

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
    msg.setTimeStamp(0.4215623556703466);
    msg.setSource(30643U);
    msg.setSourceEntity(10U);
    msg.setDestination(58662U);
    msg.setDestinationEntity(135U);
    msg.id = 253U;
    msg.period = 912134737U;
    msg.duty_cycle = 723684957U;

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
    msg.setTimeStamp(0.3278483245908982);
    msg.setSource(10657U);
    msg.setSourceEntity(44U);
    msg.setDestination(38713U);
    msg.setDestinationEntity(170U);
    msg.id = 104U;
    msg.period = 3447515862U;
    msg.duty_cycle = 1625772564U;

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
    msg.setTimeStamp(0.35237133295505885);
    msg.setSource(29019U);
    msg.setSourceEntity(97U);
    msg.setDestination(6267U);
    msg.setDestinationEntity(98U);
    msg.id = 175U;
    msg.period = 283321370U;
    msg.duty_cycle = 1730104647U;

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
    msg.setTimeStamp(0.9567350635013591);
    msg.setSource(64653U);
    msg.setSourceEntity(173U);
    msg.setDestination(13847U);
    msg.setDestinationEntity(31U);
    msg.id = 84U;
    msg.period = 754106503U;
    msg.duty_cycle = 4596166U;

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
    msg.setTimeStamp(0.4462000309198626);
    msg.setSource(30585U);
    msg.setSourceEntity(17U);
    msg.setDestination(29507U);
    msg.setDestinationEntity(95U);
    msg.id = 46U;
    msg.period = 3266370592U;
    msg.duty_cycle = 2791531452U;

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
    msg.setTimeStamp(0.23640582990358006);
    msg.setSource(63866U);
    msg.setSourceEntity(44U);
    msg.setDestination(5131U);
    msg.setDestinationEntity(182U);
    msg.id = 154U;
    msg.period = 3339519155U;
    msg.duty_cycle = 602229642U;

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
    msg.setTimeStamp(0.4736543971188728);
    msg.setSource(62741U);
    msg.setSourceEntity(246U);
    msg.setDestination(266U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.4096712451090988;
    msg.lon = 0.6003237522148178;
    msg.height = 0.20732387647025963;
    msg.x = 0.38705026228179173;
    msg.y = 0.5475058460027398;
    msg.z = 0.8778496626679877;
    msg.phi = 0.1846115767643266;
    msg.theta = 0.7080356760039835;
    msg.psi = 0.14300275900480364;
    msg.u = 0.9459998403166923;
    msg.v = 0.8616039210384824;
    msg.w = 0.764468241543789;
    msg.vx = 0.001041957261599169;
    msg.vy = 0.00947718055821789;
    msg.vz = 0.45634680873919775;
    msg.p = 0.3886812365872171;
    msg.q = 0.38902098218246606;
    msg.r = 0.061335935112912576;
    msg.depth = 0.34813025501927786;
    msg.alt = 0.48470126484451637;

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
    msg.setTimeStamp(0.054506717512919356);
    msg.setSource(23714U);
    msg.setSourceEntity(58U);
    msg.setDestination(57287U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.6884464221009227;
    msg.lon = 0.045621131906193435;
    msg.height = 0.07055265081206497;
    msg.x = 0.4134122806980587;
    msg.y = 0.16026543462666354;
    msg.z = 0.755643954550701;
    msg.phi = 0.6039324283907144;
    msg.theta = 0.4366723430330981;
    msg.psi = 0.9610651333717553;
    msg.u = 0.6084265728252776;
    msg.v = 0.4691390168032513;
    msg.w = 0.4251406315914389;
    msg.vx = 0.2812229362573192;
    msg.vy = 0.1941555207512412;
    msg.vz = 0.8967445276510964;
    msg.p = 0.892065784852507;
    msg.q = 0.20790252536563092;
    msg.r = 0.223127919178013;
    msg.depth = 0.0003149623150960901;
    msg.alt = 0.12474326017479498;

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
    msg.setTimeStamp(0.6145999119516147);
    msg.setSource(59264U);
    msg.setSourceEntity(1U);
    msg.setDestination(31572U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.6204777951835971;
    msg.lon = 0.02113438072932372;
    msg.height = 0.5711643143415966;
    msg.x = 0.5654181485569261;
    msg.y = 0.006617357369663401;
    msg.z = 0.33939919069533586;
    msg.phi = 0.6304042988704566;
    msg.theta = 0.9470206859474818;
    msg.psi = 0.4157783867313998;
    msg.u = 0.5602395941803957;
    msg.v = 0.24692127925822804;
    msg.w = 0.6821837016015594;
    msg.vx = 0.7378171682499195;
    msg.vy = 0.8651646209043311;
    msg.vz = 0.2754724701624538;
    msg.p = 0.9786155720149633;
    msg.q = 0.23111229398247546;
    msg.r = 0.7316690884701785;
    msg.depth = 0.1568998545399639;
    msg.alt = 0.2586219930585746;

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
    msg.setTimeStamp(0.3977613048853731);
    msg.setSource(59758U);
    msg.setSourceEntity(74U);
    msg.setDestination(32753U);
    msg.setDestinationEntity(184U);
    msg.x = 0.5997239499830361;
    msg.y = 0.6114347790280026;
    msg.z = 0.8422931991496233;

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
    msg.setTimeStamp(0.6227004907262517);
    msg.setSource(43312U);
    msg.setSourceEntity(69U);
    msg.setDestination(51981U);
    msg.setDestinationEntity(15U);
    msg.x = 0.5788274759033389;
    msg.y = 0.5427065084109592;
    msg.z = 0.15254661169936523;

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
    msg.setTimeStamp(0.7946105866907969);
    msg.setSource(65238U);
    msg.setSourceEntity(78U);
    msg.setDestination(46766U);
    msg.setDestinationEntity(188U);
    msg.x = 0.11055461421976331;
    msg.y = 0.6750470220412174;
    msg.z = 0.8820971094695705;

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
    msg.setTimeStamp(0.6781284979581976);
    msg.setSource(6244U);
    msg.setSourceEntity(210U);
    msg.setDestination(56977U);
    msg.setDestinationEntity(254U);
    msg.value = 0.7826852520857969;

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
    msg.setTimeStamp(0.6251171767027642);
    msg.setSource(17440U);
    msg.setSourceEntity(64U);
    msg.setDestination(47680U);
    msg.setDestinationEntity(232U);
    msg.value = 0.053035213775088796;

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
    msg.setTimeStamp(0.14273605144398482);
    msg.setSource(28781U);
    msg.setSourceEntity(140U);
    msg.setDestination(58944U);
    msg.setDestinationEntity(252U);
    msg.value = 0.11170146382428925;

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
    msg.setTimeStamp(0.7323189658390601);
    msg.setSource(20144U);
    msg.setSourceEntity(176U);
    msg.setDestination(39683U);
    msg.setDestinationEntity(46U);
    msg.value = 0.9407689303894781;

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
    msg.setTimeStamp(0.9760270069077099);
    msg.setSource(61784U);
    msg.setSourceEntity(114U);
    msg.setDestination(59450U);
    msg.setDestinationEntity(106U);
    msg.value = 0.7952190492610333;

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
    msg.setTimeStamp(0.2551109560777264);
    msg.setSource(21086U);
    msg.setSourceEntity(144U);
    msg.setDestination(19480U);
    msg.setDestinationEntity(69U);
    msg.value = 0.8305734597918125;

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
    msg.setTimeStamp(0.9085902092198886);
    msg.setSource(9348U);
    msg.setSourceEntity(9U);
    msg.setDestination(53854U);
    msg.setDestinationEntity(87U);
    msg.x = 0.46078493028762535;
    msg.y = 0.49976192978558875;
    msg.z = 0.5763884934606236;
    msg.phi = 0.8788976753748723;
    msg.theta = 0.9907506817175061;
    msg.psi = 0.3323934477661755;
    msg.p = 0.5987924043265411;
    msg.q = 0.33860856247322013;
    msg.r = 0.7403324137373491;
    msg.u = 0.10658170822878366;
    msg.v = 0.7259321096992645;
    msg.w = 0.5755207524268259;
    msg.bias_psi = 0.9513047259144262;
    msg.bias_r = 0.5120076933857124;

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
    msg.setTimeStamp(0.8618194791640167);
    msg.setSource(12499U);
    msg.setSourceEntity(225U);
    msg.setDestination(16057U);
    msg.setDestinationEntity(196U);
    msg.x = 0.14569023862397112;
    msg.y = 0.8560715484363702;
    msg.z = 0.0982293606484258;
    msg.phi = 0.4407111424571064;
    msg.theta = 0.10557609453860395;
    msg.psi = 0.22596009925229343;
    msg.p = 0.6707436966453701;
    msg.q = 0.4842707977380484;
    msg.r = 0.41828087577276696;
    msg.u = 0.9021172645807811;
    msg.v = 0.02496410638642721;
    msg.w = 0.09698310141193434;
    msg.bias_psi = 0.4445537646217881;
    msg.bias_r = 0.5427006178782762;

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
    msg.setTimeStamp(0.8352746433885441);
    msg.setSource(8540U);
    msg.setSourceEntity(6U);
    msg.setDestination(39454U);
    msg.setDestinationEntity(218U);
    msg.x = 0.036770971796588836;
    msg.y = 0.10457826971665285;
    msg.z = 0.32297363029173787;
    msg.phi = 0.9630043090461416;
    msg.theta = 0.35549486718581313;
    msg.psi = 0.9543194167078567;
    msg.p = 0.98405379937451;
    msg.q = 0.578341590068351;
    msg.r = 0.4000674384511106;
    msg.u = 0.5396663548652045;
    msg.v = 0.36253712228427915;
    msg.w = 0.5586298740780041;
    msg.bias_psi = 0.2641988878238922;
    msg.bias_r = 0.18824486105592775;

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
    msg.setTimeStamp(0.8406833194395826);
    msg.setSource(27483U);
    msg.setSourceEntity(138U);
    msg.setDestination(36392U);
    msg.setDestinationEntity(240U);
    msg.bias_psi = 0.05101004930261055;
    msg.bias_r = 0.2985770859210106;
    msg.cog = 0.36410845130999936;
    msg.cyaw = 0.5930587125142689;
    msg.lbl_rej_level = 0.5415878779898599;
    msg.gps_rej_level = 0.6553716961957324;
    msg.custom_x = 0.6569178355429407;
    msg.custom_y = 0.7372226876263203;
    msg.custom_z = 0.033491024209973075;

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
    msg.setTimeStamp(0.5477866576263062);
    msg.setSource(34929U);
    msg.setSourceEntity(43U);
    msg.setDestination(33564U);
    msg.setDestinationEntity(249U);
    msg.bias_psi = 0.5195744810134322;
    msg.bias_r = 0.23529644735135258;
    msg.cog = 0.0549828737949265;
    msg.cyaw = 0.22910900571463566;
    msg.lbl_rej_level = 0.9321313416019491;
    msg.gps_rej_level = 0.025632398223746744;
    msg.custom_x = 0.7715569171802045;
    msg.custom_y = 0.007961776957212452;
    msg.custom_z = 0.9654370112253581;

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
    msg.setTimeStamp(0.7345803224053261);
    msg.setSource(2033U);
    msg.setSourceEntity(77U);
    msg.setDestination(31620U);
    msg.setDestinationEntity(152U);
    msg.bias_psi = 0.08951080492963803;
    msg.bias_r = 0.6743823875987374;
    msg.cog = 0.08123608088233436;
    msg.cyaw = 0.18353219106998986;
    msg.lbl_rej_level = 0.9082203287898926;
    msg.gps_rej_level = 0.7111314832456759;
    msg.custom_x = 0.32522156853273865;
    msg.custom_y = 0.3503871404964629;
    msg.custom_z = 0.36748541325306794;

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
    msg.setTimeStamp(0.14193651142035824);
    msg.setSource(909U);
    msg.setSourceEntity(248U);
    msg.setDestination(14885U);
    msg.setDestinationEntity(187U);
    msg.utc_time = 0.3735007331005643;
    msg.reason = 224U;

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
    msg.setTimeStamp(0.722574060955913);
    msg.setSource(20467U);
    msg.setSourceEntity(193U);
    msg.setDestination(5984U);
    msg.setDestinationEntity(41U);
    msg.utc_time = 0.6825874911891338;
    msg.reason = 73U;

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
    msg.setTimeStamp(0.9018037298910371);
    msg.setSource(35660U);
    msg.setSourceEntity(124U);
    msg.setDestination(8154U);
    msg.setDestinationEntity(169U);
    msg.utc_time = 0.8552198262144599;
    msg.reason = 144U;

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
    msg.setTimeStamp(0.25289624116566445);
    msg.setSource(4148U);
    msg.setSourceEntity(221U);
    msg.setDestination(20412U);
    msg.setDestinationEntity(17U);
    msg.id = 192U;
    msg.range = 0.15619636973417395;
    msg.acceptance = 122U;

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
    msg.setTimeStamp(0.6430888753974978);
    msg.setSource(12579U);
    msg.setSourceEntity(70U);
    msg.setDestination(63052U);
    msg.setDestinationEntity(174U);
    msg.id = 193U;
    msg.range = 0.060876368963673766;
    msg.acceptance = 54U;

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
    msg.setTimeStamp(0.15324507750702587);
    msg.setSource(47484U);
    msg.setSourceEntity(220U);
    msg.setDestination(43138U);
    msg.setDestinationEntity(189U);
    msg.id = 227U;
    msg.range = 0.533789263091506;
    msg.acceptance = 113U;

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
    msg.setTimeStamp(0.2970349430874518);
    msg.setSource(50594U);
    msg.setSourceEntity(194U);
    msg.setDestination(3539U);
    msg.setDestinationEntity(81U);
    msg.type = 111U;
    msg.reason = 188U;
    msg.value = 0.2562341260499382;
    msg.timestep = 0.17582653808704907;

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
    msg.setTimeStamp(0.32675876593530584);
    msg.setSource(62957U);
    msg.setSourceEntity(221U);
    msg.setDestination(345U);
    msg.setDestinationEntity(110U);
    msg.type = 177U;
    msg.reason = 20U;
    msg.value = 0.7495018910263465;
    msg.timestep = 0.4764937016930515;

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
    msg.setTimeStamp(0.17495549868069982);
    msg.setSource(32082U);
    msg.setSourceEntity(213U);
    msg.setDestination(46117U);
    msg.setDestinationEntity(251U);
    msg.type = 236U;
    msg.reason = 104U;
    msg.value = 0.6898191689540215;
    msg.timestep = 0.20177053882036855;

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
    msg.setTimeStamp(0.3902364376227384);
    msg.setSource(19306U);
    msg.setSourceEntity(174U);
    msg.setDestination(19917U);
    msg.setDestinationEntity(182U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PQAGWLCUNQXRPBXVEUIZWMYX");
    tmp_msg_0.lat = 0.6854645173142512;
    tmp_msg_0.lon = 0.0024446363381740444;
    tmp_msg_0.depth = 0.6772677397124642;
    tmp_msg_0.query_channel = 187U;
    tmp_msg_0.reply_channel = 174U;
    tmp_msg_0.transponder_delay = 227U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4681638638902713;
    msg.y = 0.3232481080827946;
    msg.var_x = 0.3701417672953726;
    msg.var_y = 0.4761646734052333;
    msg.distance = 0.3362235476416845;

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
    msg.setTimeStamp(0.7174274523028481);
    msg.setSource(47049U);
    msg.setSourceEntity(222U);
    msg.setDestination(41820U);
    msg.setDestinationEntity(65U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YPIOGXPRQZTRSUKSHZFQFEGSLOEKOZMHTNSBRXDWQKAHAESMUTCCZNCFRGZHDUWDCVFTFBZKNBQBAQJDSRHXVLPTLFVHTJUOEYWQXOSAZMIRJVCUCEDORVDPGPXFXMKINYJHCQVUOPHJNRLXNSDGFEMNPLMBGPWBGMOXLAQQEACLAWUVISWTAXVRCKHE");
    tmp_msg_0.lat = 0.2142588714475684;
    tmp_msg_0.lon = 0.8607188325330084;
    tmp_msg_0.depth = 0.18300808432900706;
    tmp_msg_0.query_channel = 252U;
    tmp_msg_0.reply_channel = 184U;
    tmp_msg_0.transponder_delay = 57U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2521648853244307;
    msg.y = 0.8810651327851572;
    msg.var_x = 0.7443943765655701;
    msg.var_y = 0.7654707633320598;
    msg.distance = 0.12561224511636293;

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
    msg.setTimeStamp(0.6813145010175384);
    msg.setSource(20777U);
    msg.setSourceEntity(38U);
    msg.setDestination(3836U);
    msg.setDestinationEntity(20U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VQJONGKFDHMEQNQKDHLRDVIGQCHBHWLVJCNUMIFWLGFQQZKWIPKJBLSBCNPZCCFUTJOOZXOAMWSJSXICQNITJCMSOSRHSPHRYEGUTZZMZEUNAKQXBXYLRKTORUZVXPFOPPGWLKCEZDHAWWAEGEZMNLPAUVNICQWVJRLIGELSYT");
    tmp_msg_0.lat = 0.7992833790748465;
    tmp_msg_0.lon = 0.5604468732875395;
    tmp_msg_0.depth = 0.5052357800801248;
    tmp_msg_0.query_channel = 252U;
    tmp_msg_0.reply_channel = 59U;
    tmp_msg_0.transponder_delay = 76U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.35204583833685543;
    msg.y = 0.7452900440270837;
    msg.var_x = 0.8367219432847458;
    msg.var_y = 0.5508388896203038;
    msg.distance = 0.8285822767775743;

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
    msg.setTimeStamp(0.9201383572587458);
    msg.setSource(24353U);
    msg.setSourceEntity(118U);
    msg.setDestination(29315U);
    msg.setDestinationEntity(236U);
    msg.state = 117U;

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
    msg.setTimeStamp(0.49777305715891706);
    msg.setSource(41680U);
    msg.setSourceEntity(202U);
    msg.setDestination(19761U);
    msg.setDestinationEntity(74U);
    msg.state = 191U;

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
    msg.setTimeStamp(0.5216445522682298);
    msg.setSource(6087U);
    msg.setSourceEntity(49U);
    msg.setDestination(50434U);
    msg.setDestinationEntity(219U);
    msg.state = 120U;

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
    msg.setTimeStamp(0.5783292992827547);
    msg.setSource(25488U);
    msg.setSourceEntity(42U);
    msg.setDestination(7766U);
    msg.setDestinationEntity(108U);
    msg.x = 0.7107091197797577;
    msg.y = 0.3045591919668541;
    msg.z = 0.7604478828968843;

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
    msg.setTimeStamp(0.6276322057263857);
    msg.setSource(14925U);
    msg.setSourceEntity(135U);
    msg.setDestination(34714U);
    msg.setDestinationEntity(95U);
    msg.x = 0.6406677801722653;
    msg.y = 0.7677432119001989;
    msg.z = 0.4635954943526037;

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
    msg.setTimeStamp(0.8666681438459197);
    msg.setSource(25481U);
    msg.setSourceEntity(101U);
    msg.setDestination(51802U);
    msg.setDestinationEntity(194U);
    msg.x = 0.17967734803693203;
    msg.y = 0.24264728345577768;
    msg.z = 0.31329071176340684;

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
    msg.setTimeStamp(0.4998892978001044);
    msg.setSource(4624U);
    msg.setSourceEntity(87U);
    msg.setDestination(53191U);
    msg.setDestinationEntity(237U);
    msg.value = 0.9823424947081133;

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
    msg.setTimeStamp(0.09694496463988622);
    msg.setSource(38728U);
    msg.setSourceEntity(63U);
    msg.setDestination(1501U);
    msg.setDestinationEntity(150U);
    msg.value = 0.5645881233804774;

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
    msg.setTimeStamp(0.9464290093021865);
    msg.setSource(56769U);
    msg.setSourceEntity(158U);
    msg.setDestination(56699U);
    msg.setDestinationEntity(191U);
    msg.value = 0.45289554216267747;

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
    msg.setTimeStamp(0.7736102539619355);
    msg.setSource(28304U);
    msg.setSourceEntity(181U);
    msg.setDestination(63396U);
    msg.setDestinationEntity(130U);
    msg.value = 0.5539052580033187;
    msg.z_units = 38U;

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
    msg.setTimeStamp(0.39434608301753793);
    msg.setSource(1929U);
    msg.setSourceEntity(190U);
    msg.setDestination(32560U);
    msg.setDestinationEntity(167U);
    msg.value = 0.43694806962952726;
    msg.z_units = 53U;

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
    msg.setTimeStamp(0.8700004021253959);
    msg.setSource(27051U);
    msg.setSourceEntity(128U);
    msg.setDestination(7404U);
    msg.setDestinationEntity(190U);
    msg.value = 0.7180697496116952;
    msg.z_units = 71U;

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
    msg.setTimeStamp(0.4002399247018833);
    msg.setSource(16849U);
    msg.setSourceEntity(118U);
    msg.setDestination(12214U);
    msg.setDestinationEntity(187U);
    msg.value = 0.1637185200180027;
    msg.speed_units = 75U;

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
    msg.setTimeStamp(0.8149885993361717);
    msg.setSource(20181U);
    msg.setSourceEntity(66U);
    msg.setDestination(6643U);
    msg.setDestinationEntity(32U);
    msg.value = 0.5786605901668935;
    msg.speed_units = 6U;

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
    msg.setTimeStamp(0.3307097612550285);
    msg.setSource(28407U);
    msg.setSourceEntity(222U);
    msg.setDestination(44594U);
    msg.setDestinationEntity(120U);
    msg.value = 0.22921382792327127;
    msg.speed_units = 132U;

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
    msg.setTimeStamp(0.7382201864623203);
    msg.setSource(10371U);
    msg.setSourceEntity(62U);
    msg.setDestination(18175U);
    msg.setDestinationEntity(42U);
    msg.value = 0.8578599968039082;

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
    msg.setTimeStamp(0.24430107921272937);
    msg.setSource(17788U);
    msg.setSourceEntity(118U);
    msg.setDestination(63350U);
    msg.setDestinationEntity(152U);
    msg.value = 0.081463003688511;

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
    msg.setTimeStamp(0.8527897256765169);
    msg.setSource(2924U);
    msg.setSourceEntity(74U);
    msg.setDestination(55102U);
    msg.setDestinationEntity(105U);
    msg.value = 0.6540573911041341;

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
    msg.setTimeStamp(0.6252988969875496);
    msg.setSource(54927U);
    msg.setSourceEntity(246U);
    msg.setDestination(2443U);
    msg.setDestinationEntity(109U);
    msg.value = 0.8685252824287398;

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
    msg.setTimeStamp(0.41391513218296294);
    msg.setSource(55397U);
    msg.setSourceEntity(134U);
    msg.setDestination(3U);
    msg.setDestinationEntity(206U);
    msg.value = 0.05620383539577278;

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
    msg.setTimeStamp(0.3448351975728322);
    msg.setSource(61172U);
    msg.setSourceEntity(171U);
    msg.setDestination(38873U);
    msg.setDestinationEntity(86U);
    msg.value = 0.7610626346332838;

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
    msg.setTimeStamp(0.8394060125729887);
    msg.setSource(44888U);
    msg.setSourceEntity(248U);
    msg.setDestination(21236U);
    msg.setDestinationEntity(124U);
    msg.value = 0.3598035204384046;

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
    msg.setTimeStamp(0.3742842265589602);
    msg.setSource(57915U);
    msg.setSourceEntity(226U);
    msg.setDestination(1893U);
    msg.setDestinationEntity(100U);
    msg.value = 0.9037485159460261;

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
    msg.setTimeStamp(0.5739643592263998);
    msg.setSource(21833U);
    msg.setSourceEntity(209U);
    msg.setDestination(55347U);
    msg.setDestinationEntity(168U);
    msg.value = 0.8387953078920252;

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
    msg.setTimeStamp(0.7019276087133655);
    msg.setSource(28475U);
    msg.setSourceEntity(55U);
    msg.setDestination(18467U);
    msg.setDestinationEntity(83U);
    msg.path_ref = 3423993276U;
    msg.start_lat = 0.606561056543301;
    msg.start_lon = 0.9346935139048702;
    msg.start_z = 0.016823566278553193;
    msg.start_z_units = 101U;
    msg.end_lat = 0.40821797069095433;
    msg.end_lon = 0.5683457791727262;
    msg.end_z = 0.18552272762242417;
    msg.end_z_units = 66U;
    msg.speed = 0.7828058096483683;
    msg.speed_units = 91U;
    msg.lradius = 0.08157003875092472;
    msg.flags = 34U;

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
    msg.setTimeStamp(0.27442822383259036);
    msg.setSource(40166U);
    msg.setSourceEntity(4U);
    msg.setDestination(56200U);
    msg.setDestinationEntity(198U);
    msg.path_ref = 507104933U;
    msg.start_lat = 0.3861972896000706;
    msg.start_lon = 0.718171547139259;
    msg.start_z = 0.21929407421512437;
    msg.start_z_units = 132U;
    msg.end_lat = 0.29123712651342804;
    msg.end_lon = 0.2817383327205988;
    msg.end_z = 0.8583636932961966;
    msg.end_z_units = 34U;
    msg.speed = 0.6699288039244179;
    msg.speed_units = 7U;
    msg.lradius = 0.44117111937463116;
    msg.flags = 221U;

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
    msg.setTimeStamp(0.6968175484922831);
    msg.setSource(38324U);
    msg.setSourceEntity(152U);
    msg.setDestination(58299U);
    msg.setDestinationEntity(107U);
    msg.path_ref = 2552408973U;
    msg.start_lat = 0.5668299912309218;
    msg.start_lon = 0.822376418052338;
    msg.start_z = 0.3488078357002611;
    msg.start_z_units = 176U;
    msg.end_lat = 0.42709782519025774;
    msg.end_lon = 0.36650727347038914;
    msg.end_z = 0.5965152828246005;
    msg.end_z_units = 24U;
    msg.speed = 0.624891788185308;
    msg.speed_units = 124U;
    msg.lradius = 0.4316319418250646;
    msg.flags = 180U;

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
    msg.setTimeStamp(0.7963877969333714);
    msg.setSource(24562U);
    msg.setSourceEntity(218U);
    msg.setDestination(2834U);
    msg.setDestinationEntity(54U);
    msg.x = 0.4090910205487831;
    msg.y = 0.8541126473951328;
    msg.z = 0.07393044551552819;
    msg.k = 0.8548242252475394;
    msg.m = 0.1358100364570256;
    msg.n = 0.12182675713148139;
    msg.flags = 249U;

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
    msg.setTimeStamp(0.7124905033532275);
    msg.setSource(28752U);
    msg.setSourceEntity(88U);
    msg.setDestination(24473U);
    msg.setDestinationEntity(85U);
    msg.x = 0.2487582381156621;
    msg.y = 0.23751769380762477;
    msg.z = 0.14435552443395483;
    msg.k = 0.7674625534792793;
    msg.m = 0.010285795656023278;
    msg.n = 0.8931289886073515;
    msg.flags = 194U;

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
    msg.setTimeStamp(0.32904128797141374);
    msg.setSource(36589U);
    msg.setSourceEntity(147U);
    msg.setDestination(14206U);
    msg.setDestinationEntity(70U);
    msg.x = 0.6053220534930942;
    msg.y = 0.24694592051315867;
    msg.z = 0.5202261177507406;
    msg.k = 0.9377813065619979;
    msg.m = 0.6784363270384854;
    msg.n = 0.28691093816290625;
    msg.flags = 47U;

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
    msg.setTimeStamp(0.5241503698209907);
    msg.setSource(9901U);
    msg.setSourceEntity(15U);
    msg.setDestination(29137U);
    msg.setDestinationEntity(227U);
    msg.value = 0.6871044618816365;

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
    msg.setTimeStamp(0.3867231933670283);
    msg.setSource(24237U);
    msg.setSourceEntity(164U);
    msg.setDestination(27612U);
    msg.setDestinationEntity(47U);
    msg.value = 0.8046779027730089;

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
    msg.setTimeStamp(0.937263788706378);
    msg.setSource(47052U);
    msg.setSourceEntity(181U);
    msg.setDestination(45886U);
    msg.setDestinationEntity(98U);
    msg.value = 0.40607154443654747;

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
    msg.setTimeStamp(0.6291998110823611);
    msg.setSource(56363U);
    msg.setSourceEntity(181U);
    msg.setDestination(40935U);
    msg.setDestinationEntity(90U);
    msg.u = 0.4403345044532406;
    msg.v = 0.07702043938287506;
    msg.w = 0.38474708152891657;
    msg.p = 0.9136079098344351;
    msg.q = 0.08667613959001352;
    msg.r = 0.9114203919249898;
    msg.flags = 194U;

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
    msg.setTimeStamp(0.6337743889307315);
    msg.setSource(60622U);
    msg.setSourceEntity(250U);
    msg.setDestination(42064U);
    msg.setDestinationEntity(1U);
    msg.u = 0.9952059188201152;
    msg.v = 0.42690362575885965;
    msg.w = 0.22132554878772615;
    msg.p = 0.18178884299351772;
    msg.q = 0.6759436085345306;
    msg.r = 0.8517843807284288;
    msg.flags = 214U;

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
    msg.setTimeStamp(0.6936040314532202);
    msg.setSource(23934U);
    msg.setSourceEntity(126U);
    msg.setDestination(14458U);
    msg.setDestinationEntity(9U);
    msg.u = 0.9657893939022079;
    msg.v = 0.599777487997003;
    msg.w = 0.5360975172966072;
    msg.p = 0.27647618531591667;
    msg.q = 0.48564749849287747;
    msg.r = 0.7832357793152225;
    msg.flags = 187U;

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
    msg.setTimeStamp(0.8218443504088994);
    msg.setSource(62162U);
    msg.setSourceEntity(180U);
    msg.setDestination(58714U);
    msg.setDestinationEntity(212U);
    msg.path_ref = 1324188318U;
    msg.start_lat = 0.6050919692404845;
    msg.start_lon = 0.7156076006345475;
    msg.start_z = 0.04762115396625599;
    msg.start_z_units = 63U;
    msg.end_lat = 0.47682682859204384;
    msg.end_lon = 0.8654824079024382;
    msg.end_z = 0.013659772973273254;
    msg.end_z_units = 208U;
    msg.lradius = 0.1284083719504011;
    msg.flags = 72U;
    msg.x = 0.8953295023723701;
    msg.y = 0.32307851742239846;
    msg.z = 0.12241989745307624;
    msg.vx = 0.5315061720006947;
    msg.vy = 0.4306131338805611;
    msg.vz = 0.08686698393106085;
    msg.course_error = 0.748638829458526;
    msg.eta = 1359U;

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
    msg.setTimeStamp(0.25943377315027727);
    msg.setSource(52950U);
    msg.setSourceEntity(233U);
    msg.setDestination(3323U);
    msg.setDestinationEntity(163U);
    msg.path_ref = 2614904086U;
    msg.start_lat = 0.36917049666555535;
    msg.start_lon = 0.08916933956694073;
    msg.start_z = 0.667751369675656;
    msg.start_z_units = 135U;
    msg.end_lat = 0.6585346159182979;
    msg.end_lon = 0.2954211106433352;
    msg.end_z = 0.841744781594934;
    msg.end_z_units = 234U;
    msg.lradius = 0.4616455532631413;
    msg.flags = 219U;
    msg.x = 0.37696937753287496;
    msg.y = 0.2923365799365033;
    msg.z = 0.32640049527284476;
    msg.vx = 0.46469600183890136;
    msg.vy = 0.12740029985182144;
    msg.vz = 0.46616870065760285;
    msg.course_error = 0.2264808809305463;
    msg.eta = 13136U;

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
    msg.setTimeStamp(0.145482673723636);
    msg.setSource(10717U);
    msg.setSourceEntity(109U);
    msg.setDestination(35737U);
    msg.setDestinationEntity(31U);
    msg.path_ref = 2191454820U;
    msg.start_lat = 0.4664809326819709;
    msg.start_lon = 0.8000705929735152;
    msg.start_z = 0.6585693366152485;
    msg.start_z_units = 217U;
    msg.end_lat = 0.6176340397774867;
    msg.end_lon = 0.2694191425759731;
    msg.end_z = 0.140753240817446;
    msg.end_z_units = 163U;
    msg.lradius = 0.42266758951141925;
    msg.flags = 90U;
    msg.x = 0.6100245368440891;
    msg.y = 0.6870981378414489;
    msg.z = 0.2594694678196158;
    msg.vx = 0.5370106291325815;
    msg.vy = 0.2557926520704501;
    msg.vz = 0.8859950754357466;
    msg.course_error = 0.8497296989569733;
    msg.eta = 45698U;

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
    msg.setTimeStamp(0.3133426198714231);
    msg.setSource(5255U);
    msg.setSourceEntity(177U);
    msg.setDestination(1556U);
    msg.setDestinationEntity(64U);
    msg.k = 0.013173454439746934;
    msg.m = 0.23961136919350357;
    msg.n = 0.24809231090955908;

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
    msg.setTimeStamp(0.31531128561918087);
    msg.setSource(61623U);
    msg.setSourceEntity(251U);
    msg.setDestination(21826U);
    msg.setDestinationEntity(167U);
    msg.k = 0.6988391047096267;
    msg.m = 0.4997148309147753;
    msg.n = 0.9374729750948646;

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
    msg.setTimeStamp(0.3869343352961394);
    msg.setSource(18563U);
    msg.setSourceEntity(212U);
    msg.setDestination(41406U);
    msg.setDestinationEntity(48U);
    msg.k = 0.9886593591492101;
    msg.m = 0.01817395457859028;
    msg.n = 0.05304861962681695;

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
    msg.setTimeStamp(0.5499147239647624);
    msg.setSource(35242U);
    msg.setSourceEntity(4U);
    msg.setDestination(14809U);
    msg.setDestinationEntity(53U);
    msg.p = 0.7022284172044705;
    msg.i = 0.042149402780516265;
    msg.d = 0.3935685195304729;
    msg.a = 0.457239855126908;

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
    msg.setTimeStamp(0.08509919813532074);
    msg.setSource(16316U);
    msg.setSourceEntity(248U);
    msg.setDestination(55933U);
    msg.setDestinationEntity(24U);
    msg.p = 0.4712927361484557;
    msg.i = 0.7118084516726351;
    msg.d = 0.15134645530077862;
    msg.a = 0.36228563074272635;

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
    msg.setTimeStamp(0.7635000429451798);
    msg.setSource(63845U);
    msg.setSourceEntity(97U);
    msg.setDestination(13642U);
    msg.setDestinationEntity(134U);
    msg.p = 0.21109880039637696;
    msg.i = 0.49253340541868085;
    msg.d = 0.14410713826577626;
    msg.a = 0.5028173691351215;

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
    msg.setTimeStamp(0.6929373069574638);
    msg.setSource(24848U);
    msg.setSourceEntity(73U);
    msg.setDestination(7856U);
    msg.setDestinationEntity(28U);
    msg.op = 170U;

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
    msg.setTimeStamp(0.025666875598957195);
    msg.setSource(6121U);
    msg.setSourceEntity(236U);
    msg.setDestination(18389U);
    msg.setDestinationEntity(94U);
    msg.op = 235U;

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
    msg.setTimeStamp(0.5619290511309468);
    msg.setSource(25328U);
    msg.setSourceEntity(234U);
    msg.setDestination(42538U);
    msg.setDestinationEntity(121U);
    msg.op = 29U;

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
    msg.setTimeStamp(0.6296965978376952);
    msg.setSource(19545U);
    msg.setSourceEntity(134U);
    msg.setDestination(12336U);
    msg.setDestinationEntity(39U);
    msg.timeout = 8522U;
    msg.lat = 0.5280595153551166;
    msg.lon = 0.9753666407185769;
    msg.z = 0.8308223901730797;
    msg.z_units = 53U;
    msg.speed = 0.7383491833595275;
    msg.speed_units = 242U;
    msg.roll = 0.9447111755878205;
    msg.pitch = 0.46468831368140173;
    msg.yaw = 0.5963018733043839;
    msg.custom.assign("TOJMCOBRDMBGDKEFYTISNMOARHAFTCSBQPGEPLCVQYBEWN");

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
    msg.setTimeStamp(0.2692279994183272);
    msg.setSource(30736U);
    msg.setSourceEntity(182U);
    msg.setDestination(29369U);
    msg.setDestinationEntity(109U);
    msg.timeout = 60610U;
    msg.lat = 0.1685058005619532;
    msg.lon = 0.08574901228851117;
    msg.z = 0.4385749013444039;
    msg.z_units = 190U;
    msg.speed = 0.8969780181126349;
    msg.speed_units = 19U;
    msg.roll = 0.2360745824088868;
    msg.pitch = 0.4083422191413608;
    msg.yaw = 0.5856143969554314;
    msg.custom.assign("LBNNLGCVYLFXANKGXGLOAYPPDHYGTYDVHQXREMGCMSYFBAKRNFDLYIVNFTSFSSVQBHVDQOJZGEWNBEIDZVHTUVOZXPMAIUIQISMOCEHJUXQLMJAUWUXNIZFONKSAWCPKCVTBWTRHZTQWBAJGRTPSKUZNIHBUWGZRLQCREKFFBUBCOIWVJZAQDRDTYXSJCEWOJPPILEDHMHFPPPJRKMEQXDKVLIZA");

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
    msg.setTimeStamp(0.24510597761883213);
    msg.setSource(20874U);
    msg.setSourceEntity(204U);
    msg.setDestination(14065U);
    msg.setDestinationEntity(104U);
    msg.timeout = 62263U;
    msg.lat = 0.6768029944012736;
    msg.lon = 0.6679938839930352;
    msg.z = 0.8372335913416865;
    msg.z_units = 161U;
    msg.speed = 0.38671863412887497;
    msg.speed_units = 214U;
    msg.roll = 0.9611646529376374;
    msg.pitch = 0.23542090589352271;
    msg.yaw = 0.697481242461194;
    msg.custom.assign("EFYVOHCAMNSHWNXVUCMNYWZFZIXXOUPPRVNPIETAHJOLPGTEIQAYOVNKVGMVKAWDATTKXQVNRITSSTMRZKOBYUZQUWEHJKJDPTPGAIBRCWCZTNKHDWFIKGKEARWTBINRLERDAIHOEDOEUVFMMUJDEPBOVR");

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
    msg.setTimeStamp(0.00706759132098278);
    msg.setSource(42927U);
    msg.setSourceEntity(106U);
    msg.setDestination(29843U);
    msg.setDestinationEntity(222U);
    msg.timeout = 26958U;
    msg.lat = 0.2680764532014489;
    msg.lon = 0.6099997177698401;
    msg.z = 0.45837431179278465;
    msg.z_units = 199U;
    msg.speed = 0.6478510872434036;
    msg.speed_units = 251U;
    msg.duration = 54365U;
    msg.radius = 0.25794722565830397;
    msg.flags = 154U;
    msg.custom.assign("QADTYCFECXPGZMRUTOHZIDSUADRLAFYBVJAPKYOEJSNALRAFMDVMBCNUIKDFIPEYXYVBHVFZXNLHFCRHMBUJZXCWKJLUTSLNEGIVHTVOCSEQKOBGZWMIEZOJXYTMKNUZQLLFWWMRGATHGWKWTQPFSNBQOMLSPODBIQWOZRCXITRQIJDCSHINNXWRUYFXWOODUQKPGNJETEIGM");

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
    msg.setTimeStamp(0.20526738447891246);
    msg.setSource(64825U);
    msg.setSourceEntity(155U);
    msg.setDestination(54897U);
    msg.setDestinationEntity(89U);
    msg.timeout = 24520U;
    msg.lat = 0.6686877614852202;
    msg.lon = 0.35692238718584124;
    msg.z = 0.23180482353648812;
    msg.z_units = 123U;
    msg.speed = 0.07552519519418421;
    msg.speed_units = 98U;
    msg.duration = 14285U;
    msg.radius = 0.46754904529504127;
    msg.flags = 20U;
    msg.custom.assign("RDKOIGMIMZKHRPJPNBPEQYOILJOVNFAWEWZALJTFSHWFSHFCOCPXNGNLLHEWCNCXRYVTUZWXYFSHWWGCYSCVIKKSXBNOCUIFZITWKFPSMVGACBRFXADBQUFRQQMXNCABBZEHPDKRSBUOJLJBHAKUPQOTWKUUMDYJXQSTIHGYXHRREBDNR");

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
    msg.setTimeStamp(0.20349501736168996);
    msg.setSource(26186U);
    msg.setSourceEntity(10U);
    msg.setDestination(28091U);
    msg.setDestinationEntity(60U);
    msg.timeout = 37592U;
    msg.lat = 0.9076360458938786;
    msg.lon = 0.5205057255698099;
    msg.z = 0.7346983709047421;
    msg.z_units = 223U;
    msg.speed = 0.31561123051273;
    msg.speed_units = 9U;
    msg.duration = 18950U;
    msg.radius = 0.18108698265495327;
    msg.flags = 103U;
    msg.custom.assign("JULUCAGHOAVMPIFBFGFCIRRPYXEGLYHDGSORRKOFWMREZYCFRZNFBVZVQINATCEDKXPBRJPYVIQMBOPTMKCOCCPUDESJTWWJNNXBCRLVQQBIRIUFUGQLKJTSPWJGNTAIXHKFBWIOSYMBEHYLMJYVDXLKKZWDFDQHUQHIYASJMOLNGLWXUYSRUTXZBDPQTCQKSOXXNDCASSJTDHTEVTMEEA");

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
    msg.setTimeStamp(0.14265673474201035);
    msg.setSource(17913U);
    msg.setSourceEntity(236U);
    msg.setDestination(28704U);
    msg.setDestinationEntity(90U);
    msg.custom.assign("YVSNOGLOKXBGUZPYVMNZSMLNAWVXNGGYSLFHZJLDKDMQHWRXAOXZFJHEZFXKWOKEPRTPMQIBJFFBHTTCCVNBNSHIGGMMAHXFVIPQAVDDPPVDVA");

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
    msg.setTimeStamp(0.858973585884433);
    msg.setSource(36952U);
    msg.setSourceEntity(171U);
    msg.setDestination(42622U);
    msg.setDestinationEntity(58U);
    msg.custom.assign("DAYUXCYJTMSDODUBPMQXXFUGWFJGEWRTTIBWSESEJNAMZMCUNKMHFSLYBOKXOCPFHSLDAYDVZEVKGRXTNVANZLOQWJKOJZDONBMPISHERGBAVFGUBVQLNOZVVQERCLIIYMQBAZMYHUNQQUPWLGHISCIZFYWDORLHXVJJNCVTXDSQPWSHTAAKEQOWFKT");

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
    msg.setTimeStamp(0.9462193204328314);
    msg.setSource(43449U);
    msg.setSourceEntity(64U);
    msg.setDestination(54874U);
    msg.setDestinationEntity(209U);
    msg.custom.assign("POSUCJAGML");

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
    msg.setTimeStamp(0.2049393835861728);
    msg.setSource(53028U);
    msg.setSourceEntity(71U);
    msg.setDestination(6060U);
    msg.setDestinationEntity(244U);
    msg.timeout = 972U;
    msg.lat = 0.688792728108196;
    msg.lon = 0.6973278334768037;
    msg.z = 0.525671645475312;
    msg.z_units = 60U;
    msg.duration = 43911U;
    msg.speed = 0.41370984630213326;
    msg.speed_units = 198U;
    msg.type = 185U;
    msg.radius = 0.43254073453122177;
    msg.length = 0.8315491289394906;
    msg.bearing = 0.9655838245839463;
    msg.direction = 165U;
    msg.custom.assign("KFQCKEQCBGHNIDULIWBBPJDOCJMYHUZKXGAKUTHXCTYONVDVYVRFHCWRQEKZBXHNSZIFGNOEKGBOZMLTKIJNRTWJNBEVVNZSTDQFOMURMXSNLJNQVLDFITSRIRLNFUDYPESMPZAYDVVZXAAFWGIKZIEGGOQJQFFSAPCXLUPYRSVABPSYOYEWYHBGTUIAHHGJAMMECRBGJKRXEEFTBMUPWLDLHAQIXOAPXDRZTOPDWHMUT");

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
    msg.setTimeStamp(0.45394147463495316);
    msg.setSource(18626U);
    msg.setSourceEntity(88U);
    msg.setDestination(54001U);
    msg.setDestinationEntity(139U);
    msg.timeout = 26639U;
    msg.lat = 0.2016747174718696;
    msg.lon = 0.3705661186600916;
    msg.z = 0.6185610545340641;
    msg.z_units = 200U;
    msg.duration = 19424U;
    msg.speed = 0.010764808414398419;
    msg.speed_units = 160U;
    msg.type = 117U;
    msg.radius = 0.7756567774849334;
    msg.length = 0.5271168019535472;
    msg.bearing = 0.0378850450505428;
    msg.direction = 35U;
    msg.custom.assign("YNBYNPQKITGFPFDLRGTHKBBKOXXKPTILJEVATPJMDUELSIVOERKMGWLUIXSSYQNALAVDVGKEOFARWELARYTVHHEDOALAIFRDZXOMRJZOYGZQNMZPCCXJIBQJUQPJGXSQENYBATNBMQLWHGWPV");

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
    msg.setTimeStamp(0.6014916764287945);
    msg.setSource(27744U);
    msg.setSourceEntity(0U);
    msg.setDestination(63291U);
    msg.setDestinationEntity(155U);
    msg.timeout = 38338U;
    msg.lat = 0.19966632303932952;
    msg.lon = 0.42559473089971167;
    msg.z = 0.4325516007097888;
    msg.z_units = 93U;
    msg.duration = 3471U;
    msg.speed = 0.22621273948875598;
    msg.speed_units = 97U;
    msg.type = 231U;
    msg.radius = 0.35816378410682503;
    msg.length = 0.9728626704351406;
    msg.bearing = 0.1095169098729405;
    msg.direction = 218U;
    msg.custom.assign("BOPNBQRZSIATXAKDEGPVMWRVJZLBQGPDRSKQWQALRMMYSMECHNXZJKRCPCFTIGFBRAXCKJOHOAODAGPTOJODWHJRBVVYGUVKBEZUNSRBTHYMTZITHKIOCYFJCN");

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
    msg.setTimeStamp(0.8782157578740569);
    msg.setSource(3160U);
    msg.setSourceEntity(231U);
    msg.setDestination(24002U);
    msg.setDestinationEntity(78U);
    msg.duration = 34735U;
    msg.custom.assign("BMUBDAJYQOIXGLSMGCPQDNUFKMARZYHAFNAWUNWLXRKSJXFOSSHLSQRMEYGRFOVUKTCCYUHAEZERFLOWANVFCFGPPHZLNQJJOIYLQIBQHWTGWIQDVJJVDRHKLMJEPIZOKGSHN");

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
    msg.setTimeStamp(0.28164325725495654);
    msg.setSource(36708U);
    msg.setSourceEntity(136U);
    msg.setDestination(6440U);
    msg.setDestinationEntity(125U);
    msg.duration = 39813U;
    msg.custom.assign("WAMOTVXLBEHKGYGGUWVNNXSNSYHTDYZKHNHLO");

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
    msg.setTimeStamp(0.3550293830435416);
    msg.setSource(44845U);
    msg.setSourceEntity(201U);
    msg.setDestination(45358U);
    msg.setDestinationEntity(244U);
    msg.duration = 27558U;
    msg.custom.assign("JEFSAELTQCYNYAWVSSTXDHKCMBIRJSOPZEDAEBCSWPANCVBDYLSWZBPBFKLNHRIFGOYMPXVGCLSBNBFTYMYPYOARV");

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
    msg.setTimeStamp(0.8835869000700868);
    msg.setSource(26133U);
    msg.setSourceEntity(117U);
    msg.setDestination(42162U);
    msg.setDestinationEntity(44U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.39141527627433503;
    tmp_msg_0.speed_units = 166U;
    msg.control.set(tmp_msg_0);
    msg.duration = 39310U;
    msg.custom.assign("UKCMEUBYJFYYSEVDRMFJTRDDPNNLOYFEPXBSBINDZXWHXMGMAGMNQJBEMPGHQKOBXTUAGVAFXHVRNRPCIBKEQFGYEMXPCKJFITWOQHSAHJSRANHSLECFGRWVTUQWUCMSAKHXWQUGVMSZZZVBITFFIYDKAFHTDGRUKRLOEWCTPDPRDNTDCCVEIBWIJVOMBZZOVINEKYUSLDZGBTRXWJSUHCJYKLZUXPJQOV");

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
    msg.setTimeStamp(0.5207133400710056);
    msg.setSource(23207U);
    msg.setSourceEntity(27U);
    msg.setDestination(62827U);
    msg.setDestinationEntity(25U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.31449938430718327;
    tmp_msg_0.z_units = 104U;
    msg.control.set(tmp_msg_0);
    msg.duration = 54694U;
    msg.custom.assign("VHPRGFGOMWHQRIHHBABZOKENFTRPLZWVSHJXYKQMOQDXPSFIAXKYBLLMXSNGIEVESICJGPYDWCDJKPYXZXUTXVXTRYMFUWYZWZPBSNWQBNQJPBRAABDPIKWAMUKVGAGTGLCMAZZVBLPZHJODQDNLEVUMWRIFYZHOEFXQCGUNOEETUCMRDGSCHTKFOMPYKHISNJAIZIIMNDBJWQVTWUAOYGOCJAJCUXUQSLCFERDHDCFBLNQNEKLST");

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
    msg.setTimeStamp(0.6310145952755369);
    msg.setSource(15093U);
    msg.setSourceEntity(174U);
    msg.setDestination(54411U);
    msg.setDestinationEntity(66U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.15760795264092475;
    msg.control.set(tmp_msg_0);
    msg.duration = 53885U;
    msg.custom.assign("FUYVTZWGMBCTJJZIBALFGUYKHMEKEVEVHPBASBQHQJZAACZQHSWVMXVZSWWTJBOLRXRVGPBOZFWYDBRCIPMGHREHXJAEGIOOCLSNWFSLYKKFFKOEFPVERMNLQCNOUJCGUWAINUNSTYSQQDYDTNNOTAKJWSQTKVPGQPLZUYVJGJZGDRRNQMDISBMAEGHREXTIWUCRXPOQCZDOTICPEILPISYXNUXMUHDKYIVKTXMDLDFNZAAJCRLHYMPHUF");

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
    msg.setTimeStamp(0.8899820327351666);
    msg.setSource(6090U);
    msg.setSourceEntity(240U);
    msg.setDestination(48044U);
    msg.setDestinationEntity(45U);
    msg.timeout = 6004U;
    msg.lat = 0.44058122363297525;
    msg.lon = 0.025367420475106983;
    msg.z = 0.8214238308957842;
    msg.z_units = 61U;
    msg.speed = 0.2908408163860803;
    msg.speed_units = 148U;
    msg.bearing = 0.35094836104287064;
    msg.cross_angle = 0.8465464518114975;
    msg.width = 0.10521705456489894;
    msg.length = 0.9027972052726447;
    msg.hstep = 0.24305078859464413;
    msg.coff = 125U;
    msg.alternation = 78U;
    msg.flags = 12U;
    msg.custom.assign("UIZBGCTYRBJCOBJXUCWINUAAMKNGLSMBGJGHLDGROPXHXKBGZINSORLVCONNROUTDPVRFHODJSJVDPVBVUMQXHLEMMAQMDHRYMJTVLIKUEPAFGKPSWRCMAXRHRWOEJJNIYAUAUGOCEFYFBDKLYBEOKHKYZFTTFLXXGFPZESPRDSZGQDPDQNWIAFAKSUKZSVW");

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
    msg.setTimeStamp(0.2330249439455212);
    msg.setSource(38978U);
    msg.setSourceEntity(175U);
    msg.setDestination(53629U);
    msg.setDestinationEntity(243U);
    msg.timeout = 44960U;
    msg.lat = 0.3091939084633467;
    msg.lon = 0.5837272026339102;
    msg.z = 0.9775662136455047;
    msg.z_units = 145U;
    msg.speed = 0.19807150835348553;
    msg.speed_units = 218U;
    msg.bearing = 0.17065289763697566;
    msg.cross_angle = 0.387712097168493;
    msg.width = 0.9870202136978129;
    msg.length = 0.986044121500136;
    msg.hstep = 0.1500440880612678;
    msg.coff = 43U;
    msg.alternation = 66U;
    msg.flags = 239U;
    msg.custom.assign("PTFJJSRNQMKSZEEXCGGYRNOJUBPOUFFKSLDRVGKUAWZOYUOLGUERDHJNNMBEXRCKGHTIICUTAYEQXXVYSXPGLWFGLHZFXSOABZIZBJYKBGVAJAPZKWTBHITWFOQHSNYUITWB");

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
    msg.setTimeStamp(0.29347110356758055);
    msg.setSource(38779U);
    msg.setSourceEntity(95U);
    msg.setDestination(12971U);
    msg.setDestinationEntity(23U);
    msg.timeout = 62128U;
    msg.lat = 0.6271714694106095;
    msg.lon = 0.736814070440055;
    msg.z = 0.8664659321696616;
    msg.z_units = 247U;
    msg.speed = 0.5706881914154643;
    msg.speed_units = 243U;
    msg.bearing = 0.7052983397919106;
    msg.cross_angle = 0.28925578125416096;
    msg.width = 0.7276251368585352;
    msg.length = 0.2694188652275785;
    msg.hstep = 0.642791892967839;
    msg.coff = 179U;
    msg.alternation = 34U;
    msg.flags = 147U;
    msg.custom.assign("DYYWXELYWVCEGWUNPMSHXKBPPDOKNU");

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
    msg.setTimeStamp(0.6062654042821335);
    msg.setSource(42131U);
    msg.setSourceEntity(136U);
    msg.setDestination(50738U);
    msg.setDestinationEntity(57U);
    msg.timeout = 18726U;
    msg.lat = 0.674813342240597;
    msg.lon = 0.09399585069031846;
    msg.z = 0.8310620917867653;
    msg.z_units = 154U;
    msg.speed = 0.2514480485879008;
    msg.speed_units = 35U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.3249010023964046;
    tmp_msg_0.y = 0.927410798786263;
    tmp_msg_0.z = 0.8459107836138268;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FRUVBRPYMCLELZCVGNJFUZNSJCOSGHTEAZQHZPVUHKKXEYTKSRCKRHZDVJAWRJRSE");

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
    msg.setTimeStamp(0.7119271035869259);
    msg.setSource(11106U);
    msg.setSourceEntity(77U);
    msg.setDestination(43075U);
    msg.setDestinationEntity(52U);
    msg.timeout = 20345U;
    msg.lat = 0.19515694473561696;
    msg.lon = 0.5965082189480998;
    msg.z = 0.08766958855688678;
    msg.z_units = 150U;
    msg.speed = 0.21451659137393353;
    msg.speed_units = 214U;
    msg.custom.assign("XBYOPFPUWPSEMVFXGSHQHTGJKDWTQRYQNOTCJUFKEAJBYAJMYLLQYMAJBGVPDLEWSYVZUHNIDPILFNXPDHCQVSUGCXKHEUYMIRAIXKPJEDUIHIRJOZBSSWLTCNIKOSNCWTKLKEMAFZWQDZFROTOCTGCAILNJSRMQCGUOFV");

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
    msg.setTimeStamp(0.11376344635841984);
    msg.setSource(15989U);
    msg.setSourceEntity(137U);
    msg.setDestination(13944U);
    msg.setDestinationEntity(93U);
    msg.timeout = 5352U;
    msg.lat = 0.46252841209737316;
    msg.lon = 0.967789893425108;
    msg.z = 0.6809360226896936;
    msg.z_units = 77U;
    msg.speed = 0.6817433173526323;
    msg.speed_units = 114U;
    msg.custom.assign("NMSLRIZYLUZXCXFMGBQOXWQAXRERZWPCIBFWUWFFYHLKSMVOSOFFPBQNJTSEDEYKRN");

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
    msg.setTimeStamp(0.045326012649864356);
    msg.setSource(25101U);
    msg.setSourceEntity(183U);
    msg.setDestination(62871U);
    msg.setDestinationEntity(113U);
    msg.x = 0.7605403897710654;
    msg.y = 0.18254209485813544;
    msg.z = 0.17115527491356697;

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
    msg.setTimeStamp(0.049430281408785026);
    msg.setSource(52761U);
    msg.setSourceEntity(21U);
    msg.setDestination(16894U);
    msg.setDestinationEntity(80U);
    msg.x = 0.7366975121196033;
    msg.y = 0.4847901220918679;
    msg.z = 0.9970113773780919;

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
    msg.setTimeStamp(0.8595029165322489);
    msg.setSource(22025U);
    msg.setSourceEntity(239U);
    msg.setDestination(25984U);
    msg.setDestinationEntity(107U);
    msg.x = 0.7152595352426298;
    msg.y = 0.10903389586879231;
    msg.z = 0.6803595404798715;

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
    msg.setTimeStamp(0.3400416533319919);
    msg.setSource(43662U);
    msg.setSourceEntity(188U);
    msg.setDestination(21720U);
    msg.setDestinationEntity(11U);
    msg.timeout = 8676U;
    msg.lat = 0.8509377041797435;
    msg.lon = 0.06650049908388089;
    msg.z = 0.36880246209732237;
    msg.z_units = 8U;
    msg.amplitude = 0.5398335508741416;
    msg.pitch = 0.6765570643089304;
    msg.speed = 0.32318331723548555;
    msg.speed_units = 222U;
    msg.custom.assign("HFJZKCSAAMMXWGAFSOLJLOOQHNBNSCHFESUXCRXXTQTTPIKNWDKAHFIYBUPSFREUKCGJYWMXQAUVNMBOLNMLKGCPDKVIWIPXSDZPZLFOHDYBCBQZULZMSBTT");

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
    msg.setTimeStamp(0.39914884458427924);
    msg.setSource(23070U);
    msg.setSourceEntity(83U);
    msg.setDestination(29797U);
    msg.setDestinationEntity(218U);
    msg.timeout = 61490U;
    msg.lat = 0.79642986160926;
    msg.lon = 0.35971777212033396;
    msg.z = 0.6935315508181459;
    msg.z_units = 180U;
    msg.amplitude = 0.09108817437155925;
    msg.pitch = 0.14241927180500935;
    msg.speed = 0.2680988320673219;
    msg.speed_units = 113U;
    msg.custom.assign("AWKDUFJQEFCJEQYFSFHKLAKORVTAQVSLCQFDQXFEPUYHLBRLGZFGDIBONMRCMZOPIEQKKINCRRXSOXWWTHNXWAJWGPCNJTHULOLYIKGAPZSDDJYBZOTYXGCKXLMRPGNIGGSTUTRKBELBOBXYONZZRTUIEITNUHWDZVSRNMVJBHSSRJOPFPVTXYXBYDIMQWPTCKVVUVFDCJAZLVHE");

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
    msg.setTimeStamp(0.28364706687327534);
    msg.setSource(21925U);
    msg.setSourceEntity(194U);
    msg.setDestination(65296U);
    msg.setDestinationEntity(249U);
    msg.timeout = 55094U;
    msg.lat = 0.8070900897725198;
    msg.lon = 0.6663008977400572;
    msg.z = 0.9942613379046068;
    msg.z_units = 133U;
    msg.amplitude = 0.02392890506438483;
    msg.pitch = 0.32510784995902187;
    msg.speed = 0.18696016556109873;
    msg.speed_units = 243U;
    msg.custom.assign("RSJCVFQHIDALYYGQUTNIUOKMYVBGFVOJUBRJPNCOEJZEAUUAYKBVJONMIACYWVDNRMDQLDCPDIGIZDAFJCFMCJZMKFWHDXFIQICNEBBSHHNXWKAOWXLETZSNRHXHJGPYBGRNEEFMVFQGRUQVRVQOPSCBHKWWOKMMHLBMLGTMSEDPPELYAIQXTZJWBWTLENTRJYPZFVVDIZIXXAKSLXOLXCBWPAEQODRKUXTAGLKSPFSTUTSUZKP");

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
    msg.setTimeStamp(0.2944577549829205);
    msg.setSource(6087U);
    msg.setSourceEntity(79U);
    msg.setDestination(2204U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.24618733345070187);
    msg.setSource(3089U);
    msg.setSourceEntity(70U);
    msg.setDestination(59516U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.27715525998452706);
    msg.setSource(52474U);
    msg.setSourceEntity(38U);
    msg.setDestination(22537U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.041480164959783794);
    msg.setSource(2336U);
    msg.setSourceEntity(47U);
    msg.setDestination(47159U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.3405447541273725;
    msg.lon = 0.40949186280793926;
    msg.z = 0.6073660758415056;
    msg.z_units = 253U;
    msg.radius = 0.204245008381997;
    msg.duration = 61010U;
    msg.speed = 0.19292133680254775;
    msg.speed_units = 110U;
    msg.custom.assign("WNXFNQRBOUSJIWGGKOJDQSJIHZZODDHUTVYXQLYNGZEKLMKSPTCRNVCGIKKFGWZJLFZUZPJOBELOFGXNXEJRALRTQXXHBBZDAWTDPOHXXTH");

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
    msg.setTimeStamp(0.18779442645376165);
    msg.setSource(9012U);
    msg.setSourceEntity(115U);
    msg.setDestination(16394U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.7736931915641955;
    msg.lon = 0.7738916635365582;
    msg.z = 0.9247921423499728;
    msg.z_units = 83U;
    msg.radius = 0.19956327446538336;
    msg.duration = 769U;
    msg.speed = 0.13938548342117307;
    msg.speed_units = 185U;
    msg.custom.assign("AKKBGQJZCHZAFAPVHGTNSWWJSWKPOQCMCOVAFWPPJTYIJAIGYQELGLCZWJLCNTKYMXFKDJQRUXBLPOYMTZGVMLDGPDKTEDWROVTBOAGUH");

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
    msg.setTimeStamp(0.16436414894707407);
    msg.setSource(33831U);
    msg.setSourceEntity(148U);
    msg.setDestination(37707U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.6764904039729347;
    msg.lon = 0.09409897426244118;
    msg.z = 0.43107476275617795;
    msg.z_units = 127U;
    msg.radius = 0.33317174904666336;
    msg.duration = 9581U;
    msg.speed = 0.825543604310347;
    msg.speed_units = 119U;
    msg.custom.assign("NBILYARTXAOPDIAHGGXZKYZENOZRRESJCCSWGFITQJOMAUJLOMTTWKZYROKHPNKIDUFPMFWHTHCURZFTFLVBIIHOKBBCEXQQTYDJAEBHKGBACKEYISMMWYDWLWUJTAMEWMLRCUMVG");

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
    msg.setTimeStamp(0.11221435019796322);
    msg.setSource(42665U);
    msg.setSourceEntity(43U);
    msg.setDestination(18882U);
    msg.setDestinationEntity(145U);
    msg.timeout = 14136U;
    msg.flags = 59U;
    msg.lat = 0.5907074725223335;
    msg.lon = 0.11382842714565322;
    msg.start_z = 0.41392588534789254;
    msg.start_z_units = 35U;
    msg.end_z = 0.6466555933936864;
    msg.end_z_units = 151U;
    msg.radius = 0.805760319039567;
    msg.speed = 0.15344419087012562;
    msg.speed_units = 9U;
    msg.custom.assign("QEJVNNQGMQVOSVWDPUSIUFLXCUEJMDUBETTZGNJQKQRAICFFLJHCHIINAOBIMWRHMVCOYBWXEJPSVIUYBSOTJRSWOUCFZZFRSQUJHXYAXKYNKGHNFTAAPBLRASVKFIWPXBDJAJZPG");

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
    msg.setTimeStamp(0.41539914211709483);
    msg.setSource(22606U);
    msg.setSourceEntity(119U);
    msg.setDestination(18147U);
    msg.setDestinationEntity(237U);
    msg.timeout = 51679U;
    msg.flags = 237U;
    msg.lat = 0.15720965774775186;
    msg.lon = 0.899135542227498;
    msg.start_z = 0.1363116061697517;
    msg.start_z_units = 79U;
    msg.end_z = 0.05690501687819194;
    msg.end_z_units = 113U;
    msg.radius = 0.6992741175107917;
    msg.speed = 0.8252741946678308;
    msg.speed_units = 90U;
    msg.custom.assign("ULKIWDHPFSZZMTXWIISDCFVULGYFUREIMNXCRLYOQQYTXLYKCMAJGGNQPNMUOJDSPASJXWRWMPKRHOJYFTBSKXZMDELDSCLJQEOHFGWAPLVMRREOBIPIZFAFHAHTOUBQJWIVSNVRCCCBASBQMQWTGYZQHDVTRLBOJRZDN");

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
    msg.setTimeStamp(0.9344784311087503);
    msg.setSource(12980U);
    msg.setSourceEntity(154U);
    msg.setDestination(44478U);
    msg.setDestinationEntity(20U);
    msg.timeout = 48301U;
    msg.flags = 107U;
    msg.lat = 0.19655556140634034;
    msg.lon = 0.6937377371058495;
    msg.start_z = 0.9714472360790831;
    msg.start_z_units = 32U;
    msg.end_z = 0.2567487418118125;
    msg.end_z_units = 230U;
    msg.radius = 0.6824472162484249;
    msg.speed = 0.4756523565292611;
    msg.speed_units = 35U;
    msg.custom.assign("VFVQSMUYPLYWKTRHVBYJOIWTFNCXDLVVPXTQUHLFLYOHUETCKPJSIFLBPTJUHUDURKRZOQMHVEFCNYVEAUYATTRRGWPXLCXNZEWKAJCBFOEDIEJIVZILSMUXBIRDGXMWOKQKZANJAJHDDBKDRZGNEGCEYCLDNHOAAGCOPWGQBSWVVRSGUXPSCUSJIQOMMZXHQKRMGNFBP");

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
    msg.setTimeStamp(0.4893267890606193);
    msg.setSource(29998U);
    msg.setSourceEntity(152U);
    msg.setDestination(11708U);
    msg.setDestinationEntity(50U);
    msg.timeout = 57365U;
    msg.lat = 0.16618712349396036;
    msg.lon = 0.44245062917794653;
    msg.z = 0.6039184112019351;
    msg.z_units = 241U;
    msg.speed = 0.3370529513234679;
    msg.speed_units = 216U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.44237850372266396;
    tmp_msg_0.y = 0.10536776499354406;
    tmp_msg_0.z = 0.2204654366259301;
    tmp_msg_0.t = 0.7987281718369129;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PZGDYOJNKGZXXIUYMBPDXCNTCPLBUIPNEGAERVLSAATEWQFPYVOGAMQDFRMHEIPSNYRVEJGLMITWBEACNCXLJCGMUZQOQVWMIJCEOMADTZNLPBZNFLSSEMIBHTBOXLTWQWWRAUSXBYKXRULGRRAUHFBINJSZXWBKCUMZDGRVCDFHJLQLAEDNGKKITIFXKFWSSCFVSRUNOKPHQEOWVQQIPZTPKDVHKMU");

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
    msg.setTimeStamp(0.6241492574742598);
    msg.setSource(27160U);
    msg.setSourceEntity(244U);
    msg.setDestination(2964U);
    msg.setDestinationEntity(214U);
    msg.timeout = 5724U;
    msg.lat = 0.6689899537242562;
    msg.lon = 0.25557031204266123;
    msg.z = 0.5134843310318102;
    msg.z_units = 222U;
    msg.speed = 0.3552718181764638;
    msg.speed_units = 175U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.2600747832122724;
    tmp_msg_0.y = 0.9991634286324109;
    tmp_msg_0.z = 0.5271662097869526;
    tmp_msg_0.t = 0.2616722913800521;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RBUBLCMVSFQJQPSWIROLFWEGCWMYAQMUPXCXDRYNOTEP");

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
    msg.setTimeStamp(0.4190553162377447);
    msg.setSource(31792U);
    msg.setSourceEntity(241U);
    msg.setDestination(56769U);
    msg.setDestinationEntity(180U);
    msg.timeout = 16599U;
    msg.lat = 0.06818585724012938;
    msg.lon = 0.9839045646328006;
    msg.z = 0.6865862706513175;
    msg.z_units = 135U;
    msg.speed = 0.6137302969897109;
    msg.speed_units = 126U;
    msg.custom.assign("FCJZWWYLIUCFOFKUNZYJCQTTBZV");

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
    msg.setTimeStamp(0.3377970981310413);
    msg.setSource(51652U);
    msg.setSourceEntity(7U);
    msg.setDestination(48172U);
    msg.setDestinationEntity(79U);
    msg.x = 0.834813208279398;
    msg.y = 0.6998596557126685;
    msg.z = 0.45242217758192693;
    msg.t = 0.05408992822769276;

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
    msg.setTimeStamp(0.29804708632671184);
    msg.setSource(58101U);
    msg.setSourceEntity(96U);
    msg.setDestination(42661U);
    msg.setDestinationEntity(168U);
    msg.x = 0.8594199277607685;
    msg.y = 0.30465974870838053;
    msg.z = 0.8401602223399152;
    msg.t = 0.04902955791782504;

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
    msg.setTimeStamp(0.8228062722083911);
    msg.setSource(35219U);
    msg.setSourceEntity(20U);
    msg.setDestination(38992U);
    msg.setDestinationEntity(141U);
    msg.x = 0.18136193768334885;
    msg.y = 0.6014873666023755;
    msg.z = 0.504179420488179;
    msg.t = 0.06265299348629128;

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
    msg.setTimeStamp(0.29496477302447854);
    msg.setSource(36098U);
    msg.setSourceEntity(128U);
    msg.setDestination(64400U);
    msg.setDestinationEntity(151U);
    msg.timeout = 25041U;
    msg.name.assign("NUTBPPMTKIEBXATVCEVVWKITNOTYCVWQCUSFAEUQJASDJXZIJKBH");
    msg.custom.assign("WPUXSOKWBJGYLQAANDHUKNGLUEKHOKYBUKVMGVCLWMCCTPSEYZJMJJEEVIRFMUHCXZNBDDOLUMYTZLGMLHUHMCWWRARISAFSCPCDIQZOQFMBRUEGNCRNCOSRAYDIHEHKWJVXZDVVSQBJYZIMXXIZDPYGOKEDNPDQIEEXIBTQHGOXVFALWAQLLYAZOOWXVRQJRNIKJWKCMVQAQ");

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
    msg.setTimeStamp(0.9286152275698851);
    msg.setSource(25588U);
    msg.setSourceEntity(202U);
    msg.setDestination(61233U);
    msg.setDestinationEntity(82U);
    msg.timeout = 55853U;
    msg.name.assign("ZRFKFCASOAWIUGOBCFIXYSCSADAURUAFCYMMLSROVETLUHPTVOMIKMVMQXIZMIRZHPIUVPTBCRPHLNIKQLDPUYCQBTTBPPJNWUXQFEOBPJDZSVFLNGYFOILWPGERTXXRINJZYESLYSUAYADTADLXBOJRKKVWQKZAJTQBHNGFMBRASFWKLTWNEWCYTZHERJUDKYECIVQLHDWOB");
    msg.custom.assign("NHHZTSFMVPECTPCIACQLAQWGRCEVFLHEOQHZMKDZTXWLJBGYVOWXEBZWKJMOYYHGLFAOMNCHSMTETKWEBFZXK");

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
    msg.setTimeStamp(0.009375720130221143);
    msg.setSource(64375U);
    msg.setSourceEntity(229U);
    msg.setDestination(22880U);
    msg.setDestinationEntity(162U);
    msg.timeout = 45812U;
    msg.name.assign("USVXVAJVHIAJJKJJZMPLGGZITZR");
    msg.custom.assign("VNHQFATEZTAASYWQGYADOBRNKBVSBCGDUSBRDYYCQEVLYBTQDNKGGFEMNOFSNNUBUWIMRAMTZIQCLRMEVMBZOTMWLIKGWHVPPFEQLEJABELMKJFCRHKWLZVLXCFDWHETCUIATOYLJZYWJXHVWKVJFXVZOPUFJRQDPFXIJUCOTDYCNIKOIOHPPZJXUNXXRHGZMGURHWEIKTAZCAGYPVTQSWKDLIJARMNJHSSSGBNPUXQHIRL");

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
    msg.setTimeStamp(0.8687004670876803);
    msg.setSource(48111U);
    msg.setSourceEntity(105U);
    msg.setDestination(50387U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.14850591595232776;
    msg.lon = 0.13305979681615232;
    msg.z = 0.6056480484641588;
    msg.z_units = 95U;
    msg.speed = 0.27986204629376654;
    msg.speed_units = 67U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5924123221778529;
    tmp_msg_0.y = 0.8233282268104386;
    tmp_msg_0.z = 0.1765672208276593;
    tmp_msg_0.t = 0.9945915593054739;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.8088397269682852;
    msg.custom.assign("QNGEGXUGCWQXOJLQTCFRXSBSCJJJOUYSSBOZBMTJZEMDDPDFMQANEWPHEOBDZHPMOSGBREFDIAH");

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
    msg.setTimeStamp(0.08676511765695161);
    msg.setSource(26541U);
    msg.setSourceEntity(117U);
    msg.setDestination(28776U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.504339223099183;
    msg.lon = 0.7532606588036102;
    msg.z = 0.904155251642459;
    msg.z_units = 178U;
    msg.speed = 0.8420859305395723;
    msg.speed_units = 15U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 561U;
    tmp_msg_0.off_x = 0.9679260326650678;
    tmp_msg_0.off_y = 0.7547227117096493;
    tmp_msg_0.off_z = 0.7022927501883253;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.6218405121610939;
    msg.custom.assign("MWZQBGBNKHLOHLSNOBWDEEUYBSWPOPEZTKDUBPHBYMFDJUWLAZYOGDRDXRIFRPUMSXXGUWLXZSQREJEVZVJBTXOYHOMPQFXTSJTOLPCCRLVYXJCYGZLZNTWRTKOKSMUADTCMNZVYCFUQKWPAQE");

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
    msg.setTimeStamp(0.6252740993367141);
    msg.setSource(18895U);
    msg.setSourceEntity(191U);
    msg.setDestination(56414U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.3669009444809781;
    msg.lon = 0.3179442820653158;
    msg.z = 0.5929901051201156;
    msg.z_units = 8U;
    msg.speed = 0.9265921279647203;
    msg.speed_units = 108U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.49751427135141446;
    tmp_msg_0.y = 0.20099662782772598;
    tmp_msg_0.z = 0.011747923346438816;
    tmp_msg_0.t = 0.8898539780147958;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 13125U;
    tmp_msg_1.off_x = 0.2343970213212755;
    tmp_msg_1.off_y = 0.10967455226219702;
    tmp_msg_1.off_z = 0.3685943724678026;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.7559200872748449;
    msg.custom.assign("JBZVJXXHYNVOFJKOCIKVYOSWLIIVBTJHHWCUBKKILXUWVSBCTCCMIKAXSKFRTJRLWFVWQXZDXFXQLBYYSELPMHKUR");

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
    msg.setTimeStamp(0.20370873610193163);
    msg.setSource(30352U);
    msg.setSourceEntity(100U);
    msg.setDestination(18843U);
    msg.setDestinationEntity(125U);
    msg.vid = 17736U;
    msg.off_x = 0.19069860505477654;
    msg.off_y = 0.8822049413480653;
    msg.off_z = 0.3139785907698357;

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
    msg.setTimeStamp(0.365675267525029);
    msg.setSource(61445U);
    msg.setSourceEntity(82U);
    msg.setDestination(28177U);
    msg.setDestinationEntity(83U);
    msg.vid = 38375U;
    msg.off_x = 0.8061475427030201;
    msg.off_y = 0.03145940457548768;
    msg.off_z = 0.698732919362309;

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
    msg.setTimeStamp(0.870838817151764);
    msg.setSource(3610U);
    msg.setSourceEntity(241U);
    msg.setDestination(39697U);
    msg.setDestinationEntity(133U);
    msg.vid = 20873U;
    msg.off_x = 0.8908665964711805;
    msg.off_y = 0.5365251069166631;
    msg.off_z = 0.33387577531788615;

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
    msg.setTimeStamp(0.4569458230800194);
    msg.setSource(47941U);
    msg.setSourceEntity(59U);
    msg.setDestination(10726U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.936256667497818);
    msg.setSource(35293U);
    msg.setSourceEntity(130U);
    msg.setDestination(36749U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.8378070142202338);
    msg.setSource(39614U);
    msg.setSourceEntity(63U);
    msg.setDestination(5418U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.07888356364360094);
    msg.setSource(37010U);
    msg.setSourceEntity(140U);
    msg.setDestination(13878U);
    msg.setDestinationEntity(78U);
    msg.mid = 7099U;

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
    msg.setTimeStamp(0.22132116987250416);
    msg.setSource(63331U);
    msg.setSourceEntity(138U);
    msg.setDestination(17867U);
    msg.setDestinationEntity(201U);
    msg.mid = 50678U;

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
    msg.setTimeStamp(0.9445271374719487);
    msg.setSource(48758U);
    msg.setSourceEntity(48U);
    msg.setDestination(22734U);
    msg.setDestinationEntity(215U);
    msg.mid = 2994U;

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
    msg.setTimeStamp(0.3758721792787232);
    msg.setSource(64628U);
    msg.setSourceEntity(10U);
    msg.setDestination(11718U);
    msg.setDestinationEntity(107U);
    msg.state = 156U;
    msg.eta = 33454U;
    msg.info.assign("CRJPCPQPGAYSVOWLIUIBSYCNRQSPDDPNZKLDKXVWZSMXGRQACKMAPHWEOFAFXMGZYMVLBEAZMVECBLRQVVDDOXXTTFWHLTAMZDITTFXJBJUCWHGWTMNJEJYFIJBRAIQOWIQLRGLUTUHZNVOQNNXQBDSRKLGRWSCUTIXYZFNMTOSNUOHZJKJUCJXFPIHXEQMDGUERYLSUBCMHNHGACLHFVK");

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
    msg.setTimeStamp(0.20644820123144636);
    msg.setSource(12389U);
    msg.setSourceEntity(211U);
    msg.setDestination(40056U);
    msg.setDestinationEntity(214U);
    msg.state = 104U;
    msg.eta = 37643U;
    msg.info.assign("MPORDQKLPHIXVBLXKDCJFOCZWOBFQZDNAWEZHEPTFPLYUNKXCPIYSYISMXUIQLWAHKCIZZOSZQUJYDGVOPCVBSBPGRNCVOHSQFGAVBLENSHNHIQUIUITHZYAEWUARTKFMSDJWYOXFX");

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
    msg.setTimeStamp(0.18788270844667965);
    msg.setSource(10259U);
    msg.setSourceEntity(65U);
    msg.setDestination(48924U);
    msg.setDestinationEntity(108U);
    msg.state = 43U;
    msg.eta = 50188U;
    msg.info.assign("WQJRCVGIKKOQBRLAWTEVLBCOMSADNHJGGTWHFPXQQUDBNCRZZFIAOBTYPNIEEXBQCMUFIWIRXLCLJBQAMIIKRURGEKMKIDFDKGTRSQVAMTVMTONPQVKEEVJLBDNTSGYBVMAPLGHODTTCWHUQYAEYSEWYLEYMDKXDVJGGUZN");

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
    msg.setTimeStamp(0.5415771880011149);
    msg.setSource(58883U);
    msg.setSourceEntity(180U);
    msg.setDestination(12600U);
    msg.setDestinationEntity(233U);
    msg.system = 14023U;
    msg.duration = 55638U;
    msg.speed = 0.02390083568283141;
    msg.speed_units = 59U;
    msg.x = 0.756509730159374;
    msg.y = 0.16853684340808495;
    msg.z = 0.7895133462489741;
    msg.z_units = 104U;

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
    msg.setTimeStamp(0.21338861889192084);
    msg.setSource(17867U);
    msg.setSourceEntity(28U);
    msg.setDestination(51717U);
    msg.setDestinationEntity(78U);
    msg.system = 17525U;
    msg.duration = 37045U;
    msg.speed = 0.5503818686039627;
    msg.speed_units = 159U;
    msg.x = 0.9369502300856256;
    msg.y = 0.051453637128650365;
    msg.z = 0.017297192291711116;
    msg.z_units = 60U;

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
    msg.setTimeStamp(0.3879858546186691);
    msg.setSource(14734U);
    msg.setSourceEntity(110U);
    msg.setDestination(60255U);
    msg.setDestinationEntity(192U);
    msg.system = 21211U;
    msg.duration = 53564U;
    msg.speed = 0.03461066674608915;
    msg.speed_units = 27U;
    msg.x = 0.2906963361184133;
    msg.y = 0.17871518347340876;
    msg.z = 0.32574196917697806;
    msg.z_units = 151U;

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
    msg.setTimeStamp(0.07540619407751536);
    msg.setSource(63782U);
    msg.setSourceEntity(126U);
    msg.setDestination(30747U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.018739396342493997;
    msg.lon = 0.6475939355182968;
    msg.speed = 0.2227570923116201;
    msg.speed_units = 187U;
    msg.duration = 22421U;
    msg.sys_a = 4567U;
    msg.sys_b = 50141U;
    msg.move_threshold = 0.3045185150007069;

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
    msg.setTimeStamp(0.2237961478776378);
    msg.setSource(2897U);
    msg.setSourceEntity(201U);
    msg.setDestination(51874U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.7294743082691793;
    msg.lon = 0.4981087519738595;
    msg.speed = 0.8019366849658104;
    msg.speed_units = 148U;
    msg.duration = 12992U;
    msg.sys_a = 60126U;
    msg.sys_b = 49766U;
    msg.move_threshold = 0.14521858018168843;

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
    msg.setTimeStamp(0.14266112607543413);
    msg.setSource(29385U);
    msg.setSourceEntity(156U);
    msg.setDestination(212U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.8519699211459284;
    msg.lon = 0.9549900566398625;
    msg.speed = 0.6113067267952501;
    msg.speed_units = 55U;
    msg.duration = 57689U;
    msg.sys_a = 34896U;
    msg.sys_b = 39700U;
    msg.move_threshold = 0.525030982565455;

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
    msg.setTimeStamp(0.901245271417857);
    msg.setSource(52586U);
    msg.setSourceEntity(115U);
    msg.setDestination(47476U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.6532830953701203;
    msg.lon = 0.1185911163069937;
    msg.z = 0.0748920870672054;
    msg.z_units = 111U;
    msg.speed = 0.8431911370441437;
    msg.speed_units = 241U;
    msg.custom.assign("CZAIQSAUNGOZBIJGTMEZYHMAXCPGNVNVZOQHEWMFTGZRKXPUFCTLJLFEUWQXRRPCLHLEEUGKNW");

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
    msg.setTimeStamp(0.3455363211480148);
    msg.setSource(30396U);
    msg.setSourceEntity(188U);
    msg.setDestination(815U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.966435343051688;
    msg.lon = 0.27539723185163956;
    msg.z = 0.5409645491725681;
    msg.z_units = 11U;
    msg.speed = 0.8997751571252194;
    msg.speed_units = 231U;
    msg.custom.assign("NNSTAFJCEDHVUDYDEPCSLTPJNXSHEEYRYGEPZXUSWNPUKVIOGORMFYJGOVLXRQIXXMQZXQPOMRYUIHEKMUPFBYREWJXIGKFGKBLYBWWIWNFBEANBLAWIUHVSMYLCJHHAGQKCNTSCOZ");

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
    msg.setTimeStamp(0.3358362240195777);
    msg.setSource(61492U);
    msg.setSourceEntity(122U);
    msg.setDestination(16016U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.8030284450160686;
    msg.lon = 0.015474571163721418;
    msg.z = 0.96593108571366;
    msg.z_units = 12U;
    msg.speed = 0.6403942556037824;
    msg.speed_units = 218U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.2634676707415998;
    tmp_msg_0.lon = 0.5448735030867091;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("URHWBDTVVNQDOPZKFGWNWHGNVPAXBSRVCPHBNCJITLQSOTZOQAEHELQSUGRNYBJWPPUTZALSJCWZZMNRJOAWCBVTVGLRISBPMCYJIAOHJXHXFUKQWDQYUVQADFCTCALPOWTFZSGFEAMJMSNKMRKJFDXZIZPBVFXSNYKUIGIXEEJOQEZP");

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
    msg.setTimeStamp(0.07958614566217226);
    msg.setSource(8823U);
    msg.setSourceEntity(73U);
    msg.setDestination(43761U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.4321430202002118;
    msg.lon = 0.5948910366263184;

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
    msg.setTimeStamp(0.29127096181541534);
    msg.setSource(30944U);
    msg.setSourceEntity(11U);
    msg.setDestination(53230U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.08996215855547174;
    msg.lon = 0.21438253698302068;

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
    msg.setTimeStamp(0.8151126454773098);
    msg.setSource(52101U);
    msg.setSourceEntity(191U);
    msg.setDestination(45529U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.9230103515208883;
    msg.lon = 0.5872957809170196;

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
    msg.setTimeStamp(0.6500667789852996);
    msg.setSource(3304U);
    msg.setSourceEntity(7U);
    msg.setDestination(21447U);
    msg.setDestinationEntity(110U);
    msg.timeout = 44529U;
    msg.lat = 0.7475713167790522;
    msg.lon = 0.5627256280318703;
    msg.z = 0.6650158620943922;
    msg.z_units = 191U;
    msg.pitch = 0.6278877501427461;
    msg.amplitude = 0.3101831561294016;
    msg.duration = 39600U;
    msg.speed = 0.5425851552310123;
    msg.speed_units = 250U;
    msg.radius = 0.22622918070106912;
    msg.direction = 61U;
    msg.custom.assign("EUODCCHINGRNFRIUGMIWMIFVNEXZVSHWHUEQDVOJMFEXVMBAXXHIHGZGYXNVUA");

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
    msg.setTimeStamp(0.7424773589162162);
    msg.setSource(30863U);
    msg.setSourceEntity(132U);
    msg.setDestination(20480U);
    msg.setDestinationEntity(218U);
    msg.timeout = 48790U;
    msg.lat = 0.6814411521442804;
    msg.lon = 0.8684287849350854;
    msg.z = 0.9358869244744139;
    msg.z_units = 17U;
    msg.pitch = 0.37566300745223535;
    msg.amplitude = 0.9574274064469894;
    msg.duration = 22066U;
    msg.speed = 0.5120707512792001;
    msg.speed_units = 24U;
    msg.radius = 0.6219258496196275;
    msg.direction = 112U;
    msg.custom.assign("CKUDQIZLEOHZBWMNIICMDTNJGEXFOQJZXCEEZTVTGOUTCRMZKHCHBFQGSVTYINVNYYXPRFKBSIOBISQIYAPDLHLSKAXXALWAJHGJCCUPQTNMHYEUOBAMRJSNZQRGDSFGXVJWDHWCPEJUHRKDKQYHJUWVUEBIFMAXPFTGWIKVRQDBZLBPXSML");

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
    msg.setTimeStamp(0.4435302045224059);
    msg.setSource(4412U);
    msg.setSourceEntity(28U);
    msg.setDestination(24222U);
    msg.setDestinationEntity(201U);
    msg.timeout = 64548U;
    msg.lat = 0.21939919548392417;
    msg.lon = 0.7261832969357158;
    msg.z = 0.7992213454285237;
    msg.z_units = 150U;
    msg.pitch = 0.8928679568194019;
    msg.amplitude = 0.34174215265466945;
    msg.duration = 17890U;
    msg.speed = 0.24543881540459767;
    msg.speed_units = 125U;
    msg.radius = 0.9856584420458414;
    msg.direction = 126U;
    msg.custom.assign("AKFMDXHZQGWERCEIBCZNOFDPYCFDIADSYXXYGWMVAWJRBYMETDLCOUEQAVKWSJDTYLPTIDHJNMFRZWONKAZXPIOQOVHXLEQGMMMSUIIXWEAXTVKH");

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
    msg.setTimeStamp(0.544757878901608);
    msg.setSource(64661U);
    msg.setSourceEntity(242U);
    msg.setDestination(54850U);
    msg.setDestinationEntity(83U);
    msg.formation_name.assign("UFDJAXEYIHGZWZMRMVBGTJZESDKTIXSJQKSRVMWBBWLHZPLYIJJYOJGWRSBSMLZTMUPUGYDDFPBBFDUQROKAWZDABXRUAXOKXWCVTZLITKIKDPOGILOXQEPLXDFVACZWVCL");
    msg.reference_frame = 139U;
    msg.custom.assign("MKSGLACBOFFEQWTBHPICOHBJUYVPZJAJMAFMITZXMVWUBCJMVEKZHPGFIDYCJSUQLFOIYLKIEBVVRDHNCMKYWKDXLRTCVIFDRLYPJNIWRFHHTWOVZIBJGPGCKWKETRZYSZWVQRAILURXGNZAQRWXNYUPPDBKPDMMYBVDINQNUQHSYUZOEVRENLMCQHDSHOBKELEWQGXSTNXGNGAENMLJWSJXGSTARAOJKZFFTSCDQULEQGCOB");

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
    msg.setTimeStamp(0.28688462037954265);
    msg.setSource(20609U);
    msg.setSourceEntity(45U);
    msg.setDestination(3450U);
    msg.setDestinationEntity(78U);
    msg.formation_name.assign("STUUYFPXETYTPDKEKNYECKUAUZBDQETPDWLKWRQJHGBFFBKNSSNHMIMMRTESDRSJVWKREFHPLUJRYXMFIQQUFAGTQAEYSANWUIGVOZYIPDABWWCTFZBLMOBGURPHHQEKHSGZYHBXVDTBLINYCZGADIXHFFBMQILLNAVVWNVPDNJRVLMM");
    msg.reference_frame = 60U;
    msg.custom.assign("AAQOBWDHXAMLUDXR");

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
    msg.setTimeStamp(0.688077926374573);
    msg.setSource(53953U);
    msg.setSourceEntity(91U);
    msg.setDestination(54233U);
    msg.setDestinationEntity(83U);
    msg.formation_name.assign("WZUZQELVDRGFPSLIMNRNEBVRRBKNUJTBSNWFIUZCBDRJXVKBDVJMJFPOXGDVMGHCHWPHXCWJUNDSGSNFOITEUPRQDJHTTKWIYESCYOLQLCFSHVFQNIXELQAGUWDIMDJTAONOAYBRH");
    msg.reference_frame = 249U;
    msg.custom.assign("THQGWVLKZYVGPAXPYVIGUQGNQNRURPRCWOSIEMEERMKLWSTXNVOFNUDJPVOLAXCWLFBBIJIUCNSWZSAZXBZOCCCIFMVNXEVLBUIKSHBYGWX");

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
    msg.setTimeStamp(0.19377571508150293);
    msg.setSource(64381U);
    msg.setSourceEntity(32U);
    msg.setDestination(22863U);
    msg.setDestinationEntity(184U);
    msg.group_name.assign("FRRHMWAIOTOTLPUEOPAZCRSUXDSTOQKNQVFQVHBRNMQAESKVRUYYNGCMIAWRSMIIXMDMIPILVLYMZJEWERDBUJKTNVKBBF");
    msg.formation_name.assign("UPYFERSYNLTEEHRRWVTKJEBRKCYFDIDPSSLDNFBCUKXIYWFOUKOLOFYWXKSMYKMCRLVJJRMSQNUHATILHPNXYCTAUWNV");
    msg.plan_id.assign("YDWVGALFQVDKKFWXNBGKXWUQGSAUKGZRRDIRNMDZBTPYPCJRTAHYQMCLEVLEXVRBVVAUPBUGIESQSIZFNOQLKCFWXZPHRNVKMMECDWWNHTHOTENOVCDFLZCYBNJPJQHFLETMHSNEOQTAIRJMHAOZIOUQBSLRRYHEWJIXFGVXKYTGAYKDAKFXPYAYTISKNWNCTFDUZIIXWLBDABURXLESOPMJUBOPJJJCDHPG");
    msg.description.assign("ZWNEZYRHVAHQDACOAUCBUWPRKHRNSJMOTSCHDODXYLSQYVGEOWGZPTLUMWATITXABMKJUFGQDHTUBABXIELNKNYYSOPCEIXPUCHEKZDWMVNNMELFEQXOSVFMRQXVVWKAZSFKAFARFXPNNIURPJJEOWSGKLJXRDYABVBQESBGZV");
    msg.leader_speed = 0.7298085903398682;
    msg.leader_bank_lim = 0.12006180071213524;
    msg.pos_sim_err_lim = 0.970654840441813;
    msg.pos_sim_err_wrn = 0.8860675291476755;
    msg.pos_sim_err_timeout = 24489U;
    msg.converg_max = 0.33024466667081476;
    msg.converg_timeout = 34236U;
    msg.comms_timeout = 45744U;
    msg.turb_lim = 0.19878767526053398;
    msg.custom.assign("JWSZKCTPBDYRUFEHOSUGXLHOTAFTELKVRMEKWFQJEYHUVNSXRMP");

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
    msg.setTimeStamp(0.17058303401646557);
    msg.setSource(31249U);
    msg.setSourceEntity(119U);
    msg.setDestination(19972U);
    msg.setDestinationEntity(36U);
    msg.group_name.assign("QKGQMWPTKHMTANIGSUYDILUMZQTJGDULAFDIUTTBDGQEQKSBXVHXNMFCZOTBOOCNLQRTYJIYFPKWJLIGMIBWHLEAFSKFYRFJZPWKUEJEJNHYPENBLHDZFOGVPLZSUVMNKPWFUXDNUJPQFKCVWDPCLGCLAAIVVBQENVKRHGODXEIEMXCJRZASYODSJMBAARYRVSZNYXQXWBWAXNCOPKTDYZSOTIFRORAUWRTXMMPCECSHXWZHEVS");
    msg.formation_name.assign("QOXSSYJZUGQMJBEMHFFHMNHTSZLNEVZIJATSWBQZEYWQHCLJQAXYTJBTRCDRTNOZOBRDTPVFCIYNRUPPCYISSKPNRSXQOKVGWLLNADIKCPSPAGEWEHKWDKNIPWQWIYBAZQDTJTUMBHDAXOELLFHNGLOC");
    msg.plan_id.assign("XLGYRONUENDSPROCIERNTWOUOYUFIBEDAJBWVXIZFHWPTBZVSEYCWVQVUDIYOPMVCZIWYJOUMUCHRPQDBR");
    msg.description.assign("AEABLAHKHEJUAUZRCICZOOMMMEEORCHYGQRDMDFKEPNJGBRJYFULDPE");
    msg.leader_speed = 0.5298191188236803;
    msg.leader_bank_lim = 0.4610905160531372;
    msg.pos_sim_err_lim = 0.6304323794079182;
    msg.pos_sim_err_wrn = 0.5784348051957007;
    msg.pos_sim_err_timeout = 10019U;
    msg.converg_max = 0.7499864215147907;
    msg.converg_timeout = 6436U;
    msg.comms_timeout = 58428U;
    msg.turb_lim = 0.868993494046692;
    msg.custom.assign("YMPAGVLWDUYJXKPZXPFSEYCJBWXVLIYLQPHZCVZTZJHVTPZXPINNRJOPWYWZOIDMFOHQKGECAAMLLQBTVLJDMYXPKNQWTOUIHGFMQLSUWGWNGIKJUOSAUJRMATIKAZENEKJQYYHQBCFIURD");

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
    msg.setTimeStamp(0.1884717332917878);
    msg.setSource(53158U);
    msg.setSourceEntity(174U);
    msg.setDestination(20938U);
    msg.setDestinationEntity(48U);
    msg.group_name.assign("KHVPOXHQRKBFYFUPGRDZLIBJFKSAWDWZYCTALOPYSBSEUFQOCVECSJMPRCEQSQRAPNOJUVMRENCOTWJAITNFIRJOTLLJLAGFQKWPGSFPBFD");
    msg.formation_name.assign("WRBLLSTPIVJNUTAEELFPBGUSVVUMGNVIEKPANRVBMRKSLMZROATPXXQWTWSWVGHSUXRMUHHXQCBZEZYRLXCODUQIHHZESEYCYOGMEWBIWHMSFCZOJURGILUZTBQOCQOBFTLDNTYTSIKL");
    msg.plan_id.assign("EWCOGUFHMFTNBZINHSLQIORGJVE");
    msg.description.assign("BYUYZBNOLUKILDPGGUKLXYTYNIKLEUTTPPXSBKQNCEEPQISKJDYRZQGWLLFQQKRBZSVFDXJSMGOTCRWJLEAETSFENIZHDFVKFLOXOPVXGRMSWZAYUMAGMUTWSEDNRJG");
    msg.leader_speed = 0.678604324291286;
    msg.leader_bank_lim = 0.05651933029714895;
    msg.pos_sim_err_lim = 0.7909022735693138;
    msg.pos_sim_err_wrn = 0.21343626000350657;
    msg.pos_sim_err_timeout = 58336U;
    msg.converg_max = 0.6697922313854481;
    msg.converg_timeout = 23985U;
    msg.comms_timeout = 58413U;
    msg.turb_lim = 0.5316300572448875;
    msg.custom.assign("XJAKFVYCUQFCGJWHYTOCUPCMHPABKQKWOGVYWFOLHHFGC");

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
    msg.setTimeStamp(0.04912155339264934);
    msg.setSource(51077U);
    msg.setSourceEntity(74U);
    msg.setDestination(2848U);
    msg.setDestinationEntity(12U);
    msg.control_src = 4493U;
    msg.control_ent = 26U;
    msg.timeout = 0.231862271059176;
    msg.loiter_radius = 0.15543367755364024;
    msg.altitude_interval = 0.48236919058250527;

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
    msg.setTimeStamp(0.992309139828128);
    msg.setSource(14664U);
    msg.setSourceEntity(0U);
    msg.setDestination(37954U);
    msg.setDestinationEntity(222U);
    msg.control_src = 54289U;
    msg.control_ent = 39U;
    msg.timeout = 0.3305654792838092;
    msg.loiter_radius = 0.7441448908637551;
    msg.altitude_interval = 0.6723324907960478;

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
    msg.setTimeStamp(0.9024316256643778);
    msg.setSource(41577U);
    msg.setSourceEntity(184U);
    msg.setDestination(2950U);
    msg.setDestinationEntity(139U);
    msg.control_src = 46464U;
    msg.control_ent = 8U;
    msg.timeout = 0.5930642230683687;
    msg.loiter_radius = 0.2743980689272054;
    msg.altitude_interval = 0.886307764343697;

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
    msg.setTimeStamp(0.956653939768453);
    msg.setSource(54508U);
    msg.setSourceEntity(233U);
    msg.setDestination(30999U);
    msg.setDestinationEntity(230U);
    msg.flags = 46U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.023734476923035985;
    tmp_msg_0.speed_units = 151U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6347907361703665;
    tmp_msg_1.z_units = 26U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2688050509106482;
    msg.lon = 0.07943279370626743;
    msg.radius = 0.26962702400421734;

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
    msg.setTimeStamp(0.3030256297514833);
    msg.setSource(46101U);
    msg.setSourceEntity(67U);
    msg.setDestination(46081U);
    msg.setDestinationEntity(146U);
    msg.flags = 194U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7235465620391358;
    tmp_msg_0.speed_units = 198U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.796674717570312;
    tmp_msg_1.z_units = 48U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3948367720478281;
    msg.lon = 0.131974939865657;
    msg.radius = 0.2850973352778814;

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
    msg.setTimeStamp(0.8261091626782306);
    msg.setSource(59845U);
    msg.setSourceEntity(80U);
    msg.setDestination(51976U);
    msg.setDestinationEntity(213U);
    msg.flags = 224U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7139640725191309;
    tmp_msg_0.speed_units = 128U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.20071668546663002;
    tmp_msg_1.z_units = 198U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.907154868825764;
    msg.lon = 0.4528427202392341;
    msg.radius = 0.0520606506323662;

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
    msg.setTimeStamp(0.49305388629279956);
    msg.setSource(29709U);
    msg.setSourceEntity(60U);
    msg.setDestination(27884U);
    msg.setDestinationEntity(18U);
    msg.control_src = 25525U;
    msg.control_ent = 59U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 200U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.20520173946510778;
    tmp_tmp_msg_0_0.speed_units = 130U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.2108012535766911;
    tmp_tmp_msg_0_1.z_units = 32U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3941759845425684;
    tmp_msg_0.lon = 0.1795110019844205;
    tmp_msg_0.radius = 0.34646673118928617;
    msg.reference.set(tmp_msg_0);
    msg.state = 220U;
    msg.proximity = 114U;

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
    msg.setTimeStamp(0.361060263137175);
    msg.setSource(4513U);
    msg.setSourceEntity(19U);
    msg.setDestination(41823U);
    msg.setDestinationEntity(109U);
    msg.control_src = 61996U;
    msg.control_ent = 238U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 214U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.18592114703629004;
    tmp_tmp_msg_0_0.speed_units = 55U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.24074192133761896;
    tmp_tmp_msg_0_1.z_units = 57U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8243696181026638;
    tmp_msg_0.lon = 0.5489571711890213;
    tmp_msg_0.radius = 0.9789281758797614;
    msg.reference.set(tmp_msg_0);
    msg.state = 5U;
    msg.proximity = 69U;

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
    msg.setTimeStamp(0.7030676453616763);
    msg.setSource(30376U);
    msg.setSourceEntity(108U);
    msg.setDestination(21173U);
    msg.setDestinationEntity(167U);
    msg.control_src = 13196U;
    msg.control_ent = 5U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 127U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3206246332517423;
    tmp_tmp_msg_0_0.speed_units = 29U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8786921935081424;
    tmp_tmp_msg_0_1.z_units = 79U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7972980113575748;
    tmp_msg_0.lon = 0.7405837309083776;
    tmp_msg_0.radius = 0.34210418072833515;
    msg.reference.set(tmp_msg_0);
    msg.state = 24U;
    msg.proximity = 149U;

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
    msg.setTimeStamp(0.6587367024270434);
    msg.setSource(14965U);
    msg.setSourceEntity(86U);
    msg.setDestination(45411U);
    msg.setDestinationEntity(84U);
    msg.ax_cmd = 0.9615062022559725;
    msg.ay_cmd = 0.23514933738487087;
    msg.az_cmd = 0.31689084364132314;
    msg.ax_des = 0.5493463959894694;
    msg.ay_des = 0.6412284636707747;
    msg.az_des = 0.9063250057612252;
    msg.virt_err_x = 0.6287606852847274;
    msg.virt_err_y = 0.6692253433172061;
    msg.virt_err_z = 0.09146028268055284;
    msg.surf_fdbk_x = 0.18360372998516994;
    msg.surf_fdbk_y = 0.9277091046850433;
    msg.surf_fdbk_z = 0.8913589874675186;
    msg.surf_unkn_x = 0.9742922205542857;
    msg.surf_unkn_y = 0.5205162313307694;
    msg.surf_unkn_z = 0.5248704880103197;
    msg.ss_x = 0.9666708656445;
    msg.ss_y = 0.00947622386267466;
    msg.ss_z = 0.8714358836011405;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("TPVBPTNNHTLKPWRKHPDODDIBYXQVSCFOUKWPRJTFZLQYCBLHEFBJUDRLNFTSV");
    tmp_msg_0.dist = 0.5433115705189564;
    tmp_msg_0.err = 0.7938656275615222;
    tmp_msg_0.ctrl_imp = 0.7570556251140728;
    tmp_msg_0.rel_dir_x = 0.3489736965138547;
    tmp_msg_0.rel_dir_y = 0.46820015730888576;
    tmp_msg_0.rel_dir_z = 0.2932468081722476;
    tmp_msg_0.err_x = 0.3618583102676697;
    tmp_msg_0.err_y = 0.9676226465495812;
    tmp_msg_0.err_z = 0.8908847122923732;
    tmp_msg_0.rf_err_x = 0.39694412681891644;
    tmp_msg_0.rf_err_y = 0.8969373485225217;
    tmp_msg_0.rf_err_z = 0.37693883860217836;
    tmp_msg_0.rf_err_vx = 0.3565886052295488;
    tmp_msg_0.rf_err_vy = 0.20760132447788493;
    tmp_msg_0.rf_err_vz = 0.8761450686488844;
    tmp_msg_0.ss_x = 0.3521569134702591;
    tmp_msg_0.ss_y = 0.9871369377699728;
    tmp_msg_0.ss_z = 0.9486465308918697;
    tmp_msg_0.virt_err_x = 0.23060016394393656;
    tmp_msg_0.virt_err_y = 0.47808043743775086;
    tmp_msg_0.virt_err_z = 0.9337047611614955;
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
    msg.setTimeStamp(0.6803571910223396);
    msg.setSource(11465U);
    msg.setSourceEntity(227U);
    msg.setDestination(61148U);
    msg.setDestinationEntity(197U);
    msg.ax_cmd = 0.022829197351392883;
    msg.ay_cmd = 0.3189987671250122;
    msg.az_cmd = 0.7106832226649268;
    msg.ax_des = 0.7191736908363539;
    msg.ay_des = 0.2149169539808281;
    msg.az_des = 0.6742951069355181;
    msg.virt_err_x = 0.7114260077715446;
    msg.virt_err_y = 0.5038607440937002;
    msg.virt_err_z = 0.1009048078757494;
    msg.surf_fdbk_x = 0.6119282297110722;
    msg.surf_fdbk_y = 0.6417494722594093;
    msg.surf_fdbk_z = 0.7983569084778899;
    msg.surf_unkn_x = 0.9958887196653757;
    msg.surf_unkn_y = 0.768951924044202;
    msg.surf_unkn_z = 0.7747787620723676;
    msg.ss_x = 0.3699498772882368;
    msg.ss_y = 0.4158696362091491;
    msg.ss_z = 0.17376671725937753;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("PVJGGHCLOOBWDLWVZDXYRAZSUOGCKLNJUQQOHEIMCAVWBBVYNMZMKVQSHHUBSAHOTBDDPWRAGFVCIISTLZIJDFGNSLNEWIAEYGCSPMWFIYMWCBTXUQNPYOVUOREUYULYLDBQXTDPCFWDNEPGRWFTCKKHBSQNVUJQHDHNRENFEBEGLFUKMZ");
    tmp_msg_0.dist = 0.7661250044014121;
    tmp_msg_0.err = 0.07497657599606211;
    tmp_msg_0.ctrl_imp = 0.7324901885807434;
    tmp_msg_0.rel_dir_x = 0.23051344900089532;
    tmp_msg_0.rel_dir_y = 0.48093627976519426;
    tmp_msg_0.rel_dir_z = 0.5694389128985857;
    tmp_msg_0.err_x = 0.1313633166966106;
    tmp_msg_0.err_y = 0.6779121058531529;
    tmp_msg_0.err_z = 0.19927870155977512;
    tmp_msg_0.rf_err_x = 0.20162570252722578;
    tmp_msg_0.rf_err_y = 0.7638755097439042;
    tmp_msg_0.rf_err_z = 0.4683422470545585;
    tmp_msg_0.rf_err_vx = 0.2165548891356125;
    tmp_msg_0.rf_err_vy = 0.22487798676470727;
    tmp_msg_0.rf_err_vz = 0.9217443956987067;
    tmp_msg_0.ss_x = 0.16831458076045203;
    tmp_msg_0.ss_y = 0.4097053292656484;
    tmp_msg_0.ss_z = 0.6392355028833893;
    tmp_msg_0.virt_err_x = 0.981594781816157;
    tmp_msg_0.virt_err_y = 0.7824504301133917;
    tmp_msg_0.virt_err_z = 0.819550479502363;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8026189421633024);
    msg.setSource(21909U);
    msg.setSourceEntity(124U);
    msg.setDestination(44158U);
    msg.setDestinationEntity(236U);
    msg.ax_cmd = 0.49823916809783164;
    msg.ay_cmd = 0.9904829455923856;
    msg.az_cmd = 0.4875599658652138;
    msg.ax_des = 0.7281623416070583;
    msg.ay_des = 0.7994716717992633;
    msg.az_des = 0.19957858826097052;
    msg.virt_err_x = 0.9620819334543013;
    msg.virt_err_y = 0.3003364357974362;
    msg.virt_err_z = 0.12194139754752054;
    msg.surf_fdbk_x = 0.10806919411494953;
    msg.surf_fdbk_y = 0.7173560768680598;
    msg.surf_fdbk_z = 0.9903105539289321;
    msg.surf_unkn_x = 0.7764274963163689;
    msg.surf_unkn_y = 0.8565374435293176;
    msg.surf_unkn_z = 0.9879381828365377;
    msg.ss_x = 0.45232724034821803;
    msg.ss_y = 0.5082580194707937;
    msg.ss_z = 0.568131020365203;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("SXYQYHIQMHTKABXYHUXRKVZMKLCNFRWDRKBJ");
    tmp_msg_0.dist = 0.8855978660283048;
    tmp_msg_0.err = 0.17724683392339613;
    tmp_msg_0.ctrl_imp = 0.1149154968404259;
    tmp_msg_0.rel_dir_x = 0.5888138514750729;
    tmp_msg_0.rel_dir_y = 0.4016563147532066;
    tmp_msg_0.rel_dir_z = 0.6098959263497477;
    tmp_msg_0.err_x = 0.6376589970185159;
    tmp_msg_0.err_y = 0.7653622851754763;
    tmp_msg_0.err_z = 0.5094675779210904;
    tmp_msg_0.rf_err_x = 0.06390274550228003;
    tmp_msg_0.rf_err_y = 0.4037209884592188;
    tmp_msg_0.rf_err_z = 0.5840997971472747;
    tmp_msg_0.rf_err_vx = 0.70795638938101;
    tmp_msg_0.rf_err_vy = 0.6150448051940965;
    tmp_msg_0.rf_err_vz = 0.11719423501670745;
    tmp_msg_0.ss_x = 0.9663940165763443;
    tmp_msg_0.ss_y = 0.3950292792521013;
    tmp_msg_0.ss_z = 0.6078108682759165;
    tmp_msg_0.virt_err_x = 0.3775743973933595;
    tmp_msg_0.virt_err_y = 0.65969061512272;
    tmp_msg_0.virt_err_z = 0.9566552103075301;
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
    msg.setTimeStamp(0.32050096401306105);
    msg.setSource(31934U);
    msg.setSourceEntity(197U);
    msg.setDestination(46730U);
    msg.setDestinationEntity(86U);
    msg.s_id.assign("DAVCEALMPBLHQQCXWQZOVMFTGYYJESBIGPWNJJZRGBYFROSRJHOHXQZCSUFKOAFYY");
    msg.dist = 0.5842545694705463;
    msg.err = 0.8367607701675026;
    msg.ctrl_imp = 0.05706374639311185;
    msg.rel_dir_x = 0.8312134572393575;
    msg.rel_dir_y = 0.4559270168620432;
    msg.rel_dir_z = 0.45747867128133524;
    msg.err_x = 0.48181544237628016;
    msg.err_y = 0.6826248227475571;
    msg.err_z = 0.5814918785134727;
    msg.rf_err_x = 0.907949727558482;
    msg.rf_err_y = 0.652938152188368;
    msg.rf_err_z = 0.336753825836544;
    msg.rf_err_vx = 0.004729760963452012;
    msg.rf_err_vy = 0.46999527564303223;
    msg.rf_err_vz = 0.26053518793351427;
    msg.ss_x = 0.9041992668908091;
    msg.ss_y = 0.0909420619923661;
    msg.ss_z = 0.1579833863516682;
    msg.virt_err_x = 0.12628549649005127;
    msg.virt_err_y = 0.3141862616285779;
    msg.virt_err_z = 0.06106300814333465;

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
    msg.setTimeStamp(0.07006513006472015);
    msg.setSource(37751U);
    msg.setSourceEntity(247U);
    msg.setDestination(60177U);
    msg.setDestinationEntity(131U);
    msg.s_id.assign("ENVXOYFXJDLHGXJGEQEAODRIDGBRUIWRCNLVNLEXTSKTVNPQVKGGKMPWVCTTWMIARYMZBFSCORUTAIRRJHBYDXMJHNZZKLEQICFOSQKMWZHYUQKGBUCPQTIAUOUVQMOIMFFMKWITAPJGXUUZNHVCAWZOLRYPBGVLAIRPFFEVDMKTGZJBEUAHCQBSSOOYSBLDOWNUSXPWWFNFQCNJZPS");
    msg.dist = 0.6554668081173268;
    msg.err = 0.0791741282841959;
    msg.ctrl_imp = 0.4145838227924168;
    msg.rel_dir_x = 0.11152530615507017;
    msg.rel_dir_y = 0.8288341592907635;
    msg.rel_dir_z = 0.09269524882441194;
    msg.err_x = 0.02927055959873659;
    msg.err_y = 0.8662658772433288;
    msg.err_z = 0.39728163650252835;
    msg.rf_err_x = 0.4200839658143889;
    msg.rf_err_y = 0.35575179634174525;
    msg.rf_err_z = 0.609722131548072;
    msg.rf_err_vx = 0.1925190162143967;
    msg.rf_err_vy = 0.2564842880881306;
    msg.rf_err_vz = 0.2980528076690483;
    msg.ss_x = 0.6078031492508265;
    msg.ss_y = 0.5453985694712516;
    msg.ss_z = 0.6106462880725716;
    msg.virt_err_x = 0.5120676101385183;
    msg.virt_err_y = 0.18164632967687155;
    msg.virt_err_z = 0.02814439077893638;

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
    msg.setTimeStamp(0.5695977039129777);
    msg.setSource(41703U);
    msg.setSourceEntity(24U);
    msg.setDestination(41523U);
    msg.setDestinationEntity(62U);
    msg.s_id.assign("UCPPETKMHKYFGRYHSAPBTFLQSBSCUNIAUBEYCDGGLZCFDGWELOQZIZGGKKDCPEOERCCNOEIIM");
    msg.dist = 0.8361105619608437;
    msg.err = 0.31089444306184333;
    msg.ctrl_imp = 0.3487572781903635;
    msg.rel_dir_x = 0.41746047434042843;
    msg.rel_dir_y = 0.7370616904793059;
    msg.rel_dir_z = 0.08496905366299135;
    msg.err_x = 0.8196447565777416;
    msg.err_y = 0.637574024128514;
    msg.err_z = 0.9886186441720635;
    msg.rf_err_x = 0.031013411064446328;
    msg.rf_err_y = 0.41986697608993384;
    msg.rf_err_z = 0.3733147541665929;
    msg.rf_err_vx = 0.02335657344926423;
    msg.rf_err_vy = 0.45412864231161654;
    msg.rf_err_vz = 0.6611801345739119;
    msg.ss_x = 0.6413215372227251;
    msg.ss_y = 0.45380753706010224;
    msg.ss_z = 0.7459870884653373;
    msg.virt_err_x = 0.635787053798935;
    msg.virt_err_y = 0.1488115027682827;
    msg.virt_err_z = 0.6597180021398955;

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
    msg.setTimeStamp(0.6732357360085894);
    msg.setSource(56733U);
    msg.setSourceEntity(124U);
    msg.setDestination(33830U);
    msg.setDestinationEntity(17U);
    msg.timeout = 27294U;
    msg.rpm = 0.4352067948924194;
    msg.direction = 164U;
    msg.custom.assign("WHXHMOUQFGKDDEGNVSVUBMUEAJQCOQRATIPXSTIYGYFNYGLEBOZOPTNUBJZLLOIOGHUFAEXAPAWPPDABUOCFRXRGLAXNCHHTEQJFXNMBMKYOLCEKEKVSWUCRFKJFAUIYKQMPOPYBZKGWQJXZMUDMOSNBDMHSFJYKVWNXZZIFCZKATLCWBDTVYLXRISTISVIHVTEHWPGEQURNRZTVPRJVWKQJHYHJN");

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
    msg.setTimeStamp(0.08594030811892883);
    msg.setSource(53237U);
    msg.setSourceEntity(181U);
    msg.setDestination(13316U);
    msg.setDestinationEntity(252U);
    msg.timeout = 24862U;
    msg.rpm = 0.5274556073520822;
    msg.direction = 159U;
    msg.custom.assign("HRLFJYAPHRUGOCENTBBEKWDFCTXUNEMAFUOHMGXXDEUCJAJRZNSMKXSBNVXCNBIYZSWKDLTONLINVKQCDXWASQXXKGQQDJINAAVFTGTZGLEYIJPZROUZQPAHWKCQQGWDBWAOEPRXJ");

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
    msg.setTimeStamp(0.6437619072965404);
    msg.setSource(48360U);
    msg.setSourceEntity(190U);
    msg.setDestination(27301U);
    msg.setDestinationEntity(220U);
    msg.timeout = 47954U;
    msg.rpm = 0.9334911542175371;
    msg.direction = 103U;
    msg.custom.assign("HZZQIFLWUBIXQGSKSKNMUZBKCATXLPWLQWNSSRTCHHWVZIPJHQLDLZQQDNSIMUNAGGQPTLCMKKAVPOE");

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
    msg.setTimeStamp(0.5117224462485183);
    msg.setSource(49276U);
    msg.setSourceEntity(159U);
    msg.setDestination(14689U);
    msg.setDestinationEntity(207U);
    msg.op_mode = 105U;
    msg.error_count = 0U;
    msg.error_ents.assign("HPXDHYJFXZKNUKDWNNFVQHMZXLPRSVDOZSAVLYBRQAPSJUABMSAIFNWBCTLNBJJHHVEIUQYOUHTEOUBWBMGWGWSMCDKHJNUDXLUXZRMLIQDQHIAOTZKBGPFJPGMQNRGCCWBJKPYXRYVTSYFZJNAORCNOXQYRCLBQOQPLGXZMWVOAGEPKFSSRHUHEZXDLTTGRKZSSJICYUOWDCQVFEPEUDWRAYEMIVIYLCCMIVNLKABFTXTTG");
    msg.maneuver_type = 59549U;
    msg.maneuver_stime = 0.648212104678042;
    msg.maneuver_eta = 39195U;
    msg.control_loops = 3546049947U;
    msg.flags = 87U;
    msg.last_error.assign("OHFMYDMSNHBNTPRVXEBGCQWXK");
    msg.last_error_time = 0.012753049815985684;

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
    msg.setTimeStamp(0.7756211760685545);
    msg.setSource(7420U);
    msg.setSourceEntity(248U);
    msg.setDestination(23414U);
    msg.setDestinationEntity(154U);
    msg.op_mode = 156U;
    msg.error_count = 249U;
    msg.error_ents.assign("WLFLKHHMWOZPFAPIOBASFMRSCTWZEBYGAAAXRHK");
    msg.maneuver_type = 34428U;
    msg.maneuver_stime = 0.24261148310885627;
    msg.maneuver_eta = 52117U;
    msg.control_loops = 2743399981U;
    msg.flags = 168U;
    msg.last_error.assign("IAVOKGNZWRAFCVLFPEVYZPJMRGRALQPKBCTIVYKBEQMKVNTLNIYZIUIIMCHQSOQRKLHROCIFGTXXLYYRBSCJKQJYCGQAVQLGSTNWCCBJTHFZLTPBGNOZEZHOWTQOHMOVXFSMZUJUWAUDYDQBAIBJEGUMXXWGDPHILPTWUNPGJEPWXSQKHYWXDBOAJFUDNRLVIPXOZHJZDHSPWXBFUVFUMJSSEMFNDMETENHOFGALVASWKDSRDNEAXYZKDYREMC");
    msg.last_error_time = 0.483297918061099;

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
    msg.setTimeStamp(0.3206623436748288);
    msg.setSource(55588U);
    msg.setSourceEntity(125U);
    msg.setDestination(53875U);
    msg.setDestinationEntity(116U);
    msg.op_mode = 36U;
    msg.error_count = 217U;
    msg.error_ents.assign("UHCGRTSNMPUBHAASO");
    msg.maneuver_type = 60769U;
    msg.maneuver_stime = 0.6046150300108294;
    msg.maneuver_eta = 43132U;
    msg.control_loops = 1310010591U;
    msg.flags = 129U;
    msg.last_error.assign("OMFGQECXORJDLNAHQSMGUVOUQVVEDKIXPJLNIAAPRMFKSJRZSLTTRAFDZTXBOHVEHCCZOQOXTGFUVDIDCHEAYPYVJWFC");
    msg.last_error_time = 0.8731084779001921;

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
    msg.setTimeStamp(0.3491408280567745);
    msg.setSource(13403U);
    msg.setSourceEntity(102U);
    msg.setDestination(63069U);
    msg.setDestinationEntity(58U);
    msg.type = 199U;
    msg.request_id = 29017U;
    msg.command = 126U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 37163U;
    tmp_msg_0.name.assign("MGROZGQXTSKPEJTQQWALMNXUSLUFLLIWXYKUZMMSSCGDIPAAVCCRPQFBBPBUOBRWTAKAGSDOYILHIMMZNVVAGRWCJ");
    tmp_msg_0.custom.assign("VDAJWDTRGPZSWLARTJKHWCFDHWIVHZGMUBLHZYKOBVYSHINFZALYJXNSLIPSYTQC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 3519U;
    msg.info.assign("YNHMSKTQFCJKDAPKSWKJELEKODRJZWBYMDMYNAIYLTSVBGIIHLJWJMUNPVRWAVT");

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
    msg.setTimeStamp(0.4102393656052209);
    msg.setSource(63393U);
    msg.setSourceEntity(227U);
    msg.setDestination(5374U);
    msg.setDestinationEntity(144U);
    msg.type = 21U;
    msg.request_id = 14049U;
    msg.command = 20U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 22072U;
    tmp_msg_0.lat = 0.19842022788082725;
    tmp_msg_0.lon = 0.10186796479174542;
    tmp_msg_0.z = 0.774467334027374;
    tmp_msg_0.z_units = 252U;
    tmp_msg_0.speed = 0.06146048061171128;
    tmp_msg_0.speed_units = 108U;
    tmp_msg_0.duration = 4268U;
    tmp_msg_0.radius = 0.6935025615452357;
    tmp_msg_0.flags = 53U;
    tmp_msg_0.custom.assign("IRWTOCKHWBYAMEPGALUQHSQVENHVIYIMWEDBDZPXFNDGOBRJPCPZHKFQXHYZMPSJSHKMCXSTNLQNRNOFFJDRDRIWCCFGJXVZJRXCRKLGHUYOQYJNOQADETUURDDNHYJIKOMCKAATIEXTVGAZSKGUFHEBYZLAPKEBXTFZSLJQUG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 5848U;
    msg.info.assign("MRJCUONRVAZUTILLWSLFIAKIQUTJFCODAQNQBAYKIPKMNTEOVGFEIWSWOIRHKTDUFWZTNLFTSDSTYYKNIODUZHWUHNMDGMLHRJRUJCCXVXVLRWBPRJNQTHDAXIBMZWLWYCSGYKOTEPBXYVFOBJGXTNVQRALEFCSHGIEJEPPUCJLQEHSGBCMBXWVDGGMDBNAYUPMAUKNJPXZZEYFMPJDQRZBSPEEBYMRWFVPOAQ");

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
    msg.setTimeStamp(0.4711650739931448);
    msg.setSource(51090U);
    msg.setSourceEntity(52U);
    msg.setDestination(44841U);
    msg.setDestinationEntity(148U);
    msg.type = 197U;
    msg.request_id = 63576U;
    msg.command = 253U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 64584U;
    tmp_msg_0.lat = 0.5228185703987038;
    tmp_msg_0.lon = 0.47721174226258667;
    tmp_msg_0.z = 0.6214087207158885;
    tmp_msg_0.z_units = 48U;
    tmp_msg_0.speed = 0.6025575966363456;
    tmp_msg_0.speed_units = 141U;
    tmp_msg_0.roll = 0.9208803577072014;
    tmp_msg_0.pitch = 0.031960004784496454;
    tmp_msg_0.yaw = 0.317568236791428;
    tmp_msg_0.custom.assign("IJTSEEKQXNFHLMATQDMWHTPBNIRVODRKHHXKDFBDAIALNVUPBWLFOADFHC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 4080U;
    msg.info.assign("DVTJXFQHURDQEDFEFZYQACPIQHKHLNILPLUNURJWRTLAGLWTLVWTCCFFCZMHIALYOZDCSCIOXDTXJXRRVSZIGKGEHPPKNANFAGDPWKTJZSMMTDMIAXBUCRRBQGYOONLHYLCKDVMBQAUUHAURESMBPWPOVUSMNDTSZQNTBRNVEJCQAUGJTOECOYXVKQBKVKLBZHIJEZMXGWGYSJXYOVYYGXPIEJGEVYSZNBSIOMPWMFZRHHFSKEJIFWXW");

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
    msg.setTimeStamp(0.14908213118214342);
    msg.setSource(27957U);
    msg.setSourceEntity(75U);
    msg.setDestination(24161U);
    msg.setDestinationEntity(210U);
    msg.command = 55U;
    msg.entities.assign("TQEWHSKHMUGVDECVKHEJPFKUAQFHQWFDACGGAWXIEWYONORDILLBWLJOMRSINPBUKYCKCLDNLQJXMZTGBRSNPHQPQWVGYZIMVFOCVACWOXNVDUNYCCOSFLYTMURLXRZIT");

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
    msg.setTimeStamp(0.5294523695395669);
    msg.setSource(6224U);
    msg.setSourceEntity(226U);
    msg.setDestination(37093U);
    msg.setDestinationEntity(5U);
    msg.command = 181U;
    msg.entities.assign("WOYUWXXVCPGAQHZHOUKPYRPCLVAWQDRLCLCRWWGAEGIMUHUZSDREUONWUHKSFVFVQYGZRABYQTPFDFPGATSFKDOMZKHDMZJLJTEFEIVJQCHXHMAVMCOCAYJIBFENXXWNLJ");

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
    msg.setTimeStamp(0.8030658413339871);
    msg.setSource(10886U);
    msg.setSourceEntity(8U);
    msg.setDestination(21381U);
    msg.setDestinationEntity(1U);
    msg.command = 141U;
    msg.entities.assign("JHMIRCSEESIOLYBOICXUKCCPSOXZAQLVRFPDJOBRDTHERHPUBJDUFBKNACBZFYTMDQJCUWTVLELUZNTHJXBTS");

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
    msg.setTimeStamp(0.5120601174810893);
    msg.setSource(40066U);
    msg.setSourceEntity(182U);
    msg.setDestination(1895U);
    msg.setDestinationEntity(245U);
    msg.mcount = 78U;
    msg.mnames.assign("ITPPSFWVOQDDKUNKEEQHFIVLHZDRMFRJ");
    msg.ecount = 42U;
    msg.enames.assign("ANDBJSJYKGBVOHINIVZXATGULOVESMDZODHQRPQDJKROSAJDCNTUAYFMFUOHMTDEGVGWCAHXVFURLWXSKPJLKRHMYPUSIEOORYGLKHZELFVQEOZRXIKYLXNYUDPTSXKBFUWQODKMBNISWFJXOBMHWMTDWLRYRPQLBVUNKVWPSPBLIAWZFZFVTIETMCZXF");
    msg.ccount = 108U;
    msg.cnames.assign("JALXCWHZEMENFMRVEZBHJNKYAXZTZURGTZQAGHYZGBNWBXDRCFBHHVUKUQKJLN");
    msg.last_error.assign("GIEHJWJVTBDCZJZHWZEQDXYXBAXHBSDRABKNDGUBNLCKDONBEQWTPMUYXDHZNNHUTGOQSHNZIISGEDFYYYMXYFINHDPAROKXAXKTBETZSFLTSZSXYWKZVUVRAFGKOUUTIFFVLVOPVKOVCOOCPJWPWBDJLSRBPWXJWYXIENPQPVAJWTIRMMQCVCADQHCSEILTYYSOLLQLKMNECUEGQJGM");
    msg.last_error_time = 0.3906141601373786;

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
    msg.setTimeStamp(0.2225797098109773);
    msg.setSource(47467U);
    msg.setSourceEntity(89U);
    msg.setDestination(64006U);
    msg.setDestinationEntity(4U);
    msg.mcount = 12U;
    msg.mnames.assign("ERFXOSFZVAFMZIZRPFHPYDEUJZMCXTYVUPAGGJCCKLUYBIDKRYVYWZKNYIHCBHIHUIBJABZEQDVFTXSBLGPMXKYEDNOPGRHOQRTWQWASFUCDJSGJWYGTQKQVMQWSQHARMLPCLMZBSKSTUPJWVVTEHMDBMOOGEANLCEHFDOLDEXWGNMHRUPUQUHJEX");
    msg.ecount = 105U;
    msg.enames.assign("GLNDIBBPNIAYNHGGQNKPODBUFXQJDIEVAOZMZHWUHMAJOBQOHINYMSBFXUPCTJZAKXLVKDTZYEHLTNHCFGYEVTGRYBSMJELOTBPKOQQWWTVRUQSMWSVJFKEZJUBXRTJRCOMLSUKIYWIGVUTZBECYVJEQXDAEOCIGVXUFKKJGEDIPCCOYXWSMQZXQRVHAMFKCISDYECXBPAZPLLTZUFRWZXAHRNCYFSPQWPRIJKOWFNANWDDPTNHLLGGFSRM");
    msg.ccount = 246U;
    msg.cnames.assign("CQGSWRZCTYJOY");
    msg.last_error.assign("ZASCDGKILDGYBWJQPSHTGQFHLDPPAP");
    msg.last_error_time = 0.4008980334758713;

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
    msg.setTimeStamp(0.39495640283515665);
    msg.setSource(37844U);
    msg.setSourceEntity(174U);
    msg.setDestination(6296U);
    msg.setDestinationEntity(248U);
    msg.mcount = 221U;
    msg.mnames.assign("TBKVCGYMJUUFCZMO");
    msg.ecount = 181U;
    msg.enames.assign("KJQMMHLQSDNLCPCXJBSAZLHOMAPUGZUPQJBKVWNDLRVUBVZDADEU");
    msg.ccount = 76U;
    msg.cnames.assign("FYSCDIBQLIJMRTCRCTSTDKCJNIZZBPROREQDMZWHXAZLYNKUYZWJGOXRLSAYBSFMBNEMSFPVCTYCXQDJPPRLBGOIGBNCUNKMHDFIFYEUKDJFNIUVACGRRXRAXQXBEIPJJAKLVLOSHPVQVWWJJKGWDSMHLYHZGBEVWHCMZYKZIOAVILTDXEFNOPVHEWOAGKWSVYBNXTUFFMKKWEDPRSWZLHMLYOTMUAQQNUVUQPFETGOQBTGZNAUSTIXXJUHA");
    msg.last_error.assign("HJFNGQHISPQQTHVWSHBZBKGEKIMFHFVJMQJTUNNJEVKZZFWMEYELYAIRGIUAREASUQZBSQOPLADWDVXFVCLBHJLZCMEJVKVYSTSILODJJOPMVTXLRMGISDZNYKGWNMRWMXUNFXAFGPLTCIWWYINKCXUYZAVKGYRWKPVJIUHLUOWERDXAXZOXHECRFOZSYSLKGPTQRPBAQPYAUOMEDNBJYTDOHRQBNCGCBLWBFECPDUBGUCATXMNO");
    msg.last_error_time = 0.5127626048155818;

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
    msg.setTimeStamp(0.6048776655166875);
    msg.setSource(57744U);
    msg.setSourceEntity(176U);
    msg.setDestination(10907U);
    msg.setDestinationEntity(243U);
    msg.mask = 52U;
    msg.max_depth = 0.4850854354735641;
    msg.min_altitude = 0.2753091130119951;
    msg.max_altitude = 0.5165693940209292;
    msg.min_speed = 0.8845500576490227;
    msg.max_speed = 0.4311773823949462;
    msg.max_vrate = 0.8628064100991145;
    msg.lat = 0.6867864656831485;
    msg.lon = 0.9818267262253639;
    msg.orientation = 0.11071982513637624;
    msg.width = 0.5309389964087615;
    msg.length = 0.6447761689329577;

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
    msg.setTimeStamp(0.6843378005070887);
    msg.setSource(4924U);
    msg.setSourceEntity(133U);
    msg.setDestination(7909U);
    msg.setDestinationEntity(54U);
    msg.mask = 228U;
    msg.max_depth = 0.44746356992552694;
    msg.min_altitude = 0.5714621786786456;
    msg.max_altitude = 0.831843809803829;
    msg.min_speed = 0.7240337556138963;
    msg.max_speed = 0.46895723753257923;
    msg.max_vrate = 0.7707069955237109;
    msg.lat = 0.1539919633631679;
    msg.lon = 0.5993628561968184;
    msg.orientation = 0.07039565860304275;
    msg.width = 0.016371005205808697;
    msg.length = 0.9114352830731592;

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
    msg.setTimeStamp(0.4930828763809024);
    msg.setSource(20554U);
    msg.setSourceEntity(146U);
    msg.setDestination(10755U);
    msg.setDestinationEntity(25U);
    msg.mask = 73U;
    msg.max_depth = 0.2505709227857593;
    msg.min_altitude = 0.15667990646111596;
    msg.max_altitude = 0.5470455835329517;
    msg.min_speed = 0.11676468739300017;
    msg.max_speed = 0.9065756836792768;
    msg.max_vrate = 0.5563908552765823;
    msg.lat = 0.07750062149479797;
    msg.lon = 0.8949171344795637;
    msg.orientation = 0.019059676844352724;
    msg.width = 0.14187967032933846;
    msg.length = 0.7094333347189832;

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
    msg.setTimeStamp(0.4587143420953066);
    msg.setSource(45926U);
    msg.setSourceEntity(73U);
    msg.setDestination(37825U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.4299256304636595);
    msg.setSource(61345U);
    msg.setSourceEntity(251U);
    msg.setDestination(26370U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.615212334564479);
    msg.setSource(47032U);
    msg.setSourceEntity(243U);
    msg.setDestination(13730U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.030389730632747747);
    msg.setSource(37999U);
    msg.setSourceEntity(197U);
    msg.setDestination(10880U);
    msg.setDestinationEntity(69U);
    msg.duration = 2137U;

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
    msg.setTimeStamp(0.2587122572934808);
    msg.setSource(58648U);
    msg.setSourceEntity(28U);
    msg.setDestination(25273U);
    msg.setDestinationEntity(225U);
    msg.duration = 28911U;

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
    msg.setTimeStamp(0.9076510182516812);
    msg.setSource(57940U);
    msg.setSourceEntity(171U);
    msg.setDestination(45323U);
    msg.setDestinationEntity(66U);
    msg.duration = 8256U;

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
    msg.setTimeStamp(0.7271313868852044);
    msg.setSource(49391U);
    msg.setSourceEntity(129U);
    msg.setDestination(28150U);
    msg.setDestinationEntity(29U);
    msg.enable = 24U;
    msg.mask = 3735748522U;
    msg.scope_ref = 2809621502U;

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
    msg.setTimeStamp(0.04992205311081066);
    msg.setSource(44792U);
    msg.setSourceEntity(164U);
    msg.setDestination(14765U);
    msg.setDestinationEntity(64U);
    msg.enable = 45U;
    msg.mask = 3015633897U;
    msg.scope_ref = 1420683105U;

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
    msg.setTimeStamp(0.6760820571924974);
    msg.setSource(12449U);
    msg.setSourceEntity(132U);
    msg.setDestination(47242U);
    msg.setDestinationEntity(220U);
    msg.enable = 147U;
    msg.mask = 1695254050U;
    msg.scope_ref = 970501347U;

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
    msg.setTimeStamp(0.6349145219010064);
    msg.setSource(209U);
    msg.setSourceEntity(18U);
    msg.setDestination(29702U);
    msg.setDestinationEntity(20U);
    msg.medium = 180U;

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
    msg.setTimeStamp(0.14579081939265082);
    msg.setSource(28315U);
    msg.setSourceEntity(147U);
    msg.setDestination(29765U);
    msg.setDestinationEntity(108U);
    msg.medium = 146U;

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
    msg.setTimeStamp(0.38680223704462613);
    msg.setSource(39338U);
    msg.setSourceEntity(194U);
    msg.setDestination(44347U);
    msg.setDestinationEntity(208U);
    msg.medium = 99U;

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
    msg.setTimeStamp(0.18659488645523148);
    msg.setSource(55987U);
    msg.setSourceEntity(92U);
    msg.setDestination(51390U);
    msg.setDestinationEntity(86U);
    msg.value = 0.005088966154958574;
    msg.type = 66U;

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
    msg.setTimeStamp(0.5398612653701946);
    msg.setSource(52978U);
    msg.setSourceEntity(250U);
    msg.setDestination(62157U);
    msg.setDestinationEntity(67U);
    msg.value = 0.26832260582242584;
    msg.type = 202U;

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
    msg.setTimeStamp(0.9784497836169964);
    msg.setSource(5453U);
    msg.setSourceEntity(96U);
    msg.setDestination(58563U);
    msg.setDestinationEntity(110U);
    msg.value = 0.3037458470555783;
    msg.type = 209U;

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
    msg.setTimeStamp(0.2799313101825436);
    msg.setSource(62539U);
    msg.setSourceEntity(67U);
    msg.setDestination(8805U);
    msg.setDestinationEntity(35U);
    msg.possimerr = 0.1377622845378328;
    msg.converg = 0.3609030842913431;
    msg.turbulence = 0.41250896590469643;
    msg.possimmon = 202U;
    msg.commmon = 242U;
    msg.convergmon = 176U;

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
    msg.setTimeStamp(0.7486749476008531);
    msg.setSource(48460U);
    msg.setSourceEntity(237U);
    msg.setDestination(58322U);
    msg.setDestinationEntity(38U);
    msg.possimerr = 0.3612526215554054;
    msg.converg = 0.9461249194434759;
    msg.turbulence = 0.3261255679557886;
    msg.possimmon = 35U;
    msg.commmon = 150U;
    msg.convergmon = 106U;

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
    msg.setTimeStamp(0.7811453161133545);
    msg.setSource(10415U);
    msg.setSourceEntity(27U);
    msg.setDestination(31579U);
    msg.setDestinationEntity(206U);
    msg.possimerr = 0.5318319182512413;
    msg.converg = 0.5166893288449751;
    msg.turbulence = 0.6375241463652583;
    msg.possimmon = 60U;
    msg.commmon = 145U;
    msg.convergmon = 143U;

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
    msg.setTimeStamp(0.5648956266576838);
    msg.setSource(49103U);
    msg.setSourceEntity(64U);
    msg.setDestination(45207U);
    msg.setDestinationEntity(10U);
    msg.autonomy = 62U;
    msg.mode.assign("XWSCVQMWDTAOEBIFUBEZNFZCJITMYALGIFRRDTNFBAOLMJJXLQQNXVGXBSOMVEWIRFANOPVDNCOZCSRLHKAUJDAXJRSBOZHEKVDCMZKEGBKASSIDFUGUNQETWNWPVUDGPCSRGQTMHXIYEXLHZAYGNFBCRXIEQFDRGAPRHWQIYIZCFXLOYJ");

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
    msg.setTimeStamp(0.36377370468622394);
    msg.setSource(51768U);
    msg.setSourceEntity(62U);
    msg.setDestination(25706U);
    msg.setDestinationEntity(130U);
    msg.autonomy = 244U;
    msg.mode.assign("IVFEZBFVNCQRWLBLHJCWDGMQYQHDTUXZCDPZUJRDXGEKTOVAPJZSVUUARLDAAQXSKLATQYOHJYRYSNIIMRUPBSTWNFIBTULHFNLRYMXMYDIGQKLIEPEIDLIPHBOJHVYEQJGTKYWJKKNQPWIVHFRMEGOEWTLCAFHGWNXWCXCXEWMSZXOSZUNFMDABBOPJTUFSFPCBWGGZKKOOVMMJYVXPZNSPCBOQUTARFNCTOKDAQYMHURGRIBZK");

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
    msg.setTimeStamp(0.9435405979055007);
    msg.setSource(46260U);
    msg.setSourceEntity(143U);
    msg.setDestination(12110U);
    msg.setDestinationEntity(133U);
    msg.autonomy = 202U;
    msg.mode.assign("NQQTRBJJVKTROTHXLAWJKFIYRXZMLBIDNOULOIQRMIFQEYUJKBTEMWBFKDSYEFALKZJDNPCASVRNLEDVZCOWYXDGPIMVJXSGZMQCUAFPGPCFKZSYJFNNZIWXOIKGUTUGIAHDBBHBLGHYGQRVPEFFZHALKCZJKZYHGDSXBPNWVUEPIIAHXTYTNZEBRVURTNPMUKYC");

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
    msg.setTimeStamp(0.40348665700057873);
    msg.setSource(35379U);
    msg.setSourceEntity(11U);
    msg.setDestination(15768U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.2610487228530456);
    msg.setSource(1779U);
    msg.setSourceEntity(219U);
    msg.setDestination(25405U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.5486122004745193);
    msg.setSource(44944U);
    msg.setSourceEntity(246U);
    msg.setDestination(11548U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.43916176825753883);
    msg.setSource(11170U);
    msg.setSourceEntity(93U);
    msg.setDestination(54270U);
    msg.setDestinationEntity(213U);
    msg.plan_id.assign("TWHCDEQEHNSBSIOHIYLAWCIMUIBNFMIQBWQYVDRBJXCZAPCFRQXNFCCOABJTUZRIMOZPFHLFUHLTMPZEJTFTJWKRXUSNIJOJTCZDFSXYELRKKEDXOYSVBNAEGZPQBXJRKJIURSVKWGYVPXPHETQGPTLZIPULUHQNDSACGNVKKMORIZEABDNWBHRAYKMU");
    msg.description.assign("RZJSSBUMHDTXLHKZSWUFATIMOPGIMVCQKXKMJGEUOLVBCWRCXPOIKMXIXJIWAAEBKKRXEGILOTDORJZHBVZLSJYJREIUFXBVMCPFLQP");
    msg.vnamespace.assign("ZECECMKUSFHVCPXOYQPWIMTXYTMTTWPZXRJOZQAJHZMUTMGNXQLRSQOQNWKUELFFRZLQEAHDFNAHVDBGVAOMGWKHLJU");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CHHRVWJZCPZQTSVGBNKHJRIQKAMKPMJEPCCWDQIO");
    tmp_msg_0.value.assign("WTWNBBCAEVDPRBFEOHJXEGCDLVFBZWSHNADYGMYHPYLAERICPRVKZRKGQ");
    tmp_msg_0.type = 45U;
    tmp_msg_0.access = 223U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("DOCUYBUSEXJHSYMLUTMFRJGBEVAWHCTCRMKYCGVZVNFQOZKWJPVBZFDZBYTVJPFUXMURXDQRCYLTOHGOQGIHUXYKTKLMZOAVLJSZZIMEPAPGXPMIHXPKLWFQAWMNPDRSLAEJDFJLLWQNEEGLSKWDBNKSO");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("QMXLAIPURDOCCJKEYNKPZQLBGHSZERYDHPCCWFTZMSUUTJWJDKUIVRGDBKGGLJEWECAFDGVHZBIUNOUXNCFSEEHYXBHVFGDOIDZTRPWSTTQSCKQEBBQZAUKTXYBFIOKNBSPZEHXFIDMRIFZAWSOXQMVLFAONLAUQKPOAQWFXRNMJUJWDMGOUAJG");
    IMC::FollowTrajectory tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 23930U;
    tmp_tmp_msg_1_0.lat = 0.8448797523062006;
    tmp_tmp_msg_1_0.lon = 0.9964750281475191;
    tmp_tmp_msg_1_0.z = 0.3891170336929237;
    tmp_tmp_msg_1_0.z_units = 55U;
    tmp_tmp_msg_1_0.speed = 0.18157870329253623;
    tmp_tmp_msg_1_0.speed_units = 26U;
    tmp_tmp_msg_1_0.custom.assign("HUBPDXSZYEUIPZZZUAPJRUQDKLNGHJJUISILOKVWCEIRXPVKPCWGIFBZTEZSFBNAVTUDXRAQLOHZTZHHJICOXXXYGGHTEBVDMCUHLWLQCDTAKSEPCCSRMLYGWJQLJVEUKOYEYCZCUDRAXIKQYOAYFNMNQMWPTSLFQVAVGXOXRNEMBJNPFBKFVXMJLOIBYBWIODVWCFPKZPMTBWDURJLYSYIQHSNDNFA");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::PowerChannelState tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.name.assign("VJWZKMCWUWYRHJIPTDSJEUXFMQMXMLCIGDJSEJTFCAUQOFCXFFYFTGJTLHBUNEZBSJEQOIQQMYKXASSCAHHJQLQUPKPEGRRSDYBAJOLIPMPIDBTYNSKVHCXGJNVNNHPKVINRBR");
    tmp_tmp_msg_1_1.state = 41U;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::FuelLevel tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.value = 0.6300733505639479;
    tmp_tmp_msg_1_2.confidence = 0.9461965188542473;
    tmp_tmp_msg_1_2.opmodes.assign("HEEVOVCHBDNPKEDYDZNGODCKBBPKJIKCTIAJDFJOAJMWJJPPUAEVHGWVRWCEL");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.6851093672757014);
    msg.setSource(12888U);
    msg.setSourceEntity(49U);
    msg.setDestination(20041U);
    msg.setDestinationEntity(60U);
    msg.plan_id.assign("FUECAGTZWMGFZQRUPQAVXLIHOIDKXYLJHVFIKMDECXSLHPNSXBTDOTGQWUEQKRJUQAZCXFCBPPHJBLOHSHKUQKVBZODWHPNTOPRTMRCNTVHKKBEVSIZOCJAJMUCLKPSIXYADSVJNDYENEAXLFAQWBRGXOZJZLPMRJGNSDGGVHOBUWWAZFIMECYRQMXNQWTQAHSMVUTVUWWYRKZLMNSJYYFMGETAOGKLYJIPZTCIFBRDRFPCEI");
    msg.description.assign("NTQNQCSAWYSLMPWMVUYJOHCMZGADDXRUOKZGIFOHRMUKDQHTZCFKYRYJDXVFOHQXRMNZBIOAMQDETKRRWUZTBPNNVBEYFHHRWQXHSGKFPYXJCBKPSSFYUIFMGAHACJGGOSECRGPPWOEZXGSUKQTIVWAICKZTSODMAFSLAAXYTFIIIEJVYVJUSDEULGHZBBILCBZWWCHIPVLWMBJXJCGOEZTMBJNQTDKEXLL");
    msg.vnamespace.assign("AQGQCCQRXYYPGFPJZGDAMVJVBDBHNJENIFSSVTVCOIREUGZUEQLAXHPLIMZAQGDVWBLMXRCKSDNYKPZBGWDYZCVXGRXRYU");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("UQWHPYGYABRMMWLRHCAFEBUORGQMZPJVYXKWXQCSOPEVHWFWNXMBEGCTNTCROFPFJBANGOEOVUOUGYQDRERKLIGKRAYBVXSLIWQQRTFIVIKJGNQKSGOSNBZSHFFTZCWZDINM");
    tmp_msg_0.value.assign("VUXTKYLWAEMWFHXD");
    tmp_msg_0.type = 252U;
    tmp_msg_0.access = 14U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ZIPTTRGNWINHVEQYJAECNMJ");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("SVHPJPMLHJZYNNGTNLOABNNTNQQLJVUVTXOIBRGKETCBMKHKMMSNSUTXVDZPPJKSNWRNTDGRIWXLGAJQEAKWTFRYPOHXQEZIQMGLYEJSYQHUMOJATBLOKZFKSDHDY");
    tmp_msg_1.dest_man.assign("DCSWRYSOYDZNWZHVIWQKHBUEPRTLCOYCOZQTGUTJNERVTWCGANDFXIOXUARHRPHIJYQBZAKAOJZPIWXCNYCJMSXMRLCHMVLYJNYHLBJAQQDPMFXKVZNLEBNEKRDKGVEAQZGDAXHJBDLEWUOMOIARBEILXOSHOMSPLSSHOKYTJEQTTFJMFVWUBQRDDXBFPUWIETGGVHSXGFVWWNEPLUQGLQJBUZCYGTGVIRFXMM");
    tmp_msg_1.conditions.assign("JFBKKFWPZNWZSVKDFJJWOUUDHGPIFPYRQTJTZEOBULOZSIGBXGCARLASUFDPKFVVKJCSCLQXOTXGFSERMJYOJPTHVTEAGJDKOBACAKRSUBGSCCIPXXBYIMHHWP");
    msg.transitions.push_back(tmp_msg_1);
    IMC::Salinity tmp_msg_2;
    tmp_msg_2.value = 0.8927219494710534;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.07499756450417461);
    msg.setSource(44870U);
    msg.setSourceEntity(236U);
    msg.setDestination(43745U);
    msg.setDestinationEntity(71U);
    msg.plan_id.assign("UPOWPEVKSKGOADTXNSHQP");
    msg.description.assign("AAAJVYZCTPRDUEFWMWQYSZHZKYPPRFCPYKKGPMUGHVAASDNCVHUDEQDSTWVXOEIBUXFNLWCMTODJGNLOMBHJNADQQVWJSTKLMXPUMAEMBDXVVXRHMTXCPACBNBIQLSECPJCGHILOEBRFGRDWDORQNHIXIKPMLYFYQHNSEETXXEQHOIGXAZOKJCYTNILAZSPNEVBSKCLDWLRRKOKGIIJFZY");
    msg.vnamespace.assign("JVKTUHFEEHYYONPNUPHOLDZLBQIZTSDBKZNZAOCSG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SOVJLXRNIFUOIKZTXIMUMFCJGQQZUPKGWGQYCLKUZSRITEWMSBO");
    tmp_msg_0.value.assign("LBEGGZIDROBMENPBISQCHPJOCFYPLYGSXQVTHHORZMRBIUQOBBLOKLVOAIEYDIFUPBYAKUJGEHNSGMGZUVWKQOFMNWPGKZZKUJQYHIRTDRLVNZSWDBTXHSYQLHEGC");
    tmp_msg_0.type = 185U;
    tmp_msg_0.access = 107U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("MOYZBYUKEPPASOUVLMZTFZNHRQWIUQWJLWONBJSKXKQNAQHGXOTOKDVRTVDGVVJGIHSOWJARIEQAIDMRPFPJQVIXICTCDUTHWPCMXDWLYKINPJMCUZWOZEIBYRSCMKELNTUELJQGHPDKZQPJLEGMODJEVNFYYZORFXBLWJGNHZMPGFYUMFRSVKGBWULARDHDCTQRAYAKFCBSCPSXCNDXVRNB");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("LIZFHLAUNAMDOSEKWVDMJYRICVTPPDOYGZLHANDPSQLHVHWPGRSCWACFHBTEDOECJNHMMFPPVCGQXOS");
    IMC::YoYo tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 35462U;
    tmp_tmp_msg_1_0.lat = 0.8953974662167674;
    tmp_tmp_msg_1_0.lon = 0.6595333301332206;
    tmp_tmp_msg_1_0.z = 0.3486815626515931;
    tmp_tmp_msg_1_0.z_units = 208U;
    tmp_tmp_msg_1_0.amplitude = 0.3093397149329813;
    tmp_tmp_msg_1_0.pitch = 0.8900811594538587;
    tmp_tmp_msg_1_0.speed = 0.9870863290167349;
    tmp_tmp_msg_1_0.speed_units = 252U;
    tmp_tmp_msg_1_0.custom.assign("AAVTINEZIBATCFOXKYYPKXRZDKWMJXBGZTYESUBWLWAARQRJRRNKVRANTQVOZQLMONBPLJPBJEWTGJYUBNDTFQPKZMVVKGDSRNIKYGGZXHSRWMSQIDYWSHFSDRNZLELEFUZXHAEFSIDVMABUGQCWXNOLOITXSNJUIGRFN");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::CompassCalibration tmp_msg_2;
    tmp_msg_2.timeout = 40938U;
    tmp_msg_2.lat = 0.403537426321669;
    tmp_msg_2.lon = 0.10201680507978717;
    tmp_msg_2.z = 0.09052780388989423;
    tmp_msg_2.z_units = 84U;
    tmp_msg_2.pitch = 0.21614767896151443;
    tmp_msg_2.amplitude = 0.604877325465341;
    tmp_msg_2.duration = 41746U;
    tmp_msg_2.speed = 0.9115548318660991;
    tmp_msg_2.speed_units = 114U;
    tmp_msg_2.radius = 0.6070786492669896;
    tmp_msg_2.direction = 154U;
    tmp_msg_2.custom.assign("RFXQOOQMJMLXNAXTQIJJCXZSDPCHDPYASGBHYVZRLQXRMZIZUAVAUWHXPUAFVMSLKDVKTSCJGQOMFPUMFRORNPNGQTHIBXERHBWEUILCNGSDVRQOEOYNTUVCKZIGAXKWC");
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
    msg.setTimeStamp(0.18406072967397447);
    msg.setSource(4394U);
    msg.setSourceEntity(173U);
    msg.setDestination(3756U);
    msg.setDestinationEntity(62U);
    msg.maneuver_id.assign("IWLLLBGFEBORVCRIIKFGRRSFNUJWTQFOMNNNAEBKGJVWJLPUGOVNZYDBUYIDVQHFQLDQNXCQIIQCVTMTZPXVUCJPMPUNHAXUFOTHJWJCRRJBXKZRHHGILXPPWTKTHGTUASPREBFSUAHAFKGYCNMKPCVAWEWBSMEZWSEVLMAHKPYBLGJOGDSIEXTKWOXLKUNCDZIBMUDZZBAOYZROVSAJKDHNYQJOZYXQDSMHGDPEMLAZEMSQFOITYS");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 54472U;
    tmp_msg_0.lat = 0.25368776509596036;
    tmp_msg_0.lon = 0.21939838555518265;
    tmp_msg_0.z = 0.1364064562258085;
    tmp_msg_0.z_units = 164U;
    tmp_msg_0.speed = 0.37532880420499737;
    tmp_msg_0.speed_units = 139U;
    tmp_msg_0.roll = 0.30610542317030287;
    tmp_msg_0.pitch = 0.4565517325082207;
    tmp_msg_0.yaw = 0.5629201382023903;
    tmp_msg_0.custom.assign("VKMYTIJZUNZSUMJBCZODKUXZXVXFCLRUJGAADZZKRJLSHTZYDFKBBQBGYKINHAFOQMVUAGQSPEGGHEQN");
    msg.data.set(tmp_msg_0);
    IMC::EntityState tmp_msg_1;
    tmp_msg_1.state = 138U;
    tmp_msg_1.flags = 248U;
    tmp_msg_1.description.assign("LQFVKNNHBWCGDXGZGJFWZYZDSIKNRCVMR");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("LHAIIKPVGFHBOUQLDZZKDNEVIZXUUEGXBDCRAASWNOQIUZOMD");
    tmp_msg_2.dest_man.assign("GRGCYEXELPTVYADTUUGLMWGCPKESITHMLYNOSGWXHVVILKYQTABVSENBOQKOUMRDFINPBMRBNVBRQLEHALGCOXFNQFNICDWIFDJTWMBRTPLCOJKQBPJDVISAKHXRJBVTVWDKFXPWYHRQYQECEMPZIJWNMXHQXDCOXNSISLEXCMFAYYBVEUSOGQYVKUTWKTZDULSYOBDEPQKUCKOZZIGORGWHJFNIMWSXLAJAJUFJGZARRJSNHFHPDFAUZZ");
    tmp_msg_2.conditions.assign("DJVYDWRBMYAKSHCUZXKBLLJUCWOWQMSHRJQXBOHUKFLPSNQLXGCGBVYCFXYRCAEFNXQAGWDUPMIOJKYHQOHRMUNFCJVZYEMPEWRMTFVQBIMBJHIJFTWIEUEKYSDAPGIAUHVDKRWKOSOVIVUPFNZCEYXBNIZWBGJATJOFCHAMSWPMDNKGFSUONQCSOVSEKNAAAXKQFMBDILTCPBELDTVRILYITTODQTRT");
    IMC::RemoteSensorInfo tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.id.assign("CLVQWMXQARSCLOFFBD");
    tmp_tmp_msg_2_0.sensor_class.assign("OYIEIRPEDPPGHOYVCPEGLYFTELFTIBQKWZHPXDIFEDLTEHIAJRXQVFSPAIHWHWHXRQZAMCXMMLLDJHFAFWAUBOQYTSGROKGNDULVVHRNDXXUFGXYSKKUWFMCGKJZEVTBUSKDOQYXMNGBTVXCQ");
    tmp_tmp_msg_2_0.lat = 0.5993426952075578;
    tmp_tmp_msg_2_0.lon = 0.9988898909627805;
    tmp_tmp_msg_2_0.alt = 0.9954249359627423;
    tmp_tmp_msg_2_0.heading = 0.8127331492705013;
    tmp_tmp_msg_2_0.data.assign("QZUVCDGYINMLZDOYZDZTIXLYWHBDCMLNNNWOVRWBTTQIKYRNUOMGBJQIUAZFHTMEFDOJVUPYXCFEPKJIJTKSQJZFFYHOSATVIHBPHKUYLUDUMOCBIZMHMPENSJZMHFGQFRCVLX");
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.3668063547763769);
    msg.setSource(101U);
    msg.setSourceEntity(235U);
    msg.setDestination(27292U);
    msg.setDestinationEntity(241U);
    msg.maneuver_id.assign("EPJHXMAAXKOPUMKVOWABIYBVUDDTLYZARWVCIXVOYIBFFDKEOZECZQJUXUCMOPGLKHQSIXZVIWFYYGCTJEXDGJQTWNLQSDQZMRFJNEHAMILYFBPVUARKPLKHCZWJEYLEHVLSRRCGKUEFJOWMBTUUCMTHQDKFYROXTTOIXNNPBDDKTBGTHLPGWVLSWGBZCFANHVZZVEZYJRANURUQMPMGFDJJASOWIQ");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.6753111189349866;
    tmp_msg_0.lon = 0.7092785351059425;
    tmp_msg_0.z = 0.3651985771792746;
    tmp_msg_0.z_units = 181U;
    tmp_msg_0.speed = 0.8857387785315407;
    tmp_msg_0.speed_units = 7U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.47737480988085057;
    tmp_tmp_msg_0_0.y = 0.9224195822545189;
    tmp_tmp_msg_0_0.z = 0.6309298284540257;
    tmp_tmp_msg_0_0.t = 0.16334009720989862;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 29881U;
    tmp_tmp_msg_0_1.off_x = 0.6368024356072024;
    tmp_tmp_msg_0_1.off_y = 0.39651535110243086;
    tmp_tmp_msg_0_1.off_z = 0.7687546453761737;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.22875292293911986;
    tmp_msg_0.custom.assign("RELFWPVOEHCIX");
    msg.data.set(tmp_msg_0);
    IMC::FormState tmp_msg_1;
    tmp_msg_1.possimerr = 0.7843012601786209;
    tmp_msg_1.converg = 0.7242784569927928;
    tmp_msg_1.turbulence = 0.4863627758703868;
    tmp_msg_1.possimmon = 160U;
    tmp_msg_1.commmon = 216U;
    tmp_msg_1.convergmon = 50U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::WaterVelocity tmp_msg_2;
    tmp_msg_2.validity = 210U;
    tmp_msg_2.x = 0.14788878107410242;
    tmp_msg_2.y = 0.11094397720183169;
    tmp_msg_2.z = 0.09168234689978416;
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
    msg.setTimeStamp(0.38130121116231497);
    msg.setSource(20039U);
    msg.setSourceEntity(221U);
    msg.setDestination(38598U);
    msg.setDestinationEntity(78U);
    msg.maneuver_id.assign("OKVFWEJLOADZRNHPIXATHALRZTUULMGVXMWSFYEDNOGXQJASIERQJRGQUNFQWPIXLACBTDUTGZ");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 10494U;
    tmp_msg_0.lat = 0.7508767283808202;
    tmp_msg_0.lon = 0.6515388960173962;
    tmp_msg_0.z = 0.21469354485356473;
    tmp_msg_0.z_units = 32U;
    tmp_msg_0.speed = 0.3337490443972875;
    tmp_msg_0.speed_units = 141U;
    tmp_msg_0.roll = 0.6523122707913855;
    tmp_msg_0.pitch = 0.6862085850900674;
    tmp_msg_0.yaw = 0.8871176519204329;
    tmp_msg_0.custom.assign("WXTGJGFVJYBKUIOZEYTNLIKCDXZXIBAVRMOWCAVJUJENJZZMMPWYITMKOHAURRGFGQDHVPDKFLPSFXEWYDNUAOGKRE");
    msg.data.set(tmp_msg_0);
    IMC::DesiredHeadingRate tmp_msg_1;
    tmp_msg_1.value = 0.1522811191452419;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::AcousticOperation tmp_msg_2;
    tmp_msg_2.op = 225U;
    tmp_msg_2.system.assign("OQJXSSMEQEQEMNDFLRJEOKORTIGRTJDLJPKALYNHBQZVXLOIFVCTXBGQOYXYYZCVKCNFOBTHNAUUPOUCDGWIFAALCKGGXUBCHDFJYP");
    tmp_msg_2.range = 0.40858181693060325;
    IMC::QueryEntityInfo tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.id = 205U;
    tmp_msg_2.msg.set(tmp_tmp_msg_2_0);
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
    msg.setTimeStamp(0.2684677156798183);
    msg.setSource(38627U);
    msg.setSourceEntity(73U);
    msg.setDestination(21515U);
    msg.setDestinationEntity(180U);
    msg.source_man.assign("GIWRYJEFKZUHXPJUCOMUQSLTIVLPCXYERCNAZVECPLFXRVBTGQSFGWUIN");
    msg.dest_man.assign("ANJOWKSXLDRJGXBMZSHUDXCLNEPUTBCXFDWFSJPMGZZFTEMOVBHULMSAMQEORYOCKKNMXEFIBYEVQSSHEPCKSPCGVQJLHJFIEBOHMYEDJKTVRSZCRDWPIRXEJUNNCQTSWYMGNYZKPCBXTNVAGDWILSRLYAYMYRYUVHHVDALWNIUHMOUOLZFWK");
    msg.conditions.assign("IVVBSRZIGREYBYDFGRFAPEULBVOAPRDXIBEKHXQZJCWKJZISCTIMGH");

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
    msg.setTimeStamp(0.23790042252045218);
    msg.setSource(41229U);
    msg.setSourceEntity(4U);
    msg.setDestination(28355U);
    msg.setDestinationEntity(212U);
    msg.source_man.assign("TUNRXNPLZMMMXJSTRHBAPARIWBQJQHTBUTHZBZALAXKYEOOORGGCCQRRNEGLTEOPFVRMIGAKMUUMSVITKCOLCFVRBCSLGFFSHBYYFECXVQONETCPPGEOXEAKHHXWLKQVRGJBODVKESDWRYUIXLDSKDQPEBGUZZVQZYFDANHDCQPZFDIWNXKGUFIYVLTHWJNBIDAJMPSSVHMQICKZUCFQOFUPNWWEWTBDDJAVATYNISYGYUKJZMOJZXL");
    msg.dest_man.assign("JDBLJEOSZUTUNVVSFKQRWGUOMEEDBVCPDSICCATZDKQOXUKYVLILZLENMAZXUKFHNHXPZRNUAZTWAYFDJKRYSOLXHTJPTYHQYKVECPWFYYIERWMBSNCMJGRTGHK");
    msg.conditions.assign("MSADKSKUTVSEVVMIWNKKPKEIFCEMJRZJLEVHLWLAGCUPCQRL");
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.39992005072020553;
    tmp_msg_0.z_units = 190U;
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
    msg.setTimeStamp(0.30850194167835354);
    msg.setSource(10330U);
    msg.setSourceEntity(126U);
    msg.setDestination(22485U);
    msg.setDestinationEntity(31U);
    msg.source_man.assign("RQAKFJGDXUTRBMJHWZCIXAPBWVHCUBOQRVBWWGJIEYIFFWTSTKRJQBHNMKLVJFRZMGCXEOSWBDVHNOFYBSTFDJIPGKAE");
    msg.dest_man.assign("FVEYGZCUKMQTKQYSZGXAQJOBDFVKOTRVHIHTHFWKERKUPIJPALYDDESOMGPNLLVDCUTBEKCBNIWPHOHEXQUGZPIEHLUFJNMBKDIMQQXZRQYECJFJWLSPOTWFNRKEZURPFTBMGRJOWGDCVWAAGJTZSMGVQJZH");
    msg.conditions.assign("WCJORVTQBPUOFCUAFWFDZKMKUTQJRRRGCLJZAQPLLYFHAJMPVHYIHRZEZXEXIJYESYYZSNNTSAGWNESUMDWQOMXJBQTMBJQEKVQGNRIOGOSWHWNMFBXALDFOXGIDAWMVLROECXQICLJCGPUQDFPYBHVRAMLBYXWSSPCYIKOKHDKFGKIEGUUNNE");
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 61666U;
    tmp_msg_0.value = 237U;
    tmp_msg_0.error.assign("QCDRRERMOYNWFBVTHJVUKJEFCALPKGCZUFZVCMIUMGVAKCYLFTSSQLSJJDEFLTDLIXTPKKARVHMVHEJQWHSFTRAOIKLENYPRHRJQTGTZVOPDUUSAQFHVMXIISKANPBCUNLPAK");
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
    msg.setTimeStamp(0.7665889571702038);
    msg.setSource(61050U);
    msg.setSourceEntity(230U);
    msg.setDestination(29792U);
    msg.setDestinationEntity(185U);
    msg.command = 87U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SRTPAQAVGASOKBJJXZYEQPURABPIHQDWMIUHERJUFBGJKNVDHLIVTEXDQURLTBYKNHFWIRWSBNPUKEWXFCUXWITXLSWBLJONRXLSOXEWMNZJGJFONNLGTUYNLAJK");
    tmp_msg_0.description.assign("UZDRJKHHGBOQKSZBNLMZPEDFUEXPCECVJRQPFRGFTVXUBRMNMXBAFKQEKVHOCDQOZJTGCZZGJLVGAKJLSPWDFSCYNZIRDIWRIQDELATYVTKDEQXTRAVOLVNMWIIGVMLUFJFCMSNHXLGMNPHHIVWRYCEYTLOYGTWOUPOSZUAYHUEKQGSJCSPONXXWZOAHIATOUWNFP");
    tmp_msg_0.vnamespace.assign("MYORTPFSVIHDTOERHLEBFUIGNLLDEZUHAVPYPPLZFNEQIEIPQYPEZFYJBQTZOGUJCALRBAWUKJQJBVRUNSOEIHJBDMUEDRYZAQIZTSHWNIKSNBKURWWORGLWHLCOBRUYJPBSUNDLXSEXFNJMQDKXJFX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZIDRSONGOLZAIRUGEYGNOUEKHQCATHIFUQOKYWQFBYYQVISSUGCZNJQNPSNWTMHKONEPXAEBJEUAHLYEAFHVDLRGHXTUPYMIVPRHKBIBCJZZCJSYFAQHKGDNNKSWGRBBUCVOCFLMDPDLFMFQQMZWSEJQEINXFJOJXQJUSYIGFAWWTRBD");
    tmp_tmp_msg_0_0.value.assign("BSPWAVAHSBTPOBNEWQTGOFZMYAXYJNLVUXNURCJBQNACLGICEZSOXJFRZXGYRPLCKKSFTHBTUIDQOMUDEWCHIAFDKXIWHYEEQXCPFDSBVSWUMJTQMLJJONQ");
    tmp_tmp_msg_0_0.type = 148U;
    tmp_tmp_msg_0_0.access = 114U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("LQVVDGBPBOKJFABBJZWBIWBPGXPFGKUFSOSHDOVXAGIKDNIWSWNMARNUYHYGJQYEJKGDZHLIEMFLWUCNZIOHXNPOXKABSQPNJHEOTCUURVGMNQAJHQOMLQXOAMARPYAUKTKSYSGRQHOCLVFTCLP");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("XTAPNPCKRVPLWZRWFTXTESZNHVWSNEBJDFAYDFXTQHAQALCBGGCIYNJBZZQUWPOXMDKIUUPFSHPBCGMUVDQHEZIJNFJSIXJSPXNHXDLEGNYJUQIWUUXRZHTOKCMW");
    tmp_tmp_msg_0_1.dest_man.assign("ULVGFBXGZIYWIFBGMSNCAUPPRDMAIZTETKQJDHJQXIRKVIWRNPARKVRDGKUUOAKLVFJYQSUMVGZEUYTHDNWYQGWVICUWOFDTJTXFBMXHCTFAOTNEYMPCOFNSHLOQXVSZRREGJNRJMOOPKVQKJMSPLMZLEQUDATRXDWZFHIWAXDCPBBHPYBLXZCMNHSEOJLMVNCHSUYAWYLQUKGWEIITEJCJHSZBZNAAEQFIKBPYBSVDFRXH");
    tmp_tmp_msg_0_1.conditions.assign("YEXACHOPWTBMRIVEDFOGETOXIQUSONCYMT");
    IMC::UamTxFrame tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.seq = 52114U;
    tmp_tmp_tmp_msg_0_1_0.sys_dst.assign("VUUDVTJNLOUAIYYURKBNEJZQXQDRHVFZWNDLNAASXNQZIWGJYQMRKDBEFHIDYTZBFEUHPERXLSHEBRQLWPBNQIVJYIXHGJCJVTJNQZAXZPIAXUOTZLEBLSOVKGSGSCDDPTTKJFTOICUOOTGCYMBCJPDFLAXABCPMYZRV");
    tmp_tmp_tmp_msg_0_1_0.flags = 219U;
    const char tmp_tmp_tmp_tmp_msg_0_1_0_0[] = {28, 119, 58, -53, -127, 48, 80, 105, -6, -10, 97, 65, 54, -100, -4, 49, -123, 61, 115, -6, 0, 114, 53, -38, -73, -71, -123, 59, -48, -11, 42, -45, -29, -27, 117, -77, 123, -73, 121, 121, 52, -84, 108, 9, -22, 12, 105, 58, -4, -94, 57, 54, 22, 103, -54, 101, 120, 49, 50, -59, 63, -38, 123, 117, 71, -118, 122, -87, 60, 93, 97, 3, 64, 122, 62, 104, -122, -110, 0, -48, -66, -123, 84, 67, -62, 2, -64, -2, 52, 88, -4, 118, -46, -59, -24, -91, -106, -47, 105, 44, -79, -79, -79, 9, -65, -93, 7, 101, -5, 29, -76, 93, -109, -105, -110, 18, -57, 45, -49, 115, 3, -77, -112, -111, -25};
    tmp_tmp_tmp_msg_0_1_0.data.assign(tmp_tmp_tmp_tmp_msg_0_1_0_0, tmp_tmp_tmp_tmp_msg_0_1_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_0_0));
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::PlanVariable tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("GAXFVYEJUZWTUQUPHZSBWVXOIWMGAHNHDUISJSDOWOKNRBGCTQWINJRVCYGYVTVFVEAXMFYJLSKRHBNPRRVXMYLLAMJDAIKIXHZLGMQDVGNVGPSFORPLBQXCJVMSOMXFSCFCLIPCYCUBDNNJKAJPTHSUKFFSUAPOZXHBFEXPIHRBTRHLENZQZRLPTOCTYCNOGYBKJGEZBCSWLKDEDJOKIWYRQEDITQOZADMHLIZEADFXWNTQWUPGUUZ");
    tmp_tmp_msg_0_2.value.assign("KLSRISPNPDWLYRMBCDWZRESFDRLHIUWEOJJSASQQJGTGHJUCDYEYWSWWUTBNWKXXYTT");
    tmp_tmp_msg_0_2.type = 18U;
    tmp_tmp_msg_0_2.access = 216U;
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
    msg.setTimeStamp(0.02123698721416123);
    msg.setSource(28144U);
    msg.setSourceEntity(84U);
    msg.setDestination(32085U);
    msg.setDestinationEntity(87U);
    msg.command = 238U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZCNDJAXLFKDNOVOHPCQQQGABWKAOEGGPRQEUPJEPWCPCVUEPDYIRVRZIDTCFJBLUNJWHYNPOATUZYVLMYWOHMDPYOHOIYRYJCTCLULIEEHCNSVJAMDXUXKIVZSFHGAUSNJANPKQVLCZMXSWKIBXZMUWSYTSCXFMTBXERURILOVXIHHMKJBYABQLMEBHDRASXJGNWGDXGWVQZFGSEQKBRKRJLITFPUWQHFSVBTGQEIR");
    tmp_msg_0.description.assign("CMQLHVWKLZJOXLHMMPGOZIXSYJZSMYCFDGRBIULZMDFRQADFDDNEIQLYKHEPUHOVKHXEFPAXXVWNRZBYQZTVABCXHYVEWYWFQEELVJTPMANVWKKXWNWLYVRKJEGQBJOAOPXRTFORBSNIXTONULGYPFJRTSTLAIXCVFLCQWPSHKUGSMJSDFRWICRCSHAIUJTZGC");
    tmp_msg_0.vnamespace.assign("XQJNFAZZQFWZSHGSRZYSRSDKDUPMBVTUYOCNQJGBCCXKMFMWNXPFQOOCNMLYRAXHTKZTIEDVFQBUAEBRVXFACRSGMAGJPYJPTDSFLLLLBWDXOHBTTNOWJITCICHRYWKVVYKNGEZVBANMHEESDUEEBRKMZNTIL");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MRLTXIPJBIEDCKAVDOTKNXYCXBPKICPBDEDUSNQMUOALJJMFTVRJDXWAHTDUAWWZHJIHIQNOXXYCHIAGLNDVBVWZYLFNPYQRZGKJJAIJSNKWOLCFQKESWZZFCZSURXZTSDMXNOEICME");
    tmp_tmp_msg_0_0.value.assign("AWNZWZLLSFPACWDOKDSFNDCJQVRHATFKHMHETMEOUTQHUXTBZOSIFDIAWTHLWFATEIRPMDEXJZGNUANJQWUVQYDNBABRZYBHFDYYWRTIREPKCPHRRRVCPVZRQVFQKVVPXNMVYXMJQGTMNGFFICGXSAOGDYLIYKABZTCGCNPJIYGOBJNOMXBRPWUAIXMHUMKUZGVGHJXEBJCILSWHUWDKQBGLCEJUYFEDMJVZOLOQENE");
    tmp_tmp_msg_0_0.type = 217U;
    tmp_tmp_msg_0_0.access = 44U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("XVCMWACUBXBSDCAGONDFUZYFQTNOWPHSJRUMXPHMIJSBDNBDMZSZKDZKXSZJOMUAPHAYZFTQYDENSVUNMRXLWCGXLBQMZHBOCGFSHJITVOYPQLKTZLPUTEOGCOGEWIKFOFVIXHXKGTUUYMLTWTJTBYGEKBYOSPEHFKQBLNLOPWNJJNGLE");
    IMC::EulerAnglesDelta tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.5344577781083271;
    tmp_tmp_msg_0_1.x = 0.19922783260814692;
    tmp_tmp_msg_0_1.y = 0.623132234990046;
    tmp_tmp_msg_0_1.z = 0.441440945558085;
    tmp_tmp_msg_0_1.timestep = 0.26016200843666626;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.8214359777912097);
    msg.setSource(25105U);
    msg.setSourceEntity(111U);
    msg.setDestination(21231U);
    msg.setDestinationEntity(72U);
    msg.command = 233U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OKOZJYBDQAFCQKNHYJPIUVOGVHBFMIXRAGAFLTRJAHXGTODXZMEBKTCWPPTKAOZEKUORLMFFRMHKI");
    tmp_msg_0.description.assign("ZLYMVPCRDZPLDAYXIATEIWDCNBAASYCIZWDZZEXREWBYJMHLTDXLOAKSEWDSEQFHHOBSGCIUHDIJVEVVTHYLYICIUUQNULGOMF");
    tmp_msg_0.vnamespace.assign("AMSTYJQVTDXCNCTXTINUUBOADODSPLYWKZKUIQSVYZGYOLOMMZXEGUHTJBQNLIJHISVGUBZETTKBJHXBKPWWTNUVDRHIARRCWQSDQHDOYMKFCKJIWENRQWY");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XYMQKOGUUMJCXDSPNRJBBQIICFLMHLJDSQISRQUIXOBPFOEASIVAHUWJKROPDTSWARQET");
    tmp_tmp_msg_0_0.value.assign("EXRMFODJSYKPDVORUZIGOPBXBMMSFUODGURYBOLHJOTSVGZEXEHSJTNTMWAXPUCEGADCLSQIRSPUPCFNYQIHZAJQLCCOLWWVFWKNYWSVJFHKIAKZDKGHFKFOVUBXZWVEWNRVQQRZSIQETNMDUSQGUAGGWCRBNMBYAWYSCRYDPPMXAJZBLJVBBEYNYJIFKFQCNZH");
    tmp_tmp_msg_0_0.type = 58U;
    tmp_tmp_msg_0_0.access = 242U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("THSLIKUUZWEMXAUWXFUZYJIYQFWVMFROSDZRMNLKNLHPAUSRHKQDFKWVKGTKOOLGEJZOZRINHSUXXKZDNQPYKJYQFLVDSRRZJQGAEUPWSZGEQNNXJAYJZCSWWPVBCMWRRDNOPIEDQCSTBALXEXVBFIQDVUBCCLYOOYWESJLQUCBHCFVWHGTTMXPBMJYXTMDFPGGZIANPPFY");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("BQLRUSHKGDEIHUMPNFTDDUTLS");
    IMC::PopUp tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 28079U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.5243421665417369;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.5302617923255943;
    tmp_tmp_tmp_msg_0_1_0.z = 0.15340805204521357;
    tmp_tmp_tmp_msg_0_1_0.z_units = 157U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.5399512852385392;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 20U;
    tmp_tmp_tmp_msg_0_1_0.duration = 15705U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.9442063862931189;
    tmp_tmp_tmp_msg_0_1_0.flags = 136U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("GGLKEXIUWFOAWDLCSSHMQFUXRVINPQPSPEBQSXQVFGJLJKDSDPNLCKXLYKPYYOIGFRLMJNJOBAMZZORSKLVCPDKXATRHXZAEPTYRYALBPNYDKKZYOTWAMSFGNESQQPBOWRJJENCQHUEHVMZQWWQJFCMDYTOMMZALZPZV");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::LedBrightness tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.name.assign("UTNSZZBBBTFWNGSJWKUONMCVNDKAMUQVPIBABGAWEWSDZKEJDPWREGMOCFIZSMXVBFCEXXLNUIYYLABAQQNEXOCPVCTFVAHAEYZMERSZTLGGIHYJWHJPELWLRSKPVFVBXEVYIOSWYZTRKWGIDQCOQAHXPKWJUJHPLQDRRROXJLCCOTFXYFGDRKXMQNTNKLITQNYMHFUYLGHKJFHRAVZCDIDMUDLUHAZ");
    tmp_tmp_tmp_msg_0_1_1.value = 186U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::CpuUsage tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 100U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::ControlLoops tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.enable = 25U;
    tmp_tmp_msg_0_3.mask = 3143298543U;
    tmp_tmp_msg_0_3.scope_ref = 3170726623U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.3020775654188693);
    msg.setSource(61825U);
    msg.setSourceEntity(201U);
    msg.setDestination(42659U);
    msg.setDestinationEntity(175U);
    msg.state = 118U;
    msg.plan_id.assign("OMRZNBLEEBOSDBCDVEVSWILGIDHYCLDQFWGNZJHRDTGSDHSJYUOJRKIAUTQPKTULZPFJGWRXDGABFMPQSYXAHJBKBOHWQRQGRNFBRYMPTCGTAZLQNYJLKPVHCPXWEEUJCXOXZWEAAFTZIMUOCSIMZESUCPKRDPMWMJJCQXOJOYHNVUVWVNMVYTZXVPVFEXLIUECROZGNTNQULKDBSVNSHNIRHOWQW");
    msg.comm_level = 113U;

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
    msg.setTimeStamp(0.3033095209826371);
    msg.setSource(41762U);
    msg.setSourceEntity(55U);
    msg.setDestination(27016U);
    msg.setDestinationEntity(23U);
    msg.state = 113U;
    msg.plan_id.assign("YQBWEASXDBQTKCRWULSKAPLUJFZWCISPHANDGOFAQMJHQBMXJYQIIKNOMGGHKILJMCCIKQZNYDLCACNLEHWXPKINRVKILLCVDJGDFZXWVFQGBFVIIDRMRUYTTLMBHVTPSSAOJSXGUGKJONTXZWHVFEAZZWBYPPZDNSPXRMENURUEARHVQBAVUXTFTEOBBCVONMWVDKNQYPAJMXFFZODRSEMYUWIYEJCUZTOOKHCTYP");
    msg.comm_level = 179U;

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
    msg.setTimeStamp(0.45924412657219726);
    msg.setSource(47945U);
    msg.setSourceEntity(38U);
    msg.setDestination(52857U);
    msg.setDestinationEntity(178U);
    msg.state = 125U;
    msg.plan_id.assign("HWARQSXYALMFZPBVHOPLBEIWEANOFVAPNEYKSUTXGLKTCMZIMIDJURRHYJIGMYCTQTUDOTRWIEPBODYAJN");
    msg.comm_level = 157U;

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
    msg.setTimeStamp(0.6885128986973497);
    msg.setSource(39167U);
    msg.setSourceEntity(6U);
    msg.setDestination(61002U);
    msg.setDestinationEntity(60U);
    msg.type = 69U;
    msg.op = 138U;
    msg.request_id = 49615U;
    msg.plan_id.assign("XYMOKJYCRRXJRFXCUWBHLZVMOITGUWOVQOYCJTZMHQQJHKWDAFDBZEUEZLKRMZPSUCFEXJLBNVCADEBWSPFFRFQIQRBOASAAXNCFUHQATEVDSBTAABIWEGWYKTZQBGFTGSZXOFDYXYECVHNTBMHZIVXQYMLPSKAOWDLLYRLJWGOPTEN");
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("NGXXKVGKZITNCJBFJWBWIJRIRYUMBYEEBVELSNSTQVAOJZZJXNQWVYQHSRWTFARCPIHTMGQSPEUCLGXENCCFFVYPZJCZOQORWIOOADDNMXEOSPOULMKKVLICCQROBCDCAUTQDYYXRUAET");
    tmp_msg_0.dist = 0.8428864982362252;
    tmp_msg_0.err = 0.6849371957647451;
    tmp_msg_0.ctrl_imp = 0.9851081079215857;
    tmp_msg_0.rel_dir_x = 0.20067755623979489;
    tmp_msg_0.rel_dir_y = 0.4639159761907742;
    tmp_msg_0.rel_dir_z = 0.6920443778906747;
    tmp_msg_0.err_x = 0.34644991819234405;
    tmp_msg_0.err_y = 0.08582903686426102;
    tmp_msg_0.err_z = 0.991094949761153;
    tmp_msg_0.rf_err_x = 0.004762271687103858;
    tmp_msg_0.rf_err_y = 0.2569297762791216;
    tmp_msg_0.rf_err_z = 0.7054949578894814;
    tmp_msg_0.rf_err_vx = 0.6610074860082659;
    tmp_msg_0.rf_err_vy = 0.4816255337895887;
    tmp_msg_0.rf_err_vz = 0.6771297511014086;
    tmp_msg_0.ss_x = 0.624057202667027;
    tmp_msg_0.ss_y = 0.32530023091476834;
    tmp_msg_0.ss_z = 0.9876020275405735;
    tmp_msg_0.virt_err_x = 0.3414753284866221;
    tmp_msg_0.virt_err_y = 0.06175858456528571;
    tmp_msg_0.virt_err_z = 0.9731159172055897;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YGPNQOGFOJEKXFGDIUDMCSCWXKDVXITODZQBPZFACWYCWZWSZKICRGBLFWYWMSLDNRINKOTKOFMKXNJVTBGPJSXPRDARAYBSDODIOUFEQJVJFYZUHCSGHESUMHGTNYWFSZCGDXMAZAEAQVLJPOHCJNQTBBFUBMIUKGNQXZMIWGJETNJFXHTLZUXL");

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
    msg.setTimeStamp(0.8464644117989655);
    msg.setSource(26634U);
    msg.setSourceEntity(46U);
    msg.setDestination(28496U);
    msg.setDestinationEntity(180U);
    msg.type = 212U;
    msg.op = 56U;
    msg.request_id = 3251U;
    msg.plan_id.assign("CMTBIODZZKEQJLNOQZLUVHKVCQKXUTPUOTNOWEDNWDWFIJZAFJIGTUIRKUKYYWIOSOVLMZNGPOQCFMXAJHWAOBLRPTCAYXDSTGCVLEVTBXAKEBVNABSLLDHKKEEHPVHWXGNSQMQQVTSCXWHMHOMDSSBWZCDFHCFIEUGMBINLXRQRUJPQPAZLJE");
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("KCERQVZADWZWXWHNTAPVGLWERIHYRVDAMLZNYOJAKOSMTQDNBCUEPPVPUDSXOPBBYVGUUYVLHSQHKJIDDCGIHFTCLYATUGXQTAZKQCNBSYUGOMNOGWNZDVENEWJGOITFVTDZYJDDIEJNJVPIKFEFGGCISRHBVSTKTQLZPOKZXXXMCRRJFCLERYEHUZJOZEBRWCWFUIYKOLFLTKXHNMWQLPWMANURKMJFXQ");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JXXBBZUNOSRCKFFMJVHTQGNOZZRLTWSTAMAPQDKGFYGNQXQRUGFAKLWLECUJIMDUPBBXKCYYJSACRCYZHHNEXCXWIUUERGXZWMQWRLKNYVMFCMEIFDSVPWJEKSMLFNSTAUAVIKVMBNHOQJBXJZDLTZPYUDHWKEKGNUZIFGVRBIVONRXLPPYIPHARHUSDOMFWBHZZEQWGPEAPPIBYEXRQL");
    tmp_tmp_msg_0_0.value.assign("RGTZXQFDDFODEMZUNAIHHTFDWDRKKUANYPHPUQWWLRFOUJKIIHCSPOIWJUNBGVSOKOKMGAVPGGVOXSRTSXEA");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BBROAZPBTEHHPQWOIMKOEQJVYNETJURRRFQDDZPILWJLKAHSXBTEQDNAMAFFOVKMFLLIMWVOJXXNHAVPDCELFKNE");

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
    msg.setTimeStamp(0.9174133924474721);
    msg.setSource(64973U);
    msg.setSourceEntity(237U);
    msg.setDestination(8465U);
    msg.setDestinationEntity(226U);
    msg.type = 212U;
    msg.op = 200U;
    msg.request_id = 32321U;
    msg.plan_id.assign("TPCOBHOSUNDMVEPZW");
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 217U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BZYVRWPQIQSVJYBOPCPAANSXIFFKKGHCGDHGNUHIARLDLCIQAEBJTZIIYCGLJTAZATSQDYXGXTZFJWGTOHJABNCXSCVNTEUGRRKFOIBONLHWWEMXDPPQATKXDMUCDXJEYPFJTYRVNRBQBSVGSMWBQKNYPOEQHOIPFUZAGWGFQMEWLKKHCVRLCNMSOVWRALXYYFYDK");

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
    msg.setTimeStamp(0.9905075513937373);
    msg.setSource(12222U);
    msg.setSourceEntity(60U);
    msg.setDestination(1496U);
    msg.setDestinationEntity(152U);
    msg.plan_count = 8589U;
    msg.plan_size = 2184680353U;
    msg.change_time = 0.35975281552487415;
    msg.change_sid = 59849U;
    msg.change_sname.assign("RYREQLETEGVFGBANGKDPBZCCMAYKXHPKJQICEVJCEXOKJMCMKRQNOHKWXPMIBBXHDZPAAHSVDHAXTLMJEHFJNIXDOWBOXRCUYOOMSRSQFUIRZKYKAZXGJNRITCTJUCTWWLLFWWPWDTFUJNHVOXHUYVUZPTRBCLIEPOWOUSDJNWBHSUVAGBYFGKAHESFTFTGIBGLXMWSNMUEQDEQZBFLNKITMOQZLLIASASZVNVQPQCSDFVRGNYPZYVIRGDJY");
    const char tmp_msg_0[] = {93, -108, 115, 23, 73, 36, -40, 69, 55, 14, 105, 29, -117, -113, 70, -115, -95, 7, -28, -3, 99, 21, 18, -84, -73, 96, 93, -51, 57, -76, 47, -121, 43, 48, -25, -56, 45, -82, 2, -116, -53, 48, 56, -71, 49, -7, 17, -15, -56, 33, -43, 104, -21, -33, -92, 50, 109, -85, -18, 46, -117, 51, 28, -92, 3, -42, 66, -71, 6, 89, 88, -50, 72, -73, 76, -112, -113, -65, -106, 86, -126, -27, -21, -107, -5, -41, -71, 116, 94, -10, 109, -77, -100, -3, 82, -107, 56, -80, 109, 112, -3, -20, 77, 50, 63, -98, 73, 1, 30, 19, 70, 19, -91, -84, 0, -56, 91, -12, 35, -26, 46, 112, 114, -121, 39, -9, 89, -92, 110, 21, -26, 68, 23, -17, 30, 70, 104, -28, -79, 64, 94, 64, -31, -57, -54, 118, 94, 90, 114, -24, 56, 43, -87, -59, 93, 12, -64, 98, 98, 10, 103, -87, -88, -85, 98, -115, 16, -100, -108, 33, 48, -11, -78, 52, 25, -45};
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
    msg.setTimeStamp(0.2201436440781055);
    msg.setSource(5126U);
    msg.setSourceEntity(230U);
    msg.setDestination(59879U);
    msg.setDestinationEntity(6U);
    msg.plan_count = 48423U;
    msg.plan_size = 252857890U;
    msg.change_time = 0.8457897527793586;
    msg.change_sid = 10278U;
    msg.change_sname.assign("QZYLLGTGYNFSVTCUTJRTZLIZWTFIQNWRITHRENNWULKPACHIFGAGJCIKFFYAMSXCHQVPSWJDTDEAAGXHUQDOFXHOWBSYCANVIVPQECQAJUCDMRPZJOVE");
    const char tmp_msg_0[] = {83, -26, -56, -126, 71, -23, 75, -115, -45, -112, 82, 125, -91, 43, -116, -125, 111, 0, 40, -14, -1, -70, -117, 25, 64, -28, -1, -71, -84, 123, 33, 56, 119, -58, 80, -105, 112, -42, -112, -12, -46, 24, -104, -76, -2, -40, -47, -125, -1, -56, -91, 26, 61, -35, -91, 121, 73, 5, 3, -40, 67, 18, 87, 107, -2, 0, -12, -42, -32, 68, 74, -1, 105, 1, 41, -7, -73, 24, 108, 86, 93, -8, -114, 40, 70, 91, 30, 1, 5, -68, 32, 47, 16, 70, -80, 32, 120, -9, -23, 122, -35, 59, 121, 121, 80, 74, -78, 97, -128, -71, 75, -33, -62, -69, 35, -93, -8, 87, 20, -117};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.37599786150670067);
    msg.setSource(58481U);
    msg.setSourceEntity(35U);
    msg.setDestination(65084U);
    msg.setDestinationEntity(67U);
    msg.plan_count = 38630U;
    msg.plan_size = 2501504607U;
    msg.change_time = 0.17755304602163702;
    msg.change_sid = 38170U;
    msg.change_sname.assign("UTMEFRAOHQWDHPGPKS");
    const char tmp_msg_0[] = {62, -44, 86, -62, 70, -113, 87, 49, 40, -73, -33, -114, -119, 40, 62, 55, -127, 104, -105, -21, 111, -59, -49, 102, 74, 7, 73, 59, 59, -99, -45, -128, -57, 50, -117, 34, -41, 1, -45, 107, 60, 76, -14, -118, -94, 125, -76, 117, 55, -85, -29, -15, 86, 5, 81, -102, 92, 7, 113, -101, -51, -101, -96, 30, -80, 105, 14, 61, -81, -75, 65, -64, -67, 119, -123, 62, 28, 50, 68, -99, -11, -102, -33, -39, 95, 18, -30, -38, 47, 104, 99, -126, -63, -69, 62, 98, 57, -98, 41, 104, -65, 68, 66, -89, -18, -93, 64, 31, 66, -45, -31, 39, 13, -97, 34, 66, 80, -46, -17, 19, -120, -20, -50, -120, 35, 30, 8, 75, -66, 57, 39, -23, -54, -118, 7, -124, -64, 123, 109, -13, -41, 65, -58, -23, 116, 53, -116, -67, 101, 10, 12, 61, 27, -81, 93, 115, 95, 126, 117, 58, -126, -12, 82, -10, -124, 7, -25, -101, -106, 109, -32, -106, -109, -76, -70, -80, -31, -105, -21, -71, 105, 9, -111, 5, 18, 119, -40, 46, 53, 44, 84, 10, -45, -112, -103, -61, 104, -103, -29, 56, 61, -107, 89, -90, 18, 93, -55, 5, -117, -128, -120, 58, -45, 10, -3, 67, 17, 30, 15, 28, -92, -80, 99, 81, -84, -69, -109, -16, -112, 103, -76, 54, -52, 74, -80, -54, 28, -23, -109, -84, 38};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PABKPWQXAASVIVWHUIWCRKBBDJFSJPCNJNGCMTKQZYTNVTHXNFTCYUGJPBTEXNMUQKIHQPCWRASBLMNJLLYKSZERWCLCHOWLWFBDWFBEWRVULYHUMQVQOEPZONZTXIXERFVLRAPSGNNKFHCQIOKZAXJROZYGSMGI");
    tmp_msg_1.plan_size = 32895U;
    tmp_msg_1.change_time = 0.4675800168648856;
    tmp_msg_1.change_sid = 48019U;
    tmp_msg_1.change_sname.assign("LHHKAHPUSFDMCJWGCWZUIOVGMDJGFYAFNKXDKSSMALFBWEZSEGDZYICILTLRBAHUREUCFKPNUUHZMHAPHGWOTKTNFBJAYOEXVCNQJYPWQGMCVOYVSQJWAVKIRCFGDIMLODYVAFRDJSLBKWGENUIZQPOKOXKFMGHKZZYJBTYNIXQXTPEAQSBLIPNLMUTWCXDNHXRYMJIQBHUSJPWLNMREBXQIYCEEQVGTZRFT");
    const char tmp_tmp_msg_1_0[] = {-98, -57, 49, 87, 117, 112, 106, -44, -91, -120, 1, 26, 100, 122, -126, 28, -36, -4, -5, -39, -4, -73, -66, 101, -23, -125, 83, 14, -20, -3, 53, 56, 60, 67, -90, -39, -68, -89, -80, 5, 109, 7, 16, 32, 75, -31, 89, -14, 96, -52, 43, 89, 94, 53, 86, -128, -93, 79, 0, -69, 92, -4, -6, 6, -81, 102, -127, -15, 93, -42, -90, -43, 91, -26, -117, -57, 78, 100, 50, -66, -108, -23, -55, 22, 28, -68, -56, -27, -74, -18, 81, 30, -44, 121, -13, -1, -107, 81, 113, 79, 101, 85, -42, -128, -114, -109, -39, -87, -78, -44, -18, 59, -34, -42, 69, -43, -7, -28, -11, 77, 43, -94, 104, -112, -75, 66, 83, 10, -55, -79, 8, 23, 8, -25, -26, -85, -83, 12, -61, -69, 57, 58, -115, -96, -41, 87, 74, -64, -22, -42, 3, -24, -78, 42, -63, -83, 44, -97, -97, -29, -23, 51, -109, 73, 88, 117, 67, -108, 84, 122, 25, -40, -27, -121, -52, -13, -63, 89, -32, -29, -19, -84, 72, 32, 30, -114, 96, 98, -57, -116, 40, -117, -125, -127, -50, 123, 70, 63, -35, -35, -28, 32, -98, -98, 5, 107, 27, 116, 5, -91, -14, -34, -93, -94, 0, 1, 96, -10, 71, -17, -82, 3, -73, -22, 126, -90, 8, 63, 54, -125};
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
    msg.setTimeStamp(0.6779927028012647);
    msg.setSource(48472U);
    msg.setSourceEntity(172U);
    msg.setDestination(9251U);
    msg.setDestinationEntity(237U);
    msg.plan_id.assign("BIGXIDFPBGSQWEYLKKVEBTHVDGBKOFRSPLHKDXFEZPQJJFZCXTOJLBZSLMDCANRDNCVWOYGTEPVDBJLDASSCEEGJLFRRJASTQSHVILGCQUMOBQVCUXWCRZGUAIVSTOXOWMMVDJMN");
    msg.plan_size = 63703U;
    msg.change_time = 0.4658843887790014;
    msg.change_sid = 4154U;
    msg.change_sname.assign("IEUEYEDLMABNPILDXYEDKEVKSWDFXZAFUQLTBSBUZHQABVIUPIOTNNWLFGYODMHFNGLEHKYYCCPVZITUMVBRSWOHAJKGEDMSXQCOYTKXQSHQIHOVTIKERFLWGWLGKJYMASHFRVPNYZEUJC");
    const char tmp_msg_0[] = {88, -24, 45, 5, -49, 108, -75, 69, -16, 61, 80, -14, -46, 80, -33, 67, -111, -17, -90, -7, 115, -54, -38, -105, 80, 114, 122, 12, 17, -104, 17, 47, -47, 68, 86, -63, 17, 43, 42, -26, 33, -93, -36, 82, 90, 112, 88, -106, -6, 121, -14, 81, 16, 100, -94, 76, 115, 45, -23, 114, -75, -94, -100, 62, 125, -103, -82, 123, 29, 1, 35, 101, -14, 68, 113, -94, 125, -89, 114, 6, 87};
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
    msg.setTimeStamp(0.36447941983050025);
    msg.setSource(16878U);
    msg.setSourceEntity(200U);
    msg.setDestination(20756U);
    msg.setDestinationEntity(121U);
    msg.plan_id.assign("OXSLTBCSYAAAQCUQJKNMWFHWCBKQBWMXXRW");
    msg.plan_size = 57412U;
    msg.change_time = 0.5797302778796485;
    msg.change_sid = 27618U;
    msg.change_sname.assign("LGTSNAZXDUOQWQQIWICVTFADYRPKDMLSGSAQCXHAWJAHVGXXGSKDMUFJDHHLWQKEWLIVGMVQLRMZXBVHLSVSRMPEJYHBAFATRIRNUTXVINCBANINGOYRYQBZCKXVBKPOOWFJKWRMNXEUUXCJETUTSWLFAEFDZBOGMIGFMCVKPZOGTNYPETPSFJNZQLRZPPQEJZLMYWCEYKR");
    const char tmp_msg_0[] = {47, -32, 11, 99, -98, 51, -104, 97, 40, -4, -2, -93, -14, 47, -38, -52, 77, -52, -13, 125, -54, -121, 58, -89, -20, 93, -96, 10, -46, 46, -6, -83, 104, -12, -16, 85, -91, 41, 18, 4, -76, -33, -32, 84, -31, -116, -1, -114, -105, -104, -101, -99, -3, -110, -101, -126, 118, -88, 28, -114, 107, 91, 111, -105, -116, 110, -50, -36, 11, 107, -99, 86, 55, 1, 125, 97, -8, -123, 66, 49, 15, -48, -85, 39, 43, 76, -45, 7, 60, 123, -115, -8, 83, -86, -127, -51, 59, -61, -108, -119, 64, -98, -92, 110, 124, -38, 13, 61, -13, 17, -116, 87, 89, -51, 115, 61, -35, 49, -88, 111, 37, 113, 119, 111, 29, -80, 25, 39, -124, -11, 63, -81, -4, -11, 125, 60, 100, -54, -20, -106, 49, 59, 43, 0, 106, -30, -86, 61, 21, 114, 69, 66, -107, 95, -9, 108, 107, 123};
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
    msg.setTimeStamp(0.8505516335121557);
    msg.setSource(21308U);
    msg.setSourceEntity(224U);
    msg.setDestination(20191U);
    msg.setDestinationEntity(164U);
    msg.plan_id.assign("BLMXCQJVATOIVLDTTPVCPRHRZGL");
    msg.plan_size = 28701U;
    msg.change_time = 0.8497415938520912;
    msg.change_sid = 3464U;
    msg.change_sname.assign("EEBGZUHMXCUIPPNMBE");
    const char tmp_msg_0[] = {22, -115, -81, 48, 40, 21, -100, -3, -40, -115, 82, 102, -103, -42, -104, 115, -12, -31, -69, 19, 116, -3, 75, 36, 76, 60, 19, 124, 115, 70, -40, -69, -42, -102, 68, 123, 90, 97, 60, -55, 123, -77, -27, 110, -79, 125, 97, -70, -81, -43, 109, 97, 39, -123, 39, -114, 27, -94, -120, -101, -112, 64, 73, 15, 72, 67, -30, -90, 98, -95, -103, -62, -38, -99, -111, 101, -66, 55, -23, 21, 126, 73, 19, -63, 4, -94, -99, 118, 103, 50, -33, 11, -89, -97, -85, -11, 30, -66, 29, -39, 75, -81, -123, 20, 1, 50, -84, -91, -13, -16, -66, -18, -113, 25, 66, 95, 102, 5, -104, 38, 41, -18, -122, 34, 101, -113, -113, 51, 33, -41, -33, -98};
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
    msg.setTimeStamp(0.19695364084733868);
    msg.setSource(58101U);
    msg.setSourceEntity(69U);
    msg.setDestination(37277U);
    msg.setDestinationEntity(3U);
    msg.type = 233U;
    msg.op = 151U;
    msg.request_id = 28787U;
    msg.plan_id.assign("VGUSCFCXXROVZXXZMUCAUZEMILRIEGSDGDRWIKNNURNJDZQW");
    msg.flags = 30303U;
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 2658363519U;
    tmp_msg_0.start_lat = 0.7964180886877626;
    tmp_msg_0.start_lon = 0.7729504367214773;
    tmp_msg_0.start_z = 0.132280845665524;
    tmp_msg_0.start_z_units = 61U;
    tmp_msg_0.end_lat = 0.49539812683380435;
    tmp_msg_0.end_lon = 0.30882205031061616;
    tmp_msg_0.end_z = 0.598852986981048;
    tmp_msg_0.end_z_units = 149U;
    tmp_msg_0.lradius = 0.9404364898385194;
    tmp_msg_0.flags = 14U;
    tmp_msg_0.x = 0.37719672256394887;
    tmp_msg_0.y = 0.09488086974350807;
    tmp_msg_0.z = 0.3616893838174984;
    tmp_msg_0.vx = 0.7567672440057368;
    tmp_msg_0.vy = 0.18681620077974737;
    tmp_msg_0.vz = 0.16732084951801318;
    tmp_msg_0.course_error = 0.37259723676876333;
    tmp_msg_0.eta = 12126U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LNZGLUCOQLQBCMAFBCUKTZERAH");

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
    msg.setTimeStamp(0.569024143538936);
    msg.setSource(45653U);
    msg.setSourceEntity(198U);
    msg.setDestination(15112U);
    msg.setDestinationEntity(132U);
    msg.type = 35U;
    msg.op = 245U;
    msg.request_id = 46531U;
    msg.plan_id.assign("HATLULXIOVDWURFGCWHDSTGPQCEZJXUMMLVOTRMPNLDYZGXJDWKNQBJNSIHYNMWYPUGJYBELBRFXKICDRAEEFTKFBIJTEHFKDDBMYFPZAOBWSHFRXPMKTCRCRRSQBZNGTGGQ");
    msg.flags = 53852U;
    IMC::QueryEntityActivationState tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EDRTGKPIXDHKVDJWEDENWLMIXZAVSURWMXTIQCMOHOXOTXBDNGFWDUBGPWQFJGQNPCRTFJLMRAUKYZRVUMRRFTBISEKODOTXLVJYHZUUEFCNZGWNZKHCMCFAQUOIVYQRCGYYPBCXBUVEMSXPTDELYQQRJAMSICHOYCSKFHJVJVIWHVFLSBYZHNCOEHJPKILFWDDWAONGSZ");

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
    msg.setTimeStamp(0.13402591386942142);
    msg.setSource(36096U);
    msg.setSourceEntity(115U);
    msg.setDestination(23276U);
    msg.setDestinationEntity(102U);
    msg.type = 63U;
    msg.op = 160U;
    msg.request_id = 3644U;
    msg.plan_id.assign("QORBREYSQPDIPTGCEAAZRAXJWHRJKDTSXXWBFJDZXVCNTXFDOHVGLDA");
    msg.flags = 44739U;
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("HRNYMDJEGJQQSBXOWWUVTEWEKTKOBTXJYEDPMGJHHPSUHONCVEKFLJLDCUOIHTQSOZBOQYTLOLQARQUMZEIWCYKBCNTPAGZDRJEAZHVPTQWFULJCKXDPGXYDYNSGHVIFBZHOTEAAWIGDTYBMOJPAGX");
    tmp_msg_0.message_id = 61181U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KFLQUONRGEOETEURMYCLWZDOSJWANBYSYVFSSFTOEDGQBVYVJJEZGINXTGOLTPAURVHVZGEUSHXICYUTLGXDFPXLXQOETWKX");

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
    msg.setTimeStamp(0.9220528416505556);
    msg.setSource(14453U);
    msg.setSourceEntity(160U);
    msg.setDestination(15597U);
    msg.setDestinationEntity(157U);
    msg.state = 75U;
    msg.plan_id.assign("CXHXEYZTKELDPNFBZLKBSZOVXAGWSSRRCXBWSFFFOIOPXUMFAEMGDUQDIMCRKZBMIUPQQQHEUCXADCFVTUYYYFXLJQSIQPJBBGVNVAXYAWSKWHRNRTHBHSAJEMVBSJAQHJHEWUMPNDYYZKUIZHIVNKWTWRYOTKIDDSMWGOCKKH");
    msg.plan_eta = 1046517291;
    msg.plan_progress = 0.6844885210353443;
    msg.man_id.assign("TYGYEAYVUJAHVVNFUOBWNETDSHEXWQBXGZCLJKUCISQCUYCXWLAONDEMOVRZODSHDAIVYFADAPUMANQAEJGUJIADFYIKW");
    msg.man_type = 14526U;
    msg.man_eta = -1844814698;
    msg.last_outcome = 58U;

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
    msg.setTimeStamp(0.5988242609985119);
    msg.setSource(16785U);
    msg.setSourceEntity(147U);
    msg.setDestination(52163U);
    msg.setDestinationEntity(125U);
    msg.state = 130U;
    msg.plan_id.assign("JMZPPDGSCGIEXQZIEWKTESSMJI");
    msg.plan_eta = -1365320298;
    msg.plan_progress = 0.864695827325877;
    msg.man_id.assign("OQNXZBWEHHDGFQFBIBZIKMNSKTYLCCGQZJDUFQMARJCGCOHAQFYBBUOHRYHLOYJJXTVKELNOLCLZIKMUWZKUSTMAIGSDSDEPHHNGVDKYWWPVECWGNQJOMSCPMPZMRKWERBIUTPAQCFILNPJVIGHLYWFVIVZSALGPATBABWRQFZJUAWLEJEFSRYHTRTDPDXYNKSGBAFTPBIUPVSCYXAIQMXTXRUYXMFLWUZTC");
    msg.man_type = 56270U;
    msg.man_eta = 874979099;
    msg.last_outcome = 4U;

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
    msg.setTimeStamp(0.9640495141261712);
    msg.setSource(20415U);
    msg.setSourceEntity(172U);
    msg.setDestination(46803U);
    msg.setDestinationEntity(84U);
    msg.state = 57U;
    msg.plan_id.assign("WMKXEVUFKHSMFOZJWXCUWNFQUHFATICPBXYOJABDCXDVRXLGKTDFLLXPKSNDTZJUOAYRGRGWDAPSTZYOSEVCTTJJQTIYUNCQOIZHYDNAMRPGQIGBNXKBJJIEPDZOMYJC");
    msg.plan_eta = 186134700;
    msg.plan_progress = 0.8012779608301975;
    msg.man_id.assign("WNPUNSEYZZHAMRKLNXVVSSGDHTNPNCY");
    msg.man_type = 4334U;
    msg.man_eta = 1305342165;
    msg.last_outcome = 147U;

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
    msg.setTimeStamp(0.5051328060209536);
    msg.setSource(64911U);
    msg.setSourceEntity(50U);
    msg.setDestination(54014U);
    msg.setDestinationEntity(167U);
    msg.name.assign("YMSTCEGEYVVLXIRJMCECNFSNORNOGBIUKXLKAZEXNUUBICVKQYRMHWLJFTGATHPEVYZDLAVLNBGGYKFSTMTBPMIPXHPSLPVTMFOOEHOZUXALPDSRAISRPIMIJRDCMAHQGGHEJTXIPJWUSAQQVXZUMYWDKULDBKWWTHEPJYAFBIQYWMQEHSHDZQQCZXJZKNOBVEGGCDOONKFTZJICNVZVWRFXSKYRUZKQWYHCX");
    msg.value.assign("BRCBFYVUCGUJNOQPVYHJWRATGJMEYCZLSLXFBTDBJMHQOSIZAVLMHNVSDDOQZDIBUBHMVIXXSOLUDOPKKTTMCWHLKMTAZKSJZDIWEOFGPUTHZQPNYEVESXRZNXWACJUXESPMHILXTNWOCDGXFZXSBFKUNCPKMACBHYJYWPVKKITYYEZKRJLMLUNIWHGFRELPYEOW");
    msg.type = 30U;
    msg.access = 8U;

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
    msg.setTimeStamp(0.7258873601011655);
    msg.setSource(36602U);
    msg.setSourceEntity(42U);
    msg.setDestination(29576U);
    msg.setDestinationEntity(73U);
    msg.name.assign("DZAIMJIKAKOLIBYHYYPFVWHXWYFHSMAADMKULQSUTKGI");
    msg.value.assign("QQEWHRUWZSENJVEJDSKLTZTJCPBWXJFIKNQOXXVWBPMLPNCTGARXYOHBFJMRVKLILPSVEVIVAIJKAYGPFGMHALTEWHBHWHS");
    msg.type = 223U;
    msg.access = 69U;

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
    msg.setTimeStamp(0.24027848285048203);
    msg.setSource(53447U);
    msg.setSourceEntity(99U);
    msg.setDestination(58085U);
    msg.setDestinationEntity(175U);
    msg.name.assign("DIGBJEWUYCPSWUOTBIIMBYUCSYGCQUIZVZKDQXIRFOXKRPIJMKZBFSQCMENWZTLWELTISYQLFMAGFKLDEPGHOVFIOOJTSAEDQWZKOVRPKGCGNRARBVZHEBLZINASWONYEFZSPGFTWVKDK");
    msg.value.assign("PHPQQBBRQQOUHZKPWTTJUJLZVIWAGSIFCZLF");
    msg.type = 215U;
    msg.access = 245U;

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
    msg.setTimeStamp(0.3502901235292767);
    msg.setSource(32224U);
    msg.setSourceEntity(79U);
    msg.setDestination(27331U);
    msg.setDestinationEntity(185U);
    msg.cmd = 229U;
    msg.op = 197U;
    msg.plan_id.assign("LWDOERYJQHBBOHECIHTOFXILIYRMSLASBNMGDPZTVJXOZIWVRIJSBGVREWGKOTUCPHLPQBMHUDASFIVJIYACYBVWJPMUKDDFRWQUWVBMURSFLAZAEACKMUDCOSXNPFWQLEFHLJYKKZNGLQNSVHEXNEZDNEATUBPQKBGWTAPFFXTGQIJQNGHUMRTVBK");
    msg.params.assign("OBFQKWHNNGUEJHEMPQVKHAHIMMXAXQIOMWYAEDSAHDECRISUDPKGDHNFLTBDGOEDVDDSJJSLTCGPMIAQNGTNBCLWZMKRUIAOXFPMBZUWYNIJXXCKSUTAKLPVD");

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
    msg.setTimeStamp(0.25789181524246385);
    msg.setSource(35264U);
    msg.setSourceEntity(42U);
    msg.setDestination(60622U);
    msg.setDestinationEntity(75U);
    msg.cmd = 56U;
    msg.op = 165U;
    msg.plan_id.assign("QFTJKSUYZXLSZCYOLAHANZGITALPLQYPRYXTOBLCPZERODWEHUBRSUKBTLHWDNZMGETCRHNJIVIIJUESQKK");
    msg.params.assign("GWRPSUOLHVMNVEPGQWMWDWWGFLVEDCWTBCUSGPINMRAMCWHNBYLIWKRJYGYYFCZANRPZCNGWGYDSOJUEOBHHCJLFADNKRJRTQQMFEPZBRJUTXTLEIZUIUDKKVBDSGXFNMLRCIVGAMDSDAPAVNZG");

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
    msg.setTimeStamp(0.8216905831842702);
    msg.setSource(24881U);
    msg.setSourceEntity(159U);
    msg.setDestination(46491U);
    msg.setDestinationEntity(55U);
    msg.cmd = 204U;
    msg.op = 145U;
    msg.plan_id.assign("VTRGODVKDBZXHXQDKYKVIGBLUIZLAXRPLVMAHZGPMGCVSKLSFYIESZUGLHYWPUCHBLFLXDRYMJOWHYZTOPNWVFJMUGDKQQCCAUIPMZPJWBNEDE");
    msg.params.assign("VLRWRKSRCFBQHFFMJNXVNEAIQBEVDCLQIDCSGZLURMUGZLWLSDZNEAKYPIWECSZXFTCUUZYYGKWWVNHAIZJLFYUCLHGCMWWBDMZJXAXJFIQXURUAKKRFRCAMPSBZBLYISMMETUDJWOSFHDTCGWMJOJQNNALQMYHHCYYBAGNTZTHOJJKQVAVTFSIQHYGQOEZPOIORHDBIYBHPDOOXGPIOSGBD");

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
    msg.setTimeStamp(0.64624696023101);
    msg.setSource(5U);
    msg.setSourceEntity(87U);
    msg.setDestination(10033U);
    msg.setDestinationEntity(114U);
    msg.group_name.assign("WHHCBCPIDOYJJFITRFYAGBOQYJRPFBZSXGXKHRFAAFRNNRB");
    msg.op = 92U;
    msg.lat = 0.015267698789660167;
    msg.lon = 0.4756106751694431;
    msg.height = 0.3372399444321913;
    msg.x = 0.31222962083426675;
    msg.y = 0.8020278261879853;
    msg.z = 0.06272992306392489;
    msg.phi = 0.08449838162902246;
    msg.theta = 0.9436649519769611;
    msg.psi = 0.3408180282450439;
    msg.vx = 0.4514649551084281;
    msg.vy = 0.8706362423702735;
    msg.vz = 0.6363426043925394;
    msg.p = 0.20175194706695843;
    msg.q = 0.35997793386882204;
    msg.r = 0.06664615137995866;
    msg.svx = 0.213306746077644;
    msg.svy = 0.12490388054653134;
    msg.svz = 0.3377968135390961;

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
    msg.setTimeStamp(0.6238942353691918);
    msg.setSource(40291U);
    msg.setSourceEntity(142U);
    msg.setDestination(40639U);
    msg.setDestinationEntity(80U);
    msg.group_name.assign("SWEKBDQMGKHUTFUTHCARGYNBNSAAIEDQIUKRVBZVYXSIWTSAIYCLGEFCLXXPEZVCFSNXBJTZTUNRFMGUNGYVJMJKDLMKOEZUHVIKZVOYDHHDJRWBQNJOJCZP");
    msg.op = 64U;
    msg.lat = 0.4732289129786127;
    msg.lon = 0.9689912560478491;
    msg.height = 0.7992330909854514;
    msg.x = 0.6637708650963425;
    msg.y = 0.20170260516200622;
    msg.z = 0.10005893870989158;
    msg.phi = 0.9454306351411028;
    msg.theta = 0.07852128405742254;
    msg.psi = 0.16310323105228786;
    msg.vx = 0.019485909061183415;
    msg.vy = 0.3286242157297694;
    msg.vz = 0.8344283294931637;
    msg.p = 0.09246251085024682;
    msg.q = 0.07387457519954366;
    msg.r = 0.7931773856569726;
    msg.svx = 0.9773189417209571;
    msg.svy = 0.5758205408853262;
    msg.svz = 0.21554789674233532;

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
    msg.setTimeStamp(0.045112684890687094);
    msg.setSource(5816U);
    msg.setSourceEntity(207U);
    msg.setDestination(56505U);
    msg.setDestinationEntity(211U);
    msg.group_name.assign("QFODJLVYBAGMOUVXWOZBTSPEFUQSDPBNAMKHCHYKJSRESBPXUYLNMDNNQNULCVEKFZFHNJJYGGZVIYYWDARVIRBVEWZPJBERHMWHTWMEMYXHGUWCYLHKPLSYESXNMZJSFJTKQXFOPBTUUATIVMPNGKJBJNNGOHJIZRRIGSOWVRUCOCOCZUIALTQWQRTIDRCPEVIXWLGSPOBAQAMBXVDOZRQKXEFTUZDPHFTFLXAQGKZGYCLASDEIKM");
    msg.op = 165U;
    msg.lat = 0.542868831695628;
    msg.lon = 0.36165412193200897;
    msg.height = 0.9506112732568207;
    msg.x = 0.07138856109093306;
    msg.y = 0.14059591198494437;
    msg.z = 0.14505326437147859;
    msg.phi = 0.791192024375423;
    msg.theta = 0.8874838199245967;
    msg.psi = 0.864743189338403;
    msg.vx = 0.8713355043886322;
    msg.vy = 0.8338587465921821;
    msg.vz = 0.3806599465782903;
    msg.p = 0.09689538994856084;
    msg.q = 0.9682340964955576;
    msg.r = 0.44846093176915924;
    msg.svx = 0.9631643810425451;
    msg.svy = 0.0999656219487366;
    msg.svz = 0.5790394182849693;

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
    msg.setTimeStamp(0.15424100956980746);
    msg.setSource(28647U);
    msg.setSourceEntity(96U);
    msg.setDestination(34511U);
    msg.setDestinationEntity(18U);
    msg.plan_id.assign("ZVMYLTSVXFNSRBBEQMMSKHIDMOUGDRBXUNMBVZRXVMUFFTAWYINAETFECKQTRIGEYEJJWTXACLXQRKOKSPCEGKXGDLIIVZUURPAPBLUYCOLQSGAOYEWTMZALCOISZZPJLLBYOCIDZYWKQSJRYNNROTBDCQZUHKTGJRXDIHSVWNH");
    msg.type = 86U;
    msg.properties = 213U;
    msg.durations.assign("PKRYUATSQTRJJRHMYUHDKOTYLTWMYGWQRXVHELLRSRGDNBHZDPOADWEZCIEMQZJBEXI");
    msg.distances.assign("TVJVKJOENOBKYLXVIMFPRATAHDHCGZDQGWHWTTSGUCNIBBNVYJCFORQXZBKDFDCNHAISMRCTRMKZTHFUZZCMFHEKZULMEUAI");
    msg.actions.assign("VMGMKJCUFLZBZLEJRGENPXQANMICDGJSUDZOLCOCWIYMUTJVMIKFIQFBBUJEBUTHOLWOYYOXRHHCVPTKMBGIOHWXDPEUTSBWLWCGZKMHCEMAKFFNIYKAAYUDGDIRNLVPCSVJDPSHORZARVIQDVVBSANPWWJJDWYFYZQUXYZTISXEPEEKGDWLFLULOSVNBQYTTQQHEBXQRPNNGMXAPOEJAKRUZIXGPXSJZKRYSFRLAHZODQFTVNTCFCTKQWGN");
    msg.fuel.assign("WVCPJOOSIGVTHFGTUQLSEWOAFLRCREHCDXYNIFBAAEQLLBCCVNDSZZFGZBUPJPUJTSLZFCTHBQPWJICPXRXGJZMVGBLMKVZQLBPMLQDEASPLOMJGNZSEFBROWHJZQAODCNRYDYBIUNPTWDGEUPDXNKVNEXSMMOROEAVPITVHHYJYFJUYHXKIR");

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
    msg.setTimeStamp(0.3150910882195458);
    msg.setSource(25189U);
    msg.setSourceEntity(2U);
    msg.setDestination(39660U);
    msg.setDestinationEntity(75U);
    msg.plan_id.assign("AXUYHBFQMZHYMWZABIAZJFSJECJYIWHSQNIDRFDLFOSKFXKYUMXUHPBOBMARKZZJQUYVEVANNDHNTRXFGWWRLTCGOVCJTMKNSAZJDEODXNBBXWIVQRTISNGUEXGHIGQAAPTWOQLIRMTUDOWVTPEGVYNQABCOYZEADLGVSKBHRTUTPMQJCSLFIYNRIBTULLLQF");
    msg.type = 121U;
    msg.properties = 174U;
    msg.durations.assign("DAMKLQBYNMMCLZIALFUPMNAYZGFCXFMYUNKQZSFJFDIWSVSWRAOGEGQ");
    msg.distances.assign("QTUMXBXFEGJCDHOHECCNNDUXSKEWQDOTMXPRYMWVWEKCZNTHBUTSNCUBQGBOIIZYWAYMPIATTRIYKXHIVABFOFNKCGLFETGXPDPYIBALLD");
    msg.actions.assign("SNATKLUWEPFXTIGIHZIIGQHVYSRZUCOHIEDDYGSQCBBHOZZYNBGLZCYAFLJQVPZRWBVBLVMUFNKJMYWQS");
    msg.fuel.assign("ZUGQJPIXKYZACLYGFBHZ");

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
    msg.setTimeStamp(0.14141823815754628);
    msg.setSource(5788U);
    msg.setSourceEntity(218U);
    msg.setDestination(25424U);
    msg.setDestinationEntity(243U);
    msg.plan_id.assign("WLDKHTUOSNRYVPXMEWNYFWLUKCDMANXXCFAQYDJZXPUHHXQDGIXJCOJRMQBCRORBBOMMKYXGLIDKTSFUMLGJNITYLPIZJBPZZNWVRVAWWEUJEIKGWAYYNZWJGVUAEEFXOUROYQPSHQFHPCZSBVACOWHCRGPFGYNELLZMURQEBFGLDIEWVNSBQTAHTNYVSTGNFJJCFUGIHOVQJTZLOZIKQBMAIXVDZBHPEMVSDLISTKKRHESACMCTF");
    msg.type = 134U;
    msg.properties = 89U;
    msg.durations.assign("XSKGVPWKYPJCJENFFDTLHAISNTQDKGYGJMXQHMYHPNOKBVKDNTOHGKXMNPIORL");
    msg.distances.assign("HTASDXUJPSFGIABEJXWQPVHDANBLDKIWKZSGUOJPVRLSZREZUOBHJSMWSMUYXVJQEBOCYHUXXEVZSROFJ");
    msg.actions.assign("JYOFAFRPEPRGLXTGVHEYMJXUWSXVQCLIBKSRDZCUIZVZKFEUGFOVNTCUJOQDPZVBBQLXMIMMNVAIBKGTKDDIA");
    msg.fuel.assign("VUBNYFNDRVMUZHLAPVGYOVZPJFYLWUA");

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
    msg.setTimeStamp(0.9692366888549304);
    msg.setSource(39742U);
    msg.setSourceEntity(188U);
    msg.setDestination(39952U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.644076043441525;
    msg.lon = 0.5382176169973205;
    msg.depth = 0.31906690333869137;
    msg.roll = 0.4188409572123515;
    msg.pitch = 0.47930653416507896;
    msg.yaw = 0.2916733330892256;
    msg.rcp_time = 0.2366175094235492;
    msg.sid.assign("HGIWEYGDGAMJAEEDDFWXPOOUTAQHWKRKYBCNADJJWQDSSOEQKZSRMLDEHOIIUCANWGZNKTEBDCBPJRBKRCFXPLWFSRLLNMGVKLTEXPQXIHZGCMNZIPVCEJOFTGKZTGZMPHJTXUJLUVURXSFHPUHEVYICAYHBSUQQXVSCVCXQFWFIPXCMYVTKWNMLBJPR");
    msg.s_type = 7U;

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
    msg.setTimeStamp(0.3998760398252533);
    msg.setSource(32721U);
    msg.setSourceEntity(207U);
    msg.setDestination(57075U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.2855107961966853;
    msg.lon = 0.15964382355771234;
    msg.depth = 0.5145949247643673;
    msg.roll = 0.6956138307959226;
    msg.pitch = 0.712131703428344;
    msg.yaw = 0.856832931732474;
    msg.rcp_time = 0.9679094091877992;
    msg.sid.assign("JUISRRJILWNNUYXXGRNWVJVKWFYWILYPMJFVKLCGVVAEDMPMQHRIZGWHOZEFVWVLQUPMDCYPFXSXBITEFELZZMREUQTZAIGSQONDBLOCKAYTSRZBDFBYAXTZTKBXCSRLKNVXWCMGMPGNFWCEXICTQJDRSUMPTADDBQVGOXJWZBQGEUONODHKNCRIAPYYJYZHPHDIKTMBHTQEFCGILMWXNEJUJOPVSTRQBUAAKLOOAHZDBFGCJYFHUKELN");
    msg.s_type = 235U;

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
    msg.setTimeStamp(0.7313927696932954);
    msg.setSource(39103U);
    msg.setSourceEntity(220U);
    msg.setDestination(55072U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.8407656574484775;
    msg.lon = 0.34885540947816185;
    msg.depth = 0.9502497807503061;
    msg.roll = 0.6273481371742042;
    msg.pitch = 0.42619098453024173;
    msg.yaw = 0.5214463564133074;
    msg.rcp_time = 0.39261441516225726;
    msg.sid.assign("PLQDVKQFBRVNBDWTQJALWRIOPBUQJFMLPSOMPECISEPZUNNHNWYEORJXVNTVXJPWYXFJAASYSZQWGGGXELV");
    msg.s_type = 196U;

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
    msg.setTimeStamp(0.03263183447864182);
    msg.setSource(41443U);
    msg.setSourceEntity(118U);
    msg.setDestination(18174U);
    msg.setDestinationEntity(2U);
    msg.id.assign("IYOPHWZZMZHLCBGMVETUHCLIIKHTORKVEKGKSGYOAYRNJDTXLPKWWLSQVFJFPGIECCTLATWJHDVRIBYIXHFDDNOMZYHEDJJKYJYVHWSCQFXNQARNENDIMCQEOZMUZFGNSRWFUKDJDBCLMFXSAZSKQLRGBATQTBUPRUKUTMMZCGSYNEPUMVHUXSRNFVQOTQWXSIAXKPAJFPADFUNLBMWDNUPWWOOXYXIJLQSGPQLZTRZ");
    msg.sensor_class.assign("DGQPLQAUJJHXWRSUEXELYNQVOVLRSKZTMVZXHKJMBECDLZGKNSHZIWEJJAIFRDRYECFDFWPLZANLFWAYVGQPFUKUQNOHBGIOTHBONPMPRNZOYXAVCWJQYSJMRTLIBIVKWGDSTCCBMOETYRUMGCYCAXBBYNCPLHIXOX");
    msg.lat = 0.9821887001691485;
    msg.lon = 0.4308149526293842;
    msg.alt = 0.8498911206779443;
    msg.heading = 0.39586245107991114;
    msg.data.assign("YAZXXCRXABMFDOKNLXTGNOAOJTGFYFJQQOUXPHLIERWPSGGGUDHMBVDNDJKGPIAHTLYRWEZZWGQMWXFDIRJWZPBUWKALCNZPPHUSKURBYNILBRXEBUWTIGXOASQVTTFLFCGYKCCOULQJKERBDSZHKDOWFACPTBGDDBKVJFVTSENRE");

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
    msg.setTimeStamp(0.8980236105235132);
    msg.setSource(3770U);
    msg.setSourceEntity(204U);
    msg.setDestination(3063U);
    msg.setDestinationEntity(173U);
    msg.id.assign("PJMIPSIGQHUOSYNUIFXLAHGFTRJEWMQLBABWORIFRBSYPDSZRCPIZMNYOOEQMXD");
    msg.sensor_class.assign("CWAQXWRITAAESXBHSBDITSANIJOZFSWPJPASNNQXEDXVQXHKBHWCRVTFPHGKLKFKPSLKPNWFBKMEGVXMJMUJQBGJJHYBZDWTCKUBXXTUSLYQCGYTYQIZGCREVJINMOLGODILAJVRYRWIUJDASGVHYSRBHUMVPWSDLAICWYDURUMEYAUZPFORH");
    msg.lat = 0.7788999692729167;
    msg.lon = 0.6176970487335416;
    msg.alt = 0.11105829906514342;
    msg.heading = 0.1988989291861364;
    msg.data.assign("YVILGOFFDYXPYFMMNLRRWXBEPWOVITPDRTGUKYJHISQEKVTUCMEXVDFSBSCFDNNQAHULFUNPKKGUFXZAUPACKAHSJTMUTMO");

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
    msg.setTimeStamp(0.6542839865759399);
    msg.setSource(16518U);
    msg.setSourceEntity(44U);
    msg.setDestination(14940U);
    msg.setDestinationEntity(73U);
    msg.id.assign("PCNCMTXQDYRQKICCFFEZMBHILHHSUTYTKGQXVKPSXIQAGL");
    msg.sensor_class.assign("QLWXCKMONFGPYVJMQVATWOBQWTVORAUJJVNALZWINQRUDBDIZXKG");
    msg.lat = 0.5870698451588934;
    msg.lon = 0.0766578744866907;
    msg.alt = 0.30412739355201446;
    msg.heading = 0.13392255976015743;
    msg.data.assign("VOIOYOPXKHQASBVWFGBTPJGFQZZXLGQPRYFOLIZFFRZZDZHGCYVXSQMCXSOTFIZVKRWZMMAGJWHGUTCGTKRLLBNDJVUDCAUYADEPQSFRFCLYIO");

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
    msg.setTimeStamp(0.3394621313536478);
    msg.setSource(34000U);
    msg.setSourceEntity(182U);
    msg.setDestination(8046U);
    msg.setDestinationEntity(159U);
    msg.id.assign("WCDACCRRXEBSGVYZPXVMVNLSNMPGBCPOIHKTPSQKAYNTJHOGLGURBHIISPZVDUKYAKJPDWCRFSOWSOVXOJWRAYRFTARJXMKEATDJLIBFCAQUKQEQMMBLOYTWRCDTZJXUIISUHPUKTDUSOWGJFGYAZGNVCLMWNBQVDMSBHNXTZQLOXWNGPEADXCHPGBZ");

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
    msg.setTimeStamp(0.5436182161965014);
    msg.setSource(53121U);
    msg.setSourceEntity(96U);
    msg.setDestination(3858U);
    msg.setDestinationEntity(181U);
    msg.id.assign("BXEGSUKXWCUVSSNOLJTMFTRDZOQJCSAIVBNDBSMKJCFYQTKPLLQOEZRBXIBHWQHQLUPLOFAZXPSFFVAMAGPNJG");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ATLMLDBZKOAXINYGTTEWBFQOTEMYWSTHLGRPACUGKUZJMUKCRLDVKRZJQRINSSISIQLVXASLDHXENYGFEQEXITDYYIKBXGNAYUZWPUSXACQFDMOMFHQKNIMOBAPOTTZWDUWTWMIFKJAMEFVWWYKKFCQHCPDJHVJQBCZBNGHUJBXPEQBMIWFJPYBPVZNGDNZOOHLDZEEBRVUVPZFTGQOJGWLAGXKEHRCCSLPVFDRYXLHAS");
    tmp_msg_0.feature_type = 27U;
    tmp_msg_0.rgb_red = 178U;
    tmp_msg_0.rgb_green = 148U;
    tmp_msg_0.rgb_blue = 132U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.23068101293902876;
    tmp_tmp_msg_0_0.lon = 0.22031045901923374;
    tmp_tmp_msg_0_0.alt = 0.5559721032298071;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.9550769733645021);
    msg.setSource(41506U);
    msg.setSourceEntity(57U);
    msg.setDestination(42571U);
    msg.setDestinationEntity(59U);
    msg.id.assign("CDQUAICGHQSEWKZSHDUEARNGWNEHOCFLYSILQNLDQOLGHQICEAAYNMHSSHQCAVXPVMUPDVOPTQZEOGTUYULLLNAPWBSAFSUWVYWGQXJXVTWJNFXJSWTVPHIMBDLUFMBGBXEYFMORCZGMXRAGZHRIMZCRROEIRKPXDPYXFMEYTKWWTJLKPNASQZROBNJIY");

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
    msg.setTimeStamp(0.6301741438709323);
    msg.setSource(60737U);
    msg.setSourceEntity(105U);
    msg.setDestination(62747U);
    msg.setDestinationEntity(169U);
    msg.id.assign("NGETFMEWBHHPAJCKTCXGLPWBVRBCAZOKNOMBMIGLEYIZQSDBPYLUDJWVQUCAJKOIIKYIS");
    msg.feature_type = 63U;
    msg.rgb_red = 9U;
    msg.rgb_green = 212U;
    msg.rgb_blue = 20U;

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
    msg.setTimeStamp(0.13377145863070983);
    msg.setSource(62297U);
    msg.setSourceEntity(247U);
    msg.setDestination(46992U);
    msg.setDestinationEntity(52U);
    msg.id.assign("JWUEVBPCHCKAOFRYNPQMOCDLHWXVZPMVRWDYWMDSNYYCXQXDZOJEJSXFZJFDPSPUSQFTRNRBJFGVXSXWREQBSZIRIMCYOPZQXVXNVDGTKLIQKTCDJJGALIZBQXOTKDOBNEMKZBLUKTRTLWUHOWEMTHHAFYMPGGDMENKHJVNCSUYGCHEBAZVJLEEGTALRPJXKGFABO");
    msg.feature_type = 163U;
    msg.rgb_red = 51U;
    msg.rgb_green = 139U;
    msg.rgb_blue = 7U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.5611026865752887;
    tmp_msg_0.lon = 0.8154486977006731;
    tmp_msg_0.alt = 0.5049313988950178;
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
    msg.setTimeStamp(0.5751200391719172);
    msg.setSource(37970U);
    msg.setSourceEntity(56U);
    msg.setDestination(15582U);
    msg.setDestinationEntity(198U);
    msg.id.assign("ABXGJGBAPXPHBEAQC");
    msg.feature_type = 111U;
    msg.rgb_red = 200U;
    msg.rgb_green = 45U;
    msg.rgb_blue = 161U;

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
    msg.setTimeStamp(0.18378127649322873);
    msg.setSource(33567U);
    msg.setSourceEntity(173U);
    msg.setDestination(19776U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.5049426917999716;
    msg.lon = 0.016398226170471264;
    msg.alt = 0.9263687011414853;

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
    msg.setTimeStamp(0.8096864268052222);
    msg.setSource(62160U);
    msg.setSourceEntity(82U);
    msg.setDestination(23409U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.11632930723695989;
    msg.lon = 0.9137583661867478;
    msg.alt = 0.41788579901741363;

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
    msg.setTimeStamp(0.3325320729599598);
    msg.setSource(50190U);
    msg.setSourceEntity(111U);
    msg.setDestination(34440U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.6566325526499005;
    msg.lon = 0.2421764299625827;
    msg.alt = 0.9950906535446545;

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
    msg.setTimeStamp(0.3513829045686654);
    msg.setSource(7420U);
    msg.setSourceEntity(156U);
    msg.setDestination(8474U);
    msg.setDestinationEntity(188U);
    msg.type = 14U;
    msg.id.assign("ZRPIWXTNAUEFKAMHMHOMTMVAVVYBDDXMADQZFNLVQGHPPMBMZCQOKIRKWRIXZWHHSMBEAJUDGYVUDAXNSTQPKLPVRBGTIICFHXHSZXNOODJUAGHXBYGPYTFXXWSNPWSDNIFKBCZRITHLSHQUKJOIUNEIYOT");
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 24106U;
    tmp_msg_0.ttl = 34262U;
    tmp_msg_0.destination.assign("CKUKTQPZWFNZZVHTQNDXFGQEMJUNRQHOUBGMYRISTPWPASERSVENEQBODIJBKXPYSEJLEITLMZZJVLRWWDFCZASGYFBGTFXQIVFOIGLTAVHXZRUGFOLSPLLNHIGSYMJCMBPJZJNXWOBRLASGYAMLQMBWPQHGUWZDDABACTCEXDVTVRFNEWQOZAXFCUYNAWEX");
    const char tmp_tmp_msg_0_0[] = {18, 78, -9, -68, 57, -38, 66, -28, -124, -119, -108, 89, 117, 17, 13, 112, 39, 15, -75, 34, 126, 55, -111, 27, -13, 59, 60, 4, 122, 37, 123, 17, -29, -71, 106, -60, 122, -47, 26, 83, 50, 93, 84, -128, 89, -34, 94, -81, 83, -117, 111, 76, -50, 51, 13, 19, 70, 115, -109, -74, 32, -92, 32, -77, 62, 96, 125, 75, 1, 16, -60, 99, 22, -68, 4, 6, -71, 58, -8, 85, 108, 2, -116, -71, 11, -6, 7, -5, -72, 121, -109, 55, 25, 52, -47, -1, -39, 25, 24, 32, 32, -69, 111, -127, 114, -25, 103, -3, 9, -38, 124, -58, 100, 44, 98, 85, -109, -102, 8, -63, -77, 96, 27, -109, -122, -117, -88, 25, -29, -28, -51, 69, -44, 20, -108, 114, 45, 103, -32, 26, 27, -105, 30, 70, 8, 38, 4, -4, 28, 25, -112, 89, -23, -97, -46, 2, -29};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.21038602355805125);
    msg.setSource(52583U);
    msg.setSourceEntity(84U);
    msg.setDestination(3065U);
    msg.setDestinationEntity(47U);
    msg.type = 130U;
    msg.id.assign("SOMXXOREROGADNITLUJSQICIDAJHIFTRAYQDYVCEXRYBGLHHNDIEVMFJPKPZNAVXRQXYGZBPEWLXJZIIXIFNSNZPDLMRATTHBCSOASBBPXMNSKLXBKRNQKNFGFMNQWEWYEVRCAFCJLEEHYUWKGLULGFGHHA");
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.9440430118750984;
    tmp_msg_0.m = 0.23413926511739602;
    tmp_msg_0.n = 0.2730824789577382;
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
    msg.setTimeStamp(0.0012701511263267795);
    msg.setSource(27499U);
    msg.setSourceEntity(198U);
    msg.setDestination(38596U);
    msg.setDestinationEntity(48U);
    msg.type = 238U;
    msg.id.assign("YQXQUEETSEUEBDXGRNRJAUPBBOHQEGMNIGJVIVDWPJIPPXCWVWVHZOTGKBRKWQUMUTRKYDYAPFQQYFBKCAFLLQ");
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 85U;
    tmp_msg_0.error_count = 223U;
    tmp_msg_0.error_ents.assign("IKEQEOEHXAVCAZTF");
    tmp_msg_0.maneuver_type = 52757U;
    tmp_msg_0.maneuver_stime = 0.015274482614083484;
    tmp_msg_0.maneuver_eta = 29171U;
    tmp_msg_0.control_loops = 3270213860U;
    tmp_msg_0.flags = 122U;
    tmp_msg_0.last_error.assign("KDQXSUQCDFEQWRSAIPHAFXFYVTIUTRBQXBDSVYEPWEZPHCDRKIVCHPNGAEDPKCUCFANXOBF");
    tmp_msg_0.last_error_time = 0.8603921638467277;
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
    msg.setTimeStamp(0.7528659231705221);
    msg.setSource(50984U);
    msg.setSourceEntity(113U);
    msg.setDestination(180U);
    msg.setDestinationEntity(165U);
    msg.localname.assign("CRSLGAICZIFTWDILOBRRXSEQHYMCHJAMOGMSLOUQGDXTTQWYBANAZUKBCZUEXCKUNHYCNKUNLWVMYGZOWEJFGAZQDSWTULLKXEOQOMPOEJFMMWZZEDFNHOXEPVBVJQJPSIPOYIBUNKSDXWRQTIMEPVQUHACQCHYBSGXPSEKTMGDCVFVTAJDFTHTAYGP");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VBJPBFDVNHHIWYVQJHAMXOHGKXFVQAWZKVSZNLIJSW");
    tmp_msg_0.sys_type = 44U;
    tmp_msg_0.owner = 65298U;
    tmp_msg_0.lat = 0.36561726289146;
    tmp_msg_0.lon = 0.5416678885779088;
    tmp_msg_0.height = 0.9015970011383448;
    tmp_msg_0.services.assign("AMBZWFJSIVOMX");
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
    msg.setTimeStamp(0.8760675127224111);
    msg.setSource(35462U);
    msg.setSourceEntity(203U);
    msg.setDestination(42538U);
    msg.setDestinationEntity(182U);
    msg.localname.assign("KNPYRLUZRFSMBPGFOQPGCASIHZCINBGCPIZFUWEEEJGKRQIAFJWUJYIGKYHNOJDLCHAWDCIRXMTCDQVXYIAJFFDHATJQCVNBVUCWQZRBPKCLJBXLTVTADZOFZTVDWKWBPAJMBOVLEFYUSGAKNNVGMHPMLVZHBPTTMONIFQYEKROHPRGOECKHOOXNMSQDXEBQXYQNEQGSZRWYJZSU");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("EFBBTTMUXFDUSLUTBNOMISXZLEQSSOUEOCHZNPGAPQTOXMHPFPRAKDPOWGXBKXATWPMZZIEHWINUFJQYPABJRYQEZPTNJYKMKJFESCRVNVKRIVS");
    tmp_msg_0.sys_type = 187U;
    tmp_msg_0.owner = 61514U;
    tmp_msg_0.lat = 0.6669004211793973;
    tmp_msg_0.lon = 0.5270342370608353;
    tmp_msg_0.height = 0.07166085150562129;
    tmp_msg_0.services.assign("JNCHLUYFWZESRDJXADYYANMKRMTTMNAIJQIHQIEHKZEEUOPKRQFMBTPEYZWXXHZOOWQDGSVXAHITBF");
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
    msg.setTimeStamp(0.5576681754472649);
    msg.setSource(2287U);
    msg.setSourceEntity(65U);
    msg.setDestination(21246U);
    msg.setDestinationEntity(37U);
    msg.localname.assign("MVPOALHHLDOWEWZUODZQRRIJWCBYRJGOGNTCMNVBQUJXMNVELVFFNPREWPGKINXHBCIPGVVCZKKRZIQPDJXWZSTYVWMDZEAEBFLGXDFCULXTITN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("KOTCVQIROURCBBODGUXJQYWAWQUEXUSZXEECOSRZJZGUKLSJAINKPIDDGLPVKPEYKPMDBAYITNUFKBXERMCOJEQFNGQQUSMZCMWQTMYHAHZHHHBSBFONSHNPLLARLNFOLMMENJDHOLDXKDTPWRVFJLVTFUVYNZQLNGVWMXVSMYGJCW");
    tmp_msg_0.sys_type = 228U;
    tmp_msg_0.owner = 59764U;
    tmp_msg_0.lat = 0.8343891856187916;
    tmp_msg_0.lon = 0.511880777077117;
    tmp_msg_0.height = 0.4939961994367197;
    tmp_msg_0.services.assign("YHZAZXJLSPASUUKPAFRDTNAGJONTSUUEQNGVXKQTLRNBWBOOVIHORMPSKIGGLFBDZWHEOZQGYKGSOQCIYCIMECPOPNVBMXXJDQYUPQUYWDANWXADZNHUIHZRMSBCQKHKLWLKPDQWILVFRIJMXRZGHVTNJIYXOGFHVJRBVYTDOEPOPTFVZMUDERCAW");
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
    msg.setTimeStamp(0.2099639021386981);
    msg.setSource(11492U);
    msg.setSourceEntity(226U);
    msg.setDestination(30617U);
    msg.setDestinationEntity(162U);
    msg.timeline.assign("NQMVFRKUGKPYKFJRHQPRTFTUUIPWDCNJAUDFSECCGBYXVVOGNMOSXERUTTBDPIMZPILLPHJDKQZOVLRBAJZTKUFXGAJVLDOVHGQEJUMSXYCEHQWAFSECBGXISFE");
    msg.predicate.assign("OBAUJQSNOYQEDAWDSVFHBVJWFYHXAVFJBNWJOYZITNBPBERUIULSTOLGCHCDMVGQIXVLKZPRFEVRBNZJKMKPMUAUPZITTUCBOKNBZJXGEICUURAIRDRTCMMCIWKGCJDZYVQPRJBACSYZGXZIMXMHQSFLHQSAAFNHONTAEWDHLYDEHEMYYOTNYOGXWKCRPXBR");
    msg.attributes.assign("VJDEUGRAOSIOITACOEAQYRQYGBSZRVVTMBEYGZWNYDPFRMQMYXKFCIEFVFMCVBOPCLBLSOXCAHXQNQXHOKWWWFVGBNMXVYPNFHBPRJGVHDTUPYRDLQOXKOMHKLITJWYJTUCKLIKSLNGSNDJCINGDKNLECQWTHTEAUFL");

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
    msg.setTimeStamp(0.5062953634850785);
    msg.setSource(61124U);
    msg.setSourceEntity(75U);
    msg.setDestination(50311U);
    msg.setDestinationEntity(109U);
    msg.timeline.assign("PCGPMZBODPORKKMYHOYZSPDBJXAJGWRXOBNDQFZVXQGNQSJLJMZWAKCQYEMFAUVJSBKQDITWSVWRIUCUMFALEECDORNOENZETATGFSUUOQERURZFBUQAMHKLNMJZMBBYSMJIRLCHGKGKIWTHFBHLQWKDBCVIHTTTXNLXWAYENFPVNUZYILGIXUNP");
    msg.predicate.assign("UJADVLXIQRSBYPOVMRZEGMNFJYPUMTMYMRXZBQLCLEOTPKPFVZAWPMJXJDCREXUWBQTBOGSMEJAVGHYABONREKRESITCADFDBMFHYZCWENIXSVAIXLUKCDGBUHDPO");
    msg.attributes.assign("XEUDVPFYQZSWPYZTISLUFGXVQYAILJUYEPMCJVXPLNKGNKLGUBJVOEFHFBGTQVEDUMDUYFKHBRROTRPTOWWDE");

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
    msg.setTimeStamp(0.2013026286273657);
    msg.setSource(53861U);
    msg.setSourceEntity(171U);
    msg.setDestination(57403U);
    msg.setDestinationEntity(26U);
    msg.timeline.assign("MGWVOYOIDPKAJHPDEJHXCRRMTWKVNHDOUXTPHOBLKPCGLYMBISFMEVIGZTWYCXANFUJDYARNSAUKXFSJFGZEBOMEOVXODZPZHRDJSFUTACBKLGIRNXUQDBCSGMAHTEEIWFOUKIMBZELRPLINNXILGAQLWQH");
    msg.predicate.assign("BUFSGEGKLGFZWMCESUFKJXGAHLPGOLZKPWJXCLNKIXSQHYVKTZVFOAVFSBNEEQCZDSRHGIZAKDXRAKHZSXXRUYJVXETMJRILUOSMOOTDLDPGIHYHNBQCGLWNVOSJTZJAGUQZJOQMRIBMUHFXCADJCMEJPZTRPCSBWONPLYTHARUBNVLTRVYFIUQDAIORVPYNYNYONHFQSMKAWIPTCBCPTEHEGYKWJPUEFURVBDZDQWKMLBCQXQIFYWBEX");
    msg.attributes.assign("HDKAZLWYCRVZPCTYVNZPILGHRWHQGOWISMVRXFMDCYKPXTMVRULOSZWWIFRIQPAREKKBWJGRIZHJDAFISZPXINGIDFFPANXJPFBQVAMFBPKMZEEXLSARULDOKOEFNBCTVKSTYKSMJC");

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
    msg.setTimeStamp(0.31364789946602034);
    msg.setSource(24268U);
    msg.setSourceEntity(224U);
    msg.setDestination(1967U);
    msg.setDestinationEntity(61U);
    msg.command = 146U;
    msg.goal_id.assign("QVAOYCLTWNHECBKWBHIXTUZHNJQRNUPEDVDDRRGSOVSJMHZNQBJNXVAKFFDYSWYAMBCALGIPRSUSZJNTXQPVEAUFCMKDARGYWWDNKGKXOPOBJFYYUJZXQOIPCFPKARPPMVCZUKDHXCXGZTAMHESBXLVIINNIXO");
    msg.goal_xml.assign("LOANBLVFCCPTGMDRNYHVOCZANITGRFNVUUTAQQHGBAIQBAOMSATEHPRSICSDJDYYJCZBCDIVZNOXQVOSDWYVJEELRWPGGKKOBJZOTMGAYYQYOFKTJIQB");

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
    msg.setTimeStamp(0.3775897395191453);
    msg.setSource(27289U);
    msg.setSourceEntity(210U);
    msg.setDestination(53500U);
    msg.setDestinationEntity(6U);
    msg.command = 248U;
    msg.goal_id.assign("OJZUVQSNNHLBEQEFDAMKGDPIFISZZVQXTXIBHJRAYITZMMVTCMQJCNWKPHDRYACWCUEGRAAFGNSSVLPEZLWODVCODKHRUAPWBLXJWTRHZBZHLZQWIEKDNIQQHCRYOOFCEJYIDJFATUPPGSBVFSENXUFAXMRIYLCKGATMREKUONGNDTMHAJZSPOQLBFGSOYJ");
    msg.goal_xml.assign("XFBYHMXARFLACYGCDZFKPMSPDSFPHFIDWHOTULWELPEVDODJRNMSQXQJTUKUGHAAEKZTWAGVEIHXCYNJCJDGWUNWTICBILODSVUOHUASARJDMBNXSTYNLNGMRMLILHSSETGNMXKRVZYLQEXGFKUOWRJORBUFFPHCQJVWOWVUKJQINKKBZHSBZICPIUNOXMAZKYRAEBWENGQCTHQLEVYTPZYZDV");

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
    msg.setTimeStamp(0.7513039820398809);
    msg.setSource(11058U);
    msg.setSourceEntity(245U);
    msg.setDestination(43262U);
    msg.setDestinationEntity(216U);
    msg.command = 82U;
    msg.goal_id.assign("LUHAEQSQBSPUGYNXQUUMZAEBOSFBNNMHOBYTSNIKDDFNLEIICKJVSJHYBXRSAFGYWCULKXVMRUIGWAQP");
    msg.goal_xml.assign("CBVQURIARJCGYSWAKQONXELSJTQMXHPWDKGIVVGMPHDIUQHZMQUNKLDARLJQAASNNCISKQUNOSNLZIHBPCTZUFFATUDDPJUEDEPNBYZFSXDBXMPEKJ");

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
    msg.setTimeStamp(0.06896857276222379);
    msg.setSource(49899U);
    msg.setSourceEntity(240U);
    msg.setDestination(29166U);
    msg.setDestinationEntity(217U);
    msg.op = 82U;
    msg.goal_id.assign("GLSIBMYKPRZBVWEUYZQZFUERVLMQSCWVFDFHHCBCMYIGKJHW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MASJYRVSCYLZSYKRMCVXIZGNLFALKORVGHUYBYPZGNBRFZATEKANTIVJZKMVFKFTEIWPTSHQNUQJJXCMDOPZXUAUTIRHPZEJMDBMQDODPFCABXGOQOJOFTEWQIKKED");
    tmp_msg_0.predicate.assign("CEPRVZMBOEKDVQSZSOFFQEMQXYTJGHZILYZSRIQWGFEBAJCDNJXGVHJEKDTUPWVXJDG");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XSJFIBKPFLLAHUOPOMOWOBFYPCVDXROIEAWVRTAPGDOZVLKDHQZNBUQNXTWQAYKIKQ");
    tmp_tmp_msg_0_0.attr_type = 115U;
    tmp_tmp_msg_0_0.min.assign("BNVCPFZUWQSDOIWOQLSAVFEZQVBFZHXSMQUKDCGNMHTMWAIYM");
    tmp_tmp_msg_0_0.max.assign("WCZEXCTTKTAUXJGNAEHOJXPZCVJPQDGBHDZHNYBNHWBFGQZATBWKRXIIRSBDAWPDLNAXGOWWLBUSVIKNLHQSTIREKVQCJYONBYMLLETPLPLSDOCHJQTQMEDXFMIGFGOMKZTLEWNXNVQCLRLRQJNTIOMOYYVKXPAFIUDEISYRAOCKJRPKJSZMAOSWZDHXDMQYRKFCYWUGZ");
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
    msg.setTimeStamp(0.09446322985246658);
    msg.setSource(44574U);
    msg.setSourceEntity(16U);
    msg.setDestination(27295U);
    msg.setDestinationEntity(98U);
    msg.op = 152U;
    msg.goal_id.assign("BFBBYCNAVKUHJFRLPRRBOQATNUGYXKCSPCHZPTOXTAZAZVVQQOSDVITRSPIISJIPVLMMMVLFNJYJAQWEBBGWGLRTBDQXYXQMPNWRZEMIYFSHECNHXJQYJQDSOVHPGVGRZIJICLCZELOMHULLKGHKSZDTXMYPWKKEMLFBPRTFWRJDTDENJNMUSWH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RFYBTHTKOAOBZMYXDFENSJKZMYWOLXDZDAEWKGKQRWACGFXCIECSRNRPHTORBEMYQIKXPNNSNOPUYEVJBSBRRVWFZLRADWIBHKWTKDCDJYQCQZVQOWANCIHULJLJGPWHHMPWHLLFRIZYPVSISADYSWTXVKSMMAYQCVHQGFULPQDIFVMJAVPINJIMGBOLBZHTZVUSTUFNQXEOCG");
    tmp_msg_0.predicate.assign("JBLEVSYUFLWRVRYLPQMRQKDCOTZWBIHVLOBMULPUCHAANHJAZKDQGKVTYGAQLBCKJCCLTUHCDTHUIQRENSGBJCSUXVNVKIXYSZAZREDXYHLFJEFDOCUTVIJGQD");
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
    msg.setTimeStamp(0.8681916837109929);
    msg.setSource(27158U);
    msg.setSourceEntity(249U);
    msg.setDestination(44924U);
    msg.setDestinationEntity(45U);
    msg.op = 245U;
    msg.goal_id.assign("EMBIUTESODEBLVJFATKMKOKVFCHSBZZBVBVXWWEZRAWGJPGHVUFTNQAHRIXQGSEYINNPPCDYFOOIEB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZILHOMMDCRK");
    tmp_msg_0.predicate.assign("JIGJMGRBRYCKELEIPEKZMEVYBGFPFQHSPZLLUHLQLYJIJYRPEFEUCSSADFBORRK");
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
    msg.setTimeStamp(0.4561386098442013);
    msg.setSource(13023U);
    msg.setSourceEntity(59U);
    msg.setDestination(6363U);
    msg.setDestinationEntity(201U);
    msg.name.assign("XILGEWJEWKZZVZYXLPVIDBOQQIEIVFMFXLADYOAELHTETBFRNJJWYUIMEBMKDAVWTQJFCDRRJM");
    msg.attr_type = 188U;
    msg.min.assign("JKNJOCLZIOCJBHXVOXFQMWGWCQJRNWDFSRJSLHBBKHPUHHCAZQQXYTVFBDDURRZLFCRWEVIZRTECOBXUP");
    msg.max.assign("AKELDVCPBHGSXVULZNVEYUNKYSHUEBVTZUGKWGLLANMIJMGAOHRYXGQCPCYUDBYHPJHVHZLZBNSYGTRCBDJDGMESVXBXQIEEBOGAPKITJAFRHTWDCRLGJPSDZASWDORJRTXFTWWWQEUOFIFZBNJHFEWXFOTXPUNSAMDPNEFJMVXQPZYKUZIMCIJNBWIOWDULQLIRQSCCZTQATNIOLAVREMGQF");

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
    msg.setTimeStamp(0.4990837404738173);
    msg.setSource(63684U);
    msg.setSourceEntity(145U);
    msg.setDestination(15143U);
    msg.setDestinationEntity(214U);
    msg.name.assign("MNENQOSBLXUMFHYLCYCTKKRNMZPRVFSXFVEPZDYFJZIGABIQSIOZYJPXTRWCYVCJMJJDOLMNYESHJKETXMZDNXILWQWMHAJIONPGUVFGXMVSBSKOATRSSETKCVOGYUFNBGDYUHBAOCISAHQLIUSQYLQOCHFUQACFRGEFNPCLOTRDTPWUEDQDPWIRXHKLEBWGGLTLYBDVPAAAZU");
    msg.attr_type = 201U;
    msg.min.assign("MZYTZZDXZCNSMFUZJATIVPRCBDWOYKQNQKEXXHBKAYKEVSTGWMWIBDQJGLQ");
    msg.max.assign("USNMAFRXCSMXXNFWYMRWOUVSZIQKBOQQYDRODZADBEZRBMIFVVCBJWPIOEKMUBNXPUA");

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
    msg.setTimeStamp(0.11078444429333689);
    msg.setSource(55111U);
    msg.setSourceEntity(64U);
    msg.setDestination(44331U);
    msg.setDestinationEntity(140U);
    msg.name.assign("KTMTSWRLEBADEZCKAULPGJHJMDMETRDFPRZMXPWAGZUTSUMASBHQFTFCXBILJGRZUKCPXTRIAHNHVYZYIOQOMNPPLWLFCSQWSQNVBNIKSLDMBARHUYGEICCTAOHGKODY");
    msg.attr_type = 217U;
    msg.min.assign("KGYOKBHFLBHCZPQIXRYJEHGWDXQXLBCVPJXDWQPRWHWHFTZIVGKNOYUYETJSSMAYASXLJDAUAFOENNOMKTNKMXXCHTLCMVAIFWHIRSDVCSYUPZKNFVULPKP");
    msg.max.assign("UIBAKMBNTRAAODJGIYDPPMZLKEAMWYJOKKNQSMSWHSNSJRJGRJUUODPQNNFXXRZPQGTLTJHXOFXGVZJTRFDKGVRHINYWCEPCSQGCIPYQMWNSNYUWWFRARRYCKIUKT");

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
    msg.setTimeStamp(0.7685880501040335);
    msg.setSource(1082U);
    msg.setSourceEntity(178U);
    msg.setDestination(13474U);
    msg.setDestinationEntity(101U);
    msg.timeline.assign("DBDFQOWEYNVXAHSSXSXWUPLFFLRWXCHHCBOOHYKAJNCISLSAXQMURFZVREQKXQVMTGAMVDAWXJAZWFPZCPJNIAHGYYIIKBXKNJKKWMRIZDNPBHFCTWMEXGKLQZQBEEYUDMHFPJUSQZZ");
    msg.predicate.assign("BJOLUULCRYOADKVLPACRJCHMPAKVILDAYDWHWMFYOZUYNNDPWFSOELNVHFO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RQDSZEOJURQZKMARPWFEHDSZEYEGXHIFNILIHLJEBAOBQATJPOSFNFLAPZMMKFSXLYXVJQYHGCTYAYPFDCWGNCUVOLQPKWBM");
    tmp_msg_0.attr_type = 61U;
    tmp_msg_0.min.assign("LTLGXTFASAMZFNHCPNDLMHUQIYCLJKEUJKEVFXAWMCMMGIEPRRUYNBQYGPMFYBJKBPBYRXKAWLSJWFLRJBQCNDIUQNRHWSODOTXACDJLDHSZZHOBBKFTRMMVNSKQAOJGPIKL");
    tmp_msg_0.max.assign("PNLOMBYCUBMLAIRZUCETUDBSQJYHRIQVCWOUNMHGMUVLFXIWWWP");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.13218177740264092);
    msg.setSource(36599U);
    msg.setSourceEntity(190U);
    msg.setDestination(23494U);
    msg.setDestinationEntity(124U);
    msg.timeline.assign("VFMTURYFVJVFRXCMABAZGOKWPIGXPKOORSIKUIXQEXENOSWRVFKLAEGNFPKLBHOXAJZ");
    msg.predicate.assign("NSELSUJHRHBAHNVAZRLLSDQVCSFYZZDYUKYYIMVCRUFKQEBWIQMTLMQZDDCGNXOJSMKOPZWXPUNUYTXPOWNAHDHWPBWEQTJJ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OTRKFWXRCVSHQFXVDEQXCRKJTOWMIZNWPPFLLMDHSQOLDAYYPHCFQC");
    tmp_msg_0.attr_type = 101U;
    tmp_msg_0.min.assign("YQJWDHWXGZDWJHKQMESEQMVHIWAGILMXHRGKKYVCAACAYEBVWTJMJSQNZZOXCMDXIGEFXGMMCAVXHLGPDQRPEZNKBZPWZKVEJDTMPDUO");
    tmp_msg_0.max.assign("CGYFSTSASMCEFRHUHKCLTNFDEFWLABQSUOIDFSOXVLDRRJDTTHNHAYUCHIMBWNIMLOSZDVVGPULHQWSDRPOEXPLTZFXVQRFAPGRZKGMQIZPOSAKYNMCUJNKQUBSTATJQWLBLHGKMUCGOBXPJGJPRMKLKAWMIXUNQUDXCCXNBZWNEXTPZVBBYJKWOHQCVONTWXYDTQVRVOZIYWZEBGEVPELRDCFMGJJWYIEFVDE");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.612203448820313);
    msg.setSource(59240U);
    msg.setSourceEntity(4U);
    msg.setDestination(19969U);
    msg.setDestinationEntity(77U);
    msg.timeline.assign("KUMBDEVBIYBRLYYSMVWXZMZOOTWFKTZZOOKOMGESQLDJLPJFNCHJQWDOWGHISFFYHJXXCKNXCAPCRTYIJTYQHIQFGFLYRLLWGQUPLAJJHOIVITAAPACPMCSSHPIBNVKBNTQEBCHDVGQKFBKDGWUYUHBPVNEXLZRZUC");
    msg.predicate.assign("UVLNHBWZXSHMXOLOXVFQDYJYRBIZZEVHUMGCKLVVESHRKOAZGQKDUSTATPHFCNIJMHZNYMPUVRUQGVJHWJTAACDSVDDQPIQLBLAKRRWNLPEKOSWWFRRXANYOGYBGMJGTKWUCNCZEJYAWVFXXPCBPQEQJBTCXQPSAEDQILLMKIMETFMIWFYEKE");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("YGYTFFWCCRXIPIVDQEPAPWVSIPMMVTZQUCHXZKQZYBJRSCYODBKCRLVRTHQ");
    tmp_msg_0.attr_type = 55U;
    tmp_msg_0.min.assign("NSDHLHRRJWIYSCQGQOUAAZDPTWXZYREMKCNHVYIGJJDIBJODWAMVDQRTXNJNTGQWZHURGLZBGREOXXGSZQPXHKCZMGUSHBIHILWNFNXIHEEEOCBQQIDPUY");
    tmp_msg_0.max.assign("LZIGFIRIISONCTRRPSYUNUMVSNUULAUCRDALYGMEOAEPQTNJWBBJALTNZVMXYBJCXTMLXNYGHDPMKIWHGXSDDOKVDKBKEHHCVZWZQOXEPTFYBRFLGSMVLUMQWPBHHGF");
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
    msg.setTimeStamp(0.9795069123299494);
    msg.setSource(18283U);
    msg.setSourceEntity(87U);
    msg.setDestination(8400U);
    msg.setDestinationEntity(1U);
    msg.reactor.assign("CSBZEINRCNQLJUWWOSTUVJRFGSDBGHSOZJYCABPDYPRKCEUWPHHLXFXPVBQKPEOY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GEPQKPBVNAOTIPAEIWAJSCQFHBTJVHWGVTARXOVXJMSHDCWFNQDANGDNBPHDCMCIRUDZHQYBWHMIIWPLZORUBSVMSGTHVNEEKZGJSHUXLUMZYRVIULYIJXCCPFOLUIGXRDKNPCSSTWKGMGQVXFEZHYCFGWYQPQGZXULJUWLTKJXPTEZLADWKVFEROCYNTAUIPMHJBOYTSNAUZRJADNBISRRE");
    tmp_msg_0.predicate.assign("PTIQBGFOCUGTITZAYWJYSFFORZKYBHOCVFKLAEEMBSKLAWKACDJVDCGOPQOVSVDJTNJNGLGPWFKIQNZBZSJZIVBUKURLRYUJHRYINTPGAGWJHTPBDXZUHYAVKCCDXALFJNGCBBRDFMHKICWXALDRVFUEWFSEVMBVJLRYQXMEIHQHETPPGHIMPQXLIUYDWEOZN");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RLDUXNXQXJSXBEREPELPHFTQNRSKZRLUZQYFASEBOSWFPUHZQJZSUJAWHO");
    tmp_tmp_msg_0_0.attr_type = 242U;
    tmp_tmp_msg_0_0.min.assign("VDRPEXXVMYYBHVDBOACCMZYHEGEDSPLTNQGWUKDWWRPZCLNQXHKTOLNOUSTSWXUVHPRFOJZELWJVQJBDDTSTIERRXJPFBHATFCHACGFWROMQMSANDXGZWYYLGOAHMUUSKUVSLVFZFBUKYNERUIFBACOFTEROTZKLQVKYKIJNKJYQYVSAMSBEMJRPADXAPMIICIDNGGIHGFPSPZNLKHOLBZIMP");
    tmp_tmp_msg_0_0.max.assign("ZWBYDWTYTBBUWHWKXFSHRMPREIWZWKFMBPIAFVULYHFAQZENOZRGCXWSEBOPSDXXEIQOIPTJRMLKODOFTYEJVGMZMGGCPPRBNNHVGIRPEFNFLAKNSQWRVFMVGLPINCTKSEVVZHMNA");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6089295269897829);
    msg.setSource(33386U);
    msg.setSourceEntity(51U);
    msg.setDestination(12161U);
    msg.setDestinationEntity(48U);
    msg.reactor.assign("MWTZCPUUQMOQMSBEAGNVHMZCHLXLQLCIUFNRLIGODZETUXNCEHXKFOULWCYDJXAEUZBYAPYIZPKCGUIWKYDVNPSDKMUAKRXHXLNRBGVGFEGJBYSPOVLBTPQEZTSRXHFTCS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DLKVUDWCRXEAAVMJKLRXQFUZXGOOBNYZAOXEVYWRBDHELRIRMHUQFYCZQMMUYNGDSMCCHSEBFKQTNQGILEWPWPMQKNGSEOROOMUKISUAOSTRTHCBYZNQHCFAIUJPWNRMEIVZWGNEHMGVA");
    tmp_msg_0.predicate.assign("AVRYRQXIEROYYESQORSCDKUPNHHXCQPLNTBAMKYRDDQVNTTXJCODURWLIUQJEYBXJEPTMNZJGVT");
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
    msg.setTimeStamp(0.34250037163437075);
    msg.setSource(5808U);
    msg.setSourceEntity(19U);
    msg.setDestination(37991U);
    msg.setDestinationEntity(194U);
    msg.reactor.assign("EYUWMCXSDGKHQTHPWHEKFWLHPOJLHZRGMESQGYHMZLURIBXQXBQGRWSVLCLWUIMYIWGLJVELENCUEFCBKYJVHKTKXDJURVWPTKDQUQSISKDTISKYFATOIRBMOOZZVQQIFFONRSADFLZNZVQTAPNMZBHKRINWYABJCAZJNL");

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
    msg.setTimeStamp(0.8885439345898071);
    msg.setSource(56043U);
    msg.setSourceEntity(15U);
    msg.setDestination(1562U);
    msg.setDestinationEntity(116U);
    msg.topic.assign("IMRHNRZQTJIQOIAOYZSOWXKGNBAPXTKFYNZCGODUCKBRGOZIXDLVWTWRQOQOLMAXNHSWEZOAXPEWFWYZQYLJWVAYBCRMYHBDXYBRIEPVRCADZHSXNOPGNRQLTKEXMSLHCHOIZPMPGSJVADSANBCUDPGEJKKDQPEESXYJGTXGFJJYIFRHPLVIALEEHVMCDMSMUKSJUFJDCKVVDGUBL");
    msg.data.assign("XVCVXJGAKWVKFTIEGUZSVYSZGLHCHXGDCXROMOGXQUAPFSTTMKEFNFJHAJALRVDBDPQBOKTYTMOYFWELZNRGXONXFDZANFOZTXRMTXHGKBUQWSEKBHEXAERPZLCDDUUIGCZKJOPSLPWYOHYDOJIUDQMHEHLURIRGGMCQTMSUJVWQJYNNWFWPORRLEZBHDKTNJVLIKVCEBFIYJIIZZSCAQNBVUQCPBISBTMNFWBYDPIPQ");

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
    msg.setTimeStamp(0.6980158253617796);
    msg.setSource(18237U);
    msg.setSourceEntity(100U);
    msg.setDestination(4864U);
    msg.setDestinationEntity(29U);
    msg.topic.assign("QUJJEFDTOISLFNCQQBBJHXCJALCZZKTGVJODIGAERPFTTEMFNZWTCKCVZSAXHAOYSOXPOTBODKNCKDOHKVYXLOPRKHOGAYRILVTUNKSQTEDHWWSJACIMGHWMRYUPGKFVXBWIYUAGUIFDRMMDVQERRFPNPKLHOBUWLCFLERWSD");
    msg.data.assign("KCQANJZAJZVEIWGZRADFSAECRXWSIJIANXNWUGQETBGNUDYPOOYYKGUYUCUFPARXPSPGVRWUSHLESRBNTZDHVMLOJZJBLGYLDZMRDJTIAXVXQVVALHKCBXZUCYMRWMOKLHWASBOOVNPXDNABCR");

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
    msg.setTimeStamp(0.7915923722803644);
    msg.setSource(35846U);
    msg.setSourceEntity(38U);
    msg.setDestination(38153U);
    msg.setDestinationEntity(162U);
    msg.topic.assign("ZAKHYFRIFXRPLWCWTDYYJFMTWBDJGIGYSHQGKVPFGVSWMJWKWNUWMNHALDOWXRUSMFZGJBGEYBEJPRSHVSHIZCDOQLTSMJJNEBOVXEQLUPCDILMSHUAYRCCPJEZVXDZNTPVPBAEBPTADXQGFMDOTMGHOMFSPQAMCZ");
    msg.data.assign("CCGDPDETRHTHKPQNMOILGGCUTVQSEDFXJTHGOVBFXQEOABYQBSLNMZOZVKJKUP");

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
    msg.setTimeStamp(0.025890519957212366);
    msg.setSource(45734U);
    msg.setSourceEntity(187U);
    msg.setDestination(35225U);
    msg.setDestinationEntity(217U);
    msg.frameid = 9U;
    const char tmp_msg_0[] = {53, -25, 91, -77, -52, -1, 83, -48, 126, -117, -22, 14, 91, -105, -45, -23, -11, 117, 16, -86, 14, 2, -106, 81, 91, 13, -87, 28, -122, -46, 91, -66, -50, 119, -87, 69, 70, -95, 68, 90, 32, 125, 38, -29, 99, 55, 37, -46, -35, 82, -46, 80, 88, -41, 38, -25, 1, -69, -56, -97, -58, -123, -37, 20, 79, 113, -92, -100, -92, 123, 39, -52, -90, 10, 74, 32, -7, -20, 106, 32, 39, -2};
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
    msg.setTimeStamp(0.36706807636649497);
    msg.setSource(52119U);
    msg.setSourceEntity(150U);
    msg.setDestination(12982U);
    msg.setDestinationEntity(184U);
    msg.frameid = 217U;
    const char tmp_msg_0[] = {-5, 114, -68, -24, 72, 120, 42, 123, 28, 8, -72, -121, 54, 80, -96, 50, 118, 59, -30, 95, 68, -91, -106, -40, -122, 91, 68, 69, -38, 108, 9, 36, -98, 40, -109, -35, 85, 56, 37, -82, -86, 6, 109, -22, 48, 91, -79, 61, -120, -31, 31, 84, 16, -48, 123, -2, -56, 11, -68, 24, 118, 0, 39, -114, 0, 10, -115, 53, 66, 75, -126, 61, -22, -9, -91, -77, 107, -107, -122, 79, -104, 59, -38, 84, -122, -42, -90, -84, 48, -95, -3, 26, 121, 19, -2, 102, -100, -72, -85, -53, 66, 122, -99, -100, 87, 4, -87, 94, -109, 28, -79, 75, -2, -90, 72, 55, 51, 4, 38, -14, 109, -81, -34, -35, 36, 115, -83, 92, -15, -9, 80, 19, 11, -85, 126, 66, 6, -106, 75, 88, 13, 74, -70, -102, -68, 25, 27, 36, -38, 20, 85, 75, -93, -94, 97, -77, -108, 94, 39, 29, 5, -88, 39, -83, 119, -10, 11, 98, -29, -45, -116, -85, -24, 121, 68, -69, -59, 16, -108, -102, 82, 94, 121, 41, -82, -53, -40, 118, -123, -4, -117, 106, 41, -74, 125, -29, 91, -124};
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
    msg.setTimeStamp(0.36385602206153045);
    msg.setSource(15974U);
    msg.setSourceEntity(232U);
    msg.setDestination(55450U);
    msg.setDestinationEntity(210U);
    msg.frameid = 86U;
    const char tmp_msg_0[] = {15, 125, 56, 47, 122, 36, 83, 51, -21, -47, -10, -105, -122, 40, -27, 42, -39, -53, -52, 65, -126, -54, -34, 114, 66, -29, 39, 59, 95, -22, 64, 25, 99, 106, 6, -18, -106, -7, 43, -36, -51, 37, 62, 91, -77, -71, 28, -126, -74, -92, 92, -55, 46, 51, -80, 14, 52, -107, -20, 48, -24, 80, -28, -34, -98, -91, -68, 33, -61, -126, 106, 61, 45, 120, 114};
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
    msg.setTimeStamp(0.08503820814262286);
    msg.setSource(1161U);
    msg.setSourceEntity(242U);
    msg.setDestination(3476U);
    msg.setDestinationEntity(28U);
    msg.fps = 242U;
    msg.quality = 33U;
    msg.reps = 234U;
    msg.tsize = 248U;

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
    msg.setTimeStamp(0.8314820883683833);
    msg.setSource(15227U);
    msg.setSourceEntity(43U);
    msg.setDestination(5604U);
    msg.setDestinationEntity(88U);
    msg.fps = 226U;
    msg.quality = 161U;
    msg.reps = 47U;
    msg.tsize = 20U;

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
    msg.setTimeStamp(0.08090589530543646);
    msg.setSource(3572U);
    msg.setSourceEntity(200U);
    msg.setDestination(7682U);
    msg.setDestinationEntity(45U);
    msg.fps = 106U;
    msg.quality = 224U;
    msg.reps = 177U;
    msg.tsize = 195U;

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
    msg.setTimeStamp(0.21423856135661812);
    msg.setSource(6363U);
    msg.setSourceEntity(115U);
    msg.setDestination(46470U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.8048189937916357;
    msg.lon = 0.06746913420726086;
    msg.depth = 190U;
    msg.speed = 0.803555441210076;
    msg.psi = 0.023425578692465088;

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
    msg.setTimeStamp(0.43215375989372296);
    msg.setSource(308U);
    msg.setSourceEntity(157U);
    msg.setDestination(25820U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.4137031775907458;
    msg.lon = 0.053647501116857677;
    msg.depth = 202U;
    msg.speed = 0.11012298448348168;
    msg.psi = 0.25255923128684254;

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
    msg.setTimeStamp(0.24660995824728216);
    msg.setSource(11777U);
    msg.setSourceEntity(43U);
    msg.setDestination(6135U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.03284292542458944;
    msg.lon = 0.94691933970558;
    msg.depth = 3U;
    msg.speed = 0.3489048627183182;
    msg.psi = 0.6284440401627021;

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
    msg.setTimeStamp(0.44323943878643335);
    msg.setSource(11099U);
    msg.setSourceEntity(67U);
    msg.setDestination(6896U);
    msg.setDestinationEntity(252U);
    msg.label.assign("FVRPDRELFYFBNKZYIBGGIZFNHJUCMNORZJCSYMNIRUBISLOKLYOTKZPBWAVIFXPYGDJAMZTAQTANPKABJVKLNEMGFRHWQGUCXQHVDKVDXDITNRHQXHXHOYYZAEBRTFYSINBWSCUMHJQHJKDJUSMOOWEACCBXEOGEEZPWSOHFLQDPWXCHMUZQ");
    msg.lat = 0.39402164395421857;
    msg.lon = 0.012865423037022983;
    msg.z = 0.21936148858036597;
    msg.z_units = 159U;
    msg.cog = 0.3480535586568131;
    msg.sog = 0.05603080356742318;

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
    msg.setTimeStamp(0.22053873714057015);
    msg.setSource(7782U);
    msg.setSourceEntity(60U);
    msg.setDestination(40931U);
    msg.setDestinationEntity(194U);
    msg.label.assign("VMMXRQHNZDFGZPAGSQBGXEOFCXMBZLDXNMEIDIJULKMOTJCACTWORLYKPYYVSHQEURJGFBVFSEROOHHWSUDOOGZRQJFJMYQTY");
    msg.lat = 0.2729562038010994;
    msg.lon = 0.06928458670124649;
    msg.z = 0.32852445885693293;
    msg.z_units = 254U;
    msg.cog = 0.05631641048681979;
    msg.sog = 0.5361581699320092;

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
    msg.setTimeStamp(0.7256901282099655);
    msg.setSource(42936U);
    msg.setSourceEntity(28U);
    msg.setDestination(39163U);
    msg.setDestinationEntity(62U);
    msg.label.assign("ZQLOSETHGLLWBHRDAGSBMGYWYCAKHPEGZMILYKZVGUOAWVKX");
    msg.lat = 0.7957705771395415;
    msg.lon = 0.15597957017412079;
    msg.z = 0.9683257353588203;
    msg.z_units = 6U;
    msg.cog = 0.9059994291881063;
    msg.sog = 0.474593790003467;

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
    msg.setTimeStamp(0.5339287507683441);
    msg.setSource(43687U);
    msg.setSourceEntity(234U);
    msg.setDestination(4799U);
    msg.setDestinationEntity(87U);
    msg.name.assign("KFDMERPUVCMJVDIPJVZSQBGT");
    msg.value.assign("SKSARINNEJLZWOEQJCRKWPOKXGWFUNTECTKMYOOUFCXIDAIURXRMCTDSXSNAQMBLPGXIYVZFMVTILDEUHOWKAJDPVPMK");

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
    msg.setTimeStamp(0.8770556164745149);
    msg.setSource(65320U);
    msg.setSourceEntity(47U);
    msg.setDestination(23902U);
    msg.setDestinationEntity(69U);
    msg.name.assign("ZQUDWWZHVCAJCFARYLNONMEOVGSGJMZEEZNLBFFXULXDFIEZIEAQFHLELIOQDKCUMARLZTYNBYBITGZNHVXPTGMJYTVGPLTYDRLNLPFTHFOYHROPJKJDGKJQVZBSDWELAUHYOWHZQMHXPPCTHDMSIVJDBCSQFOBKCV");
    msg.value.assign("EFJRKOMVCJMRTWVWPXFAYJHSLUZVSUAJFTNPZPKLBAXAXIQUCXCQSDSYRHJURQHWDWNLHINXRZCYTEUHNGDHELSVGDCQMOOJIAWZSOGOIRLFMKFGBZCZEPTLHNXJMVXHYCGTZKEBKRPYBAYXMPCGNZGQFFVTWLYDSGIQVWTBVBVDFMPRBSHELHIXKSWPAO");

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
    msg.setTimeStamp(0.968710946017116);
    msg.setSource(6490U);
    msg.setSourceEntity(83U);
    msg.setDestination(41722U);
    msg.setDestinationEntity(113U);
    msg.name.assign("SKVFCJCLHHMUJDQCCVYLWIFOYRESZZTTGGRMBWGJQVTDSTQHQLONRRNJOXXDIPKJCPNVYEWBIVWVBZLGXETGFJHMUPNWQPMDBKZFPPUIOSTXHFCCCILIYZYMRWLZEHQKO");
    msg.value.assign("KVPXULUQDLPWADCOUSBQNPNMTOCYPLCFWNSXBDHHEVXKVOBCKOZKZZFBIJCPHLFCBTHDRDTTJNDAACPYOGQEMLRBCYKIGLJJHFFJWQTTTEMEUBGQKHUNSZOVUQDWJWALAGUFPNGOAAHZMLRYVXIBRHMDAIWTEGBYZPQSWDYXMRAYFYR");

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
    msg.setTimeStamp(0.3401797407839885);
    msg.setSource(20833U);
    msg.setSourceEntity(107U);
    msg.setDestination(61389U);
    msg.setDestinationEntity(59U);
    msg.name.assign("GUWXWIDUZNGILLZVBUXTYXOCYVQUUTPHKRJZOFQGIBOQEEWHDGGNHQJCJLHFJMCAUPSLHBMZZVMATAWWLAHNVRYGXBQDWPOSMAGVDBJYACADEHXFXIMCEOSEZF");

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
    msg.setTimeStamp(0.1865623304366234);
    msg.setSource(39739U);
    msg.setSourceEntity(22U);
    msg.setDestination(62599U);
    msg.setDestinationEntity(7U);
    msg.name.assign("LVTCJUCLRMKMBOHPEDNWMEXWDAJVSLOPTETSZFGACWOHFUKYQHDRTNMODZSBAMRRAGEAUURZONCPLSAKYBNEFESVQHIULRHOGOAJAQBKXZSGYBDORHBWJHSQKBTYYKVGEQKGFRXJPMGAUCDBQJYWLLAWKSXVFTZSYPIKIXQJINMIYZMKTVDUECZCHINIZLFWRMJIQFTEN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("AHLVFNLIQFJGQYEFITHTXRPRHLLRLLMABTGTDLTJVVOEEHSLOMVVXKXWYYAQMNDJMFHWCVFUQXPBUUSBNOVYZXIPQRGYHZLMRGBBROUAAYMMBSCGBTMZMDXWBNCWTQCNAXZJFKZJDGMFPIPVYHKYNJYSIXCDWGISOQCZUSNFKZ");
    tmp_msg_0.value.assign("XMAWODQPOIZMNGTYLMPIGGUOCQFGMVXWJHESEANSWAUHFUWBOIGHIJSFNZEQPHKKBKCTVRQLXPQTPTZHPWZBZEJLBDONYKKDQOVBYSCPFTUCXSQEVIXIRCGJNXNXPUOICUJFDRKRBHWMLMODJHUURWMZVAODRAJKMCETKNIUEMKXKNBYJLZERYWYMFSENALWUZLJXYW");
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
    msg.setTimeStamp(0.1178486237522981);
    msg.setSource(14144U);
    msg.setSourceEntity(215U);
    msg.setDestination(64186U);
    msg.setDestinationEntity(250U);
    msg.name.assign("TIMJSTAVFQBWMGVHEAJECEEKLEOCJNGFUTSMSSUBRHNBDISHFOGZHWNTREIZWWECWVRAXMIQANWJIUIDUYPNTBMDMILCEFAIAQUYOROXUXLWASZBSMKQNYZFJKHMYLRQRHJCZFDUPVDXTOGFVRWYOCKF");

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
    msg.setTimeStamp(0.6420153033730572);
    msg.setSource(18153U);
    msg.setSourceEntity(19U);
    msg.setDestination(6343U);
    msg.setDestinationEntity(206U);
    msg.name.assign("CGZJOHOECVEMEQXWZSPLIQLMYQPMGNJIGFCXFYDLPLBBKLOSBRPPIWQCUCUVDDHWXHNHEMQWRROTOBSHPWZXPIPRBKMNMNWQRJBIRYSNWTWZKNMBVRJGDSHTVAGCIKEUJLSGZIAYIYRHVOXKJHDCSXGMVBYFLLEFJCNURUQPUYADVBKYAYVDKUESTATFJDXHLNXK");
    msg.visibility.assign("VNCHYOFSCUMIFNXHPVUPWSWPXWFMHKZUIVFGWYQILTPVEBSMIAZXNOASACSLNZOQYJPCZBNCVPLFOTZGFTEXFWFLXVPKBNJRYKGIIJKCYZXEDTALWKLSTZBUYODCUAGNEBGESAYWMQVHLOQXHKTGOEURDTJATSZKZDMUUEBBMRNRWJRABOPNTNJDRVYDYIDAQEYMAIWHGHD");
    msg.scope.assign("MVPWAPCKMZUWIADDLMNSYTSKTRAVXBJOGCZIHWGZTSYPBQBGIHFHMCUDDSKDN");

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
    msg.setTimeStamp(0.22710895796706143);
    msg.setSource(59771U);
    msg.setSourceEntity(220U);
    msg.setDestination(48082U);
    msg.setDestinationEntity(166U);
    msg.name.assign("SXCZHOQZHGPDEWOPCYBPTIKYNVTEIYXKMHVTEWIIODMWJRRRLUSLHGNCLXFVPEWJNUAXWIQXZOEAJFGGXXBHMQDCEQAQDOCBAXVUJBWRQPZYGUKRDSKIOIAWSICPKKJJAYTEZYNWHZVGLLNJDMGYYJNMVSBLWDPLIGDPRNKZQFESFSDVGRRCTMECOFQXHBKTBNVAHFFKIZUFTAFHUSLPNOEBJZ");
    msg.visibility.assign("LLYWZHYYNJPPSIXWGTRMNBQVKUXOCMFIIUEASQEDBQLSLKXTNDDGHXLQESQMTDGPCVBBBUSJMVYYTVPZUAMILEHDFQZRCJGMXKPTOTYUFCUIJSTRCZAZJHGSWGCTDUSE");
    msg.scope.assign("OVODFYNDRZRWZXPJURAHEBJOLJZUUTBXVIOJGRSELOTCNQZDBSBKFXDDGOJJHGTFAFYSWFBYHJVACKOYTPCMKFSOWWDAOMJWFLGMAZWGYVPYUPJLHASAIZFPIZTSBKPVKWEOGMKNNMHPUESKHNHCGUYZECITVLD");

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
    msg.setTimeStamp(0.35451740138549537);
    msg.setSource(49448U);
    msg.setSourceEntity(169U);
    msg.setDestination(51567U);
    msg.setDestinationEntity(86U);
    msg.name.assign("MXQKZSXTGEPENAYYPCBOFNKJXVTVGTGWLTGOQHCITMTQXOYRNSXFPLIDZAJKEFQXLCDAEPYJJIZVUORWCURBGKDZMMJVDXVNUCPRHRDGEKIPBWYDULBQOYIGTHNHPOIUQWXFH");
    msg.visibility.assign("UCHNFYKIXOCCKRRQMVZ");
    msg.scope.assign("MRAQHRCRXHUZDPYMHVEJQKJNYWCDFAAEMVWPSUYQOWFVNRDZVSUDPPCFFLC");

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
    msg.setTimeStamp(0.6758073125695462);
    msg.setSource(43101U);
    msg.setSourceEntity(87U);
    msg.setDestination(7495U);
    msg.setDestinationEntity(208U);
    msg.name.assign("LQYUCAIVKHNEWDCXBBXRUDXRSOYYZJQFBUAKCJYKPPTHBEPVRQVWEIMILWMJMGDXPQCDFVRBSDHSFNNALSKTOCPXLEZZZGLTVYNMHTYIXJYAZAOVUHEBGDVHCESWTASPJEJMRCYDKMUKMNBGQXXOFIKWRLWVNGUP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KWICMUBAZGVVIUWCRENAWQYRFMOMJTKLWRHNHOKTFTGEUXCCDZVSHLWORXEHOFIKIALJRHDBYFBQXTZYFQSUAWNMMPOULYK");
    tmp_msg_0.value.assign("FIHLOBNMVNUALKAPTXUGVBJGXJZKMRXRPHYVHCOAELXDTCXYXSDDQRQZOPUSWJEMJATZZDFEFKSIBHJHMIQVIGOOOZRVGFJXXXBSGMTPKOZEJNVOBTRNNKSMPLRJZSRAENRZFYBHXG");
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
    msg.setTimeStamp(0.6009959758125326);
    msg.setSource(43793U);
    msg.setSourceEntity(206U);
    msg.setDestination(48062U);
    msg.setDestinationEntity(200U);
    msg.name.assign("NBIPTEKRSJLDZXEJDQXNIVZCNKYUNXOGACRUACUZIHBIVBZDRKWMOWALKAHEAZMHLCFGSQWFCIQOUZOVTFJEJPHSF");

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
    msg.setTimeStamp(0.8157616902657805);
    msg.setSource(22326U);
    msg.setSourceEntity(63U);
    msg.setDestination(50106U);
    msg.setDestinationEntity(214U);
    msg.name.assign("GCWIHMMQGZHJFSYVEIXCZUAOXIMVDXDABSHPYHHOUECVBYWLRUJFQTHJKVTIQGIEYDZXAWFBRKRDZLZQSJIPSUBAPTGEEHGLCDPQZIDKUUENLGLHLAIZDVAVMOWULWLRMZHMZMFDWNPQCKLCNN");

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
    msg.setTimeStamp(0.16797224254637588);
    msg.setSource(23422U);
    msg.setSourceEntity(33U);
    msg.setDestination(21208U);
    msg.setDestinationEntity(107U);
    msg.name.assign("ETLKKNTIHXHXXGWYXRJKJLCX");

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
    msg.setTimeStamp(0.9979584127674451);
    msg.setSource(31951U);
    msg.setSourceEntity(159U);
    msg.setDestination(31839U);
    msg.setDestinationEntity(20U);
    msg.name.assign("KNYSPPEFKCOWMETUMPZCOFTZSTYRKXZPBKDOJJOVYUHUVDWMJVHNOLMIGWXMRGAABVNSJDBAAGEKPJVSTWZCKEPTQHCFFMAPRJXOBIFFQUEJLCYWKBSGDLZNUCDYGLQEJHEUJVATEGNSWYLCBQMEYRAMSTHNJWGEKBGOHFDCPUZQIZFFHMGGXQTDIXOSAXIRBVNL");

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
    msg.setTimeStamp(0.9263053818915011);
    msg.setSource(35240U);
    msg.setSourceEntity(198U);
    msg.setDestination(33954U);
    msg.setDestinationEntity(131U);
    msg.name.assign("QXVDATYBSVZEWCDTPWUKRGRSNMMCGQWWYLVDIFSYSEXFYXJBXAUHPJRTITLMWDDSYJGACREOHBNMNMJNPGDPLDJZ");

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
    msg.setTimeStamp(0.32535880136220896);
    msg.setSource(21102U);
    msg.setSourceEntity(201U);
    msg.setDestination(17490U);
    msg.setDestinationEntity(132U);
    msg.timeout = 990473526U;

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
    msg.setTimeStamp(0.8964040690261147);
    msg.setSource(65259U);
    msg.setSourceEntity(227U);
    msg.setDestination(32049U);
    msg.setDestinationEntity(35U);
    msg.timeout = 3438372249U;

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
    msg.setTimeStamp(0.5468726898069455);
    msg.setSource(10U);
    msg.setSourceEntity(164U);
    msg.setDestination(21021U);
    msg.setDestinationEntity(189U);
    msg.timeout = 3202661358U;

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
    msg.setTimeStamp(0.2473156526780359);
    msg.setSource(839U);
    msg.setSourceEntity(148U);
    msg.setDestination(5003U);
    msg.setDestinationEntity(204U);
    msg.sessid = 3772605080U;

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
    msg.setTimeStamp(0.8359736840954356);
    msg.setSource(41947U);
    msg.setSourceEntity(47U);
    msg.setDestination(6992U);
    msg.setDestinationEntity(112U);
    msg.sessid = 1874469196U;

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
    msg.setTimeStamp(0.6800103420644136);
    msg.setSource(56648U);
    msg.setSourceEntity(70U);
    msg.setDestination(18360U);
    msg.setDestinationEntity(41U);
    msg.sessid = 1924500798U;

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
    msg.setTimeStamp(0.03073087762071558);
    msg.setSource(42162U);
    msg.setSourceEntity(245U);
    msg.setDestination(30360U);
    msg.setDestinationEntity(15U);
    msg.sessid = 1283432298U;
    msg.messages.assign("YEKILZGAWGWJPWOXECKXLFUODKUVQNDMFBIVRSGBUOOURQDKGPAYJTMJCYGFDFPQGIQHZMJLNDBZRUZSPBPKL");

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
    msg.setTimeStamp(0.7826603764981858);
    msg.setSource(16311U);
    msg.setSourceEntity(106U);
    msg.setDestination(31620U);
    msg.setDestinationEntity(29U);
    msg.sessid = 2702060109U;
    msg.messages.assign("FHCAAIMNUGPGKARYYPSHLHNSZONMSQRTEGSZSPTULQYXWCMMHBXBEKLVVNRWOIMAXENDCYDKVPAQDWXTTXQKUYMBTJVROFPWFCSVUJWNGDFQWTKQJIMCFWINJRUOITRVPLFDAZASECDVBFHLELA");

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
    msg.setTimeStamp(0.12006423540776678);
    msg.setSource(50380U);
    msg.setSourceEntity(173U);
    msg.setDestination(5594U);
    msg.setDestinationEntity(137U);
    msg.sessid = 1325295351U;
    msg.messages.assign("XSNWHJTYDSSUZYLRQRMBENTCMJKNDIDFPCYZRRUHTFRXLOBFPICRWIKOKCMUOIRZHYLZLSDXLABKHHWTWLQEZMLVKJAWSC");

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
    msg.setTimeStamp(0.6763877756438307);
    msg.setSource(59902U);
    msg.setSourceEntity(187U);
    msg.setDestination(56133U);
    msg.setDestinationEntity(157U);
    msg.sessid = 314259391U;

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
    msg.setTimeStamp(0.8832513901933756);
    msg.setSource(3195U);
    msg.setSourceEntity(52U);
    msg.setDestination(51677U);
    msg.setDestinationEntity(107U);
    msg.sessid = 1625785720U;

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
    msg.setTimeStamp(0.49545194450524177);
    msg.setSource(22191U);
    msg.setSourceEntity(200U);
    msg.setDestination(65088U);
    msg.setDestinationEntity(65U);
    msg.sessid = 1028830832U;

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
    msg.setTimeStamp(0.9010780325776038);
    msg.setSource(21517U);
    msg.setSourceEntity(235U);
    msg.setDestination(55934U);
    msg.setDestinationEntity(148U);
    msg.sessid = 1952189441U;
    msg.status = 214U;

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
    msg.setTimeStamp(0.9818113612593993);
    msg.setSource(49876U);
    msg.setSourceEntity(94U);
    msg.setDestination(17968U);
    msg.setDestinationEntity(120U);
    msg.sessid = 4153924826U;
    msg.status = 218U;

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
    msg.setTimeStamp(0.42614802945768104);
    msg.setSource(54659U);
    msg.setSourceEntity(131U);
    msg.setDestination(33121U);
    msg.setDestinationEntity(149U);
    msg.sessid = 4064611271U;
    msg.status = 36U;

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
    msg.setTimeStamp(0.13259093537462896);
    msg.setSource(34272U);
    msg.setSourceEntity(94U);
    msg.setDestination(17736U);
    msg.setDestinationEntity(195U);
    msg.name.assign("SPXOXHYIJZMPFCWOUSRTXULIIEZQDGSOIVRFVRUQBSHCQMEVBTVJUEJNJPLGKEBWRZKKQMYMAEAIMPHKBGAALQWYSROAPLSUUDYRTKGIJBJTIRGZXMDVABWVGNTEAOHDVAIFDNBDPPMHQBCKJSFTUKNW");

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
    msg.setTimeStamp(0.8360494731177303);
    msg.setSource(7185U);
    msg.setSourceEntity(17U);
    msg.setDestination(42861U);
    msg.setDestinationEntity(58U);
    msg.name.assign("WWEDXYDQBRKOSAWXTVFWYRGILGMDRNIBOSYTTRFSLOGTLEQODBVHAQSBPBLKKI");

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
    msg.setTimeStamp(0.22188250455674496);
    msg.setSource(41784U);
    msg.setSourceEntity(197U);
    msg.setDestination(56733U);
    msg.setDestinationEntity(117U);
    msg.name.assign("OOMWHGKLETTHVYNFJNYMNIPJJSRVEVCLDFAHXKZHJIBTZWZYRT");

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
    msg.setTimeStamp(0.8917527721433343);
    msg.setSource(47771U);
    msg.setSourceEntity(1U);
    msg.setDestination(35134U);
    msg.setDestinationEntity(217U);
    msg.name.assign("YRRYGCWSTDIQRPMGSCSJZTWERVUPZWTBMFXZKEVNNHZRNKGOSFQEDSPASBMXHNWKIEBMQNAZXACOKBGHLYKQHDTELZFZFLJAXNITBWETDSWQRUVJMQRAIEFLZWCEJPFUWFXOIGRASVGTIVPVXXVLGXMTOPCQLUSVXBDYYKINKAPOPDEWMIAOJJBZYLTQUAPNFIRKFJIUGY");

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
    msg.setTimeStamp(0.9149813933764105);
    msg.setSource(59727U);
    msg.setSourceEntity(110U);
    msg.setDestination(48987U);
    msg.setDestinationEntity(69U);
    msg.name.assign("QMZXWNWNHKRKNOIDNKGHZXUJPBVMVVDQIRFQONYHKNCLCEFLYTZNKYGUUDEAIGJXTVLPZEECCUPJLPSSHCXTJOAWHSBGYGFTYWXIWDHDRWHKCAEWUPSBIDRTPWJSAXEBSLTMQLQUW");

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
    msg.setTimeStamp(0.9934548120269675);
    msg.setSource(34047U);
    msg.setSourceEntity(32U);
    msg.setDestination(27698U);
    msg.setDestinationEntity(236U);
    msg.name.assign("GDZBRTEQYFCFJMDVWRTDMBHAQXIXYIGBAHMBOQVOBPQUPHELLONBRVAPWIQBJIGAKODWPSJPCKRPADUWWNNESMHGVHRBIPSRHSWOKTBKLKFTVLYIJQEGFBGJTC");

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
    msg.setTimeStamp(0.27065063103215414);
    msg.setSource(33089U);
    msg.setSourceEntity(149U);
    msg.setDestination(10638U);
    msg.setDestinationEntity(193U);
    msg.type = 78U;
    msg.error.assign("IZTJWEGHDDSMADFB");

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
    msg.setTimeStamp(0.9043416720485288);
    msg.setSource(22982U);
    msg.setSourceEntity(143U);
    msg.setDestination(27948U);
    msg.setDestinationEntity(194U);
    msg.type = 6U;
    msg.error.assign("PGRXXMDMPIRMEATAPOMJXJQYKBFNNSNABTJJGUESCVAELSTOOVDQSQBCHRDHHZKOYRKABWFLURBRIHSLIKYCTFMQAGJNEOWCYDZUCPWRDXWGZKTXGQXDFVUHCLQRTLWPEZNWOWVSIFFHVZMTGZHYECSDMOPIBZGACCLIMUHNNXA");

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
    msg.setTimeStamp(0.2888013370734732);
    msg.setSource(27820U);
    msg.setSourceEntity(31U);
    msg.setDestination(31684U);
    msg.setDestinationEntity(136U);
    msg.type = 168U;
    msg.error.assign("YWHFHWHEJVQIBZTWJHOLZQZRHHGROGRCEAKWDJUMLVRZXMCJQPMWLKWCSCRATBQJDKUEWDHDGEAANZOLEBXJMZYRABPEGEYIWVLTSPQHIJIUSTKRSVOTKQINFZLYSRCKSRBKLDCJEMXIBUVQFXIFWCVDONFFZSHVMSQLYPFYJDBPYZDKAXDUVXXIOHETBOTBWOYPSALANFMAXCANQXGPPTUGEGO");

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
    msg.setTimeStamp(0.5820154199920907);
    msg.setSource(32286U);
    msg.setSourceEntity(103U);
    msg.setDestination(41257U);
    msg.setDestinationEntity(224U);
    msg.seq = 37541U;
    msg.sys_dst.assign("YESILOKQWGOQUPNWEUUNOWTGTLPPYABOBYIFINZIPMEOXKVKLJYKSCOXRPDQACSBWXBPHYPQJGUKAJMTCAEUZDXEZEOIGJSUKWXBQNSLIFAAWTVDJVCDDHVQLCHVDBXQOZPCZSGMRCLCTGH");
    msg.flags = 195U;
    const char tmp_msg_0[] = {-45, 123, 98, 62, 94, 11, 85, -100, -119, 57, 36, -97, -88, -53, 99, 66, -37, 57, 23, 55, 99, 109, -24, 37, -60, -11, 70, -93, 88, -126, 118, -42, 120, -110, 30, -119, -44, 118, -28, -8, 63, 11, -9, -121, -64, -84, -50, 52, -29, -31, 107, 61, -45, 107, -51, 73, -40, 91, 32, -70, -78, 11, 46, 116, -75, 96, 41, 52, -112, -2, 14, 47, -96, 34, 14, 91, -19, 6, 109, -52, 93, 20, 35, 54, 88, -112, 102, -76, -71, 51, 101, 104, -12, -31, -71, 79, -8, 105, 96, 45, 16, 74, 93, -53, 110, 106, -34, 7, 110, 57, 105, -101, 116, -78, 38, 51, -24, 30, -42, -25, -100, -114, -120, -45, 117, 15, 62, -78, -108, 86, -100, -44, 118, 51, -1, 120, 15, 62, 50, 98, -95, 106, -69, -86, 43, -69, -115, 89, -63, -103, 118, -110, 125, 80, -106, -45, 122, -34, -86, 34, 13, -2, 120, -80, 97, -124, -79, -92, -71, -118, 79, 29, 66, 86, 114, -93, -116, 68, 48, -98, -7, 91, -126, 34, -82, -66, -53, -127, 52, -13, -92, -31, -37, -54, 80, -88, -74, -90, -87, 126, 43, -37, 113, -43, 74, 7, -32, -59, 76, -26, 42, 77, 85, -99, -83, 48, 99, 40, -14, 48, -97, -66, 70, -40};
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
    msg.setTimeStamp(0.3146698051438013);
    msg.setSource(28415U);
    msg.setSourceEntity(157U);
    msg.setDestination(27155U);
    msg.setDestinationEntity(45U);
    msg.seq = 64219U;
    msg.sys_dst.assign("DFHULVSHPLPKYZVCSAKGFZHTZQNSSJTYDCDTUIULOVZYPMWYIFOTEGDMXIKEMUMXFCRUCCNO");
    msg.flags = 89U;
    const char tmp_msg_0[] = {90, -64, -40, -85, -81, 13, 37, -49, -36, -93, -33, 28, -117, 78, 118, 21, 115, -71, -126, 114, 7, 40, 85, 119, -73, 19, 121, 125, 20, -80, -106, 5, -73, 101, 114, 100, 97, -107, 102, -48, 18, -100, -41, -67, -19, 114, 101, 93, 37, 61, -50, 105, 112, -10, -15};
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
    msg.setTimeStamp(0.8251574888988146);
    msg.setSource(18699U);
    msg.setSourceEntity(161U);
    msg.setDestination(56273U);
    msg.setDestinationEntity(219U);
    msg.seq = 40846U;
    msg.sys_dst.assign("RBMEUJQUFKPCFNHANLVGAJBOEOIQKDFJLYWXOZSKNIZJOQVBYRLAFKKNQSVTSLHLQNLMWCOGVBDLDYIDMENOXJGZNVCRMXEKICXCVBPUBJPVTFTTIQSKPKXUXGQREHRCUNTUCARPZXDMTHUGWFBKZIDYDGPBOMROXYVYEAPHHTGWEVJQHAHUXJCBJHFZCCEALNDSGSOTZVHSMKADSWQQG");
    msg.flags = 234U;
    const char tmp_msg_0[] = {-117, 122, 80, 74, -24, 117, 48, -75, 32, 16, 19, -78, 95, 55, -24, 77, 41, -76, -26, 110, 46, 94, -79, 125, 34, 52, 120, -15, 11, 34, -2, 114, -15, -69, 113, -7, -2, 75, -124, 53, 117, 8, 116, 82, -123, 21, 58, -83, -127, -66, -30, 77, 12, 102, 102, -91, 67, -96, 115, -1, -36, -18, 97, 73, 17, 120, -43, 75, -19, 104, -119, -91, 116, 21, -11, -91, -117, -36, -8, -36, 93, -47, 0, 89, -37, -2, -91, -65, 29, -42, 81, 113, 46, -72, -96, -39, -101, 50, 28, -50, 66, -58, 116, 106, 43, -34, -7, -92, 14, -96, 72, 10, 14, -52, 107, 124, 64, -1, -88, 26, 58, -32, 106, 16, -67, 35, -95, 78, 123, 89, -114, -89, -77, 15, -82, -54, -30, -18, 20, -69, -50, -128, -43, 2, 28, 98, 114, 112, 39, 97, 120, -81, -96, -70, -95, -62, -61, 76, -51, -4, -28, -69, 72, 74, 32, 43, -5, -67, -77, 76, -31, 123, 115, 88, -105, -86, 63};
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
    msg.setTimeStamp(0.616810199953734);
    msg.setSource(12925U);
    msg.setSourceEntity(187U);
    msg.setDestination(3583U);
    msg.setDestinationEntity(95U);
    msg.sys_src.assign("UTJVACXKJBYJFCSYXVEGRJCQWSSAVOEGXMJYLSWOPOGXKNMWWRYDDXPVTEKQXEFNIZDFHVIDCZUKPVCXIAKZWRUTEANPFJRWPBRZFWCLQTLBSCHZUHZHYYARPPDHLBKTXBOQYGMZIURSTMIIIDLGIUOAGTKCPYRCRSBJTTSYAENEMHNHWGHDLNPOGOJVUBDWDZDEYBAEFFUFASTIPMQGMXSNOHBLBN");
    msg.sys_dst.assign("QMHUMXRTZIBBEUWUCWUPOBRRNHMVPVSPLHCJRLXUMJFVIEPWTSHDRVQODHKMOFZJOKOVRZIYADQXQBYXCJKGYVW");
    msg.flags = 182U;
    const char tmp_msg_0[] = {-110, -86, 105, 119, 36, 35, -78, 65, 66, -116, -112, 83, -7, -50, -34, 103, 113, 83, 27, -74, 94, -66, -8, 49, -67, -76, 41, -72, -92, -33, 15, 87, 57, -71, 118, -104, 121, 26, 86, 20, -25, -79, 57, 122, 84, -108, 23, 75, 12, 10, -79, 31, 30, -53, 97, -83, -60, -9, 12, 50, -5, 20, -103, -90, -62, 28, -32, -15, -61, -80, -95, 70, 12, -110, -52, -128, -86, 73, 35, 18, 20, 100, -88, -41, 51, -123, -77, 126, -37, -128, 0, 41, 118, 87, -124, -118, -126, -103, 19, -71, -101, 41, 0, 90, -32, 22, -98, -97, 21, 35, -59, 96, -77, -29, -78, 79, -106, 115, -63, -44, 1, -37, 49, 22, -8, 87, -77, -31, 37, 22, 2, -78, -84, -68, 73, 39, 94, -73, -118, -25, 20, -55, -19, 93, 63, 44, 84, -118, 80, -31, 73, -16, -34, -118, -46, 115, -27, 102, 97, 67, 76, 88, -38, 99, -72, -21, -14, -73, -111, 84, -46, -116, 96, 49, -11, -117, -120, -83, -21, 119, -9, -117, 54, 44, 102, 58, -28, 48, -106, 76, 124, -52, 36};
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
    msg.setTimeStamp(0.7812951467609267);
    msg.setSource(42296U);
    msg.setSourceEntity(97U);
    msg.setDestination(40386U);
    msg.setDestinationEntity(143U);
    msg.sys_src.assign("GRHSBECXMQKLJUOXNQTZISVTHLKNIZWWOTAXYFZCATEKGNOFCCIRDCIPBT");
    msg.sys_dst.assign("NDBGMPIGRPTIHNQHNCXIHYWZIBGBTQULWFAJSCGYREXZIUTIVLVGVMZVMJTQMESJSXJCQCZVRBQUPTIPLTELNXYYPJOQERKYRZLCDHDYXTFAWNQNOPLWEMNQFJBQ");
    msg.flags = 141U;
    const char tmp_msg_0[] = {38, 3, 10, 22, -105, 27, -114, 76, 72, -91, 65, -32, 40, 26, 37, -88, 47, 81, 115, 96, 7, -36, -116, 52, 64, -9, -11, -50, 30, -73, -113, -15, 2, 52, -114, -7, -22, 90, 121, -124, -54, 47, -31, -16, 75, 20, 59, 13, 5, -101, -83, 37, 125, 0, -12, 19, -28, -72, -33, 103, -29, -106, -110, -39, 7, 75, -91, 31, 118, 63, 19, 44, 13, 32, -123, 50, 27, -124, 35, 17, 33, -29, 84, 61, 111, 122, 111, 33, -77, -14, -36, 51, 105, -99, 30, 53, -91, 62, -114, -119, -15, 65, -69, 57, 92, -15, -67, 125, 69, 23, 35, 65, -37, -58, -75, -41, -72, -42, -60, -122, 16, -37, -14, 57, 83, 65, -125, 51, 80, -16, 119, -82, 50, 31, 111, 124, 105, -100, 107, 2, -19, 120, 89, -71, -75, 12, -92, 32, -86, -15, 74, -12, -87, -12, -12, 77, -104, -85, 29, -29, -26, 26, -83, 115, -18, 35, -118, -120, -37, 48, 72, 42, 1, -32, 54, -118, -33, 49, -20, -103, 105, 22, -19, -86, 35, 117, 16, 92, -102, 120, 54, -107, -73, -35, -89, -5, -94, 94, 49, -50, 95, -44, -23, -19, -119, 84, 83, 41, -107, 58, 99, -77, -7, -100, 99, -127, -85, -77};
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
    msg.setTimeStamp(0.7455406081347323);
    msg.setSource(39934U);
    msg.setSourceEntity(92U);
    msg.setDestination(34401U);
    msg.setDestinationEntity(183U);
    msg.sys_src.assign("KEGWVHQUGTBBWJPWFBLHQTGBWUNJZMEZGCQVCHMJJDKCNLBSFZGAIIVTEEEQWYNNZXLHMRYTCSINSLAFTWFMLRAHKOVHYQESRCDXBPDAOYYBYCZRAAXJFZSEYTJJVZGWXAFOKNMXTULCQTELPVNRMULFXMGFKO");
    msg.sys_dst.assign("BLOLGLPDTFELFUCZRGSPFUFU");
    msg.flags = 57U;
    const char tmp_msg_0[] = {-31, -120, -60, 7, 4, 52, 8, 78, -70, 76, -47, -88, 22, -9, -12, -118, 37, -45, -12, -19, -53, -26, 30, -39, -92, 46, -2, 63, -84, -22, 93, 103, 80, 70, -37, 2, 104, -110, -31, 110, 94, 123, 111, 101, 115, -85, 51, -31, 14, 88, 11, 99, -121, 95, -37, 70, -101, -84, -15, -107, 37, -54, 79, -115, 31, -17, 13, 76, 44, -62, -46, -115, 34, -56, -16, 68, 100, -73, -6, 54, -9, -96, -6, 59, -84, 8, -86, 86, -98, -13, 61, -126, -68, -15, 60, 123, -23, -69, -1, -64, -79, 9, -79, -79, 60, 15, -55, -92, -68, 99, -72, -114, -19, 67, -37, 0, -31, -12, -108, -26, -106, -103, 48, 117, 60, -5, -16, -92, -101, -3, 7, -76, 20, 11, 14, 73, -124, -127, 4, -107, 120, -108, -91, -84, 53, -95, 22, 28, 24, -14, -65, 46, -109, 37, -104, -45, -111, -63, -59, 87, 102, -122, 6, -123, -92, -29, 24, 92, -32, 44, 12, -119, -24, 26, 117, -91, 122, -107, 82, -91, 92, 96, 93, -94, 13, -8, 18, 61, -16, 46, 100, 33, 80, -46, -61, -27, -11, 40, 97, -95, -108, -118, 118, -101, 122, -36, 42, 124, 36, 120, 19, -101, 81};
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
    msg.setTimeStamp(0.6846396487268279);
    msg.setSource(37227U);
    msg.setSourceEntity(6U);
    msg.setDestination(33760U);
    msg.setDestinationEntity(254U);
    msg.seq = 19210U;
    msg.value = 157U;
    msg.error.assign("ROZNUXQRLNQRSCEBJUORIDNTAAGDGDZFANXBLXFJZNKOCJKFWRIPODEVEKVGOSWMSVBTHOFYPLMNJYVEMGEURWCMIXPXGBSOVMB");

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
    msg.setTimeStamp(0.8052168993629846);
    msg.setSource(16957U);
    msg.setSourceEntity(73U);
    msg.setDestination(54041U);
    msg.setDestinationEntity(26U);
    msg.seq = 4165U;
    msg.value = 81U;
    msg.error.assign("KDOZYKQTEFUFXWDQWZUYUPJKNCHBMBDIRRWSLRPIHNNVNDKSHAJUXLMJCSUEXAIOEESKOVNJLDJBVUAIQBFLYGCIAEQERAJDCOXZPKUWSYZFOIYKYPBZVOZNKXEVXWAPSTKZCRLVGLNSEMDSMTXHPHBQWUMHRFRELGPFJMXDHVTBNYRNTWAOSBGEFCGFGIPAYI");

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
    msg.setTimeStamp(0.3582017213719588);
    msg.setSource(36851U);
    msg.setSourceEntity(206U);
    msg.setDestination(27131U);
    msg.setDestinationEntity(41U);
    msg.seq = 46781U;
    msg.value = 29U;
    msg.error.assign("CBIODJTOBVXJHKGYHIHKEHGYUNKPEUOMMLPPVOGOHWIMFAMHWRVNTBQBGGACUNUCHIZUNLZXWFRAARORVFVNFYFDDTLSJMUTIEQXQRUWETIBBRZLZTQSDCXDPDVIEFPKRGKZBYJSYTQBWHFJTYIYROSNJXAXYKCZKMWVWQEQKNXZBYKCMCXLCFATYEHNE");

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
    msg.setTimeStamp(0.3410651782012205);
    msg.setSource(33221U);
    msg.setSourceEntity(123U);
    msg.setDestination(48933U);
    msg.setDestinationEntity(27U);
    msg.seq = 21038U;
    msg.sys.assign("KLWWSECFDVQZXQESRPMTFJMFZHIIHFSHVONRMHPCCYIYKHTRSVUTUBNYGGQTCEDNDWRSQNIQSICTAJZCMEOAXCXCVAXBOAFWRZPASBHRMKZVKLQBDGTXPTYQYUFIGONWMLKHFUDJWDIBLIILZPDDJRBEVSEXKKFJVMJYAFPBWHUIRLMONRWYUJQAZDLKSHKOVPNGOZAEUWHWGLYCVGJUEGNYNBPYSJUKLO");
    msg.value = 0.3923253408521892;

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
    msg.setTimeStamp(0.5070724345994323);
    msg.setSource(36601U);
    msg.setSourceEntity(6U);
    msg.setDestination(56561U);
    msg.setDestinationEntity(138U);
    msg.seq = 46146U;
    msg.sys.assign("LNUUBQDOVWBXCMALAKSLAISFJBPUXKMQACJBXLJDKEECVEJOTHJCHOQWPNZUZKINJFSTGQRQKGHZSMCRKJBVVIOIKZADZOOFPIVRYKIFUMGXPXTRDAPSJIRLHMLZQYSUWSFAUOTXRMEGCWNFOYSZEJQPYVMRFKTHJHTTNIIVSNNGEUZ");
    msg.value = 0.3976392639232206;

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
    msg.setTimeStamp(0.46871906220678916);
    msg.setSource(2027U);
    msg.setSourceEntity(114U);
    msg.setDestination(48732U);
    msg.setDestinationEntity(207U);
    msg.seq = 24415U;
    msg.sys.assign("WEBLVHKLEETDUWYCZDJJLAKIVIZNLURZNTFNIFDJQPLLMGKOEBXBCUFXMQAOIXHDTHDPWWVGPWNJFSNEPLSBEZDAJQRRAQUFXHMVPQUOJVBAKKUCFRJNGCBZQVTQCYRNSYGCJGKXRRIWVOQOCQKISXHXEXGWLGZERMGHOVITPC");
    msg.value = 0.6059254181767874;

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
    msg.setTimeStamp(0.7782448633349047);
    msg.setSource(29608U);
    msg.setSourceEntity(252U);
    msg.setDestination(57774U);
    msg.setDestinationEntity(204U);
    msg.action = 112U;
    msg.longain = 0.7578501663826109;
    msg.latgain = 0.5766435299472847;
    msg.bondthick = 3896389246U;
    msg.leadgain = 0.1805733350774108;
    msg.deconflgain = 0.36128854602038896;

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
    msg.setTimeStamp(0.2620456841439982);
    msg.setSource(64762U);
    msg.setSourceEntity(161U);
    msg.setDestination(53499U);
    msg.setDestinationEntity(98U);
    msg.action = 135U;
    msg.longain = 0.14584005123586874;
    msg.latgain = 0.4179924655220846;
    msg.bondthick = 3167239064U;
    msg.leadgain = 0.6874385385845689;
    msg.deconflgain = 0.6601519699548513;

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
    msg.setTimeStamp(0.3455853057992011);
    msg.setSource(54226U);
    msg.setSourceEntity(202U);
    msg.setDestination(56003U);
    msg.setDestinationEntity(248U);
    msg.action = 95U;
    msg.longain = 0.773831477796939;
    msg.latgain = 0.705896212415997;
    msg.bondthick = 1857300124U;
    msg.leadgain = 0.6074444450106508;
    msg.deconflgain = 0.4461450348730056;

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
    msg.setTimeStamp(0.5141441109478649);
    msg.setSource(36576U);
    msg.setSourceEntity(52U);
    msg.setDestination(35908U);
    msg.setDestinationEntity(171U);
    msg.err_mean = 0.05793153034262388;
    msg.dist_min_abs = 0.2425987445159743;
    msg.dist_min_mean = 0.24809165814212208;

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
    msg.setTimeStamp(0.18199985614898506);
    msg.setSource(51108U);
    msg.setSourceEntity(70U);
    msg.setDestination(1626U);
    msg.setDestinationEntity(115U);
    msg.err_mean = 0.18782444471962634;
    msg.dist_min_abs = 0.06830135794190684;
    msg.dist_min_mean = 0.26642307761590156;

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
    msg.setTimeStamp(0.16341214826747508);
    msg.setSource(28742U);
    msg.setSourceEntity(77U);
    msg.setDestination(20144U);
    msg.setDestinationEntity(205U);
    msg.err_mean = 0.024193487882430587;
    msg.dist_min_abs = 0.3368757840955261;
    msg.dist_min_mean = 0.8982970664320588;

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
    msg.setTimeStamp(0.4860706784663634);
    msg.setSource(29220U);
    msg.setSourceEntity(167U);
    msg.setDestination(58191U);
    msg.setDestinationEntity(173U);
    msg.uid = 63U;
    msg.frag_number = 2U;
    msg.num_frags = 56U;
    const char tmp_msg_0[] = {-9, -24, -106, -87, 88, -63, -96, 44, -62, 24, 0, 62, -112, -47, 47, -49, 10, -48, 52, 13, -116, -119, 95, -32, 102, 31, -92, 77, -26, -31, 121, -81, -115, 118, -93, -91, -30, 30, 27, 6, 85, -22, -114, -46, -91, -80, -79, -111, 72, 25, 39, 49, 83, 14, 35, -75, 118, -51, 33, -93, -94, 16, 5, 33, -12, -97, 79, 13, -37, -29, 50, 30, -63, -95, -24, 38, 105, 118, -10, -23, 77, 31, -53, -32, 44, -25, -46, -82, 21, -99, 74, -82, 120, 68, -95, 33, 116, 75, 120, 50, 66, 12, 113, -83, 101, -103, -70, 21, 23, 86, -11, 61, -9, -56, 103, 40, 53, -9, 11, -80, -124, 6, 34, 0, 126, 51, 51, 64, 115, 82, -5, -117, -38, 66, -4, -124, 94, 1, -9, 9, 30, 53, -124, 5, -46, 20, 24, 114, 118, -80, -36, -66, -36, -23, 112, 72, -5, 59, -117, 40, 108, 5, 27, -86, -37, -106, -102, -48, 67, 8, -40, -36, -58, 11, 95, -86, -7, 95, -70, -114, -28, -105, -22, 121, 30, -10, 65, 126, -57, -64, 91, -8, -121, -97, 101, 94, -41, -28, -35, -5, -39, 116, -115, 46, -101, -19, -120, -72, -109, -6, -98, -125, -119, 44, 51, 67, 51, 99, 74, 123, -94, 69, -31, -12, -78, -45, -19, 17, -118, -16, 106, -33, -41, -42};
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
    msg.setTimeStamp(0.25009421996355874);
    msg.setSource(53228U);
    msg.setSourceEntity(17U);
    msg.setDestination(10836U);
    msg.setDestinationEntity(95U);
    msg.uid = 241U;
    msg.frag_number = 187U;
    msg.num_frags = 17U;
    const char tmp_msg_0[] = {-128, 111, 19, -85, 60, -47, -40, 14, -119, -101, 119, -50, 57, 86, -92, -29, 72, -93, -34, -74, 43, -16, -119};
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
    msg.setTimeStamp(0.7611782682253189);
    msg.setSource(15783U);
    msg.setSourceEntity(244U);
    msg.setDestination(6186U);
    msg.setDestinationEntity(119U);
    msg.uid = 62U;
    msg.frag_number = 136U;
    msg.num_frags = 131U;
    const char tmp_msg_0[] = {110, -119, -87, 27, -30, -124, -70, 15, -71, -127, 101, -117, 12, 3, 45, 116, -75, -120, -84, -111, 65, -127, -126, -13, -4, 99, 51, 59, -83, 125, -112, 89, -28, 92, -60, 70, -97, 32, 73, -57, 107, -82, -8, 57, 64, 105, -102, 32, -127, 36, 39, -106, 96, 16, 83, -86, 34, 61, 63, 119, 85};
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
    msg.setTimeStamp(0.15035652723184878);
    msg.setSource(10771U);
    msg.setSourceEntity(208U);
    msg.setDestination(7284U);
    msg.setDestinationEntity(149U);
    msg.content_type.assign("HQXHWAMHVCSXBXMDBYYKQRYPLEHFGAAEZZTKSWJKEIQA");
    const char tmp_msg_0[] = {-17, 74, 96, -18, -6, 69, -113, -106, 121, -107, -90, -34, 68, -100, 78, 31, 6, -85, -29, 44, -97, 72, 92, 71, -30, 5, 91, -121, 32, 66, -35, -105, -40, 34, -12, -81, 74, -41, -28, -118, -49, 37, 20, 81, 9, 9, 75, -8, -113, 49, 78, -72, 51, -107, 79};
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
    msg.setTimeStamp(0.21536020811434675);
    msg.setSource(24488U);
    msg.setSourceEntity(173U);
    msg.setDestination(24272U);
    msg.setDestinationEntity(78U);
    msg.content_type.assign("KKSQCMKISZAGXIJXKRBSRQEALDXDEJDWZNHZBOJLHFROBUFFHVUDDPGHZYUMIDEBMMKYBNRWFDFJTEQWVTSAESOCXUJBCTEARJOVYBWOTETPUFXRGYPVKMSNOZLCDXILVDUKGPMPYNPQHRORZFXTNZALPVKPYCWFIQMCJPSEIINTAEMKOHALPVBCGLNUCXRGLQI");
    const char tmp_msg_0[] = {78, 2, 1, -25, -119, -75, 34, 108, 50, 83, 51, -52, -36, 53, 28, -45, 27, 66, -38, 115, 53, -45, -7, 76, 77, -105, -33, 100, 46, -22, 26, 57, -3, 9, -85, 111, -38, 115, 104, -68};
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
    msg.setTimeStamp(0.4929728603231286);
    msg.setSource(61711U);
    msg.setSourceEntity(222U);
    msg.setDestination(63758U);
    msg.setDestinationEntity(221U);
    msg.content_type.assign("WCCEGVISMMKYNZAUUJTCUVIBPYXJLFBWWSTUBTQVNMNVNDOEKFGAOAXBLJDGLJELNLHOKODTCWXIBHVQDGOMET");
    const char tmp_msg_0[] = {-127, 91, 107, -109, 6, -36, -70, -73, 25, -52, 40, -95, 55, -100, -115, -62, -32, -4, 52, 93, 2, 30, 97, 39, 5, -111, 9, -122, 43, 106, -78, 58, 57, -68, 44, 42, -112, -39, 15, 93, -26, -115, 101, -61, 78, 29, -21, -31, 125, 72, 104, 122, 17, -16, 34, -34, -76, -127, -104, 77, -48, -68, 113, -118, 49, 36, -34, 11, 36, -33, -53, 10, -87, 51, -21, -44, 18, 89, 99, -13, -12, 32, -59, 119, 81, -19, 33, -30, -38, -92, 74, -57, 45, -112, 123, 58, -69, 45, 12, 12, 86, -94, 64, 32, -80, -84, 125, -77, -70, 109, -95, 88, -48, 96, -77, 72, -115, 72, -27, -83, -114, -39, 76, 2, -30, -53, -13, -24, 74, -47, 13, 18, 20, -120, 110, 22, 55, -5, -83, -128, -96, 82, -106, 45, 61, 103};
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
    msg.setTimeStamp(0.29265027881724914);
    msg.setSource(39053U);
    msg.setSourceEntity(145U);
    msg.setDestination(36851U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.9735598928949915);
    msg.setSource(47466U);
    msg.setSourceEntity(19U);
    msg.setDestination(2955U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.8322979784341576);
    msg.setSource(19974U);
    msg.setSourceEntity(213U);
    msg.setDestination(48065U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.8688909384594166);
    msg.setSource(60875U);
    msg.setSourceEntity(59U);
    msg.setDestination(16274U);
    msg.setDestinationEntity(91U);
    msg.target = 9410U;
    msg.bearing = 0.9912804998704184;
    msg.elevation = 0.26807557746267274;

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
    msg.setTimeStamp(0.5982968794249687);
    msg.setSource(41377U);
    msg.setSourceEntity(206U);
    msg.setDestination(22430U);
    msg.setDestinationEntity(52U);
    msg.target = 28181U;
    msg.bearing = 0.7142055990004341;
    msg.elevation = 0.2934696591735366;

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
    msg.setTimeStamp(0.7686351700217132);
    msg.setSource(37158U);
    msg.setSourceEntity(58U);
    msg.setDestination(36867U);
    msg.setDestinationEntity(19U);
    msg.target = 28280U;
    msg.bearing = 0.21842777936586366;
    msg.elevation = 0.08653634786485997;

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
    msg.setTimeStamp(0.31921766102727667);
    msg.setSource(46694U);
    msg.setSourceEntity(193U);
    msg.setDestination(34404U);
    msg.setDestinationEntity(235U);
    msg.target = 28359U;
    msg.x = 0.04061072442537017;
    msg.y = 0.16175155646389472;
    msg.z = 0.09868350474698306;

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
    msg.setTimeStamp(0.9484848205863439);
    msg.setSource(21922U);
    msg.setSourceEntity(196U);
    msg.setDestination(685U);
    msg.setDestinationEntity(146U);
    msg.target = 14425U;
    msg.x = 0.7486540828863553;
    msg.y = 0.720582973708014;
    msg.z = 0.7588375155239876;

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
    msg.setTimeStamp(0.06470512769938641);
    msg.setSource(7479U);
    msg.setSourceEntity(174U);
    msg.setDestination(15806U);
    msg.setDestinationEntity(66U);
    msg.target = 60107U;
    msg.x = 0.9402225383761206;
    msg.y = 0.2876806780740706;
    msg.z = 0.9197831247771872;

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
    msg.setTimeStamp(0.2700715265796597);
    msg.setSource(25730U);
    msg.setSourceEntity(111U);
    msg.setDestination(42311U);
    msg.setDestinationEntity(60U);
    msg.target = 13208U;
    msg.lat = 0.5573943987139495;
    msg.lon = 0.20525042819289774;
    msg.z_units = 144U;
    msg.z = 0.12759979165763036;

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
    msg.setTimeStamp(0.7153419873243395);
    msg.setSource(39014U);
    msg.setSourceEntity(111U);
    msg.setDestination(30584U);
    msg.setDestinationEntity(146U);
    msg.target = 34063U;
    msg.lat = 0.46834778588783266;
    msg.lon = 0.8535688855888696;
    msg.z_units = 106U;
    msg.z = 0.026877502003327836;

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
    msg.setTimeStamp(0.5252861572166639);
    msg.setSource(51627U);
    msg.setSourceEntity(85U);
    msg.setDestination(63467U);
    msg.setDestinationEntity(221U);
    msg.target = 49176U;
    msg.lat = 0.24367805056582847;
    msg.lon = 0.2750415271941904;
    msg.z_units = 140U;
    msg.z = 0.24221204358690995;

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
