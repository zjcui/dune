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
    msg.setTimeStamp(0.680020386107);
    msg.setSource(64456U);
    msg.setSourceEntity(26U);
    msg.setDestination(30146U);
    msg.setDestinationEntity(245U);
    msg.state = 198U;
    msg.flags = 245U;
    msg.description.assign("NHNKEHMAXDZCGLYMIRSRJCDWSKFCUDVIJEUTPFELIIFGQFBKIASUFSBRKNYWKJJGYWQXGDHPOOIRZEXSXUFODHQNHPKCWMJAZSPEHLRZRPFTEXIUQNWKNKMYCHEOTYKOQHUECDTWADBMLBVVFBVTVPDKXBLGJTMTOSDLOITVQZGGLCVTVUYJJSLGXAQXCOHQMPISOAWZGRZRRCFMLAUPBWESNXAPNNNTZQIBHZUMEXAYQMPROL");

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
    msg.setTimeStamp(0.130270094827);
    msg.setSource(47983U);
    msg.setSourceEntity(52U);
    msg.setDestination(40485U);
    msg.setDestinationEntity(148U);
    msg.state = 237U;
    msg.flags = 17U;
    msg.description.assign("TCYSVPHOECTBFWBCOEQZHFXBAJCHXVJXZILMFGMPPVNKWNBPTSYREJRALIHKRKVR");

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
    msg.setTimeStamp(0.323655571247);
    msg.setSource(40159U);
    msg.setSourceEntity(174U);
    msg.setDestination(6345U);
    msg.setDestinationEntity(95U);
    msg.state = 36U;
    msg.flags = 111U;
    msg.description.assign("NXRGOQHUPMGKKGRIWFAMXVMYECSLTPQHQBJWIPPCHZFVFIMVLMCCQWOJLOWGZTVQXCPPSOBNOKBLBJGIYSXZIRIQLIXFBSYILOZYRASCJJGLNVGBUUNAUEAZTYHSNHWZWEUAFYQB");

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
    msg.setTimeStamp(0.340558277111);
    msg.setSource(60490U);
    msg.setSourceEntity(22U);
    msg.setDestination(48573U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.0245928881876);
    msg.setSource(59611U);
    msg.setSourceEntity(240U);
    msg.setDestination(11675U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.139327000878);
    msg.setSource(35523U);
    msg.setSourceEntity(72U);
    msg.setDestination(53391U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.780554514487);
    msg.setSource(35849U);
    msg.setSourceEntity(216U);
    msg.setDestination(20068U);
    msg.setDestinationEntity(210U);
    msg.id = 229U;
    msg.label.assign("HAFXLSDDEYABNONMVWLOEMMXHREJUZLCGEFXAPNKCXKWXZGFZZKZQETNZIYNYPYLRJGMXXFLCJUUVACEHNDYSJLOOZVVPRYCEHNSGCIILDJQNROCDYBCPYTOHOTKKVFFSMICTRVVNUDUWQTQSRTDVIVQSSWX");
    msg.component.assign("UMQKQGOHHCSPGOTBFUXBPWYUVXMWESQBMLZGFFMTYTWRKMGXGDGPIJJWIBLMSJLQHDMLXLJYLRVTCCCNOAHQJEDCUKLIJ");
    msg.act_time = 60072U;
    msg.deact_time = 5131U;

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
    msg.setTimeStamp(0.30400087017);
    msg.setSource(4472U);
    msg.setSourceEntity(115U);
    msg.setDestination(35218U);
    msg.setDestinationEntity(232U);
    msg.id = 1U;
    msg.label.assign("TFRGUNZEVGJCPHXRNQHGZFXBITDSVYQVEBFDUUSEIEMYV");
    msg.component.assign("DFVKCAOMKBNAFSLSEVQEPCMUAIJYSUMBXJCWELJSCQRUTMWIGZDIORNFKJCOSWOPROLZXLDHAYQRIBAEFIAURPBPLGFKTWWUADUZVHLQSTHKPPYBPXFJJFHLXZQOQNAHLKNEDFRKRME");
    msg.act_time = 61570U;
    msg.deact_time = 26547U;

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
    msg.setTimeStamp(0.900774787614);
    msg.setSource(40868U);
    msg.setSourceEntity(52U);
    msg.setDestination(7749U);
    msg.setDestinationEntity(109U);
    msg.id = 32U;
    msg.label.assign("PQMKGWOUFMGUPFITLYKPFAZURTABVNCBZXAEOFRQIMEYWNWPCOSHKKZEVJAIAGEFYXLHBYHVNPLHNHWTNUFRDZKXLDRGCTCRRVOJEBDHUGWXUDCYYPTHSQWNJMSQJBHBQLDMEFSHYZUGDBIOSKQXSIXCMTQVXJELJUICZKLGGWKAYZNOWSGAVQTWFPAQUNTIXBQOMOZB");
    msg.component.assign("WDREEBYHQJBDKDKHZWU");
    msg.act_time = 26736U;
    msg.deact_time = 37703U;

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
    msg.setTimeStamp(0.67596102741);
    msg.setSource(44026U);
    msg.setSourceEntity(227U);
    msg.setDestination(49466U);
    msg.setDestinationEntity(38U);
    msg.id = 243U;

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
    msg.setTimeStamp(0.983738593223);
    msg.setSource(18526U);
    msg.setSourceEntity(174U);
    msg.setDestination(11025U);
    msg.setDestinationEntity(187U);
    msg.id = 5U;

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
    msg.setTimeStamp(0.461412522883);
    msg.setSource(4534U);
    msg.setSourceEntity(3U);
    msg.setDestination(37305U);
    msg.setDestinationEntity(105U);
    msg.id = 43U;

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
    msg.setTimeStamp(0.44643291389);
    msg.setSource(38582U);
    msg.setSourceEntity(89U);
    msg.setDestination(45499U);
    msg.setDestinationEntity(86U);
    msg.op = 43U;
    msg.list.assign("CBSDVJBLKHJJKKNTTCQCGLXWFEIJYUEZURRLUSYNHSQQZVUNNRMVAOQMMKPKIWSDSCHSXDKGQJOZQATXWDNIOPLDWMPNFXYBPRHOTGTRAYZXFWVVNJZLZGPDKJFAGUKSTVHCPBSFWEZBJMUHBRMYICEAAAHWMLDOVJCDRCX");

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
    msg.setTimeStamp(0.200386960611);
    msg.setSource(3428U);
    msg.setSourceEntity(188U);
    msg.setDestination(36559U);
    msg.setDestinationEntity(99U);
    msg.op = 25U;
    msg.list.assign("HIBESJOIMAJHGBEIXMEBYOUOYW");

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
    msg.setTimeStamp(0.926491711338);
    msg.setSource(48577U);
    msg.setSourceEntity(72U);
    msg.setDestination(43926U);
    msg.setDestinationEntity(114U);
    msg.op = 116U;
    msg.list.assign("XBHBQTDSIKDXHWDPTCAWYVMLNTLEABELWQUBRJKVCXWVZQIDTFRHIJSQERHLZBOELUSRPPSWUZOMOCJPPMKUXGNJVVGYSUTNKPCGOHSSV");

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
    IMC::EntityControl msg;
    msg.setTimeStamp(0.9948029158);
    msg.setSource(16107U);
    msg.setSourceEntity(86U);
    msg.setDestination(39336U);
    msg.setDestinationEntity(14U);
    msg.op = 169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityControl msg;
    msg.setTimeStamp(0.455872370861);
    msg.setSource(8261U);
    msg.setSourceEntity(114U);
    msg.setDestination(33473U);
    msg.setDestinationEntity(97U);
    msg.op = 229U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityControl msg;
    msg.setTimeStamp(0.0728878816065);
    msg.setSource(41555U);
    msg.setSourceEntity(217U);
    msg.setDestination(1688U);
    msg.setDestinationEntity(12U);
    msg.op = 185U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityControl #2", msg == *msg_d);
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
    msg.setTimeStamp(0.611022547603);
    msg.setSource(57583U);
    msg.setSourceEntity(7U);
    msg.setDestination(42849U);
    msg.setDestinationEntity(11U);
    msg.value = 82U;

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
    msg.setTimeStamp(0.803032111228);
    msg.setSource(13792U);
    msg.setSourceEntity(193U);
    msg.setDestination(59970U);
    msg.setDestinationEntity(158U);
    msg.value = 145U;

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
    msg.setTimeStamp(0.61046167576);
    msg.setSource(20656U);
    msg.setSourceEntity(45U);
    msg.setDestination(5883U);
    msg.setDestinationEntity(213U);
    msg.value = 141U;

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
    msg.setTimeStamp(0.921661397584);
    msg.setSource(22948U);
    msg.setSourceEntity(134U);
    msg.setDestination(48104U);
    msg.setDestinationEntity(206U);
    msg.consumer.assign("HCBHMSYUWDWKDFWNACZYRBPMBIWAULPGTUUEMJYZSRLNBWNMUONIDWVSXNGLRPEVLYTBXFSOSDLGFZNIEAXGACTYLKFVOOENIDDFBZFCVNYHTWKRPYPTZIUJPVNJHJWIKHXCSPMOECKKWVHXGGSJTBEVHXBZJQQTYUATMUQZZBYOGOLAEQHQPRADIJGRPXSNOQLQMUQEMZTSGCHCALFGIYQRRMAJSARMVXHIJKDTZPVOKVCRXEFOXDC");
    msg.message_id = 61189U;

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
    msg.setTimeStamp(0.0685817880865);
    msg.setSource(50960U);
    msg.setSourceEntity(49U);
    msg.setDestination(16532U);
    msg.setDestinationEntity(125U);
    msg.consumer.assign("THAITEVVQWXTBFGVNKALRFVOBGRUBXLOMRMLUHEOXYKQDQMRMLXCBRBFKSUQLAYZGJRJTDBAAWKSSBTJYZYOUPNZPLPYWMGKNZJVZGDCDDPXIWVWFKSPU");
    msg.message_id = 59489U;

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
    msg.setTimeStamp(0.909548313657);
    msg.setSource(26246U);
    msg.setSourceEntity(245U);
    msg.setDestination(46564U);
    msg.setDestinationEntity(150U);
    msg.consumer.assign("NQFLIHLGTIDBTESFHBHOXIZHSXIKZYNDXLAAKUJMPCFYVQQZSZWLIXPICRRPFXHXVWKZUJSPGCHFZP");
    msg.message_id = 54178U;

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
    msg.setTimeStamp(0.304862534863);
    msg.setSource(38238U);
    msg.setSourceEntity(105U);
    msg.setDestination(61142U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.639146102374);
    msg.setSource(11572U);
    msg.setSourceEntity(115U);
    msg.setDestination(4545U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.0105156347126);
    msg.setSource(60912U);
    msg.setSourceEntity(62U);
    msg.setDestination(47454U);
    msg.setDestinationEntity(87U);

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
    IMC::Parameter msg;
    msg.setTimeStamp(0.178424636494);
    msg.setSource(51030U);
    msg.setSourceEntity(99U);
    msg.setDestination(58579U);
    msg.setDestinationEntity(18U);
    msg.section.assign("DRLBAVRZUPFJAXAOJKXSSISBSCGRYSKZHGBHWKEQYPXRGMFIAZFHQJDDCSLBVBVNFTLYGSYTZPUXMIAVQJQHNWLCWZDIILETTKMHOWDOQSPOYKNAKQLVJICIEYVBMTXXMFNPUHJDXDFGPUAG");
    msg.param.assign("PQFFMNKJSQRDDVXCIPLESNCGJBGLUPWBTTWJZSBMGUZWLOCJFCOFZYZQLERTJXVZHPCIGSEYARGQEJLLTEXNUSNVUXZFZYUUILPQIRJYJDPWDUNGKSEFVGHOTVWGKXNHXEBTZHRKKSBIBIXTOBKLAFAYKMHRQAAVZQHHFPTWMLCQDOMMGXHAKBKOPNTCYFRAMJDFTAZWCPORNNOMIQNWBADUDAHDEYORB");
    msg.value.assign("XWWUXGRPTHYFYZHALBVBGUIXFKMLHIYQVNKKOSSGJSWZSVSUVARNSFJTQRZPNGKIOTNCOCCYHVLWWXQVCFQRQRANHBRJCUQWIPEOZZLDKOQLXGFRPXKDEADFIMYHOHZRNBJGQIUTMXRPNGPMDMCUACLGMCJIILAWOFKAMBEBXTQOEFUQYKEJAOXTZLIVDAWSZPKEVCLBDBADYDSTICMETOHWBNFDJJDPKGBVESUUYFWTHPNPYREZMTHVU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Parameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Parameter msg;
    msg.setTimeStamp(0.327209818878);
    msg.setSource(50248U);
    msg.setSourceEntity(208U);
    msg.setDestination(56546U);
    msg.setDestinationEntity(182U);
    msg.section.assign("UUCACCYTCFSNPLTHSDTYHINJLVIWJUPWIHCHGCHIXTJZTCTFSOPUDUDSOQOWNPKSWDUEA");
    msg.param.assign("TPLFZKRFITKEZQEGVPQTNIDROJBHYFWIQFIKOKMZLTHOCAFUXLDYMDCGVWSBNOSORUAJRRBNHRYPXPQCUNZEUZAN");
    msg.value.assign("HBCLFCJHUTSSYRJMBLGSGUYNRJBYQXYDIPXEIKECODOZHCZASLWMDFWDWHWJXJYTIMFIGOGWQMEQPPBMKGVQURXKPEUAPVRSVOFQXHNKMYZDDLGNFE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Parameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Parameter msg;
    msg.setTimeStamp(0.0689551083723);
    msg.setSource(17628U);
    msg.setSourceEntity(235U);
    msg.setDestination(29986U);
    msg.setDestinationEntity(123U);
    msg.section.assign("AMAIRNFVTGTFWSAFVLPWUSSYETHYWJDOILLNEADITRXFBGADABDHLJQPZLINJHGCBUYILRERUDMWVCIEUFOIHUVONGJKSDQKJERZTUZJCOOGROEEOWDKKFTVNMUHYCCHYPXPXIGHOBJRYBZPZZSHWYFDNLLMCWZXKVCNPQYBAXIGSNXRXMTNSEQLVQYQNWMHVAQRWGUSKJESBV");
    msg.param.assign("QAXEAIQNJDXIHWJHBLAYKSVBJEVWLPKLSZGXEESGPQXNULDPZBVUFIZOIZGHWHEGMGOLXFNDXCEURRTXDBSWQPUTSXAQBHUWMQJVMTNITSRNJYUOOAEFILYKMBCCFTEDAOCANTGDMNVBOMRZJPVCWYQUINQAFORVPDMYKMSHGJPRKYPFTCZUMJSLDICTGWUSFRJ");
    msg.value.assign("YZDKBBZOLUJGKFPZDYHZDMTDRJCVELJXWAFIYTBJWSYKPXWBZGADTZRUWEYGPXPBKHFLFVUYUMANGYUTKSCRIPNBPASXAHGHNOAONUHNEXQMHVQZMYFAMCAPKWUOXLBNRKIKIWOQIOLNQDHJJSGTJVCAOFWDOIQUUTEVAHVNJDRKIQBQRLVSMXFELOXWRXTOJLVMMVELBSCJEPQPBEC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Parameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParameterControl msg;
    msg.setTimeStamp(0.764601060688);
    msg.setSource(40897U);
    msg.setSourceEntity(227U);
    msg.setDestination(1967U);
    msg.setDestinationEntity(43U);
    msg.op = 174U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("CMOGHAABPSPKXSCCWDIZUMLKKXQJYKWBQLGMJAUKAAHEJJDWFQPIDTCMVISVBRZADEUFOHUNEXOFSRPYKURETLZPXLPGANLYPSQVTODGTLAWNYUNMIOLREJQBGPOSXEVQMEJYVEMRDJNWIRLNWZCHRTVUHATWTIVYUKJTUCBCYGYXSZVCERPGJGFGQB");
    tmp_msg_0.param.assign("JDOXGZJAMBCEYEKVKRJKGAYPFSKHJRINIDVUADJWLTUHIBUCIAHBMEJXBUCZETV");
    tmp_msg_0.value.assign("OUVLGKYXPBDBBPCNAURRQXTGZXZKTIHOTTMZAWUPRFFGVHICCNSVSWPDDNCFOFBAKHYVRRYKPOJPECZKYPKVGIICOYSWPHMDUEWBRGEZBWJMXMWGQAILTLIIDAXIDZFNQPTSEXOQJBTNQKWXSTULJNJYZFCNMNLUDKSPVOKJBUAUJFQYJFDMLXEOVDMVBNDJAESYLTSGCEYVHLSZGRRNILOAQWQUZWHITHABHQXAEMGUXVCRQMMOHW");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParameterControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParameterControl msg;
    msg.setTimeStamp(0.334707181775);
    msg.setSource(33557U);
    msg.setSourceEntity(133U);
    msg.setDestination(8304U);
    msg.setDestinationEntity(182U);
    msg.op = 200U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParameterControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParameterControl msg;
    msg.setTimeStamp(0.359287538445);
    msg.setSource(37866U);
    msg.setSourceEntity(67U);
    msg.setDestination(42980U);
    msg.setDestinationEntity(204U);
    msg.op = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParameterControl #2", msg == *msg_d);
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
    msg.setTimeStamp(0.0229756012222);
    msg.setSource(13470U);
    msg.setSourceEntity(210U);
    msg.setDestination(23535U);
    msg.setDestinationEntity(25U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.93741181256);
    msg.setSource(5288U);
    msg.setSourceEntity(217U);
    msg.setDestination(59941U);
    msg.setDestinationEntity(169U);
    msg.op = 52U;

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
    msg.setTimeStamp(0.643184395239);
    msg.setSource(20674U);
    msg.setSourceEntity(11U);
    msg.setDestination(28401U);
    msg.setDestinationEntity(18U);
    msg.op = 121U;

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
    msg.setTimeStamp(0.572065953542);
    msg.setSource(38599U);
    msg.setSourceEntity(215U);
    msg.setDestination(28129U);
    msg.setDestinationEntity(213U);
    msg.total_steps = 100U;
    msg.step_number = 170U;
    msg.step.assign("OCXMJEUWQSQOQI");
    msg.flags = 32U;

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
    msg.setTimeStamp(0.930722925554);
    msg.setSource(23776U);
    msg.setSourceEntity(54U);
    msg.setDestination(55595U);
    msg.setDestinationEntity(214U);
    msg.total_steps = 90U;
    msg.step_number = 193U;
    msg.step.assign("OZXKJBCKLHDZAKTJNLOVCPFLNHXJPDTZTZSLCRSGGWNQYPIYQIURWWAORIAPFKKGKXIFTFDRTEAQAOPUGELIRCEWOTYXQQW");
    msg.flags = 25U;

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
    msg.setTimeStamp(0.0320161510718);
    msg.setSource(48708U);
    msg.setSourceEntity(222U);
    msg.setDestination(61186U);
    msg.setDestinationEntity(128U);
    msg.total_steps = 112U;
    msg.step_number = 43U;
    msg.step.assign("UJNQLIHBVVNNOFUQJVAWHKTAYGSQKJSLCOULUOJGDFRXLZAZYYVIYAFOUCXTAYAJLRDUFBTGTQKKWOPIICSWBUKRVCEDIUZYLRNWNFRSHYPTZWLWCYJDPMQXVEV");
    msg.flags = 192U;

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
    msg.setTimeStamp(0.901036804509);
    msg.setSource(44034U);
    msg.setSourceEntity(236U);
    msg.setDestination(53338U);
    msg.setDestinationEntity(14U);
    msg.state = 50U;
    msg.error.assign("VHOCXEUOXHDZWYARMSXMGKYAQEGLDOEIAURNZDJRGSCOHPXHBUU");

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
    msg.setTimeStamp(0.00911436486338);
    msg.setSource(16361U);
    msg.setSourceEntity(34U);
    msg.setDestination(39242U);
    msg.setDestinationEntity(191U);
    msg.state = 207U;
    msg.error.assign("KOKSIQTLCLVRIDGVODVXUVRGHGZAPYVRRXOBKEISZCKFEJZDHRANFMISHWIUZQFYGRZFHCBBCWXMZCDSBVDJNWCBTMAWMYAOSNOFWJQXQMVTAJFGSYSMPLHTHHVMGHAKHZYDJEPIKLEUFQGNUUFQVNTZADXJNYSLQLJXLPSEMWNOETOUOACEXWUNKJMOECLDTZKSNITYFDOYTWXTYPCVUJPLGCEIWQNXUWGPUMPQIQXAJBLEKZBBR");

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
    msg.setTimeStamp(0.873131342602);
    msg.setSource(1959U);
    msg.setSourceEntity(242U);
    msg.setDestination(2455U);
    msg.setDestinationEntity(57U);
    msg.state = 228U;
    msg.error.assign("DUAGQQJBHJHHNKMDEZGKMNFIBVLTJWMXUGUKBZYAECOYVWEODIIZMBORQUPNDJGWTLXANSSZAWFWXRNISHZSNRZMMERBRBVYLGYUYXAPDXZEMP");

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
    msg.setTimeStamp(0.80120525591);
    msg.setSource(63441U);
    msg.setSourceEntity(220U);
    msg.setDestination(39160U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.108358917267);
    msg.setSource(1093U);
    msg.setSourceEntity(12U);
    msg.setDestination(32143U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.0930935880943);
    msg.setSource(29678U);
    msg.setSourceEntity(213U);
    msg.setDestination(25530U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.27887632826);
    msg.setSource(18229U);
    msg.setSourceEntity(83U);
    msg.setDestination(53083U);
    msg.setDestinationEntity(18U);
    msg.op = 42U;
    msg.speed_min = 0.306395875915;
    msg.speed_max = 0.340285384632;
    msg.long_accel = 0.738522511343;
    msg.alt_max_msl = 0.269957526741;
    msg.dive_fraction_max = 0.895249264984;
    msg.climb_fraction_max = 0.0414012893697;
    msg.bank_max = 0.436643281171;
    msg.p_max = 0.599913933965;
    msg.pitch_min = 0.104541566457;
    msg.pitch_max = 0.786064058773;
    msg.q_max = 0.880957627711;
    msg.g_min = 0.973949419762;
    msg.g_max = 0.00140850443707;
    msg.g_lat_max = 0.108570191522;
    msg.rpm_min = 0.899787136432;
    msg.rpm_max = 0.00978485944152;
    msg.rpm_rate_max = 0.138003885952;

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
    msg.setTimeStamp(0.596041164652);
    msg.setSource(6790U);
    msg.setSourceEntity(77U);
    msg.setDestination(46367U);
    msg.setDestinationEntity(174U);
    msg.op = 100U;
    msg.speed_min = 0.0470760757237;
    msg.speed_max = 0.0215227534139;
    msg.long_accel = 0.747398794239;
    msg.alt_max_msl = 0.719914238297;
    msg.dive_fraction_max = 0.910282106876;
    msg.climb_fraction_max = 0.235259273211;
    msg.bank_max = 0.789236185791;
    msg.p_max = 0.000565002881037;
    msg.pitch_min = 0.335636836886;
    msg.pitch_max = 0.890304096093;
    msg.q_max = 0.648278873849;
    msg.g_min = 0.922744925223;
    msg.g_max = 0.0826123961579;
    msg.g_lat_max = 0.971832908371;
    msg.rpm_min = 0.422551076643;
    msg.rpm_max = 0.731890608243;
    msg.rpm_rate_max = 0.272982311679;

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
    msg.setTimeStamp(0.560204493349);
    msg.setSource(10696U);
    msg.setSourceEntity(242U);
    msg.setDestination(38201U);
    msg.setDestinationEntity(49U);
    msg.op = 93U;
    msg.speed_min = 0.566577238139;
    msg.speed_max = 0.788484921116;
    msg.long_accel = 0.742049232816;
    msg.alt_max_msl = 0.581009345588;
    msg.dive_fraction_max = 0.63341829784;
    msg.climb_fraction_max = 0.789681658714;
    msg.bank_max = 0.789072915653;
    msg.p_max = 0.661639991343;
    msg.pitch_min = 0.2592152091;
    msg.pitch_max = 0.539595770567;
    msg.q_max = 0.722598141855;
    msg.g_min = 0.966091301136;
    msg.g_max = 0.706543031186;
    msg.g_lat_max = 0.589009968335;
    msg.rpm_min = 0.697453741466;
    msg.rpm_max = 0.820377516348;
    msg.rpm_rate_max = 0.552261952717;

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
    msg.setTimeStamp(0.731543246703);
    msg.setSource(59854U);
    msg.setSourceEntity(125U);
    msg.setDestination(2673U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.655442620949);
    msg.setSource(11464U);
    msg.setSourceEntity(0U);
    msg.setDestination(14963U);
    msg.setDestinationEntity(120U);
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("QDQBWRVLTXCGXWBTLJWYSUIIIHTPBRBQHLADGMAOZIDKZSVQYRCESESONVMJDTOPFFMVMBBRCHRLFXKWWAPDKJLYAWO");
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
    msg.setTimeStamp(0.673381571151);
    msg.setSource(28201U);
    msg.setSourceEntity(47U);
    msg.setDestination(18294U);
    msg.setDestinationEntity(52U);
    IMC::AcousticRangeReply tmp_msg_0;
    tmp_msg_0.address = 250U;
    tmp_msg_0.status = 116U;
    tmp_msg_0.range = 0.605991822238;
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
    msg.setTimeStamp(0.299150732639);
    msg.setSource(65413U);
    msg.setSourceEntity(158U);
    msg.setDestination(20280U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.979096025078;
    msg.lon = 0.804257104971;
    msg.height = 0.00986703385551;
    msg.x = 0.592852860156;
    msg.y = 0.0455789006005;
    msg.z = 0.581084411785;
    msg.phi = 0.589106909958;
    msg.theta = 0.864034677376;
    msg.psi = 0.601176587395;
    msg.u = 0.216271608251;
    msg.v = 0.0743572503331;
    msg.w = 0.0130679633299;
    msg.p = 0.879556412102;
    msg.q = 0.609459211859;
    msg.r = 0.999706151227;
    msg.svx = 0.704373500631;
    msg.svy = 0.515879705963;
    msg.svz = 0.832338967779;

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
    msg.setTimeStamp(0.525709363633);
    msg.setSource(827U);
    msg.setSourceEntity(110U);
    msg.setDestination(517U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.679552826173;
    msg.lon = 0.903094046332;
    msg.height = 0.0900212125265;
    msg.x = 0.949147555933;
    msg.y = 0.196918371524;
    msg.z = 0.099855575379;
    msg.phi = 0.160504746143;
    msg.theta = 0.278878230154;
    msg.psi = 0.400955277449;
    msg.u = 0.688508273489;
    msg.v = 0.904960360137;
    msg.w = 0.645669308752;
    msg.p = 0.210014686125;
    msg.q = 0.725723281261;
    msg.r = 0.187232964269;
    msg.svx = 0.348849084709;
    msg.svy = 0.549451370176;
    msg.svz = 0.372051285783;

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
    msg.setTimeStamp(0.516715018312);
    msg.setSource(26386U);
    msg.setSourceEntity(27U);
    msg.setDestination(40329U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.1733596183;
    msg.lon = 0.572179025028;
    msg.height = 0.118914684748;
    msg.x = 0.191372144521;
    msg.y = 0.619253061978;
    msg.z = 0.777009664042;
    msg.phi = 0.770591983343;
    msg.theta = 0.683358028428;
    msg.psi = 0.992050922909;
    msg.u = 0.874012913404;
    msg.v = 0.272132858526;
    msg.w = 0.738173848133;
    msg.p = 0.188206110453;
    msg.q = 0.157900608179;
    msg.r = 0.00470386726907;
    msg.svx = 0.438645113084;
    msg.svy = 0.442215227808;
    msg.svz = 0.074133952852;

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
    msg.setTimeStamp(0.961473001425);
    msg.setSource(42519U);
    msg.setSourceEntity(115U);
    msg.setDestination(21908U);
    msg.setDestinationEntity(146U);
    msg.op = 23U;
    msg.entities.assign("QWTCKEECPBVMFTAQQIKNYDJPIVWOPFJQVEXTXUHLPODKGCSLRJMNXEPGMBHQYVJGLPKFIENZCNZYOANHXUTMWYUSOYUWLHWYLVIU");

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
    msg.setTimeStamp(0.905030605272);
    msg.setSource(4081U);
    msg.setSourceEntity(168U);
    msg.setDestination(31534U);
    msg.setDestinationEntity(103U);
    msg.op = 194U;
    msg.entities.assign("YHFZSNYAKHXPSGALVJGFRGFVJVV");

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
    msg.setTimeStamp(0.772331105106);
    msg.setSource(215U);
    msg.setSourceEntity(219U);
    msg.setDestination(17957U);
    msg.setDestinationEntity(158U);
    msg.op = 249U;
    msg.entities.assign("NAADLQFZPGGKOWDLENLYOCWJZJKOHQQUCQMJSNDGFLEMMQBFCRYCAQTTDZWSGBNPXBKYZVZSBBPWVXJRWUGNVIZLFNECVBYTHRJHORDWMUQTEADIJQMPOIKMWFKBYYKCJXZTZHUFSPEZLLKGBPGPDUKVXSHEPOBOGSTRXGHOEMIQVKRLEMIYNXFEALAPS");

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
    msg.setTimeStamp(0.918471296706);
    msg.setSource(46669U);
    msg.setSourceEntity(67U);
    msg.setDestination(49907U);
    msg.setDestinationEntity(1U);
    msg.type = 223U;
    msg.speed = 36245U;
    const char tmp_msg_0[] = {83, 77, -114, 41, 25, -25, 99, 40, 106, 20, -65, -109, -104, -39, 109, -41, -100, 22, -8, -12, -47, -102, -109, -64, 36, 85, 75, 64, -107, 20, 24, 47, 91, 115, 60, 117, 53, 104, -7, -9, -50, -77, -90, 33, -30, -97, 7, 93, 80, 4, -52, 91, 57, -43, -96, 125, -50, 111, 101, -60, -116, -27, 30, -58, -4, 38, -73, 45, -5, 104, -58, 0, -57, 102, -56, -80, 109, -51, -80, -92, -13, 73, 82, 38, 98, 20, 30, 23, 23, 79, -7, -20, -110, 69, 12, 19, -57, -53, -53, 116, 47, 107, -75};
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
    msg.setTimeStamp(0.468894181848);
    msg.setSource(61089U);
    msg.setSourceEntity(240U);
    msg.setDestination(33241U);
    msg.setDestinationEntity(91U);
    msg.type = 217U;
    msg.speed = 33606U;
    const char tmp_msg_0[] = {-88, 25, -12, 83, -48, -5, -110, -95, 86, -96, -38, -59, -16, 21, -17, 78, -64, 101, -51, -107, -53, 65, 11, -27, 25, -39, -56};
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
    msg.setTimeStamp(0.0833969749483);
    msg.setSource(12387U);
    msg.setSourceEntity(61U);
    msg.setDestination(5552U);
    msg.setDestinationEntity(29U);
    msg.type = 200U;
    msg.speed = 35169U;
    const char tmp_msg_0[] = {-126, -99, -115, 37, 51, -24, 28, -40, -12, 102, -123, -68, 87, -39, -8, -59, 32, 94, 106, 49, -106, -116, 39, 0, -116, -16, 88, 86, 112, -89, -39, 10, 18, 68, 23, -128, -9, 51, 51, 88, -110, -58, 31, -50, 8, -54, -54, -61, 63, 20, 80, -78, 115, -98, 61, 13, 111, 53, 116, -112, -46, 24, -111, 79, -26, -5, 62, -54, 32, 0, 54, -76};
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
    msg.setTimeStamp(0.834707805749);
    msg.setSource(16593U);
    msg.setSourceEntity(217U);
    msg.setDestination(33870U);
    msg.setDestinationEntity(70U);
    msg.op = 59U;
    msg.tas2acc_pgain = 0.169361977328;
    msg.bank2p_pgain = 0.694564243585;

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
    msg.setTimeStamp(0.578677919299);
    msg.setSource(15432U);
    msg.setSourceEntity(88U);
    msg.setDestination(44088U);
    msg.setDestinationEntity(67U);
    msg.op = 208U;
    msg.tas2acc_pgain = 0.570266048755;
    msg.bank2p_pgain = 0.993714904558;

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
    msg.setTimeStamp(0.656679706687);
    msg.setSource(64049U);
    msg.setSourceEntity(7U);
    msg.setDestination(59457U);
    msg.setDestinationEntity(172U);
    msg.op = 58U;
    msg.tas2acc_pgain = 0.94309410419;
    msg.bank2p_pgain = 0.617088931396;

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
    msg.setTimeStamp(0.180367547183);
    msg.setSource(51474U);
    msg.setSourceEntity(251U);
    msg.setDestination(14813U);
    msg.setDestinationEntity(75U);
    msg.available = 3425046245U;
    msg.value = 177U;

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
    msg.setTimeStamp(0.496296749106);
    msg.setSource(37797U);
    msg.setSourceEntity(51U);
    msg.setDestination(35756U);
    msg.setDestinationEntity(225U);
    msg.available = 1958837837U;
    msg.value = 70U;

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
    msg.setTimeStamp(0.428395888634);
    msg.setSource(39670U);
    msg.setSourceEntity(187U);
    msg.setDestination(42111U);
    msg.setDestinationEntity(224U);
    msg.available = 2405769646U;
    msg.value = 85U;

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
    msg.setTimeStamp(0.410852286232);
    msg.setSource(56440U);
    msg.setSourceEntity(187U);
    msg.setDestination(47836U);
    msg.setDestinationEntity(69U);
    msg.op = 237U;
    msg.snapshot.assign("WTWLZGGXMUGYAXVPYIMYSGWVJVNNIMHLSRHBHLAWBXODAOGCSVIUQJRHBVMFOBQXORQCGMFBEYVTMVYUMHAPT");
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 191U;
    tmp_msg_0.plan_id.assign("JCCRYLUPTABUVLZCDGSRNNXFYVVNKNVBCSJEOHMJTOSJJXKMFLUIVNWGDMGSFJLBOUQPTBIXOWRQVBFXXRYCUTWUTRKGNBNQHDHY");
    tmp_msg_0.comm_level = 59U;
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
    msg.setTimeStamp(0.600768778497);
    msg.setSource(49658U);
    msg.setSourceEntity(146U);
    msg.setDestination(10795U);
    msg.setDestinationEntity(204U);
    msg.op = 52U;
    msg.snapshot.assign("YTPJFSZMCWOTLUFAOZDRMPVGKBYBHXWDTHGHNRDWCUVJVQNDGUXFFKJGRYCOUFLHXFWGSSUMBKMAIZUOWOEZQVKIKMNHXAUOQXIPOPBRRMEIFTKOHVUIXCYVCYPKTWPNCAGCJGGLUOBLKSWSZXZYBSCZMNYKIRYD");
    IMC::LblDetection tmp_msg_0;
    tmp_msg_0.tx = 160U;
    tmp_msg_0.channel = 86U;
    tmp_msg_0.timer = 41891U;
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
    msg.setTimeStamp(0.40163769125);
    msg.setSource(42569U);
    msg.setSourceEntity(164U);
    msg.setDestination(44054U);
    msg.setDestinationEntity(98U);
    msg.op = 181U;
    msg.snapshot.assign("CXGNVUTWWTCDNBADDDD");
    IMC::StopManeuver tmp_msg_0;
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
    msg.setTimeStamp(0.467060266593);
    msg.setSource(64344U);
    msg.setSourceEntity(185U);
    msg.setDestination(50485U);
    msg.setDestinationEntity(58U);
    msg.op = 157U;
    msg.name.assign("VWVPWIMZGOXPQTZOIHDLFUEEAYDTDIHDZTUNKTYOXKJGSRFEFCZKLOGOCLDXLTICMKNKSJANMKFHSOUBICHUSIBFVUUYAZBLDZYCEFNIRJNLKMKYRBRURHNSCJTMMHNRJWJWCUPEBXELVPNHGXMURPMJPGYXFGXVPQZHKOALBMAIZBW");

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
    msg.setTimeStamp(0.0612142760925);
    msg.setSource(42228U);
    msg.setSourceEntity(15U);
    msg.setDestination(62538U);
    msg.setDestinationEntity(211U);
    msg.op = 31U;
    msg.name.assign("XKFRYAMMSVWPKCEXWWLKNLJQOHMNPCBITIZZFRNLTONEDMWCAJTMVDYGDEACLVBHRKXPEVIKTCYWYXLXDTKROPWENUKDDHTSXHENJUBFFASXQAMYJZEGDPRZQHODYCISWBTEBAUVZHGZFBBJSUGWTPIODIQCQROAUWGIOYJGVPZUUJNJRFXKKSNGPLIGMZJGZCGIXLIUMHOWTKJBPYEMROVFQAVRACSTLQP");

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
    msg.setTimeStamp(0.343606672813);
    msg.setSource(39407U);
    msg.setSourceEntity(156U);
    msg.setDestination(57110U);
    msg.setDestinationEntity(42U);
    msg.op = 220U;
    msg.name.assign("TAVZXKLFTARRCCUWPGQCZPJZMEYFSGIDHMBKAXFWTHPDVNOJMIDHZBJQHMUINZWLZSTQBAQOJXIETANNKYUZQDYVQWLLUOKOMPSHKPPFXBXBRQJ");

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
    msg.setTimeStamp(0.810569814391);
    msg.setSource(47204U);
    msg.setSourceEntity(14U);
    msg.setDestination(25542U);
    msg.setDestinationEntity(53U);
    msg.type = 7U;
    msg.htime = 0.682292096655;
    msg.context.assign("SGAFQPRBUNMJJLVGTBXNMNIGSUEAKSBCROTWNAKBIARUEHROKCLMKPPXTXZDLHACXGLMUKJIYHGORTKRZBMSHFZFBHTJLEZCJFUQFAHOYNYDPQYGWGWWIEZNANDCTBSYXTCAZPZDWDJCLQTYTOQEVQVZPHOVOMOWKTUFBLFXJCSUHJXBFQVKFGYIAUPW");
    msg.text.assign("LTMHDZFSUWEBPLXXDKOJPJNPILGUQEMRTDQDJHKXTFHPPGIANPAAUJNATZMCJRMKUJBFVVKZXGLTMRYDSSMAIVWGBITNYXDHOERBKDAHGPGWTUDNKUCDOEGZHVWBSLNQFFOZOYIHAYVLKQWKIGLXRWCFBUZZOCXQVEMSFYTQEICVRXPGNBJZVGYNRPMOAKVQDCIROEXTCVZWHCJSMBTLLUYFCAYJU");

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
    msg.setTimeStamp(0.743631652705);
    msg.setSource(39871U);
    msg.setSourceEntity(200U);
    msg.setDestination(7786U);
    msg.setDestinationEntity(10U);
    msg.type = 73U;
    msg.htime = 0.901283979471;
    msg.context.assign("UQOBQGBDXFZAGWGJHCERBWKEHYENDMXCJIJKSXZDGKKFVXBLYUEHLYFARQOQMQGGANTHJRYTZCMQCYRDJEVSXAPVSMJMZGRLWHOYDZUKHXPQCKKXARPELNDIIDXOMOVAWNVTFBGFLRYZWPUMCBWMVYWVNMPDJERQLTOKKQSDOUFVSUC");
    msg.text.assign("UMMGHJSQJGAQVLXDXNCKUNFIQCJVWFEFJPAFWMJXFJQITDBODUULACLRSMTLHYIOHUKVGXEKGPYAZRHWEYGWSOSKJRTTXVQYGOSSOGYMUFTXZEAWRQLLILROOUWVEPHNVWBPHRSBCMSRKMFOWZDINOVDQ");

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
    msg.setTimeStamp(0.147380788037);
    msg.setSource(26325U);
    msg.setSourceEntity(15U);
    msg.setDestination(60726U);
    msg.setDestinationEntity(52U);
    msg.type = 237U;
    msg.htime = 0.542371406667;
    msg.context.assign("ZMTRRZBAOMHIGFPVPZZKEDXQCNIRMSSTF");
    msg.text.assign("TGVMTJQEGQGVQADDUCJHZMEQEZRGSIN");

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
    msg.setTimeStamp(0.637714808542);
    msg.setSource(38632U);
    msg.setSourceEntity(251U);
    msg.setDestination(6060U);
    msg.setDestinationEntity(69U);
    msg.command = 145U;
    msg.htime = 0.646741814414;

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
    msg.setTimeStamp(0.912297884526);
    msg.setSource(33462U);
    msg.setSourceEntity(219U);
    msg.setDestination(44606U);
    msg.setDestinationEntity(171U);
    msg.command = 250U;
    msg.htime = 0.41137852823;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 154U;
    tmp_msg_0.htime = 0.412209853384;
    tmp_msg_0.context.assign("USGBSBFDLTRUTECGXFRUTQABDXZZRLGFVCXINWHDVGVWAOSFZIIXTQPGYJMDNQYBVFOSCOEBJJBERJPADLTMEFPFHAQPBZACKDFKOHZQRDYXKPATULWGSTMYJWXCSZZYDNHVILIKEKYOHIELKEGGTJAMNMBKLRJASLRMOQCCWBVT");
    tmp_msg_0.text.assign("GYUGMAESHODQSHAWDJSPKZWZLNNXCQSYXNLTOUWTAQCNMQKFBDYEYVGYRRANNQITEAVQJPHAWKFYPIRGPLEPHZARUOBBEMSCXVVWEUWGFBQGILJLQSZPCZZWNCLZJVNWTIYWMDRTABXHTVKJSTOAUDFEROQCVWUPDZJHFNXGCLYJEJVPXUFBRPXGRFNIEZHXOKPFRCHLXHSZVBIJQVMKSYAUKHJOMTFKOMTUIOYBBMECLMUDDKBIIFGS");
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
    msg.setTimeStamp(0.411399967061);
    msg.setSource(28334U);
    msg.setSourceEntity(80U);
    msg.setDestination(38844U);
    msg.setDestinationEntity(127U);
    msg.command = 243U;
    msg.htime = 0.523482069103;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 144U;
    tmp_msg_0.htime = 0.483147222482;
    tmp_msg_0.context.assign("KYESTFHRJLXGSQRZHSVQEYORGGPYOGKLHNWIRAXS");
    tmp_msg_0.text.assign("FLSHOKNCYUFQXVLDLUOBWNYSVDPZBSXIBYGSQIXIXMDYJWRIOKAQRVWTHWRKMSQJRFDAXUMPISAXUWMZLNDFKJJHQEIWJUCTFRLFTVWJVAHVNT");
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
    msg.setTimeStamp(0.659846805303);
    msg.setSource(56125U);
    msg.setSourceEntity(207U);
    msg.setDestination(44438U);
    msg.setDestinationEntity(182U);
    msg.op = 76U;
    msg.file.assign("LYZJLMXZIMDAAGUSJEWLOCMVVKUUNCLFYSOFIOXPNNCOOLACPISSYRYPGMFBCFRQRGYGRJBKLKZHDKEZRTAYYPLAYJVHBBDPWFDMXASVCJSBENAUUNMYQVQDSJCZNORXNGJTQEYWNDZQFJCTLRPTMBWIHZFBADQDKHBWXMOKIEIMEXNXDKIZOKEUQULQJUVHENXFIGTKAHGRCJTTPGOGWQQBHWTVPE");

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
    msg.setTimeStamp(0.866061422543);
    msg.setSource(57711U);
    msg.setSourceEntity(153U);
    msg.setDestination(6260U);
    msg.setDestinationEntity(95U);
    msg.op = 19U;
    msg.file.assign("IDVJGXXLGGBOMSAMFMKEELLSJANTZKXDQHCXHPIOXYWKUDOAGHNYYGQSLQAETCLILMQFECM");

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
    msg.setTimeStamp(0.943046998478);
    msg.setSource(30447U);
    msg.setSourceEntity(95U);
    msg.setDestination(4214U);
    msg.setDestinationEntity(231U);
    msg.op = 133U;
    msg.file.assign("ALNYIMRJGRXMQGOELRNICZVGFHIUUWUDWRZPPCASNTPKCUBWNLIKTZBYISEWGXYYTOJTYAUISXSGDDBBBMQJAGRSOLVVZYNJOIANICQQVD");

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
    msg.setTimeStamp(0.0567302324669);
    msg.setSource(48925U);
    msg.setSourceEntity(113U);
    msg.setDestination(15880U);
    msg.setDestinationEntity(189U);
    msg.op = 112U;
    msg.clock = 0.569995972702;
    msg.tz = -57;

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
    msg.setTimeStamp(0.469679053681);
    msg.setSource(58606U);
    msg.setSourceEntity(62U);
    msg.setDestination(8203U);
    msg.setDestinationEntity(126U);
    msg.op = 59U;
    msg.clock = 0.488858600134;
    msg.tz = -78;

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
    msg.setTimeStamp(0.829490696308);
    msg.setSource(49152U);
    msg.setSourceEntity(16U);
    msg.setDestination(59065U);
    msg.setDestinationEntity(22U);
    msg.op = 122U;
    msg.clock = 0.251552381022;
    msg.tz = -94;

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
    msg.setTimeStamp(0.0663724185607);
    msg.setSource(57897U);
    msg.setSourceEntity(42U);
    msg.setDestination(12270U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.532730460614);
    msg.setSource(55231U);
    msg.setSourceEntity(68U);
    msg.setDestination(52518U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.930118753351);
    msg.setSource(19047U);
    msg.setSourceEntity(161U);
    msg.setDestination(6561U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.42670869103);
    msg.setSource(65097U);
    msg.setSourceEntity(177U);
    msg.setDestination(28813U);
    msg.setDestinationEntity(21U);
    msg.sys_name.assign("EITFJFVVZGJXHEJTVZJVXCMLGEUTOEYKXNBWAFESFMDCORALYURUNDDSDIJKDQITOHBMGFUGVTQLSAQXQSSQYQRXSNC");
    msg.sys_type = 165U;
    msg.owner = 26674U;
    msg.lat = 0.900240574382;
    msg.lon = 0.679179540456;
    msg.height = 0.349819606408;
    msg.services.assign("CTQPJZSEFCWCLLUOGARKGCDLEDTXJOCRVSXWBZBVQFBIMEPDJUGYXEVZQYNAZLOBFXPMBKGAGDTPUDMUWYRWHOYAMRWMIXHDLMTTTQRLKPDNUSW");

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
    msg.setTimeStamp(0.397442064782);
    msg.setSource(20559U);
    msg.setSourceEntity(83U);
    msg.setDestination(62474U);
    msg.setDestinationEntity(100U);
    msg.sys_name.assign("OTWFANSODXIMVSLSVXECDRQPUAOSTAFSXVECYFRDNPQMBHWNKFEEVGCILLBJALARHGBDBTR");
    msg.sys_type = 90U;
    msg.owner = 41702U;
    msg.lat = 0.305736467357;
    msg.lon = 0.559940998739;
    msg.height = 0.334046350108;
    msg.services.assign("EZWTMRUBXMXJQFSTUNLCBBDJTYOXKROMHOCANTNVCWLKTOVPYIWCPVSAUMGZJEKISLPWGFNITLQFOCMFXAJPBHSQXEQRUHWQUMEHBDUWHOVXYZDKGERLBDKZUYHNQKDVCSGBSWVLHFUJDTPSPWGWQKCNMXVRPVLAJFMEADHYIBXQNW");

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
    msg.setTimeStamp(0.00200761742158);
    msg.setSource(19633U);
    msg.setSourceEntity(224U);
    msg.setDestination(5098U);
    msg.setDestinationEntity(226U);
    msg.sys_name.assign("BPMQBEZARVQCLGDOTCDFMXBBMQXWKQHCRMWNUIDGWAWHXFNCXEOVCTHSUTKYRYDMWPKVFQJEOWVKZNRVISFATLHTLHZJRDCREVZDKWUGSGLAJGGNTTT");
    msg.sys_type = 123U;
    msg.owner = 14490U;
    msg.lat = 0.501746750759;
    msg.lon = 0.057788747335;
    msg.height = 0.589215720854;
    msg.services.assign("STOWHTRXIUEKRBWGMYFPCSHBGNHPHFMVBUZJZNNIHOUQIGSCLAEJFQWJCIAAMXRMPNRKOAJRNJYYGQXEMBHWFWRQQGZ");

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
    msg.setTimeStamp(0.202684598022);
    msg.setSource(41806U);
    msg.setSourceEntity(3U);
    msg.setDestination(60256U);
    msg.setDestinationEntity(125U);
    msg.service.assign("LAFQDDGMTVANKLBXNUUVYVIMXLEXPA");
    msg.service_type = 0U;

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
    msg.setTimeStamp(0.379599324665);
    msg.setSource(14180U);
    msg.setSourceEntity(164U);
    msg.setDestination(25785U);
    msg.setDestinationEntity(194U);
    msg.service.assign("FLMEZGKOGGYXGCTJZDRFJQIUINKOJJMAPKXVTJWNENAIXEGZBYZWELTLERJADAODAQMHYYDBUCKYOAUBBEDYILTKDLKNETPCVEJRRHHRNBQXPFNDWNTUZHPPDSIVKFKVSLHZQMCNGWGOYIDADHCXOASYSVUFIWWJKFCZOBFCOJINHGBTXBR");
    msg.service_type = 42U;

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
    msg.setTimeStamp(0.989826841429);
    msg.setSource(751U);
    msg.setSourceEntity(160U);
    msg.setDestination(20499U);
    msg.setDestinationEntity(214U);
    msg.service.assign("KTWMFMUAZZSQNRRPJQJAXWNHTNXAJORICZBOKVVQTKOVNMFAKQIHTTCMUDCIXNGZGDHWZQUSUBBCFYIHDCYSJINQVUDBBGWFBPBCXWDPRJFAULHHSUHGUXEUEWTYVKSLRALKXEPGHRZWAGCOYWIESVIOYAHPIQECARYNNP");
    msg.service_type = 170U;

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
    msg.setTimeStamp(0.898848569587);
    msg.setSource(56488U);
    msg.setSourceEntity(42U);
    msg.setDestination(37951U);
    msg.setDestinationEntity(159U);
    msg.value = 0.0468278922154;

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
    msg.setTimeStamp(0.823610770042);
    msg.setSource(35734U);
    msg.setSourceEntity(224U);
    msg.setDestination(16867U);
    msg.setDestinationEntity(186U);
    msg.value = 0.538803555626;

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
    msg.setTimeStamp(0.915032845473);
    msg.setSource(23177U);
    msg.setSourceEntity(197U);
    msg.setDestination(21108U);
    msg.setDestinationEntity(122U);
    msg.value = 0.00707303715852;

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
    msg.setTimeStamp(0.959240045622);
    msg.setSource(10684U);
    msg.setSourceEntity(97U);
    msg.setDestination(38662U);
    msg.setDestinationEntity(155U);
    msg.value = 0.114562035857;

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
    msg.setTimeStamp(0.412566041623);
    msg.setSource(26943U);
    msg.setSourceEntity(215U);
    msg.setDestination(28472U);
    msg.setDestinationEntity(245U);
    msg.value = 0.128271990167;

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
    msg.setTimeStamp(0.263435904351);
    msg.setSource(5834U);
    msg.setSourceEntity(26U);
    msg.setDestination(14338U);
    msg.setDestinationEntity(145U);
    msg.value = 0.548797030684;

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
    msg.setTimeStamp(0.16923557664);
    msg.setSource(25741U);
    msg.setSourceEntity(150U);
    msg.setDestination(42277U);
    msg.setDestinationEntity(39U);
    msg.value = 0.378638752818;

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
    msg.setTimeStamp(0.548051795641);
    msg.setSource(63737U);
    msg.setSourceEntity(76U);
    msg.setDestination(44832U);
    msg.setDestinationEntity(90U);
    msg.value = 0.401456137197;

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
    msg.setTimeStamp(0.560163716012);
    msg.setSource(13156U);
    msg.setSourceEntity(208U);
    msg.setDestination(5074U);
    msg.setDestinationEntity(82U);
    msg.value = 0.138881237289;

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
    msg.setTimeStamp(0.072827798618);
    msg.setSource(21850U);
    msg.setSourceEntity(17U);
    msg.setDestination(37653U);
    msg.setDestinationEntity(106U);
    msg.number.assign("TWWDFCCZKIJIUSMXIPLKMPRBAILAKTLCVQVPVOJDMHWGDXOLOUATOFBNTXBKJBLVPZWFMPPNMGYOECIIYNEQAFNUAFRFODOHGLAREHURGYHURZBUKXESRQEUZGVJYLDHNVBXGHEPWSOQSGJJWJFWPEUW");
    msg.timeout = 58049U;
    msg.contents.assign("LUTJIRXNKTPAGSBQIVWDCUDOHFRACWJKOUUVWVMQHFZCPRHZTGAEHBMLWDFEZFRNWHUYNEYHLYQRFRSQNXYCEYTLCZZJBXSXBAQGCGS");

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
    msg.setTimeStamp(0.0359117897129);
    msg.setSource(19306U);
    msg.setSourceEntity(117U);
    msg.setDestination(27106U);
    msg.setDestinationEntity(210U);
    msg.number.assign("YLALZNDLHRODPKHVYOXTJSLIBUWXFTLVYPEJTGQRDAPSKGGGRLOJFUNJJTLEDPHKRSTQKVMEZVKYVPBXROSTJPTUDQKBHGZCAGCNCKWTTS");
    msg.timeout = 44889U;
    msg.contents.assign("RDHJFCDJYBHNHTESVLLZMMRHOWZEYUEUFFONVBZMVTXHKALKMZQAVWWCURQGCTKDCPADPJCYFTXRFTMQHLOUKXLBBPKSPKQTGQADQXISEGUBBGUBASGNJUGOTIPXMRLYVDDAWMLUZSOILPYIMWWYHRCJJRUAFXSGJGXQKZQWMCKSEAZZRTEDECQRHPFQNVWORJNPOCFIPNVEL");

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
    msg.setTimeStamp(0.0404257874122);
    msg.setSource(59125U);
    msg.setSourceEntity(35U);
    msg.setDestination(39226U);
    msg.setDestinationEntity(57U);
    msg.number.assign("BKOLAVRTVCOPADKAIXBKNXFIMAYWGEMOCTNMECINWSFDAPJKHZGGCDYXPTNQPEZFKWZRPVICHLZRWVWLUNZVIALNDQYMRFZIJJQHFLOATJBKSDJYJAYJVGPSELGSMWOQHBORFEGGQXXUCFBJBUPABBNTIMUCDJOHNIFFUCTCRGRHKMOHMBRUGEVQXEQOWLBPS");
    msg.timeout = 12360U;
    msg.contents.assign("TCFZDDIPUOQLLYMPAPXMHUYTTKNPUMCYXMLJERVUCVEACAHTEIHJBPNALXJZBYVYHGHTDGYIHHOIHKNZFUAIQSNDZEVTVSRBRFWDOYOHMQSBJARF");

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
    msg.setTimeStamp(0.107542570364);
    msg.setSource(60584U);
    msg.setSourceEntity(151U);
    msg.setDestination(23713U);
    msg.setDestinationEntity(138U);
    msg.seq = 412082175U;
    msg.destination.assign("RHYGMUINKDTEYPZHVDNIRRJJOVHNQJTCKALXSRJPXQEOFPDVWRQZJJPPUXXVWCSOEETCVKBXDJPFRYAFUVUTIKMLYAKBNMCNKTHXCYIMQUAWWCOKHVXFWIYWGBNXZGYBLQEDXRUYDFBBTSEHBECVAFIMMTQLWUPVBOIMXKZYFIZERDDHZAUNHANIGCCPD");
    msg.timeout = 34984U;
    const char tmp_msg_0[] = {-120, -121, -106, -85, -56, 25, 73, -44, -48, -57, 11, 67, -97, 2, -54, -34, -99, -123, -54, -15, -45, -99, 56, 76, 126, 46, 19, -2, 61, -47, 125, 39, -95, -27, -57, 49, -13, -94, 80, 103, -121, 81, -35, 120, 50, -60, -46, -110, -51, -8, 34, -37, -102, 56, 77, 12, -27, 81, 93, -59, 120, -15, 118, 9, -108, 47, 61, -31, 108, 37, -63, -27, -127, 124, -92, 66, 91, 85, -86, 102, -65, -58, 88, 29, 22, -75, 117, 96, 4, 58, -11, -90, 2, 90, -95, 98, 89, 112, -14, -49, 39, -112, -75, 99, 93, 81, 115, 114, -82, -115, 105, 116, -74, -35, 100, -78, 16, 66, 57, -33, 70, 77, 67, 13, 49, 47, 25, -34, -45, 102, 43, -76, 9, 9, 50, -53, 35, -57, -30, -94, 59, 78, -108, 32, -118, -72, -3, -49, 50, 81, 124, 117, 115, -90, 25, -52, -22, 43, 80, -34, 15, 117, -29, 48, -63, -58, -41, 103, -29, 27, -44, 9, -119, 30, -24, 111, -26, -25, -26, -56, 119, -47, 4, 110, 80, -34, -108, 25, -97, -52, 21, 46, -71, 101, 104, 84, -46, -107, -112, 47, -63, -97, -28, -14};
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
    msg.setTimeStamp(0.253353003491);
    msg.setSource(13187U);
    msg.setSourceEntity(81U);
    msg.setDestination(19263U);
    msg.setDestinationEntity(49U);
    msg.seq = 4166627541U;
    msg.destination.assign("AWEKSOOWXGLZFSEMWEAMVUXJYQWQBCCQTPWXGFQPLJMFWFPUHSFULNAAWQPXNJZTCJNYEYPEKZGWYNVDYYZIKEIIRTDOBMZBUCLJCVJHKEHUMVUUJBPFHTZKKDRXZBFIQLEHRRPPOAJOQVQIMVFSKCNHSDWONYYGXNOXHTARLDZAIPCMESCVEWQVGYARMBXAPDQ");
    msg.timeout = 64102U;
    const char tmp_msg_0[] = {1, -17, -24, -123, -27, 105, -42, -77, 113, 105, -3, -13, -86, 40, -88, -71, -93, 19, -116, -58, -72, 98, -73, -84, 83, -75, -20, -58, -47, -128, 26, 23, 34, -119, 8, 120, 23, 82, 117, 123, -33, -113, -48, 60, 62, -30, -67, -118, 101, -71, 15, -124, 80, -86, 36, -82, 4, -106, 104, -23, -51, 110, -35, 28, 83, 0, -113, 110, -3, -57, -87, 93, -102, -11, 89, 22, 21, -8, -73, 104, 57, -108, -58, -76, 78, 43, 59, 59, -45, -8, 71, 3, -24, -81, 67, -69, 63, -121, 124, 85, 116, -67, 104, -91, -12, -26, 25, 105, 80, 109, -71, -118, 21, -39, 91, -111, -16, 83, -120, -13, -43, 8, 108, -83, -45, -95, 1, 81, -119, 60, -51, -46, -61, 80, -118, 119, 49, -84, -23, -124, -2, -17, 27, 96, 100, 33, 54, -114, -41, -70, 55, 49, 12, 43, -77, 6, -89, 17, 32, 44, 86, 102, 6, 119, 5, 54};
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
    msg.setTimeStamp(0.0141774757111);
    msg.setSource(36977U);
    msg.setSourceEntity(107U);
    msg.setDestination(65052U);
    msg.setDestinationEntity(254U);
    msg.seq = 1251507929U;
    msg.destination.assign("VQFLMBBXFRGWJXBZDWUVMNKNECHFHPERUTPBUGWUXXQHFKMYEFFODCQAGVLLJMUZJRCYVXTZPOVIYFUZBQEYLLAQTNPGGHUEBCWVTNAQRHS");
    msg.timeout = 10939U;
    const char tmp_msg_0[] = {53, -95, -3, 77, -39, 82, 31, 25, 28, -24, 77, -16, 86, -95, -32, 22, -116, -11, -101, -82, -88, 83, -104, -41, 50, -37, 73, 36, -117, -75, -8, -43, 3, 43, -103, 121, 75, 112, -126, 24, -72, 30, -112, -43, 116, -120, 20, -91, -124, 79, 6, -53, -106, -38, -79, -105, 125, 49, -59, -82, 111, 2, 29, -117};
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
    msg.setTimeStamp(0.11358267179);
    msg.setSource(61311U);
    msg.setSourceEntity(145U);
    msg.setDestination(38006U);
    msg.setDestinationEntity(6U);
    msg.source.assign("DCNXGMYPWTDFOUBBNNFGXWUSRQHZRNEFKVSTIMLUXRVDOVBROHYS");
    const char tmp_msg_0[] = {-34, -36, 41, -39, -37, -44, 65, 103, -2, 69, 83, 52, 108, 1, 21, 18, 28, 83, -76, 3, 93, 13, 66, -4, 79, 28, 36, 19, -41, -27, -127, -11, -46, 45, 60, 70, 92, -114, 65, 48, 8, -100, 75, 73, 65, 28, -92, -89, 17, -104, 103, -102, 50, -37, -57, 19, -21, 125, -108, 99, -77, 7, 88, 123, 55, 64, 92, 92, -93, -95, 15, 109, 53, -3, 95, 87, 76, -90, -84, 14, -33, -22, -124, -35, 1, 53, -120, -17, 73, 98, -120, 21, 105, -40, 59, 13, -102, 26, -94, 32, -61, 73, -98, -23, -76, -90, 65, 8, -123, -27, -12, -101, 92, -89, -28, 120, 71, -102, 43, 34, -100, 34, 109, 76, 42, -86, 71, -26, 70, 0, 43, -57, 10, 74, 123, -38, 72, 100, -84, -77, 36, -107, 7, -64, 93, 59, -95, 27, 8, 92, -100, 72, 4, -79, 43, -3, 107, 97, 35, 22, 51, -37, 26, -45, -114, -18, -118, 16, 119, -110, 48, 85, 42, -54, -49, -30, -38, -22, 15, -38, -10, -11, 88, 100, 41, 92, 8, -5, 40, -22, 124, 113, 113, 3, -30, 39, 15, -75, -7, -105, -18, 122, 109, 86, 114, -29, -117, 32, -15, -92, 14, -36, 102, 82, -92, 59, 120, 0};
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
    msg.setTimeStamp(0.417308568147);
    msg.setSource(34976U);
    msg.setSourceEntity(118U);
    msg.setDestination(62600U);
    msg.setDestinationEntity(154U);
    msg.source.assign("HNJDEWIHNDPQVCXWDFT");
    const char tmp_msg_0[] = {-87, -34, 1, 86, -64, 102, -71, 18, 28, -52, -73, 63, 41, 63, 119, 71, 121, -23, 25, 53, 109, 20, -127, 78, 46, -50, -125, -63, -86, 85, -92, 4, -97, 20, 16, 43, -16, -76, 114, 65, -43, -8, -8, 75, -47, -99, -90, 70, 110, -120, -93, 88, 18, -118, -60, -63, 29, 55, -18, -92, 46, 36, -106, -63, -125, -73, 15, 81, 81, 35, -9, -34, 40, -91, -44, 44, 11, 52, -27, -114, -109, 28, 117, -82, 85, -47, -112, -29, 118, -127, 15, -60, 91, 33, 31, -102, 116, -106, -45, 44, -123, -2, 35, -113, -121, 56, 25, -121, 44, -79, -4, 58, -58, -58, -76, 30, -1, 102, 6, -31, 84, -91, 49, -9, 63, -95, 85, 114, -101, 65, 30, 111, 104, 46, 55, -19, 1, -97, 115, 89, 40, 18, -46, -78, 91, 37, -23, 76, -105, 12, -100, 105, 54, 66, -51, 24, 19, 2, 41, 26, 98, -36, -26, -90, -39, 84, 52, 104, 73, 45, 57, -73, 8, -109};
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
    msg.setTimeStamp(0.0864124209714);
    msg.setSource(6096U);
    msg.setSourceEntity(153U);
    msg.setDestination(23306U);
    msg.setDestinationEntity(63U);
    msg.source.assign("CFNGYPFUWUPQKCFLYHSNTVFGDMAYDPWIWOMENMRICOCQUACJAWKOIMBSVGJTTYTRVDDZPXFNEOSEZTXORZPGPLQDIOSKSYQUOWJMUUOHPDSZNJAGQVMJMKXXOBEVCSHPJXPXAZWLGUNFTUDWCBRXFVIGIKMBBBIIKIQHLKRVTJHYEVANKBYAYXJZEPBRFEUQLLHCGSHNVRBXIJQAKRFYEEZJLQ");
    const char tmp_msg_0[] = {-78, 1, 12, 113, -127, 117, -29, 27, 38, -14, -76, -75, -16, 59, -76, -96, 52, -116, -90, -36, -73, -56, -37, 24, -18, -36, -26, 44, 79, 122, 14, 95, 42, 20, 111, 66, -95, 11, 97, 101, 101, -33, 81, 18, 76, 59, -71, 126, -123, 83, -61, -118, 32, -91, 95, -19, 13, 14, 41, 80, 65, -104, 82, 27, -27, 30, 14, 83, -54, -120, -80, 110, -121, -16, 66, -13, -11, -76, 117, -102, 4, -24, -37, 119, -8, 42, -2, 75, 64, -59, 34, -99, 121, 60, -52, 21, 81, -91, -23, 44, 49, 13, 8, 2, -52, 55, -66, -119, -84, 77, 41, 101, -11, 81, 1, 114, -69, 38, 82, 114, -36, 93, -86, 25, -19, 39, -18, -124, 10, -2, -45, 94, -13};
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
    msg.setTimeStamp(0.291415211436);
    msg.setSource(52829U);
    msg.setSourceEntity(17U);
    msg.setDestination(2498U);
    msg.setDestinationEntity(211U);
    msg.seq = 3492080130U;
    msg.state = 232U;
    msg.error.assign("QCUBEDSYTKRESANICNHFOFCPBNNUKVQMBVCBLVLSRMZQUSDJWYJGILTIHOFRTNPMJGZOWSUDCFFNPXPVNYFLLWYYNCAZILZUDSHK");

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
    msg.setTimeStamp(0.618835389521);
    msg.setSource(5404U);
    msg.setSourceEntity(246U);
    msg.setDestination(47128U);
    msg.setDestinationEntity(19U);
    msg.seq = 1312750445U;
    msg.state = 165U;
    msg.error.assign("HOAUKCLYZMOYPTBVCZU");

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
    msg.setTimeStamp(0.0416983790145);
    msg.setSource(39305U);
    msg.setSourceEntity(62U);
    msg.setDestination(15600U);
    msg.setDestinationEntity(154U);
    msg.seq = 1875498578U;
    msg.state = 97U;
    msg.error.assign("PNRPUJYMYEXYXWJRKZXTCUHBIKJHVLAUBAGPKHIDENVIVOLDNWQVZGSTJESNMZJDWFVGQCCIZNQKGWSEMXTYPTWHLMRSTLJEZIASSWOXYHLLKCOICCAVCJAVQPGBUSBXUXDXWYZBEGNANFDFRBKPAIAGQYOHRQHTYCLWDXTKQBMOUVS");

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
    msg.setTimeStamp(0.152384848539);
    msg.setSource(25712U);
    msg.setSourceEntity(143U);
    msg.setDestination(33032U);
    msg.setDestinationEntity(216U);
    msg.origin.assign("KIHBAZQIKBMLNTBGLOHTSONBRKSMXYOGOSAVXQXFLVWXMYNYLKDWCECDWHJOEGIMHDTWLWFWIJOPTFCYZGDLDZGBSANRVUNUEOUHAFTVJMUVXRQEBTSZXRQNDVGZBRXHLSHMSUDTYPQERJDIMAQQPGCOWPNCKATEZGLFVJKWSQKPFCUKXSOYDIZJUJCDURLZGXUFXYBBQRNIPCACHJYZVB");
    msg.text.assign("JVZSGFTTVKSMTMAGONACHBFHUPQWEVMKJBVXQXAJYVLJQWRELHPIXTPGLIKJOYOKQZGBPZVRHGESFFIHYIEXV");

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
    msg.setTimeStamp(0.836490923852);
    msg.setSource(9572U);
    msg.setSourceEntity(169U);
    msg.setDestination(50422U);
    msg.setDestinationEntity(6U);
    msg.origin.assign("EMFIXCZEWQCKSUVYMFVTDDHCMBFMLVFWOKNZADBYIKCUYRURUGEWWXGBHJMXSCYYPWVUOQLEZAZPVFLCPAGLBJXIIXENXPHSJINLRYBJOVQUQEGXUFAKKVDTTLHGPHZDTEGJ");
    msg.text.assign("JZSXVSCHNFGRPFQVQJAKZABYSMSMIHPHAFYBECWIRPLNWMHVLHULDMKSIYXNGRUNQFGSAAZUCMUXGVOYTQZJISINDXTDPOEGTFIWPJMMATTTMOCVPWELCRWCYVFEGQYZEJ");

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
    msg.setTimeStamp(0.0594119797183);
    msg.setSource(44243U);
    msg.setSourceEntity(113U);
    msg.setDestination(15135U);
    msg.setDestinationEntity(206U);
    msg.origin.assign("TRYOEGSZFLITXMZZWMRYMHBCVRZIABWVTOWTOLHURIYBZEBQKFABXAFKZGHQAEDMIFLSXQTFEIRZALTRETNVPQVGTVORGYMZCSKDIGRHNFAGMWQYDCAFQZCSLRDRVCNOETKPSJNYSMXJEXJNKNJ");
    msg.text.assign("GAAKIGCYTZHOHVISDTHYMXIKJOAEQYRJUZJXQHDWYEUVODCADRSDUPNACTWCZWFLEYPMRKDLYCFHUFENUGPTERHMPPMTVMGIEZJSAFQBTNUVLDANSCMSXXJMYPYQVQCVHWYZSEXKRELJKXUPIWNTOFVBYIEHAJMMZGTGGOVKSHCSOBLZQNWVIGGEGZHRQKULSFWKNV");

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
    msg.setTimeStamp(0.605311896037);
    msg.setSource(44740U);
    msg.setSourceEntity(27U);
    msg.setDestination(48715U);
    msg.setDestinationEntity(142U);
    msg.origin.assign("PZNKEKTBOZGUNOMHCKSGYDYUXWNMBYACEBIGVQHFPCIGJQWKDXHCXRBARTYCZRPCOWRAHONVLYIAQ");
    msg.htime = 0.321974114275;
    msg.lat = 0.552937391777;
    msg.lon = 0.11841081953;
    const char tmp_msg_0[] = {13, 63, -14, -78, -31, 109, 108, -105, -84, -102, 19, 31, 105, 22, 59, 0, -56, -72, 48, -46, -49, 94, 10, -62, -32, 104, 14, -69, 51, 44, 5, 79, 23, 92, 76, -23, 1, -53, 94, -59, -112, 44, 77, -6, -48, 27, 113, 124, 57, -61, -119, 58, -14, 0, 97, 61, 83, 126, 95, -54, -46, 82, -34, 84, 86, 126, 92, 94, -87, 94, 112, -51, 74, 59, 23, -4, -100, -25, 103, -11, -49, -47, 30, 86, -26, 59, 55, -50, 92, -67, 24, -81, -110, 76, -92, -89, -119, 101, -20, -67, -38, 92, -29, -24, 61, -92, 28, 6, 39, 45, -128, -100, -9, -87, 51, -112, -97, 100, 15, -68, -50, -9, 21, 15, -125, -58, 98, 1, -76, -116, 82, 27, 58, -5, -102, -105, -19, 85, 6, 78, 63, 83, -57, -91, -124, -9, -44, -9, 34, -8, 92, 6, -6, -36, -11, 61, 83, -32, -65, -7, -85, 34, 29, -91, -31, -18, -13, -117, -45, -75, -80, 77, 0, -111, -34, -3, -52, 111, -86, 77, 42, -79, -66, -104, -79, -113, 36, 40, -54, -123, 68, -76, 26, 47, -31, 39, 115, -9, 9};
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
    msg.setTimeStamp(0.0949540020278);
    msg.setSource(45620U);
    msg.setSourceEntity(38U);
    msg.setDestination(2459U);
    msg.setDestinationEntity(197U);
    msg.origin.assign("DTSNTBHHHYJBZGRBFRULIIUAOEDEMBPROZHECCJMTBMBJQVQUHYLOQNMVCUYBILEXD");
    msg.htime = 0.193131552747;
    msg.lat = 0.266307735477;
    msg.lon = 0.779683531281;
    const char tmp_msg_0[] = {83, -71, -85, 30, 9, -18, 73, -62, -76, 16, -69, -2, -54, 117, 106, 23, 21, -75, -19, -114, -84, -86, 125, -4, -9, -116, 82, -105, 95, -128, -35, -8, 87, 62, 100, -73, 100, -101, -86, -64, 79, 108, -112, -124, -71, -117, 40, -125, 105, -19, -89, -80, 69, 2, -50, -53, 79, -21, -101, 88, 97, 0, -64, -96, 15, 3, 21, -25, 18, 88, -128, -126, -68, 34, 123, -94, 89, -89, -68, -127, -119, 105, 44, 16, -70, -74, -63, 22, 41, -20, -78, 70, 42, -102};
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
    msg.setTimeStamp(0.496719419872);
    msg.setSource(62164U);
    msg.setSourceEntity(109U);
    msg.setDestination(41605U);
    msg.setDestinationEntity(36U);
    msg.origin.assign("YUBLURKRJLOMWDKLCYDZDHETSIWMASWUTOFRNXDJVXMTWPXVHSATKWFGYFOBQSHYKEIHFKPZUJASCJEVAT");
    msg.htime = 0.342718610947;
    msg.lat = 0.920835306422;
    msg.lon = 0.822180981283;
    const char tmp_msg_0[] = {-15, 75, 74, 120, 47, -124, -56, 81, -113, -16, -112, -47, -22, -111, -126, -52, 122, 0, -48, 73, 39, 31, 43, 55, 96, 99, -98, 51, 109, 89, 58, -124, -33, -17, -98, -99, 27, 103, -101, -108, 123, 46, 108, -30, 22, 7, -11, 76, -8, -33, -68, 49, 82, 61, -43, -16, 68, -65, 2, 36, 57, 27, -67, 116, 104, 112, 53, 19, -87, -110, 34, -87, -125, 121, 72, 33, -127, -72, 32, 78, -8, 126, 1, -93, -85, -18, -62, -108, 71, 4, -126, 37, 37, -60, -127, -80, -45, -107, 68, -16, -83, -12, -117, -43, 110, -49, -50, 91, 79, -109, 74, -38, -90, -107, 77, -105, -111, 97, 95, 112, 2, -71, -33, 71, -35, 106, 93, 7, -31, -114};
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
    msg.setTimeStamp(0.25282025683);
    msg.setSource(55344U);
    msg.setSourceEntity(143U);
    msg.setDestination(17744U);
    msg.setDestinationEntity(81U);
    msg.req_id = 52077U;
    msg.ttl = 44693U;
    msg.destination.assign("BLOQPOCMDIPZFNFSLYEAQDPTEDKTZYFXJGOCXDGVSDVPPETFRLBLYWVWJNRJOQAUGBROGIMSJJPMIMIEYUUNAUTXHBBJZOKPQVHKBWSFKMGJSYUJHWZZKDIXLUNEFMCTVLHUQCXRRETBGKOJMAXMBVVETXSIDURATGDULQTCWZHFLMDNWXYZFEXFSOGYEYPNGPIRBNAJHOQKAYZHTSCAWHWNVPMUS");
    const char tmp_msg_0[] = {-7, 53, -20, 123, -44, -114, 19, -117, -77, 117, 5, -61, 85, 3, -13, 19, 51, -87, -86, 126, -104, -119, 77, 124, -96, -22, -125, -28, -88, -118, 60, 78, 9, -37, -60, 81, -64, -3, 120, -112, -74, -35, 56, -124, 45, -36, -82, -7, 99, -40, 15, 43, 25, 55, 2, 4, -57, 104, -40, -79, -106, -99, -126, 48, 112, -94, -42, -66, -67, 113, 89, 69, -12, -118, -71, -55, -46, -126, -98, -56, 86, 80, -107, 92, 109, 9, -94, 86, 69, -126, 115, -51, 17, -35, 60, 47, -71, 126, -7, -94, -126, 104, 65, -123, -114, -123, 38, -27, -109, 48, -87, -37, -88, 90, 57, -36, 36, 79, 78, -84, -90, -105, -103, -78, 67, 94, -63, 59, 96, 56, -94, -80, -83, 17, -103, 61, 111, -42, -28, 100, 0, -41, 62, 12, -70, 56, 112, -16, 93, 89, 88, -10, 49, 24, 3, -73, 121, 118, -53, 35, -43, -87, -119, -71, -71, -93, 69, -24, 26, -107, -71, 46, 6, 118, 103, 120, -63, -127, -11, 53, -44, 59, 117, -21, 103, -91, -75, 94, -48, 22, 123, -97, 13, 118, 71, 121, -9, 75, 122};
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
    msg.setTimeStamp(0.460356121871);
    msg.setSource(9673U);
    msg.setSourceEntity(74U);
    msg.setDestination(10696U);
    msg.setDestinationEntity(151U);
    msg.req_id = 56029U;
    msg.ttl = 22083U;
    msg.destination.assign("TXSIXQPVIOEQWSZDAICBXHFTQGUOZGODGNDPPANWHZAKMHPBGREJJBPNHBURYDQSWSNSSTRITJKRKNCMFZLPDTILWLRHCYFMNPEXSNNYOQYYAOXJTGHUFMRKFESRSXVBIPUBFKLJRE");
    const char tmp_msg_0[] = {-127, -95, 110, -45, 51, 37, 100, 20, -73, 68, 100, 17, 5, 81, 47, -40, 74, 102, -45, -126, -39, -119, 81, 93, -29, 31, -58, -7, 82, 32, 21, 34, -2, -105, -28, 117, 81, 92, 11, -75, -110, 45, -121, 85, -82, -68, 38, 73, 76, -64, 24, -123, -53, -43, 41, 9, 1, -104, 53, -12, -53, 68, 120, -103, 30, 98, 100, -78, 95, -36, 83, -108, 121, -29, 5, 100, -34, 7, -123, -88, 33, 20, -20, -51, 57, -22, 53, 9, -97, 104, 60, -11, -70, -99, 121, 106, -21, 106, 22, -40, 86, 47, 121, 24, -77, 87, 29, 94, -92, -76, 122, 52, -2, 22, -114, 7, 55, -82, -55, -126, -52, 104, -35, -118, 33, -67, 58, -27, 100, 126, -127, 24, 53, 99, -16, -47, -79, -97, 31, -93, 1, -94, -13, 32, 103, 16, 55, 46, 82, 108, -113, 113, -116, -64, 18, 10, 45, -101, 121, -27, -103, -78, 21, -22, -42, 10, 34, -19, -78, -121, -6, -107, -32, 94, -89, -63, 100, -76, -5, 20, 89, 122, -69, -64, -3, 41, 28, 82, 60, -100, 82, -98, 110, -36, -59, -112, -114, -117, -21, -116, 50, -80, -23, 14, -56, 74, 49, -121, -48, 5, -75, -76, 98, 24};
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
    msg.setTimeStamp(0.420367943548);
    msg.setSource(37249U);
    msg.setSourceEntity(239U);
    msg.setDestination(24955U);
    msg.setDestinationEntity(115U);
    msg.req_id = 38896U;
    msg.ttl = 1071U;
    msg.destination.assign("KLWLKDQBGTGZXDZASOVSLVBCWKVAAUCSWCAFGSRLAZXNU");
    const char tmp_msg_0[] = {34, -54, 110, 30, -54, 70, 15, 24, 18, 26, -31, 124, -62, 22, 35, -63, 43, 86, -64, 91, -84, -91, 105, -59, -43, -61, 67, -71, 119, -114, 13, 6, -46, -105, -119, 13, 39, 44, -4, 26, -29, -72, -84, 66, 40, -107, 27, 66, -49, -49, 12, 114, -35, -115, 26, 38, 90};
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
    msg.setTimeStamp(0.216283176655);
    msg.setSource(26132U);
    msg.setSourceEntity(49U);
    msg.setDestination(9014U);
    msg.setDestinationEntity(250U);
    msg.req_id = 9686U;
    msg.status = 38U;
    msg.text.assign("PBAMCGZWXJDHHYBSPOUNWTDUMSFICFMFBGLLKFEQVVGCHZUKGXRCUGBWJ");

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
    msg.setTimeStamp(0.803323747117);
    msg.setSource(24796U);
    msg.setSourceEntity(118U);
    msg.setDestination(58144U);
    msg.setDestinationEntity(162U);
    msg.req_id = 24499U;
    msg.status = 28U;
    msg.text.assign("WRYJCBWALVMOADUNDSCXUJOFILAMORSMPOSEKYYGWPARHPPRUZDNRVNLKYJZBDNLISDLEEQGABMQFFMFPEIIGXCRZKSZTUHKWYGDLIK");

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
    msg.setTimeStamp(0.484899869955);
    msg.setSource(17154U);
    msg.setSourceEntity(66U);
    msg.setDestination(2727U);
    msg.setDestinationEntity(228U);
    msg.req_id = 2349U;
    msg.status = 129U;
    msg.text.assign("DPHTZVEPMYWCINLRIIVNRGCXZUAFSWDYFOFTBYMLWLBUGWVLRHHSSQOBDNYFBXLQDWFQBSHBTAHCGQCFXJMXYWIOOXVIFCUEKPWKDEIFTMNTMALSJHULUAGNPPXAIOPMKCUTDRBYZKENJRXZBVWBDBOZPLLWJEYVTAUSMKJZYEHAKDHJYJVPTNXGNZRCGCMZQJIQQRPTPCSZALSQNEHZYEUQGGAJS");

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
    msg.setTimeStamp(0.958854836903);
    msg.setSource(6089U);
    msg.setSourceEntity(251U);
    msg.setDestination(43027U);
    msg.setDestinationEntity(213U);
    msg.group_name.assign("VPPQDUNOUXFEZUCREFTBEFNABRKKYKMSLIIZCALYWEQHVXCAONQKTLQPTJBQGRARLFMBZNFWJBKCPPMQFUSPIROHHYNGAGNIYUDASJBQGJSVTARYZJZCWASVHLXOLQZLYTIWBRVTICDYWXKYWJOUZXTNHFRHDSRSKDKTEFIGJXQATTWEMMPENBLGCARJVMWZWUPNDIHBOQXVIKIUPDOOGVSVMCEUGOFOZYDXDSJWEPZJBX");
    msg.links = 3987371929U;

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
    msg.setTimeStamp(0.73629193507);
    msg.setSource(44882U);
    msg.setSourceEntity(53U);
    msg.setDestination(22718U);
    msg.setDestinationEntity(168U);
    msg.group_name.assign("QTRBJPPOANEYQZEBOUAGRVGDIMEXLHXEJSKV");
    msg.links = 3623464387U;

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
    msg.setTimeStamp(0.0668395307746);
    msg.setSource(25512U);
    msg.setSourceEntity(53U);
    msg.setDestination(1371U);
    msg.setDestinationEntity(3U);
    msg.group_name.assign("CPIPVXXSOIWUKDXRNETBEXYQXWUOHDZXNZWQKWBQQYQMLPTSOTWAAHNFSHIDHSAOBWJKEUHFFZXDQQCZUAGGPKIOHR");
    msg.links = 1113824060U;

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
    msg.setTimeStamp(0.406603452195);
    msg.setSource(38556U);
    msg.setSourceEntity(146U);
    msg.setDestination(20364U);
    msg.setDestinationEntity(220U);
    msg.groupname.assign("BHTUGNHRVFJJMRDLAPJCPJNM");
    msg.action = 168U;
    msg.grouplist.assign("ZALXMKLDCFYSVPOVPGZVIJJJQUGYUMXWRQRTSLFPTHRLCUYWVBBDWKQPCXSRRKUXDKXHBNERKYBMAXNQQWEEYLLAXVOEUHAQYGFJBSSMHVCVFPCDHUNOAGIYOGWWKTOOXDHVSNGRMJPGFSYDMXNILMYWNSTIJJHIAEMKLKAEFCFBPHH");

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
    msg.setTimeStamp(0.596445108993);
    msg.setSource(33927U);
    msg.setSourceEntity(68U);
    msg.setDestination(22209U);
    msg.setDestinationEntity(134U);
    msg.groupname.assign("ZUDMRPXATSEXHCCIRVNZLHQDHMGNHTRKKLNLZIFCRIBZPAUPGMFGJYOYODYSRWMRATEQOHSGECVNGTPAEJGSAJXGUVJUKDKBUYXJOIKDTYOBLRUPELSTVBX");
    msg.action = 164U;
    msg.grouplist.assign("CLOQEHLOHBOAYROTSULUFDYJDJVAMTJQZWVGZUBUPBIFHNCYYKWPDKISECQLEWOTVMRXYWIXHSMZVFJTXUTJCNZZNDPVOKRIFGFLKKEOFJLCAOBKCQIGAYNKIWUCPBNSEVXINEDTUSNDSJNGSHXPDXOTEECRVAVBRIIWMJRDGPAYJFQHVPPSUHXGCWUFRYVFZXMWMRIAMEPSADLOCBUMGDHQTWLAYQZQSMTGMGRLNHQRXKFKHZATWQBLNPJ");

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
    msg.setTimeStamp(0.159833537701);
    msg.setSource(14546U);
    msg.setSourceEntity(145U);
    msg.setDestination(6889U);
    msg.setDestinationEntity(55U);
    msg.groupname.assign("KSSBBKTGYPLVNNXZRM");
    msg.action = 53U;
    msg.grouplist.assign("OMLDHZGWZZXTTPPKUJMKHOFDMCAHIKCLXUBVIUWNNXFVFZKBZNCEBMRVSIWGBWDYJTLJZEQMAVGFPIQVUKESQBTGUUXZA");

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
    msg.setTimeStamp(0.766195512486);
    msg.setSource(62963U);
    msg.setSourceEntity(52U);
    msg.setDestination(15449U);
    msg.setDestinationEntity(231U);
    msg.id = 199U;
    msg.range = 0.88598274025;

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
    msg.setTimeStamp(0.814392452931);
    msg.setSource(45989U);
    msg.setSourceEntity(241U);
    msg.setDestination(22710U);
    msg.setDestinationEntity(201U);
    msg.id = 178U;
    msg.range = 0.153354542769;

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
    msg.setTimeStamp(0.27660707997);
    msg.setSource(5827U);
    msg.setSourceEntity(231U);
    msg.setDestination(1756U);
    msg.setDestinationEntity(221U);
    msg.id = 136U;
    msg.range = 0.426555927303;

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
    IMC::LblDetection msg;
    msg.setTimeStamp(0.401507206077);
    msg.setSource(42871U);
    msg.setSourceEntity(198U);
    msg.setDestination(29909U);
    msg.setDestinationEntity(37U);
    msg.tx = 76U;
    msg.channel = 192U;
    msg.timer = 32075U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblDetection msg;
    msg.setTimeStamp(0.213899299122);
    msg.setSource(48181U);
    msg.setSourceEntity(198U);
    msg.setDestination(8638U);
    msg.setDestinationEntity(150U);
    msg.tx = 155U;
    msg.channel = 60U;
    msg.timer = 61716U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblDetection msg;
    msg.setTimeStamp(0.614630095459);
    msg.setSource(6539U);
    msg.setSourceEntity(248U);
    msg.setDestination(22961U);
    msg.setDestinationEntity(115U);
    msg.tx = 119U;
    msg.channel = 79U;
    msg.timer = 7375U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblDetection #2", msg == *msg_d);
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
    msg.setTimeStamp(0.135512467647);
    msg.setSource(32012U);
    msg.setSourceEntity(212U);
    msg.setDestination(60944U);
    msg.setDestinationEntity(226U);
    msg.beacon.assign("ZHOCVWRABOQDKFNBAQSEPPQWQLPZDZKSLWCTYWKQVXEOOICGZHUTJEGJDOCKLGQIISJQEOZCBCPENFUJQJWMHHIHRXFWYMFUFNPHUNVCDSLASKVNJFXXWDIWSBMMYWAAYXBYYTRGFZVZCJURKBQ");
    msg.lat = 0.199736057136;
    msg.lon = 0.549982049919;
    msg.depth = 0.415948770227;
    msg.query_channel = 105U;
    msg.reply_channel = 153U;
    msg.transponder_delay = 95U;

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
    msg.setTimeStamp(0.662582650651);
    msg.setSource(54029U);
    msg.setSourceEntity(202U);
    msg.setDestination(3770U);
    msg.setDestinationEntity(193U);
    msg.beacon.assign("TSGPFRAVHITQYBOBNYZMARWGQLENDEHAPVILMQCQXIWADDAWYLJDXQJFVPHMMCRUKFUNBSCYKFVATMQXPCTCLLFGNSYMJKWXZWEOBIOHRBWWDKEREGRVMAMBDCPYZBOWTKUUILFZSNHJOHKHEVUIPVUFIACTNXLTOPSSJDLVXZRQDPQNOITUYTLCORWKIKQSGRTYDVGNIWLCSGXBEGYEZEQSUJHKGXEDPBJVRJJZYZJ");
    msg.lat = 0.432922472775;
    msg.lon = 0.943831363712;
    msg.depth = 0.504750219396;
    msg.query_channel = 199U;
    msg.reply_channel = 197U;
    msg.transponder_delay = 61U;

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
    msg.setTimeStamp(0.599616571421);
    msg.setSource(4326U);
    msg.setSourceEntity(10U);
    msg.setDestination(28697U);
    msg.setDestinationEntity(192U);
    msg.beacon.assign("GXWFGJQTKJPPYYSWIAYXHYOIYBFSVDQNSFDTIMVHNCEBRBXIADLPAKZXHBT");
    msg.lat = 0.224085181479;
    msg.lon = 0.708044728635;
    msg.depth = 0.0928081432953;
    msg.query_channel = 149U;
    msg.reply_channel = 96U;
    msg.transponder_delay = 113U;

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
    msg.setTimeStamp(0.564754993052);
    msg.setSource(41396U);
    msg.setSourceEntity(13U);
    msg.setDestination(34818U);
    msg.setDestinationEntity(59U);
    msg.op = 254U;

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
    msg.setTimeStamp(0.918670157192);
    msg.setSource(11591U);
    msg.setSourceEntity(242U);
    msg.setDestination(54059U);
    msg.setDestinationEntity(229U);
    msg.op = 164U;

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
    msg.setTimeStamp(0.310944504998);
    msg.setSource(47006U);
    msg.setSourceEntity(4U);
    msg.setDestination(1417U);
    msg.setDestinationEntity(8U);
    msg.op = 130U;

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
    IMC::AcousticRange msg;
    msg.setTimeStamp(0.152624121163);
    msg.setSource(50638U);
    msg.setSourceEntity(216U);
    msg.setDestination(19356U);
    msg.setDestinationEntity(196U);
    msg.address = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRange msg;
    msg.setTimeStamp(0.0556562610111);
    msg.setSource(23091U);
    msg.setSourceEntity(249U);
    msg.setDestination(56523U);
    msg.setDestinationEntity(113U);
    msg.address = 207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRange msg;
    msg.setTimeStamp(0.511797770549);
    msg.setSource(47152U);
    msg.setSourceEntity(80U);
    msg.setDestination(36188U);
    msg.setDestinationEntity(156U);
    msg.address = 240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRangeReply msg;
    msg.setTimeStamp(0.667012763562);
    msg.setSource(64647U);
    msg.setSourceEntity(130U);
    msg.setDestination(18895U);
    msg.setDestinationEntity(206U);
    msg.address = 123U;
    msg.status = 209U;
    msg.range = 0.164351269925;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRangeReply #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRangeReply msg;
    msg.setTimeStamp(0.223268905794);
    msg.setSource(34357U);
    msg.setSourceEntity(91U);
    msg.setDestination(4343U);
    msg.setDestinationEntity(210U);
    msg.address = 83U;
    msg.status = 174U;
    msg.range = 0.883281204157;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRangeReply #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRangeReply msg;
    msg.setTimeStamp(0.86647817229);
    msg.setSource(626U);
    msg.setSourceEntity(195U);
    msg.setDestination(46476U);
    msg.setDestinationEntity(152U);
    msg.address = 113U;
    msg.status = 119U;
    msg.range = 0.246580437132;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRangeReply #2", msg == *msg_d);
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
    msg.setTimeStamp(0.014571540173);
    msg.setSource(14049U);
    msg.setSourceEntity(32U);
    msg.setDestination(23420U);
    msg.setDestinationEntity(19U);
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("XLKBFZQNHMVQAFBHXAGKRYZMIUQSFAGGZDJRJZQJBHMWYYOWVLTOAEEVWTKNIWNPURTRCCRSSUDOVVXAFLFHFJGEKYZW");
    tmp_msg_0.links = 3428744244U;
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
    msg.setTimeStamp(0.594823844103);
    msg.setSource(29167U);
    msg.setSourceEntity(173U);
    msg.setDestination(24363U);
    msg.setDestinationEntity(155U);
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 49853U;
    tmp_msg_0.status = 178U;
    tmp_msg_0.text.assign("STFYURCFDMKDRZATNQPXTIIEKZVUIUHGSTETSAWJNZFOXGKLOHCMKKVYVBTY");
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
    msg.setTimeStamp(0.651032024825);
    msg.setSource(5458U);
    msg.setSourceEntity(185U);
    msg.setDestination(60967U);
    msg.setDestinationEntity(49U);
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 15466U;
    tmp_msg_0.type = 138U;
    tmp_msg_0.utc_year = 41533U;
    tmp_msg_0.utc_month = 164U;
    tmp_msg_0.utc_day = 215U;
    tmp_msg_0.utc_time = 0.40475173935;
    tmp_msg_0.lat = 0.977022605921;
    tmp_msg_0.lon = 0.227393416643;
    tmp_msg_0.height = 0.848726424392;
    tmp_msg_0.satellites = 98U;
    tmp_msg_0.cog = 0.297891599498;
    tmp_msg_0.sog = 0.56067162267;
    tmp_msg_0.hdop = 0.57254193647;
    tmp_msg_0.vdop = 0.269711618496;
    tmp_msg_0.hacc = 0.71486850718;
    tmp_msg_0.vacc = 0.543027506513;
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
    IMC::AcousticDiagnostic msg;
    msg.setTimeStamp(0.917553700623);
    msg.setSource(40457U);
    msg.setSourceEntity(105U);
    msg.setDestination(45109U);
    msg.setDestinationEntity(135U);
    msg.enable = 16U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticDiagnostic #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticDiagnostic msg;
    msg.setTimeStamp(0.219506469039);
    msg.setSource(58744U);
    msg.setSourceEntity(233U);
    msg.setDestination(52244U);
    msg.setDestinationEntity(185U);
    msg.enable = 250U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticDiagnostic #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticDiagnostic msg;
    msg.setTimeStamp(0.51106519792);
    msg.setSource(61914U);
    msg.setSourceEntity(37U);
    msg.setDestination(17555U);
    msg.setDestinationEntity(44U);
    msg.enable = 207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticDiagnostic #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticNoise msg;
    msg.setTimeStamp(0.0734064428409);
    msg.setSource(13561U);
    msg.setSourceEntity(196U);
    msg.setDestination(63704U);
    msg.setDestinationEntity(103U);
    msg.summary = 68U;
    msg.level = 57U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticNoise #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticNoise msg;
    msg.setTimeStamp(0.459751358101);
    msg.setSource(65101U);
    msg.setSourceEntity(123U);
    msg.setDestination(24129U);
    msg.setDestinationEntity(55U);
    msg.summary = 125U;
    msg.level = 147U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticNoise #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticNoise msg;
    msg.setTimeStamp(0.0561152466438);
    msg.setSource(18323U);
    msg.setSourceEntity(239U);
    msg.setDestination(42831U);
    msg.setDestinationEntity(178U);
    msg.summary = 194U;
    msg.level = 140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticNoise #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPing msg;
    msg.setTimeStamp(0.51092574963);
    msg.setSource(9283U);
    msg.setSourceEntity(252U);
    msg.setDestination(36211U);
    msg.setDestinationEntity(152U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPing #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPing msg;
    msg.setTimeStamp(0.994293554801);
    msg.setSource(17137U);
    msg.setSourceEntity(119U);
    msg.setDestination(49115U);
    msg.setDestinationEntity(175U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPing #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPing msg;
    msg.setTimeStamp(0.362448149282);
    msg.setSource(13023U);
    msg.setSourceEntity(82U);
    msg.setDestination(47651U);
    msg.setDestinationEntity(103U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPing #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPingReply msg;
    msg.setTimeStamp(0.69367666425);
    msg.setSource(15876U);
    msg.setSourceEntity(78U);
    msg.setDestination(57990U);
    msg.setDestinationEntity(111U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPingReply #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPingReply msg;
    msg.setTimeStamp(0.490293495025);
    msg.setSource(8637U);
    msg.setSourceEntity(94U);
    msg.setDestination(59621U);
    msg.setDestinationEntity(244U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPingReply #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPingReply msg;
    msg.setTimeStamp(0.0892778868783);
    msg.setSource(18780U);
    msg.setSourceEntity(155U);
    msg.setDestination(22473U);
    msg.setDestinationEntity(58U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPingReply #2", msg == *msg_d);
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
    msg.setTimeStamp(0.00931775760205);
    msg.setSource(13671U);
    msg.setSourceEntity(99U);
    msg.setDestination(48161U);
    msg.setDestinationEntity(58U);
    msg.op = 168U;
    msg.system.assign("EUJYXDPLCRPVFCUWXQAVKUPSIW");
    msg.range = 0.765543089204;
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 119U;
    tmp_msg_0.eta = 48737U;
    tmp_msg_0.info.assign("MBFCIOEWPXNSJSMKHVSHIVWBMPHFERCIVPSESHVBOFSGNRBQNMYWVZOELZIRHRSWOATPWEKQGDFOJDAGJQEHIVDRITXPNAYCXCGPPBDFIDDGTNQOM");
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
    msg.setTimeStamp(0.318824344705);
    msg.setSource(24760U);
    msg.setSourceEntity(246U);
    msg.setDestination(41979U);
    msg.setDestinationEntity(109U);
    msg.op = 117U;
    msg.system.assign("AEMOSIBTHAKVATZOGAJOCWXEBYAYZVPGXSEUFXKH");
    msg.range = 0.292665460645;
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("LZBMYWDNBKKEQOYGUIXYXZFAFWLTIIFOQCMEFBXVOKEMNSLKAGXKGTWEVXAMSWVOGJQMBWFMZJQAOXDSRKQPLDKWZAYEYHTGBHYUSFNUBDHSQQHZSRUDXVILVLDWRVIABDBQMEPJPXITHDCFNFCCPUZEZFOOIPNJMGITPLSLACGJGPRRKNPWXKLOUVUCFLVTPABUSEMZWRHSUJCNIQCCJTAVREYUZDDVGAWXJTRNRYTNZYHMQRI");
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
    msg.setTimeStamp(0.156900879295);
    msg.setSource(59774U);
    msg.setSourceEntity(24U);
    msg.setDestination(31475U);
    msg.setDestinationEntity(212U);
    msg.op = 36U;
    msg.system.assign("JVWUMCLCIWVUWGSULRXLVDYNYBQFZWXGYVJHSCXCQLAMIFQAKCQFZROFPERZBWQBYVZMRTNYSOPRIRFIKIVYWHKNDJUGTPTLATGHSEXLLPQ");
    msg.range = 0.995006874364;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.387554735638;
    tmp_msg_0.lon = 0.777435004927;
    tmp_msg_0.speed = 0.65228278442;
    tmp_msg_0.speed_units = 116U;
    tmp_msg_0.duration = 5750U;
    tmp_msg_0.sys_a = 30865U;
    tmp_msg_0.sys_b = 13468U;
    tmp_msg_0.move_threshold = 0.156698078131;
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
    msg.setTimeStamp(0.78660306084);
    msg.setSource(8530U);
    msg.setSourceEntity(94U);
    msg.setDestination(26252U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.684443929938);
    msg.setSource(31522U);
    msg.setSourceEntity(214U);
    msg.setDestination(44805U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.692734394098);
    msg.setSource(63804U);
    msg.setSourceEntity(32U);
    msg.setDestination(49915U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.0174365398524);
    msg.setSource(25497U);
    msg.setSourceEntity(214U);
    msg.setDestination(30212U);
    msg.setDestinationEntity(10U);
    msg.list.assign("MXIJVDWAOBLBRRTEGQTTGMRUZBQYCZ");

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
    msg.setTimeStamp(0.77743455823);
    msg.setSource(16242U);
    msg.setSourceEntity(93U);
    msg.setDestination(32841U);
    msg.setDestinationEntity(148U);
    msg.list.assign("UWIVBLKBOXCAPPURJVPVUKDRFLUIQZBOPISNCYFLENRIOWUZVQWQFAVPOJPGNEKVSKLTUHTMTWIUFCDFWZEDWBPGBEVHHLHRXAYOWAJJZGLHMVDEQGQHPFTUTAINMSMHGYUWHEKYZIMMTZIBYCXLVYJLXOCCTS");

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
    msg.setTimeStamp(0.147966460294);
    msg.setSource(14913U);
    msg.setSourceEntity(54U);
    msg.setDestination(13572U);
    msg.setDestinationEntity(25U);
    msg.list.assign("CJVCWUQHILYATNCXPUCEFIMPYOGMHXIRGVLFFNROMRIUKDSKHGSZZVXESYBXXJDOZUSVHBOPDDCQRNYKVEGKJXEZABSAPCVWQQPJWCXOABEQISOJKWBRYHFAPKSLVUZAXCNEGNNAVOLNJKZTVDIWDZPLFQWILRTOQYJFWWDCBBQWZTHFHURTNKYJUKIZTNQCIHOGSMMXMFBADWEUDXUBIJHUYZQRLMBEHFMGPFL");

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
    msg.setTimeStamp(0.0324766747481);
    msg.setSource(19332U);
    msg.setSourceEntity(133U);
    msg.setDestination(35472U);
    msg.setDestinationEntity(44U);
    msg.value = -30687;

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
    msg.setTimeStamp(0.774510299498);
    msg.setSource(22926U);
    msg.setSourceEntity(218U);
    msg.setDestination(42961U);
    msg.setDestinationEntity(174U);
    msg.value = 6024;

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
    msg.setTimeStamp(0.507923188671);
    msg.setSource(67U);
    msg.setSourceEntity(175U);
    msg.setDestination(9355U);
    msg.setDestinationEntity(132U);
    msg.value = 21009;

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
    msg.setTimeStamp(0.615568245314);
    msg.setSource(38065U);
    msg.setSourceEntity(220U);
    msg.setDestination(31553U);
    msg.setDestinationEntity(207U);
    msg.value = 0.909912506965;

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
    msg.setTimeStamp(0.7674087198);
    msg.setSource(30912U);
    msg.setSourceEntity(216U);
    msg.setDestination(42203U);
    msg.setDestinationEntity(59U);
    msg.value = 0.933674269968;

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
    msg.setTimeStamp(0.122454656145);
    msg.setSource(41320U);
    msg.setSourceEntity(155U);
    msg.setDestination(45805U);
    msg.setDestinationEntity(149U);
    msg.value = 0.553367529433;

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
    msg.setTimeStamp(0.935939911103);
    msg.setSource(2876U);
    msg.setSourceEntity(52U);
    msg.setDestination(44235U);
    msg.setDestinationEntity(106U);
    msg.value = 0.141576777441;

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
    msg.setTimeStamp(0.914517335997);
    msg.setSource(9694U);
    msg.setSourceEntity(22U);
    msg.setDestination(60974U);
    msg.setDestinationEntity(14U);
    msg.value = 0.258777230045;

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
    msg.setTimeStamp(0.672596144579);
    msg.setSource(4501U);
    msg.setSourceEntity(170U);
    msg.setDestination(13654U);
    msg.setDestinationEntity(158U);
    msg.value = 0.791744161793;

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
    msg.setTimeStamp(0.854423830717);
    msg.setSource(30580U);
    msg.setSourceEntity(163U);
    msg.setDestination(53690U);
    msg.setDestinationEntity(96U);
    msg.validity = 45862U;
    msg.type = 188U;
    msg.utc_year = 23787U;
    msg.utc_month = 0U;
    msg.utc_day = 228U;
    msg.utc_time = 0.09080932137;
    msg.lat = 0.464934500558;
    msg.lon = 0.526554513168;
    msg.height = 0.184432742045;
    msg.satellites = 199U;
    msg.cog = 0.433747237884;
    msg.sog = 0.0101449117268;
    msg.hdop = 0.176265367775;
    msg.vdop = 0.61181322188;
    msg.hacc = 0.654544164151;
    msg.vacc = 0.978652282426;

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
    msg.setTimeStamp(0.198567110537);
    msg.setSource(11806U);
    msg.setSourceEntity(181U);
    msg.setDestination(40170U);
    msg.setDestinationEntity(13U);
    msg.validity = 13395U;
    msg.type = 163U;
    msg.utc_year = 33370U;
    msg.utc_month = 132U;
    msg.utc_day = 51U;
    msg.utc_time = 0.999698245456;
    msg.lat = 0.114251435714;
    msg.lon = 0.465386879376;
    msg.height = 0.0541798066391;
    msg.satellites = 231U;
    msg.cog = 0.0855036084334;
    msg.sog = 0.890565578565;
    msg.hdop = 0.0264082940337;
    msg.vdop = 0.0331844190284;
    msg.hacc = 0.827340042914;
    msg.vacc = 0.114712358572;

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
    msg.setTimeStamp(0.939896541014);
    msg.setSource(36402U);
    msg.setSourceEntity(246U);
    msg.setDestination(25606U);
    msg.setDestinationEntity(70U);
    msg.validity = 25780U;
    msg.type = 221U;
    msg.utc_year = 17266U;
    msg.utc_month = 18U;
    msg.utc_day = 105U;
    msg.utc_time = 0.409432217489;
    msg.lat = 0.111720076559;
    msg.lon = 0.267211990013;
    msg.height = 0.426106773356;
    msg.satellites = 162U;
    msg.cog = 0.202399090927;
    msg.sog = 0.378594530374;
    msg.hdop = 0.23865992486;
    msg.vdop = 0.803558266862;
    msg.hacc = 0.599690360213;
    msg.vacc = 0.970263904195;

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
    msg.setTimeStamp(0.607403791949);
    msg.setSource(11545U);
    msg.setSourceEntity(106U);
    msg.setDestination(22691U);
    msg.setDestinationEntity(160U);
    msg.time = 0.556745142222;
    msg.phi = 0.66742460911;
    msg.theta = 0.0840601542528;
    msg.psi = 0.549403294324;
    msg.psi_magnetic = 0.932508041668;

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
    msg.setTimeStamp(0.754137915011);
    msg.setSource(29453U);
    msg.setSourceEntity(202U);
    msg.setDestination(3820U);
    msg.setDestinationEntity(15U);
    msg.time = 0.234901632542;
    msg.phi = 0.252364693232;
    msg.theta = 0.719705905205;
    msg.psi = 0.509184614911;
    msg.psi_magnetic = 0.188819114402;

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
    msg.setTimeStamp(0.728504506353);
    msg.setSource(54213U);
    msg.setSourceEntity(64U);
    msg.setDestination(51949U);
    msg.setDestinationEntity(65U);
    msg.time = 0.232005495021;
    msg.phi = 0.332057047402;
    msg.theta = 0.0107666576236;
    msg.psi = 0.268727315807;
    msg.psi_magnetic = 0.144313488147;

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
    msg.setTimeStamp(0.395358598761);
    msg.setSource(34674U);
    msg.setSourceEntity(21U);
    msg.setDestination(13437U);
    msg.setDestinationEntity(39U);
    msg.time = 0.345527035168;
    msg.x = 0.589171299077;
    msg.y = 0.411151397497;
    msg.z = 0.646812322343;
    msg.timestep = 0.638557633162;

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
    msg.setTimeStamp(0.239097454173);
    msg.setSource(60296U);
    msg.setSourceEntity(204U);
    msg.setDestination(30027U);
    msg.setDestinationEntity(107U);
    msg.time = 0.020831420645;
    msg.x = 0.370652610241;
    msg.y = 0.577089345811;
    msg.z = 0.14790516382;
    msg.timestep = 0.462170996572;

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
    msg.setTimeStamp(0.920138953099);
    msg.setSource(53170U);
    msg.setSourceEntity(155U);
    msg.setDestination(46028U);
    msg.setDestinationEntity(83U);
    msg.time = 0.724358593624;
    msg.x = 0.825596557263;
    msg.y = 0.827813011395;
    msg.z = 0.617906176519;
    msg.timestep = 0.832870371776;

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
    msg.setTimeStamp(0.434045049549);
    msg.setSource(13624U);
    msg.setSourceEntity(238U);
    msg.setDestination(57518U);
    msg.setDestinationEntity(142U);
    msg.time = 0.0225075452046;
    msg.x = 0.699482082353;
    msg.y = 0.606841402335;
    msg.z = 0.719198393114;

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
    msg.setTimeStamp(0.379260542275);
    msg.setSource(58109U);
    msg.setSourceEntity(173U);
    msg.setDestination(31105U);
    msg.setDestinationEntity(78U);
    msg.time = 0.953578711813;
    msg.x = 0.114832158579;
    msg.y = 0.75087966954;
    msg.z = 0.0663693589332;

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
    msg.setTimeStamp(0.0281787782141);
    msg.setSource(60352U);
    msg.setSourceEntity(99U);
    msg.setDestination(1024U);
    msg.setDestinationEntity(37U);
    msg.time = 0.807503915694;
    msg.x = 0.157774934251;
    msg.y = 0.00702834427419;
    msg.z = 0.545391401785;

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
    msg.setTimeStamp(0.827427256816);
    msg.setSource(38386U);
    msg.setSourceEntity(57U);
    msg.setDestination(9321U);
    msg.setDestinationEntity(209U);
    msg.time = 0.942212607528;
    msg.x = 0.4742409916;
    msg.y = 0.806785646796;
    msg.z = 0.34360431943;

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
    msg.setTimeStamp(0.0892095522474);
    msg.setSource(43974U);
    msg.setSourceEntity(10U);
    msg.setDestination(57929U);
    msg.setDestinationEntity(254U);
    msg.time = 0.795106805148;
    msg.x = 0.835639537146;
    msg.y = 0.93410223242;
    msg.z = 0.915013050828;

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
    msg.setTimeStamp(0.392578228581);
    msg.setSource(58282U);
    msg.setSourceEntity(143U);
    msg.setDestination(7623U);
    msg.setDestinationEntity(34U);
    msg.time = 0.622417142195;
    msg.x = 0.0956956414326;
    msg.y = 0.790480321191;
    msg.z = 0.338765770661;

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
    msg.setTimeStamp(0.201122454168);
    msg.setSource(34071U);
    msg.setSourceEntity(7U);
    msg.setDestination(9428U);
    msg.setDestinationEntity(122U);
    msg.time = 0.982640312286;
    msg.x = 0.34141492851;
    msg.y = 0.635299177997;
    msg.z = 0.42108658776;

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
    msg.setTimeStamp(0.591182090785);
    msg.setSource(37764U);
    msg.setSourceEntity(29U);
    msg.setDestination(12598U);
    msg.setDestinationEntity(53U);
    msg.time = 0.595482604714;
    msg.x = 0.846645540255;
    msg.y = 0.569149589714;
    msg.z = 0.245574604821;

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
    msg.setTimeStamp(0.471212227886);
    msg.setSource(24621U);
    msg.setSourceEntity(52U);
    msg.setDestination(27776U);
    msg.setDestinationEntity(224U);
    msg.time = 0.999486563266;
    msg.x = 0.296888235531;
    msg.y = 0.983920466468;
    msg.z = 0.108768620325;

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
    msg.setTimeStamp(0.608785147627);
    msg.setSource(21339U);
    msg.setSourceEntity(153U);
    msg.setDestination(38673U);
    msg.setDestinationEntity(60U);
    msg.validity = 197U;
    msg.x = 0.4742540748;
    msg.y = 0.227322287115;
    msg.z = 0.103274387173;

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
    msg.setTimeStamp(0.844443995716);
    msg.setSource(15217U);
    msg.setSourceEntity(60U);
    msg.setDestination(52269U);
    msg.setDestinationEntity(128U);
    msg.validity = 125U;
    msg.x = 0.658342324746;
    msg.y = 0.07118168338;
    msg.z = 0.198364239425;

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
    msg.setTimeStamp(0.635119520585);
    msg.setSource(240U);
    msg.setSourceEntity(148U);
    msg.setDestination(13836U);
    msg.setDestinationEntity(49U);
    msg.validity = 77U;
    msg.x = 0.150137761426;
    msg.y = 0.0845721003645;
    msg.z = 0.217902901521;

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
    msg.setTimeStamp(0.437460944856);
    msg.setSource(45026U);
    msg.setSourceEntity(46U);
    msg.setDestination(64156U);
    msg.setDestinationEntity(76U);
    msg.validity = 144U;
    msg.x = 0.337706599345;
    msg.y = 0.507191414413;
    msg.z = 0.0945627413138;

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
    msg.setTimeStamp(0.550051003023);
    msg.setSource(57247U);
    msg.setSourceEntity(244U);
    msg.setDestination(60367U);
    msg.setDestinationEntity(163U);
    msg.validity = 180U;
    msg.x = 0.6785514214;
    msg.y = 0.573799916244;
    msg.z = 0.412687885457;

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
    msg.setTimeStamp(0.28700795867);
    msg.setSource(57698U);
    msg.setSourceEntity(186U);
    msg.setDestination(61903U);
    msg.setDestinationEntity(166U);
    msg.validity = 207U;
    msg.x = 0.222173497882;
    msg.y = 0.242157933252;
    msg.z = 0.661583299092;

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
    msg.setTimeStamp(0.622765317512);
    msg.setSource(23498U);
    msg.setSourceEntity(143U);
    msg.setDestination(28725U);
    msg.setDestinationEntity(9U);
    msg.time = 0.882957474472;
    msg.x = 0.963232331926;
    msg.y = 0.0548500339545;
    msg.z = 0.805660939744;

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
    msg.setTimeStamp(0.463408314592);
    msg.setSource(49935U);
    msg.setSourceEntity(53U);
    msg.setDestination(40831U);
    msg.setDestinationEntity(71U);
    msg.time = 0.975459067989;
    msg.x = 0.293054591236;
    msg.y = 0.0210684765862;
    msg.z = 0.562379462687;

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
    msg.setTimeStamp(0.627704491203);
    msg.setSource(65181U);
    msg.setSourceEntity(110U);
    msg.setDestination(24885U);
    msg.setDestinationEntity(7U);
    msg.time = 0.393174200194;
    msg.x = 0.0116903852366;
    msg.y = 0.16929367373;
    msg.z = 0.155131842862;

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
    msg.setTimeStamp(0.933272250644);
    msg.setSource(61647U);
    msg.setSourceEntity(146U);
    msg.setDestination(3641U);
    msg.setDestinationEntity(130U);
    msg.validity = 140U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.479480844335;
    tmp_msg_0.y = 0.0968104830089;
    tmp_msg_0.z = 0.39564058479;
    tmp_msg_0.phi = 0.186220718021;
    tmp_msg_0.theta = 0.612289777653;
    tmp_msg_0.psi = 0.633118862252;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.53274925046;
    tmp_msg_1.beam_height = 0.307441590813;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.588808792331;

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
    msg.setTimeStamp(0.827373008916);
    msg.setSource(47845U);
    msg.setSourceEntity(88U);
    msg.setDestination(13854U);
    msg.setDestinationEntity(26U);
    msg.validity = 236U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.74907095287;
    tmp_msg_0.beam_height = 0.945167206852;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.837076974764;

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
    msg.setTimeStamp(0.447731358754);
    msg.setSource(23000U);
    msg.setSourceEntity(5U);
    msg.setDestination(37553U);
    msg.setDestinationEntity(85U);
    msg.validity = 39U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.501821020927;
    tmp_msg_0.y = 0.228686265844;
    tmp_msg_0.z = 0.730974639149;
    tmp_msg_0.phi = 0.174443858332;
    tmp_msg_0.theta = 0.314022248207;
    tmp_msg_0.psi = 0.9131620979;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.988868626113;
    tmp_msg_1.beam_height = 0.537170570018;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.592737086479;

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
    msg.setTimeStamp(0.360234956956);
    msg.setSource(58102U);
    msg.setSourceEntity(203U);
    msg.setDestination(39928U);
    msg.setDestinationEntity(80U);
    msg.value = 0.701066118471;

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
    msg.setTimeStamp(0.407569645961);
    msg.setSource(34509U);
    msg.setSourceEntity(53U);
    msg.setDestination(25182U);
    msg.setDestinationEntity(60U);
    msg.value = 0.00313773530999;

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
    msg.setTimeStamp(0.806579615199);
    msg.setSource(47064U);
    msg.setSourceEntity(21U);
    msg.setDestination(65388U);
    msg.setDestinationEntity(206U);
    msg.value = 0.93129659649;

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
    msg.setTimeStamp(0.906536225771);
    msg.setSource(33743U);
    msg.setSourceEntity(29U);
    msg.setDestination(35678U);
    msg.setDestinationEntity(101U);
    msg.value = 0.322735531356;

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
    msg.setTimeStamp(0.973391832483);
    msg.setSource(2652U);
    msg.setSourceEntity(122U);
    msg.setDestination(59663U);
    msg.setDestinationEntity(163U);
    msg.value = 0.962513153466;

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
    msg.setTimeStamp(0.479280468447);
    msg.setSource(32423U);
    msg.setSourceEntity(168U);
    msg.setDestination(62706U);
    msg.setDestinationEntity(53U);
    msg.value = 0.816733681231;

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
    msg.setTimeStamp(0.262856423228);
    msg.setSource(4635U);
    msg.setSourceEntity(232U);
    msg.setDestination(34156U);
    msg.setDestinationEntity(220U);
    msg.value = 0.791458713085;

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
    msg.setTimeStamp(0.337288133296);
    msg.setSource(13264U);
    msg.setSourceEntity(60U);
    msg.setDestination(5967U);
    msg.setDestinationEntity(21U);
    msg.value = 0.0950646615249;

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
    msg.setTimeStamp(0.25473042278);
    msg.setSource(14439U);
    msg.setSourceEntity(202U);
    msg.setDestination(38039U);
    msg.setDestinationEntity(237U);
    msg.value = 0.690692168726;

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
    msg.setTimeStamp(0.21897687545);
    msg.setSource(61982U);
    msg.setSourceEntity(133U);
    msg.setDestination(34639U);
    msg.setDestinationEntity(188U);
    msg.value = 0.583246860389;

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
    msg.setTimeStamp(0.339441836939);
    msg.setSource(38652U);
    msg.setSourceEntity(162U);
    msg.setDestination(9075U);
    msg.setDestinationEntity(186U);
    msg.value = 0.89864829566;

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
    msg.setTimeStamp(0.387979569952);
    msg.setSource(24257U);
    msg.setSourceEntity(1U);
    msg.setDestination(61210U);
    msg.setDestinationEntity(106U);
    msg.value = 0.856344307596;

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
    msg.setTimeStamp(0.0722721565131);
    msg.setSource(64502U);
    msg.setSourceEntity(223U);
    msg.setDestination(27237U);
    msg.setDestinationEntity(0U);
    msg.value = 0.282285562747;

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
    msg.setTimeStamp(0.185245355429);
    msg.setSource(36846U);
    msg.setSourceEntity(43U);
    msg.setDestination(12156U);
    msg.setDestinationEntity(39U);
    msg.value = 0.381341365343;

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
    msg.setTimeStamp(0.301875939196);
    msg.setSource(13080U);
    msg.setSourceEntity(131U);
    msg.setDestination(4305U);
    msg.setDestinationEntity(103U);
    msg.value = 0.817929310724;

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
    msg.setTimeStamp(0.553998548023);
    msg.setSource(38073U);
    msg.setSourceEntity(162U);
    msg.setDestination(65102U);
    msg.setDestinationEntity(233U);
    msg.value = 0.160164232377;

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
    msg.setTimeStamp(0.169075482736);
    msg.setSource(53723U);
    msg.setSourceEntity(196U);
    msg.setDestination(14453U);
    msg.setDestinationEntity(198U);
    msg.value = 0.135515865576;

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
    msg.setTimeStamp(0.0529274046453);
    msg.setSource(14814U);
    msg.setSourceEntity(224U);
    msg.setDestination(48193U);
    msg.setDestinationEntity(164U);
    msg.value = 0.00381896437892;

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
    msg.setTimeStamp(0.911344277416);
    msg.setSource(14136U);
    msg.setSourceEntity(84U);
    msg.setDestination(59692U);
    msg.setDestinationEntity(187U);
    msg.value = 0.319002821826;

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
    msg.setTimeStamp(0.74618695937);
    msg.setSource(27303U);
    msg.setSourceEntity(198U);
    msg.setDestination(38280U);
    msg.setDestinationEntity(203U);
    msg.value = 0.144703233807;

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
    msg.setTimeStamp(0.203727063104);
    msg.setSource(11279U);
    msg.setSourceEntity(72U);
    msg.setDestination(35126U);
    msg.setDestinationEntity(124U);
    msg.value = 0.225374941566;

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
    msg.setTimeStamp(0.7535098031);
    msg.setSource(56735U);
    msg.setSourceEntity(127U);
    msg.setDestination(14469U);
    msg.setDestinationEntity(88U);
    msg.value = 0.420735625156;

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
    msg.setTimeStamp(0.755713142372);
    msg.setSource(35126U);
    msg.setSourceEntity(32U);
    msg.setDestination(19666U);
    msg.setDestinationEntity(167U);
    msg.value = 0.171789857198;

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
    msg.setTimeStamp(0.3731142354);
    msg.setSource(60565U);
    msg.setSourceEntity(64U);
    msg.setDestination(57466U);
    msg.setDestinationEntity(137U);
    msg.value = 0.44978453256;

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
    msg.setTimeStamp(0.903284167037);
    msg.setSource(44721U);
    msg.setSourceEntity(207U);
    msg.setDestination(15836U);
    msg.setDestinationEntity(237U);
    msg.direction = 0.75888009392;
    msg.speed = 0.760470464996;
    msg.turbulence = 0.929025800829;

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
    msg.setTimeStamp(0.54441704531);
    msg.setSource(53467U);
    msg.setSourceEntity(41U);
    msg.setDestination(34803U);
    msg.setDestinationEntity(230U);
    msg.direction = 0.697782357756;
    msg.speed = 0.259655531147;
    msg.turbulence = 0.792934355893;

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
    msg.setTimeStamp(0.224664788873);
    msg.setSource(18968U);
    msg.setSourceEntity(226U);
    msg.setDestination(59615U);
    msg.setDestinationEntity(58U);
    msg.direction = 0.0575609400005;
    msg.speed = 0.134561092727;
    msg.turbulence = 0.924871344951;

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
    msg.setTimeStamp(0.410585825155);
    msg.setSource(35061U);
    msg.setSourceEntity(165U);
    msg.setDestination(10923U);
    msg.setDestinationEntity(86U);
    msg.value = 0.00887777013237;

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
    msg.setTimeStamp(0.999691424697);
    msg.setSource(15032U);
    msg.setSourceEntity(84U);
    msg.setDestination(50337U);
    msg.setDestinationEntity(38U);
    msg.value = 0.848426691482;

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
    msg.setTimeStamp(0.417807037089);
    msg.setSource(63589U);
    msg.setSourceEntity(27U);
    msg.setDestination(63U);
    msg.setDestinationEntity(173U);
    msg.value = 0.114181431964;

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
    msg.setTimeStamp(0.149937855332);
    msg.setSource(19973U);
    msg.setSourceEntity(103U);
    msg.setDestination(45141U);
    msg.setDestinationEntity(111U);
    msg.value.assign("JZLBTMWHVMUYKBLMRSXAXVCNEUGAJWWWFHFKNUHWUOSWNHETBYGKDBCQBJGAMRXOMHDGBCYLQXZHJTDOGIIGNMHBYKUAFEXAFPQPFXPOXOBCWTQASSIRDIGZZFWYDPCAMJSUNZSAEORWVPBJUSRAIFJSTGKERPGCPXFCRTMYDKIXTYKERIVFVOXUZGSVHOCDREHNZKQNMWRQIQMLCEUPPNPBIEYDYOZKLLCVVIDUA");

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
    msg.setTimeStamp(0.808916204268);
    msg.setSource(6397U);
    msg.setSourceEntity(38U);
    msg.setDestination(17646U);
    msg.setDestinationEntity(85U);
    msg.value.assign("OQEXJZQYTVXFAARTEMJRGBDRUCFIXSGPKTBIWXYGZKFPTMQAVYIWVQHNOEKCIETHSWLKUZQLACJSEQIBLVSIWBIKUNFKJOSGNZHRDOYMZRKUDXGORVODKCAPABARFRXKWFZXCENIHPSTLZUBBE");

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
    msg.setTimeStamp(0.619697781014);
    msg.setSource(44033U);
    msg.setSourceEntity(178U);
    msg.setDestination(13824U);
    msg.setDestinationEntity(234U);
    msg.value.assign("TIYUUQSDEWHFOGDNMKDXVONOYJAGUBJPQSVLKPMGSZHVXCFULJWLRPXAUTTZMDYQQIMBMUGSQPDHOCCFCKQJWORVUABXWSRTEJLGTGWFWBQMFXYBCNAYKIRWTHKRSIGIAJFYUFEHZSVVSFVYXTODLHKQBARLWIGGULOXWSNYKJIQOMBVHEJUICKNOSMRNKREPP");

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
    msg.setTimeStamp(0.0470520108461);
    msg.setSource(3416U);
    msg.setSourceEntity(233U);
    msg.setDestination(6630U);
    msg.setDestinationEntity(239U);
    const char tmp_msg_0[] = {-67, 45, 126, 107, 48, -6, -17, 81, 36, -40, 66, 82, 9, 61, 75, -8, -75, 41, -43, 49, -46};
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
    msg.setTimeStamp(0.461064822133);
    msg.setSource(20237U);
    msg.setSourceEntity(12U);
    msg.setDestination(28299U);
    msg.setDestinationEntity(195U);
    const char tmp_msg_0[] = {-103, 45, 104, -123, -121, 54, -41, -116, 35, 64, 122, -55, 112, -41, -85, 96, 42, -58, -119, 117, -113, 65, -72, 114, 50, 67, -42, -118, -41, -119, 87, -119, 53, -12, 17, -18, 108, 60, 116, 122, -4, 124, -119, -6, 65, 41, -123, 2, 63, -4, 112, 37, -42, 46, -85, -15, 47, 102, 121, -58, -22, 93, 7, 76, -125, -15, -120, -40, -51, -83, -118, 115, -70, -15, 105, 94, 114, 48, 53, -35, 32, -66, -113, -107, -98, -7, 108, 47, -107, -107, 81, -13, -16, 37, -48, -22, 24, -127, -49, -65, 11, 104, -61, -9, 92, 44, -30, 57, -8, 118, -93, 113, 16, 82, -101, -18, -41, -14, 68, -90, 33, 115, -16, 78, -101, 126, 84, -52, -53, 3, 3, 107, -22, -114, -98, 102, 77, -2, 109, 41, 16, 78, 59, -49, -74, -58, -75, 92, 122, 14, 103, 126, 12, 43, -80, -127, 50, 0, 103};
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
    msg.setTimeStamp(0.082205087766);
    msg.setSource(61116U);
    msg.setSourceEntity(124U);
    msg.setDestination(50912U);
    msg.setDestinationEntity(43U);
    const char tmp_msg_0[] = {-106, -38, 20, 108, 94, -80, 104, -21, 68, 18, -110, -62, 98, 44, 53, 54, 55, -47, -73, -80, 84, 61, -43, 17, -76, 79, 79, 45, 57, 6, -63, 62, 65, -72, -95, 109, 82, 65, -101, 92, 91, 53, 3, 34, -92, 81, -72, -52, 56, -58, 99, 19, 75, 7, 28, 87, 80, -107, -24, 71, -106, 99, 83, 38, 56, -56, -37, 74, -86, 45, 64, 6, -70, 59, 2, -81, 8, -32, 5, -4, 71, -39, 102, 70, 122, 122, 112, -20, -20, -104, -60, -84, -15, 27, -72, -2, -76, -6, -48, 92, -34, 116, 54, 92, -90, 39, 93, -80, -13, -118, 29, 105, -124, 20, -118, 81, -83, 38, 47, -114, -21, 109, 46, 90, -95, -59, 48, -58, 32, -26, -86, -9, -28, 76, 57, 75, 119, 54, -122, -41, 95, 70, -98, 14, -77, 86, 12, 124, -15, 72, 38, 85, -26, 76, -27, 30, -3, -81, 58, -39, -62, -104, -96, -62, -109, 19, 5, 13, -118, 51, -12, 49, -86, 28, -105, 107, -7, -81, -63, 43, 53, -49, 108, -112, 101, 47, 125, -26, 114, -103, 42, 18, 73, -41, 121, -87, -55, 84, -10, 40, -8, 81, -29, -7, -20, 33, -124, -11, 69, 19, 74, -25, -34, 99, 109, 72, -57, -1, 110, -23, -78};
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
    IMC::SonarConfig msg;
    msg.setTimeStamp(0.15349064038);
    msg.setSource(57629U);
    msg.setSourceEntity(188U);
    msg.setDestination(44293U);
    msg.setDestinationEntity(205U);
    msg.frequency = 4158246247U;
    msg.min_range = 9126U;
    msg.max_range = 266U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarConfig msg;
    msg.setTimeStamp(0.850193332065);
    msg.setSource(14478U);
    msg.setSourceEntity(110U);
    msg.setDestination(3563U);
    msg.setDestinationEntity(94U);
    msg.frequency = 1724559550U;
    msg.min_range = 52189U;
    msg.max_range = 11886U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarConfig msg;
    msg.setTimeStamp(0.622996295861);
    msg.setSource(53744U);
    msg.setSourceEntity(1U);
    msg.setDestination(46076U);
    msg.setDestinationEntity(65U);
    msg.frequency = 2623315086U;
    msg.min_range = 34811U;
    msg.max_range = 65296U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarConfig #2", msg == *msg_d);
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
    msg.setTimeStamp(0.795999422153);
    msg.setSource(62344U);
    msg.setSourceEntity(250U);
    msg.setDestination(42034U);
    msg.setDestinationEntity(142U);
    msg.type = 187U;
    msg.frequency = 1878887281U;
    msg.min_range = 56100U;
    msg.max_range = 19134U;
    msg.bits_per_point = 143U;
    msg.scale_factor = 0.667739578413;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.00540573865523;
    tmp_msg_0.beam_height = 0.340955363586;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-115, -29, 115, 51, -6, -100, 28, -31, -21, -115, -68, 100, -44, -62, -39, 43, -18, 17, -59, 122, 83, -102, -82, 106, -31, -39, 89, -92, 2, 108, -73, -126, 116, 85, 117, 14, -48, -29, 121, 101, -37, -122, 16, -51, 110, 68, -99, 30, 101, 102, -94, -30, 46, 21, -26, 56, -72, -52, -34, 87, 79, 34, -72, 87, -65, 59, -14, 121, 81, -11, 29, -60, 111, 80, 71, 20, 76, -15, 106, 84, 99, -118, 117, 6, -56, -91, 111, 44, 121, -43, 82, 29, -35, 59, -46, 17, 116, 76, -3, 22, 25, 109, 9, -37, 9, 5, -116, 61, 73, -55, 25, 93, 7, 34, 107, -52, 86, 41, -58, 31, -15, -21, -85, 30, -66, -97, -123, 79, -95, 3, 31, 53, 109, 92, -104, 63, -88, 92, -108, -50, 8, 99, -8, 76, 72, 73, 9, -29, 124, -118, 63, 31, 10, 23, 124, 101, 115, -31, -40, -99, 114, -50, 57, -123, -106, -65, -59, -63, -110, 5, 98, 65, -48, 1, 107, 8, -97, 6, -26, 108, 52, -56, -95, -18, -10, 118, 29, -98, 37, 31, 58, 39, -9, -119, -98, -88, 49, 47, 9, -14, 22};
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
    msg.setTimeStamp(0.273608624798);
    msg.setSource(63238U);
    msg.setSourceEntity(110U);
    msg.setDestination(30269U);
    msg.setDestinationEntity(68U);
    msg.type = 251U;
    msg.frequency = 3951978737U;
    msg.min_range = 15419U;
    msg.max_range = 28373U;
    msg.bits_per_point = 204U;
    msg.scale_factor = 0.194538516535;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.75719674443;
    tmp_msg_0.beam_height = 0.431765864489;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-37, 29, 46, -29, 99, -76, -52, -79, 37, 59, -69, 78, -119, -107, -45, -58, -69, 51, -111, -82, 30, 63, 37};
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
    msg.setTimeStamp(0.180769536799);
    msg.setSource(35471U);
    msg.setSourceEntity(243U);
    msg.setDestination(22298U);
    msg.setDestinationEntity(163U);
    msg.type = 221U;
    msg.frequency = 1504996489U;
    msg.min_range = 10727U;
    msg.max_range = 44665U;
    msg.bits_per_point = 140U;
    msg.scale_factor = 0.716889741069;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.187428566085;
    tmp_msg_0.beam_height = 0.424395900316;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-27, 45, -126, -58, 78, -57, 86, 71, 53, 1, -24, 20, 79, 55, 13, 0, -83, -29, -74, -127, 6, 10, -75, -37, 101, 53, -44, -111, -84, -39, -110, -65, 94, -79, -87, -7, -123, -46, -101, 60};
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
    msg.setTimeStamp(0.564158155499);
    msg.setSource(63457U);
    msg.setSourceEntity(65U);
    msg.setDestination(63739U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.849673318272);
    msg.setSource(58648U);
    msg.setSourceEntity(254U);
    msg.setDestination(28987U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.352819035536);
    msg.setSource(6875U);
    msg.setSourceEntity(33U);
    msg.setDestination(58825U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.773346677224);
    msg.setSource(2294U);
    msg.setSourceEntity(253U);
    msg.setDestination(2967U);
    msg.setDestinationEntity(30U);
    msg.op = 194U;

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
    msg.setTimeStamp(0.314926652444);
    msg.setSource(49089U);
    msg.setSourceEntity(200U);
    msg.setDestination(64342U);
    msg.setDestinationEntity(215U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.410189011448);
    msg.setSource(51487U);
    msg.setSourceEntity(141U);
    msg.setDestination(2732U);
    msg.setDestinationEntity(42U);
    msg.op = 15U;

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
    msg.setTimeStamp(0.421777866752);
    msg.setSource(52708U);
    msg.setSourceEntity(126U);
    msg.setDestination(56713U);
    msg.setDestinationEntity(43U);
    msg.value = 0.132793589929;
    msg.confidence = 0.236099835067;
    msg.opmodes.assign("GZRMHTZVPCMDAJMFGNXPJXZIPEXOAUBPSVWBRNJLYAMDILDHCIXYRVJEQBHEUKWXINQRHSIVUTMQBHLDLZVYUZKDQTSCCC");

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
    msg.setTimeStamp(0.106742976279);
    msg.setSource(64502U);
    msg.setSourceEntity(168U);
    msg.setDestination(15444U);
    msg.setDestinationEntity(177U);
    msg.value = 0.369475031277;
    msg.confidence = 0.356657117731;
    msg.opmodes.assign("IFFBABQUSMERUKDZQZYTPBXVNCZQPRHYUTJJECOEUHXCOYLONVRWVDWPRCHUOCDMSKYIOUUNGWHNKQLQAYEOXZZVEFLMXWYTRTJPQAJEMOXTRKQBDVFMUH");

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
    msg.setTimeStamp(0.754090041142);
    msg.setSource(371U);
    msg.setSourceEntity(130U);
    msg.setDestination(29999U);
    msg.setDestinationEntity(102U);
    msg.value = 0.460444843864;
    msg.confidence = 0.505698000487;
    msg.opmodes.assign("AVNHTOSYHWCVSI");

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
    msg.setTimeStamp(0.288673796564);
    msg.setSource(51227U);
    msg.setSourceEntity(37U);
    msg.setDestination(19617U);
    msg.setDestinationEntity(154U);
    msg.itow = 759541279U;
    msg.lat = 0.432268808804;
    msg.lon = 0.304690388655;
    msg.height_ell = 0.621498465403;
    msg.height_sea = 0.952252436494;
    msg.hacc = 0.857061499623;
    msg.vacc = 0.400055482627;
    msg.vel_n = 0.573078202244;
    msg.vel_e = 0.592646843502;
    msg.vel_d = 0.856933514233;
    msg.speed = 0.488020476189;
    msg.gspeed = 0.576233661525;
    msg.heading = 0.836301270428;
    msg.sacc = 0.691711661034;
    msg.cacc = 0.942197237187;

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
    msg.setTimeStamp(0.202282742343);
    msg.setSource(33856U);
    msg.setSourceEntity(206U);
    msg.setDestination(34735U);
    msg.setDestinationEntity(73U);
    msg.itow = 1319606577U;
    msg.lat = 0.0443941932972;
    msg.lon = 0.744755939766;
    msg.height_ell = 0.943377072767;
    msg.height_sea = 0.662245871369;
    msg.hacc = 0.110407122979;
    msg.vacc = 0.959990940834;
    msg.vel_n = 0.366819628412;
    msg.vel_e = 0.472568626568;
    msg.vel_d = 0.642345612059;
    msg.speed = 0.0489516376308;
    msg.gspeed = 0.769495429158;
    msg.heading = 0.973396843348;
    msg.sacc = 0.773546744472;
    msg.cacc = 0.574725106072;

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
    msg.setTimeStamp(0.273067228973);
    msg.setSource(62292U);
    msg.setSourceEntity(111U);
    msg.setDestination(15977U);
    msg.setDestinationEntity(79U);
    msg.itow = 342679302U;
    msg.lat = 0.108747999747;
    msg.lon = 0.973438506144;
    msg.height_ell = 0.468131711331;
    msg.height_sea = 0.204788877387;
    msg.hacc = 0.186738899469;
    msg.vacc = 0.241411177772;
    msg.vel_n = 0.945382615429;
    msg.vel_e = 0.333995718215;
    msg.vel_d = 0.401969669466;
    msg.speed = 0.367051030667;
    msg.gspeed = 0.747540146159;
    msg.heading = 0.265763279869;
    msg.sacc = 0.365591461642;
    msg.cacc = 0.988194160951;

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
    msg.setTimeStamp(0.170051501238);
    msg.setSource(21344U);
    msg.setSourceEntity(243U);
    msg.setDestination(53674U);
    msg.setDestinationEntity(31U);
    msg.id = 211U;
    msg.value = 0.518591842319;

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
    msg.setTimeStamp(0.836561144524);
    msg.setSource(23259U);
    msg.setSourceEntity(154U);
    msg.setDestination(4559U);
    msg.setDestinationEntity(246U);
    msg.id = 184U;
    msg.value = 0.223072866277;

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
    msg.setTimeStamp(0.809946254226);
    msg.setSource(54377U);
    msg.setSourceEntity(45U);
    msg.setDestination(42339U);
    msg.setDestinationEntity(233U);
    msg.id = 52U;
    msg.value = 0.891715061737;

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
    msg.setTimeStamp(0.21904772466);
    msg.setSource(39391U);
    msg.setSourceEntity(48U);
    msg.setDestination(7419U);
    msg.setDestinationEntity(34U);
    msg.x = 0.338527001488;
    msg.y = 0.260966800798;
    msg.z = 0.96875990393;
    msg.phi = 0.188600190364;
    msg.theta = 0.0634159379056;
    msg.psi = 0.492763906134;

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
    msg.setTimeStamp(0.21017131384);
    msg.setSource(25611U);
    msg.setSourceEntity(242U);
    msg.setDestination(60702U);
    msg.setDestinationEntity(113U);
    msg.x = 0.522357017118;
    msg.y = 0.925269877923;
    msg.z = 0.0435927144198;
    msg.phi = 0.86443483891;
    msg.theta = 0.0495941324802;
    msg.psi = 0.460664205611;

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
    msg.setTimeStamp(0.945650449528);
    msg.setSource(22259U);
    msg.setSourceEntity(166U);
    msg.setDestination(937U);
    msg.setDestinationEntity(220U);
    msg.x = 0.668797586308;
    msg.y = 0.417444608327;
    msg.z = 0.374222464153;
    msg.phi = 0.431463750947;
    msg.theta = 0.737873576856;
    msg.psi = 0.576494279334;

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
    msg.setTimeStamp(0.107232232102);
    msg.setSource(48150U);
    msg.setSourceEntity(129U);
    msg.setDestination(65527U);
    msg.setDestinationEntity(14U);
    msg.beam_width = 0.646183024386;
    msg.beam_height = 0.810410382617;

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
    msg.setTimeStamp(0.141825993964);
    msg.setSource(18742U);
    msg.setSourceEntity(31U);
    msg.setDestination(3624U);
    msg.setDestinationEntity(142U);
    msg.beam_width = 0.637522657917;
    msg.beam_height = 0.282155412284;

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
    msg.setTimeStamp(0.790604956165);
    msg.setSource(53547U);
    msg.setSourceEntity(31U);
    msg.setDestination(6768U);
    msg.setDestinationEntity(1U);
    msg.beam_width = 0.341139306486;
    msg.beam_height = 0.15263319398;

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
    msg.setTimeStamp(0.0628589942887);
    msg.setSource(4650U);
    msg.setSourceEntity(226U);
    msg.setDestination(18917U);
    msg.setDestinationEntity(13U);
    msg.sane = 206U;

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
    msg.setTimeStamp(0.576616707369);
    msg.setSource(57730U);
    msg.setSourceEntity(192U);
    msg.setDestination(3083U);
    msg.setDestinationEntity(212U);
    msg.sane = 53U;

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
    msg.setTimeStamp(0.0324992972547);
    msg.setSource(13087U);
    msg.setSourceEntity(241U);
    msg.setDestination(8869U);
    msg.setDestinationEntity(138U);
    msg.sane = 49U;

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
    msg.setTimeStamp(0.723176785574);
    msg.setSource(46075U);
    msg.setSourceEntity(9U);
    msg.setDestination(17380U);
    msg.setDestinationEntity(156U);
    msg.id = 184U;
    msg.zoom = 63U;
    msg.action = 172U;

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
    msg.setTimeStamp(0.943931751212);
    msg.setSource(63099U);
    msg.setSourceEntity(52U);
    msg.setDestination(56947U);
    msg.setDestinationEntity(9U);
    msg.id = 244U;
    msg.zoom = 111U;
    msg.action = 203U;

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
    msg.setTimeStamp(0.412312154115);
    msg.setSource(21786U);
    msg.setSourceEntity(68U);
    msg.setDestination(33988U);
    msg.setDestinationEntity(81U);
    msg.id = 201U;
    msg.zoom = 214U;
    msg.action = 199U;

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
    msg.setTimeStamp(0.623770486029);
    msg.setSource(49770U);
    msg.setSourceEntity(116U);
    msg.setDestination(52407U);
    msg.setDestinationEntity(35U);
    msg.id = 151U;
    msg.value = 0.509851942664;

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
    msg.setTimeStamp(0.988046838744);
    msg.setSource(6797U);
    msg.setSourceEntity(140U);
    msg.setDestination(24226U);
    msg.setDestinationEntity(100U);
    msg.id = 36U;
    msg.value = 0.369979922014;

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
    msg.setTimeStamp(0.679294147244);
    msg.setSource(603U);
    msg.setSourceEntity(152U);
    msg.setDestination(36377U);
    msg.setDestinationEntity(219U);
    msg.id = 102U;
    msg.value = 0.285468735162;

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
    msg.setTimeStamp(0.803747570973);
    msg.setSource(26839U);
    msg.setSourceEntity(149U);
    msg.setDestination(28119U);
    msg.setDestinationEntity(201U);
    msg.id = 80U;
    msg.value = 0.717462342066;

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
    msg.setTimeStamp(0.09840547739);
    msg.setSource(21962U);
    msg.setSourceEntity(202U);
    msg.setDestination(45681U);
    msg.setDestinationEntity(28U);
    msg.id = 131U;
    msg.value = 0.713369257566;

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
    msg.setTimeStamp(0.277986304037);
    msg.setSource(25385U);
    msg.setSourceEntity(172U);
    msg.setDestination(46479U);
    msg.setDestinationEntity(84U);
    msg.id = 164U;
    msg.value = 0.790827225886;

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
    msg.setTimeStamp(0.388576351906);
    msg.setSource(55773U);
    msg.setSourceEntity(39U);
    msg.setDestination(9437U);
    msg.setDestinationEntity(139U);
    msg.id = 118U;
    msg.angle = 0.2210987343;

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
    msg.setTimeStamp(0.444906798172);
    msg.setSource(63792U);
    msg.setSourceEntity(202U);
    msg.setDestination(59425U);
    msg.setDestinationEntity(102U);
    msg.id = 247U;
    msg.angle = 0.183970818208;

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
    msg.setTimeStamp(0.90682135271);
    msg.setSource(11099U);
    msg.setSourceEntity(154U);
    msg.setDestination(41495U);
    msg.setDestinationEntity(217U);
    msg.id = 64U;
    msg.angle = 0.708985698774;

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
    msg.setTimeStamp(0.374786694521);
    msg.setSource(33235U);
    msg.setSourceEntity(101U);
    msg.setDestination(8370U);
    msg.setDestinationEntity(203U);
    msg.op = 116U;
    msg.actions.assign("QJGAVZDZJTBZKJSIFLHDYMOEYIYFHEZLPXLQDUCTAUPAP");

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
    msg.setTimeStamp(0.28841059282);
    msg.setSource(13068U);
    msg.setSourceEntity(178U);
    msg.setDestination(45965U);
    msg.setDestinationEntity(123U);
    msg.op = 254U;
    msg.actions.assign("RHBMMNEILXFCBKFBWTONUXQMCVWYBIKRMWOFZJVERQCAPFBGAHXEFSDHQDYDIADLBWNWZNLTUZMCQAKJDCTQYRCETVZPMUTOPWARKRJHEIGWUPNSFMXDVVYKVTORFQISELHTPYKHNOBHSAV");

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
    msg.setTimeStamp(0.943510232883);
    msg.setSource(51862U);
    msg.setSourceEntity(231U);
    msg.setDestination(42655U);
    msg.setDestinationEntity(6U);
    msg.op = 178U;
    msg.actions.assign("LOMEZBSDDLFXIGDLHOAOZK");

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
    msg.setTimeStamp(0.397972958179);
    msg.setSource(53556U);
    msg.setSourceEntity(34U);
    msg.setDestination(1236U);
    msg.setDestinationEntity(43U);
    msg.actions.assign("ANKCWKSDHVZIZRHSOCURXMIXYNHQWQIXWMP");

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
    msg.setTimeStamp(0.11551539202);
    msg.setSource(23842U);
    msg.setSourceEntity(51U);
    msg.setDestination(64894U);
    msg.setDestinationEntity(92U);
    msg.actions.assign("MBKMSSCYJKLZEPQKVTXOWJXGWRINKFOCLIDJXUYOVVKSXMOCGDTRSAXQAYGXVIVTYFMQ");

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
    msg.setTimeStamp(0.442094504698);
    msg.setSource(33027U);
    msg.setSourceEntity(35U);
    msg.setDestination(26930U);
    msg.setDestinationEntity(230U);
    msg.actions.assign("LAXFGUCWDTBIPQZCXWCVHRQRUDTPEAFGVSHPJLYOZXKGFVFZZFCKDEVPLLNEUZNCHPHIMBKUOFGBPQJTGAWXDNRRPWMMKHNYADMYUBSWMELCIVBHKSRNCSRYABEPZCSIKFOBXMQIEWHLEOALHJXEGKVAJMYDNJUYFSIQUKYYWGRQCDTJDNQSZGDWUOFTBOUSTMEYXOBRZQGJHNVJIRIFOQVUMLDNABQPVPIOSTAATMXREXWTCLLJONKIJY");

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
    msg.setTimeStamp(0.943214640001);
    msg.setSource(47001U);
    msg.setSourceEntity(21U);
    msg.setDestination(37795U);
    msg.setDestinationEntity(233U);
    msg.button = 15U;
    msg.value = 236U;

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
    msg.setTimeStamp(0.929473770306);
    msg.setSource(20217U);
    msg.setSourceEntity(149U);
    msg.setDestination(18017U);
    msg.setDestinationEntity(168U);
    msg.button = 218U;
    msg.value = 91U;

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
    msg.setTimeStamp(0.477219392967);
    msg.setSource(28161U);
    msg.setSourceEntity(236U);
    msg.setDestination(37601U);
    msg.setDestinationEntity(27U);
    msg.button = 198U;
    msg.value = 209U;

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
    msg.setTimeStamp(0.76134155162);
    msg.setSource(36892U);
    msg.setSourceEntity(104U);
    msg.setDestination(30737U);
    msg.setDestinationEntity(140U);
    msg.op = 17U;
    msg.text.assign("EKLEUOVWDEFRDCPSNJGEQPGNHDDISCHAUAQZQQHSHGBKNHGBMUMFGUBXFNJYNVMHGQKTSBDRCFMMRZWUDLRSKDZOZLNCILJXCTO");

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
    msg.setTimeStamp(0.37949553739);
    msg.setSource(15705U);
    msg.setSourceEntity(242U);
    msg.setDestination(3531U);
    msg.setDestinationEntity(79U);
    msg.op = 125U;
    msg.text.assign("IHQRRPDVOFKXIWEVWNIRTYZAEMAETHUHQLGILUFNONBQMMTWBVYGSJUMBGHUONCNXTKPKIYIBJVPPKGYPNJAQCDSSSSQBYPZWKJJGYHWBUFAGKCNXSRLWFPCEDTTVAGAIWHQQSLLCONTMFFZDULSFLEXCAZJXKDOOXMZTFCMDIZXRUSXQWRYRIKNXECDOGCOBJJLELAMBHEYMHZH");

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
    msg.setTimeStamp(0.829922403267);
    msg.setSource(10259U);
    msg.setSourceEntity(190U);
    msg.setDestination(31086U);
    msg.setDestinationEntity(108U);
    msg.op = 100U;
    msg.text.assign("UZDFJJDMSRBYITHQXDRHXTBOHWMAZTEJANVSGZDLGSEIIWIQDCFVOVXOERTWYUUTHCXDYPPBOVXFVIZOFJFMWDNWPBHPYEOKMQVSKQIJTLZCCFASMPRAZUQSBDYPLMNKH");

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
    msg.setTimeStamp(0.37341285132);
    msg.setSource(27176U);
    msg.setSourceEntity(95U);
    msg.setDestination(42274U);
    msg.setDestinationEntity(109U);
    msg.op = 55U;
    msg.time_remain = 0.0390852353472;
    msg.sched_time = 0.890661581436;

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
    msg.setTimeStamp(0.567313381634);
    msg.setSource(37911U);
    msg.setSourceEntity(88U);
    msg.setDestination(37038U);
    msg.setDestinationEntity(164U);
    msg.op = 244U;
    msg.time_remain = 0.145430249122;
    msg.sched_time = 0.527634318723;

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
    msg.setTimeStamp(0.580859029047);
    msg.setSource(27198U);
    msg.setSourceEntity(132U);
    msg.setDestination(1480U);
    msg.setDestinationEntity(78U);
    msg.op = 213U;
    msg.time_remain = 0.506190335306;
    msg.sched_time = 0.733575872918;

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
    msg.setTimeStamp(0.732279478136);
    msg.setSource(44374U);
    msg.setSourceEntity(7U);
    msg.setDestination(18018U);
    msg.setDestinationEntity(231U);
    msg.name.assign("PTLEHOVZCXQOUEFMWLFBVZUPNCNDUJSNTDYGDQQKPVEVTBTAWELCVARBXKGFMAWZATYFOZWGIDUIVWPMMGDHUBEIRXXHZNLWGRSFBKCJSUQWHFBQXYIMKEDISYZJBSVNIVPPDRVYGOWKGISCQRBDIZSKPTNMTRCHLDGKKSOFAGCYOMASJLARHVMFYUL");
    msg.op = 122U;
    msg.sched_time = 0.612716976213;

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
    msg.setTimeStamp(0.174376357534);
    msg.setSource(23537U);
    msg.setSourceEntity(98U);
    msg.setDestination(475U);
    msg.setDestinationEntity(251U);
    msg.name.assign("AKOXMLHVNXXGNHJVNHVMRPLDEIDJYZSWDVCQRJQTGUKUNLJKBIAQBYOLBOGLXSFCSGZBWUMIVFAJRMWRFUFYRAHXYZEOJOSWWPLTEHLNZSPBEQBCUAZDMSIWPDPECFYAKVBFGMKBQVNXTKMIVYQEMTFZQNDTRHFGCMXZYCOHERGEJWRZOUWADQOJNPIPTZBTNETGAJULOKY");
    msg.op = 73U;
    msg.sched_time = 0.933988607647;

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
    msg.setTimeStamp(0.917212595914);
    msg.setSource(36013U);
    msg.setSourceEntity(23U);
    msg.setDestination(4502U);
    msg.setDestinationEntity(204U);
    msg.name.assign("GXYAULVLQJDFGPREKEZTZSBVPOBCKMOZITYRPFIIGUCQIKRDUDAUYZCLCAYZVUO");
    msg.op = 252U;
    msg.sched_time = 0.956306714739;

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
    msg.setTimeStamp(0.197469196852);
    msg.setSource(39332U);
    msg.setSourceEntity(75U);
    msg.setDestination(24648U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.839836461696);
    msg.setSource(19709U);
    msg.setSourceEntity(36U);
    msg.setDestination(61592U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.579317659941);
    msg.setSource(23990U);
    msg.setSourceEntity(83U);
    msg.setDestination(27702U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.954650194828);
    msg.setSource(30578U);
    msg.setSourceEntity(191U);
    msg.setDestination(36937U);
    msg.setDestinationEntity(252U);
    msg.name.assign("UOPNQUAJYEWSQTPWWZKGEHSTJYBYYDBQVRTXEGUPYPZWDSWKNXGHZEWINIFCYPBLXBXPZLRJLCOHHFJPVNIIVTLLOZDKECSJKWETYSHGPKCMABQEVMAIFGRZLBBDXFNIBTQHCWFKQGJQIOMUOAMBINGCRXROHMBLLENKRJ");
    msg.state = 24U;

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
    msg.setTimeStamp(0.313531986199);
    msg.setSource(14761U);
    msg.setSourceEntity(151U);
    msg.setDestination(486U);
    msg.setDestinationEntity(118U);
    msg.name.assign("RIXJFVEOOFVLVGBPGDZKMCLLVDZLIGJBCUJRTMJXZEOHNDPATBJVMQBWNTXRSSREYPUBXFVINEWHSNTTVCOGFQDQEYKVZCYMPMOVVAUSJMGWUTWLYIUSLKQJHCNGONNCHOFEUWJAAFUNKYPCCAGAKFAMBBIFDIRKQDLRIWTHRBCXTMFIPXGI");
    msg.state = 211U;

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
    msg.setTimeStamp(0.759422409886);
    msg.setSource(50251U);
    msg.setSourceEntity(89U);
    msg.setDestination(51023U);
    msg.setDestinationEntity(119U);
    msg.name.assign("ABFHMNLJQQOIFYONKCNXQMSQRFRPYQHPJSIHXFOFHLLRVCUYJBRCLDFVBJEUVYEOAOAMUUUHLOIYFDGTYGTGOLTQCZMCSGWGCVHVKRBDZNOKXIWCKSZMAGRRVLRZHVJAEQHPCYXDPMSZTZBLXNSCKXZTKVTDDTEMDSPLBIPIHYTFKEAEWPUW");
    msg.state = 83U;

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
    msg.setTimeStamp(0.772890922338);
    msg.setSource(20404U);
    msg.setSourceEntity(222U);
    msg.setDestination(37498U);
    msg.setDestinationEntity(50U);
    msg.name.assign("OERDGVOYJZJXWMFBGBKZTQVFUXCIEMBUVTALLUDXKBLJXCGKNDWKNXYFVFLNZAFHATQGQRH");
    msg.value = 157U;

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
    msg.setTimeStamp(0.49376328502);
    msg.setSource(15328U);
    msg.setSourceEntity(55U);
    msg.setDestination(21682U);
    msg.setDestinationEntity(1U);
    msg.name.assign("RWYAVUKRSENAZNKLBQPJRRHGCDSPQHSMBHBFSNASJAOMCCIMONONVPJLJHLDMAIVJTDZYGDUXTOUCWBZQZZFCPTVDJHTQKLGYEDLMSUIIBKMCPGHXEPSTQOBFGZEOSVGHUMCIZWKJEZGXBRFYRQIDCPKFEMD");
    msg.value = 65U;

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
    msg.setTimeStamp(0.30203998627);
    msg.setSource(49177U);
    msg.setSourceEntity(99U);
    msg.setDestination(346U);
    msg.setDestinationEntity(148U);
    msg.name.assign("IRCSKGOGZQWHSUOXCAGLNEGRONCJPLUKKHFSXXIHJNIJEBXELKZGANLGLHQFTMVBTHWYLBQVNTIOXYYSJLFBBBVNPSWEGRFZPIRQ");
    msg.value = 35U;

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
    msg.setTimeStamp(0.648533669126);
    msg.setSource(19916U);
    msg.setSourceEntity(17U);
    msg.setDestination(25682U);
    msg.setDestinationEntity(85U);
    msg.name.assign("EDGQGIJMCDBUVMZAITSGENSIEANLYIOESOCSVAIFYGBXXFPKFCTWIJKYZFEOFKDPHBVNAWLNPSRDTJERUQNUNVZHYGORVHRBCLOXPCUVQDWEPVPSIMLJDGNOOAJKUKMBWFJGQHHPUVWJVDYCAIXHQNFPCLQZMLQTMQXYDAXEZNUSYKIBOVTMEAPWGKEMXNWQOCXALSUBZRSZDGUTHXRWKSHBOZLKJRIKJTTRLFWMZTM");

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
    msg.setTimeStamp(0.075256961155);
    msg.setSource(25257U);
    msg.setSourceEntity(112U);
    msg.setDestination(21923U);
    msg.setDestinationEntity(241U);
    msg.name.assign("FNLIVDFMTPUUJZOTXHWQCKLLBEZGNMTWXOZFKZYCATDEHSMSCLVXIVSHYCFVQGYWPASONOUVMNEEQODRBRABXACQZEKQJNAOVBVLEUXRCIBSHAYSPEHIFDFEMNMWYJSUEJGIGDPKHICPGDRHUFNTUDWZWFOFQWZTFWRLMUXMEBJVIKTWKSSGGVOZPXBKQDGJKYRBTAYHPKCCHRZQMP");

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
    msg.setTimeStamp(0.23805763784);
    msg.setSource(58695U);
    msg.setSourceEntity(133U);
    msg.setDestination(54227U);
    msg.setDestinationEntity(155U);
    msg.name.assign("IACMQKBDTUYWHGOIFFWUKMJRKSHLJZGIVHHBFLMHNVRIGGVBGQQTUQRLZLTVODOEMUEUAFCDTXBEPIEVIKNOKOBFQVJLQCTMTLSGECYXFPNKMUSTQNRNAXXQPJDWBIHFMLZJYBCFEIZRLUSTWVOYBKTDRSAVAHJIYMKYJPZOQZNUXUWGBNUGGXSWDDRSJPYNPZYDDSWKJNEWXASTRZORPFV");

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
    msg.setTimeStamp(0.198001417991);
    msg.setSource(61139U);
    msg.setSourceEntity(236U);
    msg.setDestination(16007U);
    msg.setDestinationEntity(50U);
    msg.name.assign("JFBXQOGAQSDXKJTQLVZCFVJUCSFKYGEBDCHOCGYLIRJCGQRYEHKIAROSGRBUOWKFSWCTMPAFNMGBFPJLSYDEHGWIDYXKQGBUBNPVKXPJXYQUUBPDZVAVSTCNBEMIRXLFDXKCIVFDUPBTNWHWDSM");
    msg.value = 12U;

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
    msg.setTimeStamp(0.81000343605);
    msg.setSource(47436U);
    msg.setSourceEntity(170U);
    msg.setDestination(58808U);
    msg.setDestinationEntity(0U);
    msg.name.assign("XJJLQVQGDCTVGCTUEBYBFKMGCWPXURHWADRIEARGLFZLAVQLAFKDFBQOXNNWWOHLHPZJUBGOXPHTEDOFOKJUCXWFOMVMNFMMPSXIPRJSYKIIDMYVVEURBMGVTZQMEDNCLBSPKPRKKUKDJXDLPFAMBVNRRZGHFWVYIIYHISRJCUIPCCJQTJVIKANCWEZOSYMNSYNSQWZQHAAEUCZSZOSTBENBQDWYHGLEYDNJGSZTTKOEXTOBXYPXLHAUTW");
    msg.value = 82U;

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
    msg.setTimeStamp(0.63416853783);
    msg.setSource(21593U);
    msg.setSourceEntity(17U);
    msg.setDestination(44404U);
    msg.setDestinationEntity(74U);
    msg.name.assign("SEMVBGLPVKSPLCHZKTFNDPCEPLAIPFASKRBVYRHLUJFEIQTKECOOSHXKO");
    msg.value = 152U;

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
    msg.setTimeStamp(0.402691693014);
    msg.setSource(52073U);
    msg.setSourceEntity(231U);
    msg.setDestination(44382U);
    msg.setDestinationEntity(247U);
    msg.id = 200U;
    msg.period = 4081534820U;
    msg.duty_cycle = 2582866985U;

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
    msg.setTimeStamp(0.851133196634);
    msg.setSource(26858U);
    msg.setSourceEntity(248U);
    msg.setDestination(15364U);
    msg.setDestinationEntity(139U);
    msg.id = 123U;
    msg.period = 1483543176U;
    msg.duty_cycle = 4261388220U;

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
    msg.setTimeStamp(0.339245581437);
    msg.setSource(4550U);
    msg.setSourceEntity(215U);
    msg.setDestination(38541U);
    msg.setDestinationEntity(191U);
    msg.id = 70U;
    msg.period = 1099622511U;
    msg.duty_cycle = 388790169U;

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
    msg.setTimeStamp(0.788690046697);
    msg.setSource(64829U);
    msg.setSourceEntity(23U);
    msg.setDestination(35345U);
    msg.setDestinationEntity(217U);
    msg.id = 194U;
    msg.period = 1837758127U;
    msg.duty_cycle = 1141109937U;

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
    msg.setTimeStamp(0.697750468427);
    msg.setSource(28369U);
    msg.setSourceEntity(241U);
    msg.setDestination(32873U);
    msg.setDestinationEntity(209U);
    msg.id = 151U;
    msg.period = 1569368675U;
    msg.duty_cycle = 202974005U;

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
    msg.setTimeStamp(0.30691293934);
    msg.setSource(41417U);
    msg.setSourceEntity(228U);
    msg.setDestination(55917U);
    msg.setDestinationEntity(81U);
    msg.id = 63U;
    msg.period = 2612766748U;
    msg.duty_cycle = 2363776384U;

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
    msg.setTimeStamp(0.461135481162);
    msg.setSource(62591U);
    msg.setSourceEntity(82U);
    msg.setDestination(20666U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.361461988528;
    msg.lon = 0.274142902898;
    msg.height = 0.649312454976;
    msg.x = 0.254010488954;
    msg.y = 0.0404650838311;
    msg.z = 0.769359187965;
    msg.phi = 0.952629617629;
    msg.theta = 0.352384548932;
    msg.psi = 0.148724589696;
    msg.u = 0.26951297417;
    msg.v = 0.78395935079;
    msg.w = 0.109317150218;
    msg.vx = 0.224347109052;
    msg.vy = 0.0181633968227;
    msg.vz = 0.61552616827;
    msg.p = 0.539064777434;
    msg.q = 0.0308883008096;
    msg.r = 0.398600907279;
    msg.depth = 0.67461799635;
    msg.alt = 0.271509335734;

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
    msg.setTimeStamp(0.749502254518);
    msg.setSource(12132U);
    msg.setSourceEntity(242U);
    msg.setDestination(9322U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.95728437682;
    msg.lon = 0.175120725888;
    msg.height = 0.0558332091929;
    msg.x = 0.937130678354;
    msg.y = 0.508735968103;
    msg.z = 0.300015640145;
    msg.phi = 0.919640541127;
    msg.theta = 0.910719989148;
    msg.psi = 0.380477562808;
    msg.u = 0.73849947783;
    msg.v = 0.736466962554;
    msg.w = 0.0926988902331;
    msg.vx = 0.115581555554;
    msg.vy = 0.277616338484;
    msg.vz = 0.293827082056;
    msg.p = 0.302458027385;
    msg.q = 0.225129025724;
    msg.r = 0.393366531445;
    msg.depth = 0.871408587498;
    msg.alt = 0.726019213855;

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
    msg.setTimeStamp(0.464174254466);
    msg.setSource(39513U);
    msg.setSourceEntity(31U);
    msg.setDestination(60599U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.422828374328;
    msg.lon = 0.976302351654;
    msg.height = 0.729710013852;
    msg.x = 0.339341971608;
    msg.y = 0.016079575027;
    msg.z = 0.516704694405;
    msg.phi = 0.1880454171;
    msg.theta = 0.744012332655;
    msg.psi = 0.381576471764;
    msg.u = 0.885006538845;
    msg.v = 0.823259503646;
    msg.w = 0.535188374681;
    msg.vx = 0.196145429828;
    msg.vy = 0.762070407329;
    msg.vz = 0.0654734530862;
    msg.p = 0.104642356867;
    msg.q = 0.405323309619;
    msg.r = 0.010002532072;
    msg.depth = 0.374512315673;
    msg.alt = 0.691488550188;

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
    msg.setTimeStamp(0.773581526246);
    msg.setSource(27412U);
    msg.setSourceEntity(52U);
    msg.setDestination(5729U);
    msg.setDestinationEntity(156U);
    msg.x = 0.147856447651;
    msg.y = 0.94672048994;
    msg.z = 0.797295345736;

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
    msg.setTimeStamp(0.199277571583);
    msg.setSource(16635U);
    msg.setSourceEntity(131U);
    msg.setDestination(6258U);
    msg.setDestinationEntity(123U);
    msg.x = 0.443796272895;
    msg.y = 0.517098249952;
    msg.z = 0.828810007233;

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
    msg.setTimeStamp(0.0244917876335);
    msg.setSource(16319U);
    msg.setSourceEntity(169U);
    msg.setDestination(42140U);
    msg.setDestinationEntity(12U);
    msg.x = 0.946407188367;
    msg.y = 0.60682438012;
    msg.z = 0.739893605245;

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
    msg.setTimeStamp(0.571226601163);
    msg.setSource(57362U);
    msg.setSourceEntity(78U);
    msg.setDestination(2789U);
    msg.setDestinationEntity(16U);
    msg.value = 0.695393887469;

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
    msg.setTimeStamp(0.906729625341);
    msg.setSource(15784U);
    msg.setSourceEntity(83U);
    msg.setDestination(7289U);
    msg.setDestinationEntity(213U);
    msg.value = 0.0949735275017;

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
    msg.setTimeStamp(0.614832274453);
    msg.setSource(21731U);
    msg.setSourceEntity(59U);
    msg.setDestination(27408U);
    msg.setDestinationEntity(1U);
    msg.value = 0.546785290622;

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
    msg.setTimeStamp(0.33885921037);
    msg.setSource(39802U);
    msg.setSourceEntity(21U);
    msg.setDestination(20493U);
    msg.setDestinationEntity(22U);
    msg.value = 0.175255093591;

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
    msg.setTimeStamp(0.719532983267);
    msg.setSource(36129U);
    msg.setSourceEntity(175U);
    msg.setDestination(12210U);
    msg.setDestinationEntity(52U);
    msg.value = 0.675705566989;

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
    msg.setTimeStamp(0.219923115791);
    msg.setSource(53621U);
    msg.setSourceEntity(186U);
    msg.setDestination(41591U);
    msg.setDestinationEntity(131U);
    msg.value = 0.197751203467;

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
    msg.setTimeStamp(0.512470151609);
    msg.setSource(4166U);
    msg.setSourceEntity(55U);
    msg.setDestination(8776U);
    msg.setDestinationEntity(69U);
    msg.x = 0.125013636785;
    msg.y = 0.870723538634;
    msg.z = 0.864944564837;
    msg.phi = 0.0359503136372;
    msg.theta = 0.806970588938;
    msg.psi = 0.274840493334;
    msg.p = 0.24230063714;
    msg.q = 0.436693250231;
    msg.r = 0.864143643998;
    msg.u = 0.870969832278;
    msg.v = 0.77679154285;
    msg.w = 0.316695055703;
    msg.bias_psi = 0.959250581363;
    msg.bias_r = 0.274458702196;

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
    msg.setTimeStamp(0.997210743538);
    msg.setSource(8852U);
    msg.setSourceEntity(106U);
    msg.setDestination(20518U);
    msg.setDestinationEntity(34U);
    msg.x = 0.889968427998;
    msg.y = 0.740516277131;
    msg.z = 0.659374055145;
    msg.phi = 0.185987252164;
    msg.theta = 0.532203133551;
    msg.psi = 0.713037130236;
    msg.p = 0.461970552275;
    msg.q = 0.232969746725;
    msg.r = 0.221712807243;
    msg.u = 0.520354541298;
    msg.v = 0.250402488797;
    msg.w = 0.818679676373;
    msg.bias_psi = 0.799647689272;
    msg.bias_r = 0.264987355646;

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
    msg.setTimeStamp(0.421838187927);
    msg.setSource(19304U);
    msg.setSourceEntity(151U);
    msg.setDestination(34710U);
    msg.setDestinationEntity(223U);
    msg.x = 0.601295694231;
    msg.y = 0.74618269184;
    msg.z = 0.986637626704;
    msg.phi = 0.637587085814;
    msg.theta = 0.88991709111;
    msg.psi = 0.518774178098;
    msg.p = 0.885611439276;
    msg.q = 0.109826316101;
    msg.r = 0.888139310903;
    msg.u = 0.542096989734;
    msg.v = 0.0749513031519;
    msg.w = 0.751290029801;
    msg.bias_psi = 0.799061379613;
    msg.bias_r = 0.707114862158;

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
    msg.setTimeStamp(0.949819063486);
    msg.setSource(9230U);
    msg.setSourceEntity(249U);
    msg.setDestination(181U);
    msg.setDestinationEntity(50U);
    msg.bias_psi = 0.534047776507;
    msg.bias_r = 0.64373559621;
    msg.cog = 0.407786080774;
    msg.cyaw = 0.0393649142074;
    msg.lbl_rej_level = 0.224442386624;
    msg.gps_rej_level = 0.857663134467;
    msg.custom_x = 0.671740277142;
    msg.custom_y = 0.73334162393;
    msg.custom_z = 0.553815993914;

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
    msg.setTimeStamp(0.364907790226);
    msg.setSource(62122U);
    msg.setSourceEntity(204U);
    msg.setDestination(49976U);
    msg.setDestinationEntity(8U);
    msg.bias_psi = 0.30383218284;
    msg.bias_r = 0.59802189211;
    msg.cog = 0.912817048096;
    msg.cyaw = 0.0271399234356;
    msg.lbl_rej_level = 0.721604733314;
    msg.gps_rej_level = 0.748301550865;
    msg.custom_x = 0.392745127242;
    msg.custom_y = 0.900526980017;
    msg.custom_z = 0.388293969779;

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
    msg.setTimeStamp(0.972610674952);
    msg.setSource(29281U);
    msg.setSourceEntity(97U);
    msg.setDestination(23445U);
    msg.setDestinationEntity(245U);
    msg.bias_psi = 0.855424575929;
    msg.bias_r = 0.699981383405;
    msg.cog = 0.215717136214;
    msg.cyaw = 0.693027202728;
    msg.lbl_rej_level = 0.372419815174;
    msg.gps_rej_level = 0.763194404186;
    msg.custom_x = 0.894879036599;
    msg.custom_y = 0.200078324613;
    msg.custom_z = 0.66582187988;

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
    msg.setTimeStamp(0.90810304762);
    msg.setSource(58667U);
    msg.setSourceEntity(98U);
    msg.setDestination(51650U);
    msg.setDestinationEntity(207U);
    msg.utc_time = 0.191022774765;
    msg.reason = 254U;

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
    msg.setTimeStamp(0.537266354003);
    msg.setSource(34030U);
    msg.setSourceEntity(173U);
    msg.setDestination(49190U);
    msg.setDestinationEntity(114U);
    msg.utc_time = 0.1151070779;
    msg.reason = 224U;

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
    msg.setTimeStamp(0.0305774070636);
    msg.setSource(36620U);
    msg.setSourceEntity(60U);
    msg.setDestination(9790U);
    msg.setDestinationEntity(196U);
    msg.utc_time = 0.861867566692;
    msg.reason = 100U;

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
    msg.setTimeStamp(0.292150853841);
    msg.setSource(63065U);
    msg.setSourceEntity(76U);
    msg.setDestination(19801U);
    msg.setDestinationEntity(177U);
    msg.id = 83U;
    msg.range = 0.774615198557;
    msg.acceptance = 190U;

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
    msg.setTimeStamp(0.971796032511);
    msg.setSource(19674U);
    msg.setSourceEntity(18U);
    msg.setDestination(18624U);
    msg.setDestinationEntity(31U);
    msg.id = 220U;
    msg.range = 0.781459358895;
    msg.acceptance = 213U;

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
    msg.setTimeStamp(0.0642080540808);
    msg.setSource(28527U);
    msg.setSourceEntity(3U);
    msg.setDestination(9632U);
    msg.setDestinationEntity(209U);
    msg.id = 190U;
    msg.range = 0.946058715788;
    msg.acceptance = 55U;

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
    msg.setTimeStamp(0.701543475185);
    msg.setSource(31511U);
    msg.setSourceEntity(82U);
    msg.setDestination(37989U);
    msg.setDestinationEntity(2U);
    msg.type = 59U;
    msg.reason = 162U;
    msg.value = 0.527691676782;
    msg.timestep = 0.863415201447;

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
    msg.setTimeStamp(0.608333530408);
    msg.setSource(11054U);
    msg.setSourceEntity(129U);
    msg.setDestination(17860U);
    msg.setDestinationEntity(66U);
    msg.type = 77U;
    msg.reason = 126U;
    msg.value = 0.45392069234;
    msg.timestep = 0.930513148848;

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
    msg.setTimeStamp(0.54290548384);
    msg.setSource(22935U);
    msg.setSourceEntity(81U);
    msg.setDestination(13257U);
    msg.setDestinationEntity(46U);
    msg.type = 134U;
    msg.reason = 242U;
    msg.value = 0.600543259813;
    msg.timestep = 0.897785332874;

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
    msg.setTimeStamp(0.903428338884);
    msg.setSource(47992U);
    msg.setSourceEntity(235U);
    msg.setDestination(58031U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.444346258583);
    msg.setSource(5507U);
    msg.setSourceEntity(15U);
    msg.setDestination(11560U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.804775040173);
    msg.setSource(7528U);
    msg.setSourceEntity(44U);
    msg.setDestination(42351U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.223645807939);
    msg.setSource(33160U);
    msg.setSourceEntity(149U);
    msg.setDestination(28222U);
    msg.setDestinationEntity(22U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EBBFTAGYMAJVMVLVVMMDKUTDJRKNUYQXKNVPOJIKVTFSNNCKCFUDIQXSAHGLWHCEQPKICPKYRFOITHYLQLSCXXXBYZUKMQTQPAKXZAHGSSRQDIYUURHJNIGDXPMHXRWSDHBWIZHSOSIBNMXCORFYESUERGBJWFULL");
    tmp_msg_0.lat = 0.00765956327963;
    tmp_msg_0.lon = 0.178906861616;
    tmp_msg_0.depth = 0.414651383935;
    tmp_msg_0.query_channel = 199U;
    tmp_msg_0.reply_channel = 246U;
    tmp_msg_0.transponder_delay = 138U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.91755484208;
    msg.y = 0.0972429530921;
    msg.var_x = 0.916687220571;
    msg.var_y = 0.975497315487;
    msg.distance = 0.765116387246;

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
    msg.setTimeStamp(0.519868923673);
    msg.setSource(42425U);
    msg.setSourceEntity(85U);
    msg.setDestination(3611U);
    msg.setDestinationEntity(10U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FVAOVMKKECAGOAHNVKQFHMHJKENBNMQXRUQCFDVECOQBSMJCQUBQULTFKJSQDHWCSUWVPNMDZYRCFCLUHTPSTGKWKNVSAYZTGOPDYAJKKBJACLUISUEZZXYMOHXROUQICBJDWPAYWPABPBPZQDDXEBAWZTSXVIXILNYBXNAITBCRD");
    tmp_msg_0.lat = 0.16194366259;
    tmp_msg_0.lon = 0.742946927878;
    tmp_msg_0.depth = 0.641835686021;
    tmp_msg_0.query_channel = 102U;
    tmp_msg_0.reply_channel = 158U;
    tmp_msg_0.transponder_delay = 4U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.832913356097;
    msg.y = 0.566582551282;
    msg.var_x = 0.152746778236;
    msg.var_y = 0.70180989558;
    msg.distance = 0.914527423177;

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
    msg.setTimeStamp(0.346234249465);
    msg.setSource(11980U);
    msg.setSourceEntity(123U);
    msg.setDestination(47791U);
    msg.setDestinationEntity(184U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PRGXOMLZWZUFXDPMJAMUIUPOPRJCQVRLLNOSTWYRSWKDNEJKWTCSZCMIDFLGXDIXMDYQWWOZBRZVPEMHBJYCGSWISOBAJTKPZHCQNEDYOSJNLGEGPLCEKSLAJVVYK");
    tmp_msg_0.lat = 0.62702919835;
    tmp_msg_0.lon = 0.0563775986045;
    tmp_msg_0.depth = 0.0322033767434;
    tmp_msg_0.query_channel = 210U;
    tmp_msg_0.reply_channel = 112U;
    tmp_msg_0.transponder_delay = 243U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.972491025485;
    msg.y = 0.468480476632;
    msg.var_x = 0.892772411623;
    msg.var_y = 0.970232024428;
    msg.distance = 0.886465484477;

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
    msg.setTimeStamp(0.850444300364);
    msg.setSource(56883U);
    msg.setSourceEntity(224U);
    msg.setDestination(35852U);
    msg.setDestinationEntity(153U);
    msg.state = 13U;

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
    msg.setTimeStamp(0.395576928155);
    msg.setSource(62151U);
    msg.setSourceEntity(254U);
    msg.setDestination(5448U);
    msg.setDestinationEntity(228U);
    msg.state = 159U;

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
    msg.setTimeStamp(0.0722326756436);
    msg.setSource(28490U);
    msg.setSourceEntity(231U);
    msg.setDestination(62308U);
    msg.setDestinationEntity(164U);
    msg.state = 114U;

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
    msg.setTimeStamp(0.752012016018);
    msg.setSource(60822U);
    msg.setSourceEntity(52U);
    msg.setDestination(7757U);
    msg.setDestinationEntity(79U);
    msg.x = 0.784045539101;
    msg.y = 0.610887396234;
    msg.z = 0.8499297597;

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
    msg.setTimeStamp(0.921014967707);
    msg.setSource(20195U);
    msg.setSourceEntity(141U);
    msg.setDestination(60988U);
    msg.setDestinationEntity(206U);
    msg.x = 0.177558589186;
    msg.y = 0.0929616222569;
    msg.z = 0.766032012647;

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
    msg.setTimeStamp(0.556284486162);
    msg.setSource(60040U);
    msg.setSourceEntity(135U);
    msg.setDestination(42788U);
    msg.setDestinationEntity(230U);
    msg.x = 0.632192677804;
    msg.y = 0.0602683216278;
    msg.z = 0.133866726149;

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
    msg.setTimeStamp(0.953975643081);
    msg.setSource(54258U);
    msg.setSourceEntity(31U);
    msg.setDestination(41294U);
    msg.setDestinationEntity(130U);
    msg.value = 0.951773443785;

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
    msg.setTimeStamp(0.784325594805);
    msg.setSource(7798U);
    msg.setSourceEntity(225U);
    msg.setDestination(51413U);
    msg.setDestinationEntity(50U);
    msg.value = 0.863338845867;

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
    msg.setTimeStamp(0.563208773958);
    msg.setSource(1306U);
    msg.setSourceEntity(210U);
    msg.setDestination(24966U);
    msg.setDestinationEntity(169U);
    msg.value = 0.823972151102;

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
    msg.setTimeStamp(0.405573163575);
    msg.setSource(51525U);
    msg.setSourceEntity(201U);
    msg.setDestination(7002U);
    msg.setDestinationEntity(232U);
    msg.value = 0.150079372082;
    msg.z_units = 86U;

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
    msg.setTimeStamp(0.687194568865);
    msg.setSource(28132U);
    msg.setSourceEntity(32U);
    msg.setDestination(47421U);
    msg.setDestinationEntity(18U);
    msg.value = 0.6422286102;
    msg.z_units = 56U;

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
    msg.setTimeStamp(0.769923516393);
    msg.setSource(50184U);
    msg.setSourceEntity(100U);
    msg.setDestination(15554U);
    msg.setDestinationEntity(196U);
    msg.value = 0.697234087483;
    msg.z_units = 167U;

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
    msg.setTimeStamp(0.878865739168);
    msg.setSource(59932U);
    msg.setSourceEntity(211U);
    msg.setDestination(54504U);
    msg.setDestinationEntity(43U);
    msg.value = 0.661193907181;
    msg.speed_units = 235U;

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
    msg.setTimeStamp(0.820739214801);
    msg.setSource(27309U);
    msg.setSourceEntity(37U);
    msg.setDestination(13360U);
    msg.setDestinationEntity(186U);
    msg.value = 0.536783388176;
    msg.speed_units = 111U;

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
    msg.setTimeStamp(0.298432050323);
    msg.setSource(48482U);
    msg.setSourceEntity(134U);
    msg.setDestination(54350U);
    msg.setDestinationEntity(104U);
    msg.value = 0.712332383114;
    msg.speed_units = 8U;

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
    msg.setTimeStamp(0.0955156406742);
    msg.setSource(38591U);
    msg.setSourceEntity(245U);
    msg.setDestination(55630U);
    msg.setDestinationEntity(152U);
    msg.value = 0.339954689751;

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
    msg.setTimeStamp(0.984692155947);
    msg.setSource(36226U);
    msg.setSourceEntity(126U);
    msg.setDestination(42330U);
    msg.setDestinationEntity(87U);
    msg.value = 0.0354063594741;

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
    msg.setTimeStamp(0.229127396378);
    msg.setSource(16364U);
    msg.setSourceEntity(4U);
    msg.setDestination(59925U);
    msg.setDestinationEntity(180U);
    msg.value = 0.531473686184;

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
    msg.setTimeStamp(0.28055949807);
    msg.setSource(6210U);
    msg.setSourceEntity(89U);
    msg.setDestination(13578U);
    msg.setDestinationEntity(79U);
    msg.value = 0.598867628929;

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
    msg.setTimeStamp(0.955442180741);
    msg.setSource(15632U);
    msg.setSourceEntity(233U);
    msg.setDestination(26087U);
    msg.setDestinationEntity(35U);
    msg.value = 0.399889124893;

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
    msg.setTimeStamp(0.121271354947);
    msg.setSource(61855U);
    msg.setSourceEntity(121U);
    msg.setDestination(34724U);
    msg.setDestinationEntity(176U);
    msg.value = 0.97436347054;

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
    msg.setTimeStamp(0.10241015668);
    msg.setSource(42535U);
    msg.setSourceEntity(98U);
    msg.setDestination(44371U);
    msg.setDestinationEntity(145U);
    msg.value = 0.632100815133;

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
    msg.setTimeStamp(0.101877717244);
    msg.setSource(21456U);
    msg.setSourceEntity(187U);
    msg.setDestination(29656U);
    msg.setDestinationEntity(251U);
    msg.value = 0.0680367830165;

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
    msg.setTimeStamp(0.0372646910238);
    msg.setSource(58926U);
    msg.setSourceEntity(66U);
    msg.setDestination(21005U);
    msg.setDestinationEntity(123U);
    msg.value = 0.594339714464;

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
    msg.setTimeStamp(0.712732083802);
    msg.setSource(16632U);
    msg.setSourceEntity(64U);
    msg.setDestination(30975U);
    msg.setDestinationEntity(29U);
    msg.path_ref = 42167450U;
    msg.start_lat = 0.732819940862;
    msg.start_lon = 0.135063872968;
    msg.start_z = 0.844093514541;
    msg.start_z_units = 161U;
    msg.end_lat = 0.0559673307684;
    msg.end_lon = 0.791128638305;
    msg.end_z = 0.792038217887;
    msg.end_z_units = 160U;
    msg.speed = 0.458877027519;
    msg.speed_units = 198U;
    msg.lradius = 0.0910012117356;
    msg.flags = 104U;

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
    msg.setTimeStamp(0.489857937321);
    msg.setSource(62567U);
    msg.setSourceEntity(133U);
    msg.setDestination(39782U);
    msg.setDestinationEntity(129U);
    msg.path_ref = 462939998U;
    msg.start_lat = 0.242717222952;
    msg.start_lon = 0.885838107839;
    msg.start_z = 0.38530521804;
    msg.start_z_units = 169U;
    msg.end_lat = 0.337973219225;
    msg.end_lon = 0.881377048784;
    msg.end_z = 0.623874083011;
    msg.end_z_units = 42U;
    msg.speed = 0.426307234476;
    msg.speed_units = 248U;
    msg.lradius = 0.980721327093;
    msg.flags = 38U;

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
    msg.setTimeStamp(0.751969187877);
    msg.setSource(24614U);
    msg.setSourceEntity(176U);
    msg.setDestination(39426U);
    msg.setDestinationEntity(152U);
    msg.path_ref = 4103007684U;
    msg.start_lat = 0.342893245;
    msg.start_lon = 0.0437816374632;
    msg.start_z = 0.309988154584;
    msg.start_z_units = 94U;
    msg.end_lat = 0.731994834565;
    msg.end_lon = 0.886482886619;
    msg.end_z = 0.732059012313;
    msg.end_z_units = 228U;
    msg.speed = 0.130950195123;
    msg.speed_units = 238U;
    msg.lradius = 0.635617593919;
    msg.flags = 229U;

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
    msg.setTimeStamp(0.740510277079);
    msg.setSource(24017U);
    msg.setSourceEntity(194U);
    msg.setDestination(46487U);
    msg.setDestinationEntity(235U);
    msg.x = 0.134284852597;
    msg.y = 0.570773267327;
    msg.z = 0.709051179735;
    msg.k = 0.547906341287;
    msg.m = 0.192806681738;
    msg.n = 0.910721121921;
    msg.flags = 97U;

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
    msg.setTimeStamp(0.783941800952);
    msg.setSource(54162U);
    msg.setSourceEntity(137U);
    msg.setDestination(21186U);
    msg.setDestinationEntity(177U);
    msg.x = 0.261708253478;
    msg.y = 0.39559826488;
    msg.z = 0.464894949804;
    msg.k = 0.182427487514;
    msg.m = 0.0327673753786;
    msg.n = 0.915322790589;
    msg.flags = 4U;

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
    msg.setTimeStamp(0.325351631177);
    msg.setSource(1881U);
    msg.setSourceEntity(13U);
    msg.setDestination(1073U);
    msg.setDestinationEntity(231U);
    msg.x = 0.809828798176;
    msg.y = 0.53259307176;
    msg.z = 0.0756314401757;
    msg.k = 0.261802693504;
    msg.m = 0.709881078413;
    msg.n = 0.504764756183;
    msg.flags = 252U;

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
    msg.setTimeStamp(0.063392229229);
    msg.setSource(26523U);
    msg.setSourceEntity(240U);
    msg.setDestination(29353U);
    msg.setDestinationEntity(25U);
    msg.value = 0.10367820653;

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
    msg.setTimeStamp(0.214500413736);
    msg.setSource(1228U);
    msg.setSourceEntity(203U);
    msg.setDestination(48888U);
    msg.setDestinationEntity(70U);
    msg.value = 0.623645019872;

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
    msg.setTimeStamp(0.320912059417);
    msg.setSource(49053U);
    msg.setSourceEntity(28U);
    msg.setDestination(41087U);
    msg.setDestinationEntity(160U);
    msg.value = 0.53692637225;

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
    msg.setTimeStamp(0.893000065332);
    msg.setSource(59458U);
    msg.setSourceEntity(211U);
    msg.setDestination(33281U);
    msg.setDestinationEntity(42U);
    msg.u = 0.655305389892;
    msg.v = 0.0141117892709;
    msg.w = 0.53380735628;
    msg.p = 0.118062282323;
    msg.q = 0.045676981333;
    msg.r = 0.0724800330934;
    msg.flags = 246U;

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
    msg.setTimeStamp(0.958113352485);
    msg.setSource(42135U);
    msg.setSourceEntity(70U);
    msg.setDestination(54662U);
    msg.setDestinationEntity(193U);
    msg.u = 0.613108384519;
    msg.v = 0.852787124884;
    msg.w = 0.203921875825;
    msg.p = 0.114867957478;
    msg.q = 0.745618982604;
    msg.r = 0.429305338933;
    msg.flags = 161U;

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
    msg.setTimeStamp(0.841739379618);
    msg.setSource(46078U);
    msg.setSourceEntity(78U);
    msg.setDestination(4742U);
    msg.setDestinationEntity(123U);
    msg.u = 0.128405482506;
    msg.v = 0.263584937536;
    msg.w = 0.594488646241;
    msg.p = 0.680996969634;
    msg.q = 0.563889678545;
    msg.r = 0.0547744808479;
    msg.flags = 200U;

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
    msg.setTimeStamp(0.982153336445);
    msg.setSource(41584U);
    msg.setSourceEntity(173U);
    msg.setDestination(38294U);
    msg.setDestinationEntity(188U);
    msg.path_ref = 4137898869U;
    msg.start_lat = 0.856829939814;
    msg.start_lon = 0.379288049704;
    msg.start_z = 0.902365917166;
    msg.start_z_units = 78U;
    msg.end_lat = 0.499696261763;
    msg.end_lon = 0.403630606687;
    msg.end_z = 0.0393060451685;
    msg.end_z_units = 72U;
    msg.lradius = 0.323081072693;
    msg.flags = 152U;
    msg.x = 0.503319593606;
    msg.y = 0.550637086621;
    msg.z = 0.542343215615;
    msg.vx = 0.656020309432;
    msg.vy = 0.869292656712;
    msg.vz = 0.508739975101;
    msg.course_error = 0.994872045948;
    msg.eta = 8776U;

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
    msg.setTimeStamp(0.664376858156);
    msg.setSource(61795U);
    msg.setSourceEntity(37U);
    msg.setDestination(8671U);
    msg.setDestinationEntity(225U);
    msg.path_ref = 3242027881U;
    msg.start_lat = 0.756081423717;
    msg.start_lon = 0.725075653222;
    msg.start_z = 0.25116678645;
    msg.start_z_units = 221U;
    msg.end_lat = 0.44059761185;
    msg.end_lon = 0.874741326978;
    msg.end_z = 0.0145306326431;
    msg.end_z_units = 44U;
    msg.lradius = 0.267239812968;
    msg.flags = 82U;
    msg.x = 0.923791366937;
    msg.y = 0.889420517823;
    msg.z = 0.1090410657;
    msg.vx = 0.578888244853;
    msg.vy = 0.942443852246;
    msg.vz = 0.381745584979;
    msg.course_error = 0.428832033813;
    msg.eta = 46209U;

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
    msg.setTimeStamp(0.0701952286539);
    msg.setSource(54726U);
    msg.setSourceEntity(33U);
    msg.setDestination(27319U);
    msg.setDestinationEntity(93U);
    msg.path_ref = 837124551U;
    msg.start_lat = 0.190714047686;
    msg.start_lon = 0.642010120089;
    msg.start_z = 0.246977305913;
    msg.start_z_units = 185U;
    msg.end_lat = 0.274796598784;
    msg.end_lon = 0.299829382918;
    msg.end_z = 0.905074002446;
    msg.end_z_units = 101U;
    msg.lradius = 0.0732439989668;
    msg.flags = 24U;
    msg.x = 0.632220443629;
    msg.y = 0.484418302742;
    msg.z = 0.194314411828;
    msg.vx = 0.718213936848;
    msg.vy = 0.335959401484;
    msg.vz = 0.837346062689;
    msg.course_error = 0.652569080083;
    msg.eta = 48140U;

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
    msg.setTimeStamp(0.756357467233);
    msg.setSource(36096U);
    msg.setSourceEntity(213U);
    msg.setDestination(7208U);
    msg.setDestinationEntity(79U);
    msg.k = 0.141106149171;
    msg.m = 0.181530648468;
    msg.n = 0.556364250051;

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
    msg.setTimeStamp(0.113187853876);
    msg.setSource(21791U);
    msg.setSourceEntity(155U);
    msg.setDestination(28813U);
    msg.setDestinationEntity(70U);
    msg.k = 0.40909158208;
    msg.m = 0.395922381902;
    msg.n = 0.688549741792;

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
    msg.setTimeStamp(0.0563947567076);
    msg.setSource(4594U);
    msg.setSourceEntity(23U);
    msg.setDestination(21148U);
    msg.setDestinationEntity(31U);
    msg.k = 0.959239295766;
    msg.m = 0.776992855016;
    msg.n = 0.634428701238;

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
    msg.setTimeStamp(0.423425655602);
    msg.setSource(35095U);
    msg.setSourceEntity(157U);
    msg.setDestination(44293U);
    msg.setDestinationEntity(132U);
    msg.p = 0.683369936296;
    msg.i = 0.800565868628;
    msg.d = 0.830065371927;
    msg.a = 0.968638718817;

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
    msg.setTimeStamp(0.672122857371);
    msg.setSource(33740U);
    msg.setSourceEntity(240U);
    msg.setDestination(23768U);
    msg.setDestinationEntity(86U);
    msg.p = 0.106067294721;
    msg.i = 0.672172191837;
    msg.d = 0.392431926037;
    msg.a = 0.352868795324;

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
    msg.setTimeStamp(0.938257633658);
    msg.setSource(27653U);
    msg.setSourceEntity(101U);
    msg.setDestination(62685U);
    msg.setDestinationEntity(92U);
    msg.p = 0.25014944945;
    msg.i = 0.227477731625;
    msg.d = 0.895723785168;
    msg.a = 0.335656271776;

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
    msg.setTimeStamp(0.404744648903);
    msg.setSource(58144U);
    msg.setSourceEntity(219U);
    msg.setDestination(32663U);
    msg.setDestinationEntity(54U);
    msg.op = 86U;

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
    msg.setTimeStamp(0.0601386770161);
    msg.setSource(26392U);
    msg.setSourceEntity(231U);
    msg.setDestination(51256U);
    msg.setDestinationEntity(48U);
    msg.op = 63U;

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
    msg.setTimeStamp(0.214805308187);
    msg.setSource(7365U);
    msg.setSourceEntity(66U);
    msg.setDestination(47783U);
    msg.setDestinationEntity(41U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.655869440543);
    msg.setSource(8908U);
    msg.setSourceEntity(103U);
    msg.setDestination(55587U);
    msg.setDestinationEntity(26U);
    msg.timeout = 7181U;
    msg.lat = 0.246558318385;
    msg.lon = 0.366885875583;
    msg.z = 0.209256896435;
    msg.z_units = 47U;
    msg.speed = 0.149643777434;
    msg.speed_units = 186U;
    msg.roll = 0.557510242166;
    msg.pitch = 0.514046722608;
    msg.yaw = 0.097222009724;
    msg.custom.assign("JVNHNSGSKTAKYUQDWIEJPVVLKEYHPWJIXIPMZZLUAYPNGADQNOJ");

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
    msg.setTimeStamp(0.530042088329);
    msg.setSource(28350U);
    msg.setSourceEntity(24U);
    msg.setDestination(44519U);
    msg.setDestinationEntity(38U);
    msg.timeout = 57896U;
    msg.lat = 0.25797415302;
    msg.lon = 0.139687565183;
    msg.z = 0.331927675207;
    msg.z_units = 110U;
    msg.speed = 0.0845758644498;
    msg.speed_units = 45U;
    msg.roll = 0.709359291816;
    msg.pitch = 0.432113181949;
    msg.yaw = 0.0917912759184;
    msg.custom.assign("SLAFZXNZJKKNODQW");

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
    msg.setTimeStamp(0.870098645709);
    msg.setSource(11959U);
    msg.setSourceEntity(86U);
    msg.setDestination(52489U);
    msg.setDestinationEntity(209U);
    msg.timeout = 31079U;
    msg.lat = 0.95472700555;
    msg.lon = 0.973816745636;
    msg.z = 0.251173562976;
    msg.z_units = 15U;
    msg.speed = 0.844311402968;
    msg.speed_units = 64U;
    msg.roll = 0.356495146708;
    msg.pitch = 0.457914049237;
    msg.yaw = 0.237225505379;
    msg.custom.assign("SBKWYQKKOZWWFCERBQJHSCLTAFJKFYJQCWLNEABPCHAQYLGABKVI");

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
    msg.setTimeStamp(0.130533023637);
    msg.setSource(316U);
    msg.setSourceEntity(72U);
    msg.setDestination(25968U);
    msg.setDestinationEntity(145U);
    msg.timeout = 40948U;
    msg.lat = 0.309287689506;
    msg.lon = 0.748939850422;
    msg.z = 0.447864588974;
    msg.z_units = 206U;
    msg.speed = 0.899599744702;
    msg.speed_units = 219U;
    msg.duration = 12309U;
    msg.radius = 0.634046795641;
    msg.flags = 94U;
    msg.custom.assign("HFUCQODGVUUFFKDOYJPSTJEDCBQGDBVPAMWKISMKXIWCIBXQHRQYRUGTMXIDHAQYFYXVRPAZATEWRLKEKBMAOHMIQKKIXVVZSELHIPCXSHMPITPBLUEJUSENYNJBGVWQCUXZRZVOGOAMMLKNWGTADJCLYKSFEMXOSRDWCOTKFVFVOISFXLNECDPLXBEAQHBZUJNOALWBFZYCGJNDJYLSGRZMTQZTWDNJPYZVSTWRJHQNOPNGUTNUBZAEYCH");

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
    msg.setTimeStamp(0.51394450158);
    msg.setSource(48809U);
    msg.setSourceEntity(205U);
    msg.setDestination(15625U);
    msg.setDestinationEntity(62U);
    msg.timeout = 40968U;
    msg.lat = 0.0339289259694;
    msg.lon = 0.983593759851;
    msg.z = 0.922153544171;
    msg.z_units = 138U;
    msg.speed = 0.853379803887;
    msg.speed_units = 166U;
    msg.duration = 28258U;
    msg.radius = 0.540451775163;
    msg.flags = 224U;
    msg.custom.assign("EMZLCAUOTHENDHPGNCANWTRMQBDYFZYDMTFPVXGYBQRMWUZXHMBCZTXZEDQAHVFITUIRRNJZPUQQOECBMUEJBODCUQKKXYAGIWBSOATCJSYQPJYQLK");

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
    msg.setTimeStamp(0.307296311405);
    msg.setSource(59555U);
    msg.setSourceEntity(27U);
    msg.setDestination(60157U);
    msg.setDestinationEntity(77U);
    msg.timeout = 36020U;
    msg.lat = 0.990827780112;
    msg.lon = 0.817089448491;
    msg.z = 0.762389431933;
    msg.z_units = 204U;
    msg.speed = 0.0408180702575;
    msg.speed_units = 55U;
    msg.duration = 50971U;
    msg.radius = 0.120377238398;
    msg.flags = 15U;
    msg.custom.assign("KSVESBAGORUUJSHHQTGWSFUYXUPYTQTJBDLYLGGIIVUCOZCWAQXLVFTENRAQGKLKLCNZRDGIDPAXTPWZGFDFCREZSPWJHBZDKKKNDAONMPRTCAACMUBZOYVPLTUJNJCWCUMOFPTJOEUITKVJRNXLRINMYRLIXSQLBHLVHXTCPWKBWXFOGOXUKQBNYWHAHEMSQPMGQBEEDHWZVQJXWJVIH");

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
    msg.setTimeStamp(0.775636058795);
    msg.setSource(30668U);
    msg.setSourceEntity(68U);
    msg.setDestination(15640U);
    msg.setDestinationEntity(180U);
    msg.custom.assign("UXWHWTGJAWTOABMQMHERNMVRNGBQJCXLITIXFMVAWCQREEFGMULAZJJNDQWKHUGZTLZVVYCYPYTFPIQGMELMOZYYWNRIIVXRGAMORFQZJHXKOCYDICLOUHPRKDFKZHAVJDWDWWEVBDCZPOKALBIFSTPYZPNEJBUENGSFR");

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
    msg.setTimeStamp(0.131433122504);
    msg.setSource(28361U);
    msg.setSourceEntity(60U);
    msg.setDestination(5969U);
    msg.setDestinationEntity(45U);
    msg.custom.assign("HYRYBEXRDOMGHGVRRPNYUBZDCCEMYVCNQLYOMRDXKRKSIJQUPEICTH");

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
    msg.setTimeStamp(0.367238254112);
    msg.setSource(26423U);
    msg.setSourceEntity(58U);
    msg.setDestination(41438U);
    msg.setDestinationEntity(194U);
    msg.custom.assign("MZSDEXHAYTQOZSKXOFDNMSVIGJJUOCQNCYPFVEVHGTAYXZUNLFESCDGXLJXWORJPTAQGFLHOFXVHRHTVTWQQKOGXIMBNERIWJWXAZLZGNEERWYHICUDZENOOJZYAJWNFFCPZKIDZCMTHFIPRFKYCANFGAGLTYGJRQRYEQWUVRAMTVIQVBBBVKJUBKOUMRLLDBXMUBUBLSMSSZIEPPEDPHKYWPKCS");

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
    msg.setTimeStamp(0.630575545285);
    msg.setSource(30570U);
    msg.setSourceEntity(197U);
    msg.setDestination(46181U);
    msg.setDestinationEntity(23U);
    msg.timeout = 9809U;
    msg.lat = 0.727341539228;
    msg.lon = 0.373520204175;
    msg.z = 0.119531594108;
    msg.z_units = 117U;
    msg.duration = 14758U;
    msg.speed = 0.201644699859;
    msg.speed_units = 190U;
    msg.type = 193U;
    msg.radius = 0.673193622672;
    msg.length = 0.196647573703;
    msg.bearing = 0.182874840923;
    msg.direction = 112U;
    msg.custom.assign("VTCYWNPNBSQRSFPJLDZOANIUZMHQHAHLEULMCNXCAMCRYWWEKASLZIJGGZVOPSMRKDYKTBVQAOETDPSVIIRERLKZNIBNHEYOIBFOPXXJLIQMZGFTVAFPUEWRQZZEDEMIDZPCASCTLYNWCJBKPUNQUGWXBUNWMKODIVMVCDGHGNHOTLEUAYRPVLARZUQTMWPGFSKHWJXBYXTQEXGUMGJTKHBVFHRQDBODSOYCYGLB");

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
    msg.setTimeStamp(0.94235598547);
    msg.setSource(14790U);
    msg.setSourceEntity(250U);
    msg.setDestination(3671U);
    msg.setDestinationEntity(140U);
    msg.timeout = 50726U;
    msg.lat = 0.206603636407;
    msg.lon = 0.955378125242;
    msg.z = 0.527614450452;
    msg.z_units = 58U;
    msg.duration = 10172U;
    msg.speed = 0.298029620537;
    msg.speed_units = 236U;
    msg.type = 105U;
    msg.radius = 0.183508416547;
    msg.length = 0.283929300908;
    msg.bearing = 0.893382069305;
    msg.direction = 113U;
    msg.custom.assign("WXSUPIRPHVYXIDXFMHUITPLCGMLSUPBAHLIORACXWHSRATURBDBAANZCELEBTKLVFSPFLDEDKJMYKQUIJEGOHGDVCYFKMUOVRGJPEFAWINGUMICDJYOOBGTLFIHNBRQQHNGYRJAYBYWWPWDMHAZESETGUNTNZECQQFXJZQDNVKNQAFQAQUWSOVLMXZCGDYKKXKVVPMLZOJTFNZJWQMPZJBJZELNXMRSIRHHDOIGVBTBZCK");

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
    msg.setTimeStamp(0.125504285645);
    msg.setSource(25397U);
    msg.setSourceEntity(111U);
    msg.setDestination(64281U);
    msg.setDestinationEntity(159U);
    msg.timeout = 24974U;
    msg.lat = 0.46785322973;
    msg.lon = 0.930505784504;
    msg.z = 0.555364620112;
    msg.z_units = 29U;
    msg.duration = 25276U;
    msg.speed = 0.477530901279;
    msg.speed_units = 164U;
    msg.type = 91U;
    msg.radius = 0.813464474;
    msg.length = 0.268486287231;
    msg.bearing = 0.210751117252;
    msg.direction = 229U;
    msg.custom.assign("CUEMOLGSMKKVDLTNYFQVDYKYIDCVDGPLNMVBCYHKSKRRCJZSUQKPYLTQRNLBVSZLSFBXGWTWIULPCPJJXZGH");

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
    msg.setTimeStamp(0.193472056372);
    msg.setSource(33043U);
    msg.setSourceEntity(137U);
    msg.setDestination(10072U);
    msg.setDestinationEntity(78U);
    msg.duration = 906U;
    msg.custom.assign("QYSTWQGCBCSEEIWUKHUTTXHNINEOXQQKNDELOMCGWOXTXFY");

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
    msg.setTimeStamp(0.23594827113);
    msg.setSource(32439U);
    msg.setSourceEntity(18U);
    msg.setDestination(32402U);
    msg.setDestinationEntity(0U);
    msg.duration = 5396U;
    msg.custom.assign("POYPBLGWDYFTBONCMTEDSLKAJDFLJXCIRCRCWOMKOEAARZYBABJKYXAWIGINPIFKSHSEEUQCTXJXYG");

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
    msg.setTimeStamp(0.546561887421);
    msg.setSource(45128U);
    msg.setSourceEntity(104U);
    msg.setDestination(4324U);
    msg.setDestinationEntity(61U);
    msg.duration = 56162U;
    msg.custom.assign("XXSPZNEXCQBHGRZYWLITGFMMJQJCMTKBSFJZKQQBKWGMCIGHFTFPNKEOXUWAPECSMYELWTUTNLFDOAKCPIOXMOLD");

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
    msg.setTimeStamp(0.920483087865);
    msg.setSource(9848U);
    msg.setSourceEntity(17U);
    msg.setDestination(26627U);
    msg.setDestinationEntity(188U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.950900909223;
    tmp_msg_0.speed_units = 226U;
    msg.control.set(tmp_msg_0);
    msg.duration = 33130U;
    msg.custom.assign("BSPYUXUWAEDYDWUNQAKPDJKYQZNUFGEGFFSDHMKPMRKQMGOMXQMEFHNYRUCYMWZGLZZBHJUKOJYLXDVMLBICWOOVSSQGJZRTNSISSCORBDRKMVHKIHXOCGAMCLRQNWTCOALWNIJSFHZFGUVGTSPQZVZDGXABOWAUBMAJLZXJCYJPOQEY");

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
    msg.setTimeStamp(0.121215801393);
    msg.setSource(50555U);
    msg.setSourceEntity(221U);
    msg.setDestination(14795U);
    msg.setDestinationEntity(12U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.559096182353;
    tmp_msg_0.z_units = 17U;
    msg.control.set(tmp_msg_0);
    msg.duration = 53560U;
    msg.custom.assign("VAIRLSEJMHSUJEGXBGSCUYARNWVCQYQNIYZZURFOBP");

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
    msg.setTimeStamp(0.551235502125);
    msg.setSource(61214U);
    msg.setSourceEntity(101U);
    msg.setDestination(45751U);
    msg.setDestinationEntity(174U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.0573983167734;
    msg.control.set(tmp_msg_0);
    msg.duration = 18697U;
    msg.custom.assign("KEZGJDKBPNSP");

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
    msg.setTimeStamp(0.216963616456);
    msg.setSource(59340U);
    msg.setSourceEntity(8U);
    msg.setDestination(20863U);
    msg.setDestinationEntity(167U);
    msg.timeout = 49054U;
    msg.lat = 0.721038264974;
    msg.lon = 0.796788603353;
    msg.z = 0.730294885158;
    msg.z_units = 143U;
    msg.speed = 0.581904099821;
    msg.speed_units = 248U;
    msg.bearing = 0.990814635115;
    msg.cross_angle = 0.827734087841;
    msg.width = 0.789060996234;
    msg.length = 0.754015507439;
    msg.hstep = 0.237996475877;
    msg.coff = 87U;
    msg.alternation = 45U;
    msg.flags = 35U;
    msg.custom.assign("CQFFEDDDZBYWUTBHEZVVRKMEFDOZKWDRZURTBUTYOBYHAIDNHJGUZLHGHQANJLCVKCAFXWOSEDMOQJUICQCCJGLRKCXSNNKBYVKZGQWWJYVOMIUCLLHSAXVLLFTWPXPEPRAAUJYNPDFPRXLQFWYMSVDUBSZXLMSKRIITSZORMEOFNJXTAWQTHXJVCMNHG");

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
    msg.setTimeStamp(0.924667393455);
    msg.setSource(29559U);
    msg.setSourceEntity(233U);
    msg.setDestination(30116U);
    msg.setDestinationEntity(82U);
    msg.timeout = 6483U;
    msg.lat = 0.730418168963;
    msg.lon = 0.455687739503;
    msg.z = 0.636528746381;
    msg.z_units = 90U;
    msg.speed = 0.302998860952;
    msg.speed_units = 119U;
    msg.bearing = 0.981477688487;
    msg.cross_angle = 0.904031276795;
    msg.width = 0.737816888155;
    msg.length = 0.0179177245694;
    msg.hstep = 0.699252629617;
    msg.coff = 6U;
    msg.alternation = 116U;
    msg.flags = 97U;
    msg.custom.assign("VAOUODREQMCIUQBDVUJHJDONQXYWVTLRXMYNMLYGNDABIBMNBVUTVEGDESAPNHULELUMCKZQMXSWBJNFZJAXYWSAIRLHLJGHXZIWPYPPIBKTCOQYROPGSFIWJJSGLAYKSRWVEQIQEISHLBNQKAGBTDRZTFMIXFWZTZUZHLEJLTWETFNDBKTIJSCCFWHCXKJNACGOAPKKMGFQVZASHTBODZPGYHORSMEPUGRPMCDKFXUWXDFCUER");

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
    msg.setTimeStamp(0.272707705871);
    msg.setSource(63664U);
    msg.setSourceEntity(50U);
    msg.setDestination(17778U);
    msg.setDestinationEntity(40U);
    msg.timeout = 50826U;
    msg.lat = 0.958409990642;
    msg.lon = 0.604669575277;
    msg.z = 0.0108768592931;
    msg.z_units = 118U;
    msg.speed = 0.119660574398;
    msg.speed_units = 68U;
    msg.bearing = 0.513238156046;
    msg.cross_angle = 0.360321583647;
    msg.width = 0.559836348868;
    msg.length = 0.798552780236;
    msg.hstep = 0.996164569912;
    msg.coff = 229U;
    msg.alternation = 19U;
    msg.flags = 199U;
    msg.custom.assign("QFICNIPPVGZVGBGUJZYJDMBWMHTXTKTCLNQYWKVLYAEGSDAJFMFHYEGATCJKSIOCTGXQRQZAPXTSRBEMWZSNIMNFSZYLZIMKOEJVJZWNNQGZGJXPJFAVFMICMBDOOERSSKYKWAXPLBUPUYURKDBXYIHTZSYQDCFMWOEFLCIUYPNDPKLEAWRHQDPOODRTLKWAFHRVXSUOQQVZELOHPXUCJVGHCARRDQNIBX");

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
    msg.setTimeStamp(0.777747487058);
    msg.setSource(7324U);
    msg.setSourceEntity(209U);
    msg.setDestination(46481U);
    msg.setDestinationEntity(182U);
    msg.timeout = 62598U;
    msg.lat = 0.208281421938;
    msg.lon = 0.328875314487;
    msg.z = 0.353688450701;
    msg.z_units = 67U;
    msg.speed = 0.631570827792;
    msg.speed_units = 145U;
    msg.custom.assign("ZDXYHQUSWOVNCAGDGYRBQNCIVCXIILROCJCPWYHOSZTUISERSYLFBBMMRBCAYEBMGQBRJTSWRIPMWLPUHTVQEHKULOQSMQFVGQKENVXLNXJQNGTFFXJZCTJJEOKZNTKXTAZMJOKEDOANNVASFLGZRLDHLFWMDHNGAJEEGTMTUHYGKZ");

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
    msg.setTimeStamp(0.648064226832);
    msg.setSource(63166U);
    msg.setSourceEntity(32U);
    msg.setDestination(7825U);
    msg.setDestinationEntity(70U);
    msg.timeout = 49110U;
    msg.lat = 0.152827108001;
    msg.lon = 0.447055749529;
    msg.z = 0.864125838074;
    msg.z_units = 81U;
    msg.speed = 0.248496980135;
    msg.speed_units = 25U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0758681637176;
    tmp_msg_0.y = 0.363795069506;
    tmp_msg_0.z = 0.0569926150832;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WNGMTLOWXH");

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
    msg.setTimeStamp(0.41951380878);
    msg.setSource(2865U);
    msg.setSourceEntity(140U);
    msg.setDestination(42557U);
    msg.setDestinationEntity(243U);
    msg.timeout = 41729U;
    msg.lat = 0.974673837546;
    msg.lon = 0.312567617016;
    msg.z = 0.146501583031;
    msg.z_units = 61U;
    msg.speed = 0.486086640613;
    msg.speed_units = 212U;
    msg.custom.assign("GHKDKUQXZECUUIAGBRGFMLOTLVXBUFUWADETXLEFABYKGYMKYTYIKXHNGVZYRBURALKNIDXXJVRVZAPBCHZFADLOPHJWD");

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
    msg.setTimeStamp(0.716525573595);
    msg.setSource(44862U);
    msg.setSourceEntity(25U);
    msg.setDestination(37383U);
    msg.setDestinationEntity(69U);
    msg.x = 0.779549549073;
    msg.y = 0.684570168248;
    msg.z = 0.182053597698;

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
    msg.setTimeStamp(0.704208023106);
    msg.setSource(21426U);
    msg.setSourceEntity(126U);
    msg.setDestination(15209U);
    msg.setDestinationEntity(98U);
    msg.x = 0.641273591129;
    msg.y = 0.107648559168;
    msg.z = 0.921283080553;

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
    msg.setTimeStamp(0.850205044273);
    msg.setSource(50967U);
    msg.setSourceEntity(65U);
    msg.setDestination(16442U);
    msg.setDestinationEntity(55U);
    msg.x = 0.453990489183;
    msg.y = 0.13527339241;
    msg.z = 0.418404342198;

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
    msg.setTimeStamp(0.12866522036);
    msg.setSource(30400U);
    msg.setSourceEntity(6U);
    msg.setDestination(39959U);
    msg.setDestinationEntity(59U);
    msg.timeout = 17694U;
    msg.lat = 0.358072214504;
    msg.lon = 0.531700994372;
    msg.z = 0.00760529501038;
    msg.z_units = 97U;
    msg.amplitude = 0.323764266175;
    msg.pitch = 0.12230067549;
    msg.speed = 0.372983025203;
    msg.speed_units = 212U;
    msg.custom.assign("XEMMPHJQCTGGXYOKLPUJBWNDGTOUYPXCFUNZEZHATLRXMKH");

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
    msg.setTimeStamp(0.799164231452);
    msg.setSource(6138U);
    msg.setSourceEntity(192U);
    msg.setDestination(8770U);
    msg.setDestinationEntity(105U);
    msg.timeout = 25327U;
    msg.lat = 0.257760536833;
    msg.lon = 0.380107540206;
    msg.z = 0.458176075967;
    msg.z_units = 53U;
    msg.amplitude = 0.383555934105;
    msg.pitch = 0.801736148648;
    msg.speed = 0.23566366436;
    msg.speed_units = 14U;
    msg.custom.assign("XYJFBYNAQAABAIKHHDBSOMMDEIHVHRYONVJXMXAJAWKPLSLVSGGUBDWHTWZUCSLROZSPPTTCUXIVJNEKECBVFLACTERWKDOGYRMZAGUVPQDCFLVNSYUMQLVQZGDNCKVJQWMNRCQWGIURXFYUELSHGOXQRZBMTHMBPZUSCTKAXFRFIWDXKDLDGBKXJJEJOYRPNQOYP");

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
    msg.setTimeStamp(0.949107975585);
    msg.setSource(62971U);
    msg.setSourceEntity(139U);
    msg.setDestination(52902U);
    msg.setDestinationEntity(252U);
    msg.timeout = 23878U;
    msg.lat = 0.0830259960743;
    msg.lon = 0.925093789947;
    msg.z = 0.173218998826;
    msg.z_units = 115U;
    msg.amplitude = 0.130267448593;
    msg.pitch = 0.431788845393;
    msg.speed = 0.277471059378;
    msg.speed_units = 91U;
    msg.custom.assign("HVCVEJNOXOUOQRJNNHUKBAHLFAWRYDXSBTMFBGQVXMTPGVZVQUDDXEDYIGFRHJHFTGHVUTKGSYEFEWLJZZSMRQDMQZXAXYDJMQPAWKOMHOSSCGORZDYMXMLQIXOBTERIKSLALKYAGWRROUKPZCTYZPHVIQJWSANIYBCHNCCWUBJS");

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
    msg.setTimeStamp(0.0415487305434);
    msg.setSource(41265U);
    msg.setSourceEntity(126U);
    msg.setDestination(28987U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.48834497605);
    msg.setSource(53533U);
    msg.setSourceEntity(227U);
    msg.setDestination(64271U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.637041630706);
    msg.setSource(20304U);
    msg.setSourceEntity(88U);
    msg.setDestination(56813U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.838525953967);
    msg.setSource(64497U);
    msg.setSourceEntity(21U);
    msg.setDestination(51166U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.0172134390481;
    msg.lon = 0.647221736919;
    msg.z = 0.736999228047;
    msg.z_units = 97U;
    msg.radius = 0.0875462041165;
    msg.duration = 38273U;
    msg.speed = 0.647290343262;
    msg.speed_units = 152U;
    msg.custom.assign("HXACIYNZSXHNKSFQURITTBWZ");

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
    msg.setTimeStamp(0.743233476923);
    msg.setSource(46035U);
    msg.setSourceEntity(75U);
    msg.setDestination(9515U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.497761904318;
    msg.lon = 0.357789798476;
    msg.z = 0.514140927647;
    msg.z_units = 177U;
    msg.radius = 0.402493326471;
    msg.duration = 19426U;
    msg.speed = 0.236430570112;
    msg.speed_units = 154U;
    msg.custom.assign("PCZLEFAHBZEVOFVXBXXZXWETGKVKRWBQXBTZWRPQAJNZYILYPOSRBHNCSRSHSHTQBYNSGGADTEHCIDEREGFJWUOLOJSLJQXCNDYWRLLEMJDTYINTNWPGTABTEMUFWCHJQKUMAMCPLFBGMZHCFKMCQZDUMPRXBYUXAPGVIZUIQFIQXWLMIKYHOSKOYUMGMIYCSLFHONPPIZJKHYUNRDEJSQPVWUVVDKTKLAVQIVO");

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
    msg.setTimeStamp(0.20826837871);
    msg.setSource(5301U);
    msg.setSourceEntity(102U);
    msg.setDestination(30451U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.384195361956;
    msg.lon = 0.895291532234;
    msg.z = 0.694308805277;
    msg.z_units = 174U;
    msg.radius = 0.315120957846;
    msg.duration = 18351U;
    msg.speed = 0.785219531795;
    msg.speed_units = 151U;
    msg.custom.assign("KVECACUDPSYHZNYWRDYKPADWFHFPDAISFRDCLNAWSBBZLPYMXXCAQMBBKLJYUGGOPQFWQTHSLHEDLZUQIWITUXZEEKKVNNQSUNGJUXDOHAYLWEUSXRKXEQQMROCZPHTVEBGEFDGJQTFATBNYJSMNTGNOIOBIAKZJVIXUIBPLPRWEVSHDRZTJCXVMKSOARMCH");

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
    msg.setTimeStamp(0.0442046379182);
    msg.setSource(8602U);
    msg.setSourceEntity(39U);
    msg.setDestination(1050U);
    msg.setDestinationEntity(106U);
    msg.timeout = 26940U;
    msg.flags = 57U;
    msg.lat = 0.788809618444;
    msg.lon = 0.53432229571;
    msg.start_z = 0.501100360474;
    msg.start_z_units = 23U;
    msg.end_z = 0.625710437339;
    msg.end_z_units = 154U;
    msg.radius = 0.34779277445;
    msg.speed = 0.0248818619049;
    msg.speed_units = 29U;
    msg.custom.assign("SNNUQNHSNRDWSUGEZJAVETSZLKTUFCZLOCFITIJSRV");

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
    msg.setTimeStamp(0.49536718843);
    msg.setSource(22845U);
    msg.setSourceEntity(36U);
    msg.setDestination(61700U);
    msg.setDestinationEntity(212U);
    msg.timeout = 57382U;
    msg.flags = 97U;
    msg.lat = 0.848901182221;
    msg.lon = 0.773982655818;
    msg.start_z = 0.629149229758;
    msg.start_z_units = 2U;
    msg.end_z = 0.803409788862;
    msg.end_z_units = 226U;
    msg.radius = 0.831442022662;
    msg.speed = 0.398599737637;
    msg.speed_units = 186U;
    msg.custom.assign("VDQIYOIMMKFQMJNQFSGKHETHNZAOMKGNSYXPUHTGGMBISJNCAKVTDLLFLIRXCNUTDNHZWRPEJHOQMGNTSWPWNALGWIZYTEADIFCCYFSPQORRDQQBTFYXSEURABYISDLCZHZOBYLXAQMVHBYEWAWCOPAXUUPUBWX");

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
    msg.setTimeStamp(0.262563101643);
    msg.setSource(28299U);
    msg.setSourceEntity(244U);
    msg.setDestination(38541U);
    msg.setDestinationEntity(230U);
    msg.timeout = 30636U;
    msg.flags = 3U;
    msg.lat = 0.973884180363;
    msg.lon = 0.874271854278;
    msg.start_z = 0.345666354065;
    msg.start_z_units = 153U;
    msg.end_z = 0.473926697967;
    msg.end_z_units = 77U;
    msg.radius = 0.00537351292889;
    msg.speed = 0.670620114313;
    msg.speed_units = 64U;
    msg.custom.assign("KKWCMKJPOWYCFMQGJHFUXFYSHTQOVAXDAQNLYSMJPNZLUCGIVQBBOYTVTNOGGRXPZTRQBSQILUIGHMUEZRWXTLIVZXMTWTOVASSDNSDACBLCKHUOOXORRNPQLDRSGZWEGJZWZEQFRKIBTVMBGADSHAKQDXYIIUKMBCKZEBEEPLJFNPOWPWDICUKFRHAVSVFJCMXFJDT");

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
    msg.setTimeStamp(0.285184415556);
    msg.setSource(27344U);
    msg.setSourceEntity(55U);
    msg.setDestination(40976U);
    msg.setDestinationEntity(125U);
    msg.timeout = 8996U;
    msg.lat = 0.237774762697;
    msg.lon = 0.458876751162;
    msg.z = 0.246242095182;
    msg.z_units = 73U;
    msg.speed = 0.832125947973;
    msg.speed_units = 115U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.452628586308;
    tmp_msg_0.y = 0.0623760044446;
    tmp_msg_0.z = 0.808685527235;
    tmp_msg_0.t = 0.509214048167;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UDSBEBXCOLAHTGINJVSEQCPJFLLDIDKRCHSBRTYOQGTZHVGZDWYXKKNTFKYDVQCORXJANNAWHVHYYNTJJXTFDVU");

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
    msg.setTimeStamp(0.979505370915);
    msg.setSource(38758U);
    msg.setSourceEntity(204U);
    msg.setDestination(48208U);
    msg.setDestinationEntity(85U);
    msg.timeout = 3693U;
    msg.lat = 0.372197585853;
    msg.lon = 0.435091795288;
    msg.z = 0.0225838566753;
    msg.z_units = 168U;
    msg.speed = 0.410940654225;
    msg.speed_units = 14U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.918304522715;
    tmp_msg_0.y = 0.889402526888;
    tmp_msg_0.z = 0.912505547772;
    tmp_msg_0.t = 0.699228945398;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZCZJHTGFYISULFSMPTJNMJQMKRMPWNGMQEGWVMJCDKWVBIUBVRSBWFHQHUYEEJSITEAGEZTGXLFDSAVPUJWCCISARYZGYXHXAZGWZDUZTKUWAYIPRJDKSCOYCDONSXRZUIUALLBKFYHMLZXIZIXNB");

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
    msg.setTimeStamp(0.462288633265);
    msg.setSource(46932U);
    msg.setSourceEntity(69U);
    msg.setDestination(26577U);
    msg.setDestinationEntity(94U);
    msg.timeout = 3785U;
    msg.lat = 0.881886074344;
    msg.lon = 0.295558454209;
    msg.z = 0.421954451852;
    msg.z_units = 90U;
    msg.speed = 0.240145667689;
    msg.speed_units = 15U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.42717564535;
    tmp_msg_0.y = 0.74263713132;
    tmp_msg_0.z = 0.343684793169;
    tmp_msg_0.t = 0.96113466953;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DKJKRWOIOHOCXEYQWXDKVYIMXXEPQLCMBPFEOAZVPQJYDCTFUPOXTYJKCGFXRTATOLUUBHOGLOLXDFJDAHRLGFFVJRSNESSKUQANEINKWASAEHORTGUYAMEMBCFRGZQBUJJUIQTMWEBAXWVDVYQIHEIHNCGVVNHDPDHSW");

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
    msg.setTimeStamp(0.333786303824);
    msg.setSource(52777U);
    msg.setSourceEntity(218U);
    msg.setDestination(34637U);
    msg.setDestinationEntity(212U);
    msg.x = 0.855457528751;
    msg.y = 0.729930849807;
    msg.z = 0.119929938137;
    msg.t = 0.335732344203;

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
    msg.setTimeStamp(0.448529267326);
    msg.setSource(777U);
    msg.setSourceEntity(227U);
    msg.setDestination(36290U);
    msg.setDestinationEntity(111U);
    msg.x = 0.67668948462;
    msg.y = 0.120162411245;
    msg.z = 0.00885771692405;
    msg.t = 0.320527049291;

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
    msg.setTimeStamp(0.275347648834);
    msg.setSource(23647U);
    msg.setSourceEntity(172U);
    msg.setDestination(6151U);
    msg.setDestinationEntity(143U);
    msg.x = 0.546296600843;
    msg.y = 0.216005307213;
    msg.z = 0.380686599007;
    msg.t = 0.111656199458;

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
    msg.setTimeStamp(0.982045269356);
    msg.setSource(25053U);
    msg.setSourceEntity(213U);
    msg.setDestination(42324U);
    msg.setDestinationEntity(22U);
    msg.timeout = 25035U;
    msg.name.assign("DQUHKZWZOLFIGBMESRQZOANTQUXGKTCBEXMQZLQUHMVGFYNKFQTXSZHUWDNUZKWVXDBPCWVJNFGYHVSOASCNPEAJRUGDMIIJUKJNVXADRFQSGRYKFKMWOSMTPPBNNHAVBOLHJHEMTFLWBSDYYVERPJSUDIRTLXKEMEWF");
    msg.custom.assign("FNEQVQTSWRRECCAIUQEVPGLADRTYZGXCTEXGDDARGOVXSHNJIZCKDUFMCKRZHVCADH");

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
    msg.setTimeStamp(0.651231988328);
    msg.setSource(63040U);
    msg.setSourceEntity(228U);
    msg.setDestination(39410U);
    msg.setDestinationEntity(200U);
    msg.timeout = 20376U;
    msg.name.assign("QZDQCZKAXPEBVUXWIPKOAXBCGEXNOCPQNAMTDUEIHEGXEWRJQKRIYVPJDWCGEXCHFLUKDOWISFYGMATTSXVPJUBZBKOVVUBSWZIPJIGMDCF");
    msg.custom.assign("WYQQXFAJGHBBFDK");

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
    msg.setTimeStamp(0.0778002219579);
    msg.setSource(28468U);
    msg.setSourceEntity(77U);
    msg.setDestination(20724U);
    msg.setDestinationEntity(68U);
    msg.timeout = 20730U;
    msg.name.assign("MKLKUIXDKMZGIZCAYQNPOGGKYHROOENUSFTSGIVPOGRNXFTOXJREVEVFCPJVDYZKEHSYQBJAPXOHMELEUOBGNAVFWLARBAEXYQTMMQRPADLOIURZNWNFVHWWGDXMCBHXLKCVTSIBLVMZKGDHZ");
    msg.custom.assign("PKJXHGTKHOEQAWJXXUXQRZIMNLVWAIRWQROYVYU");

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
    msg.setTimeStamp(0.326417097654);
    msg.setSource(805U);
    msg.setSourceEntity(217U);
    msg.setDestination(41622U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.693950306418;
    msg.lon = 0.210205153439;
    msg.z = 0.151363558559;
    msg.z_units = 137U;
    msg.speed = 0.244391028831;
    msg.speed_units = 111U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 62366U;
    tmp_msg_0.off_x = 0.833841210079;
    tmp_msg_0.off_y = 0.090240333806;
    tmp_msg_0.off_z = 0.238222152284;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.780869013278;
    msg.custom.assign("QRAYNFECWFPDQVKSUSCFWOOJYZIDRGPWVTWKUAKCGLSISXABHIJWZVOITZEYINBWHUCJKEZZULSMXOMLFYSTC");

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
    msg.setTimeStamp(0.287372038602);
    msg.setSource(44702U);
    msg.setSourceEntity(229U);
    msg.setDestination(31014U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.481358504985;
    msg.lon = 0.436830312341;
    msg.z = 0.253300027947;
    msg.z_units = 18U;
    msg.speed = 0.103261229678;
    msg.speed_units = 143U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.146792100509;
    tmp_msg_0.y = 0.487474211344;
    tmp_msg_0.z = 0.882224656666;
    tmp_msg_0.t = 0.647968468447;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 38644U;
    tmp_msg_1.off_x = 0.834229924131;
    tmp_msg_1.off_y = 0.263652345378;
    tmp_msg_1.off_z = 0.76564470079;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.0862330201754;
    msg.custom.assign("XGICDVSECYRGZDZNKYJEIUVGEJSJLBRNTONZKGIMLGBPILVSXVKAPMTNMJLUREZNSKMZMPCUAQPXBLFPTJWIRUWAWBIOKGDDHMTGOWHZAZJIBFATDBRXFDTCECCQNBVVPMSAAHREROSJMUSBWYUWEIIGQECYQGNVQOTQ");

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
    msg.setTimeStamp(0.536812725341);
    msg.setSource(60431U);
    msg.setSourceEntity(28U);
    msg.setDestination(39589U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.897459420967;
    msg.lon = 0.744689207062;
    msg.z = 0.458161983698;
    msg.z_units = 75U;
    msg.speed = 0.809497674144;
    msg.speed_units = 16U;
    msg.start_time = 0.858063852723;
    msg.custom.assign("OGLPOBUOINCMSYUPJMKZFMNJTWXDIRPKPJVFKJVBLCQFROXEZZYNPATJWPJYGMHHKYEREDKFBCFLHNVIBKAJJOWKHKSDCWUHLGMBHSXNGDAQWAQQWTIZYKDODHRBLOUGCOCGDAUXQCMVDCSILWUFEXNXRUWVPGOZAHSEMCKQUBNXRXZUYBIEABSMHTTJYLBYTFPGZAFXVDURQZMQELSWEJTFN");

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
    msg.setTimeStamp(0.983087472265);
    msg.setSource(14915U);
    msg.setSourceEntity(144U);
    msg.setDestination(41674U);
    msg.setDestinationEntity(179U);
    msg.vid = 33720U;
    msg.off_x = 0.024140710209;
    msg.off_y = 0.368650808593;
    msg.off_z = 0.00946045230092;

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
    msg.setTimeStamp(0.215416140383);
    msg.setSource(59978U);
    msg.setSourceEntity(243U);
    msg.setDestination(1962U);
    msg.setDestinationEntity(59U);
    msg.vid = 59389U;
    msg.off_x = 0.236094193965;
    msg.off_y = 0.0826518638236;
    msg.off_z = 0.0280878691072;

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
    msg.setTimeStamp(0.931346070199);
    msg.setSource(11883U);
    msg.setSourceEntity(175U);
    msg.setDestination(22515U);
    msg.setDestinationEntity(65U);
    msg.vid = 64676U;
    msg.off_x = 0.0543999445743;
    msg.off_y = 0.541371639511;
    msg.off_z = 0.0509918596452;

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
    msg.setTimeStamp(0.122115493244);
    msg.setSource(46928U);
    msg.setSourceEntity(125U);
    msg.setDestination(1371U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.701688607598);
    msg.setSource(12198U);
    msg.setSourceEntity(48U);
    msg.setDestination(15746U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.845095592217);
    msg.setSource(38951U);
    msg.setSourceEntity(140U);
    msg.setDestination(55440U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.197462258568);
    msg.setSource(26110U);
    msg.setSourceEntity(249U);
    msg.setDestination(29640U);
    msg.setDestinationEntity(159U);
    msg.mid = 54303U;

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
    msg.setTimeStamp(0.628709167845);
    msg.setSource(62546U);
    msg.setSourceEntity(208U);
    msg.setDestination(12593U);
    msg.setDestinationEntity(253U);
    msg.mid = 13979U;

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
    msg.setTimeStamp(0.427965503549);
    msg.setSource(26390U);
    msg.setSourceEntity(74U);
    msg.setDestination(47847U);
    msg.setDestinationEntity(174U);
    msg.mid = 36104U;

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
    msg.setTimeStamp(0.239142368764);
    msg.setSource(5977U);
    msg.setSourceEntity(20U);
    msg.setDestination(9079U);
    msg.setDestinationEntity(219U);
    msg.state = 32U;
    msg.eta = 34926U;
    msg.info.assign("HXDRIEJSBFDUXBRWKSHDBDPLJDBTWRMOXQCOQVYEAGUPJGFCAQBCTMVCXLPYKEZTZUGFNHOOIISYMYJRDHAOVBITNFWJKVYLPRWZHQUXHTEDANWLFPKTKCINSBJACGBKMPXMMLOEZYPZWUMF");

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
    msg.setTimeStamp(0.332625858412);
    msg.setSource(11462U);
    msg.setSourceEntity(1U);
    msg.setDestination(60466U);
    msg.setDestinationEntity(211U);
    msg.state = 14U;
    msg.eta = 17476U;
    msg.info.assign("IUZKONPSDOXNPIWAZJLDMWQNZVYBMBXNSZJMDVZKJJYPWHFSPWARPFOTQHRQOTNUNWZSFMSMLYEBQKASVNBFQWTCIJLZXQYMIYMALHTUGGSLNGMMQBXLUEXEHFDTPXIBIVZEGYIIRBFUAVNGTUQPCSCWUACDMUBJRGXTZCORRVRATOJIEKFTLESQRUOSKBGOQTVXGZDHDHBOVYDWPNFXPFWJHAHYAOERL");

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
    msg.setTimeStamp(0.00521817575214);
    msg.setSource(7687U);
    msg.setSourceEntity(125U);
    msg.setDestination(51542U);
    msg.setDestinationEntity(178U);
    msg.state = 197U;
    msg.eta = 39437U;
    msg.info.assign("PGTQNIWQKLKSCAVGNPPNJMSZIAIOGPZWOEJGQREZMJCMZWDUYOZJKTRVBXFIZQUCOCAKBAQXAOUSLFBNSMANAFYAEDGFNHTRUFDLYADPRWCUBVFWKVEBKQVEYGTWBJHMMQTFSNPZSRCGKJUPKXTBLFCRYOTLSVLUZZEYTRHLGDLKFXOMUIIOYRYYXBHEIEHWHXHACOBMRZQVWISGEVDMWNLRUEXUNSGPVQXQCJDD");

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
    msg.setTimeStamp(0.718405446725);
    msg.setSource(33553U);
    msg.setSourceEntity(254U);
    msg.setDestination(36540U);
    msg.setDestinationEntity(80U);
    msg.system = 35378U;
    msg.duration = 57165U;
    msg.speed = 0.134020239493;
    msg.speed_units = 72U;
    msg.x = 0.468058405694;
    msg.y = 0.807089088747;
    msg.z = 0.473886872592;
    msg.z_units = 54U;

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
    msg.setTimeStamp(0.73958788012);
    msg.setSource(58422U);
    msg.setSourceEntity(217U);
    msg.setDestination(62598U);
    msg.setDestinationEntity(63U);
    msg.system = 24501U;
    msg.duration = 28532U;
    msg.speed = 0.140161352027;
    msg.speed_units = 8U;
    msg.x = 0.766978021999;
    msg.y = 0.93889483591;
    msg.z = 0.315484940541;
    msg.z_units = 173U;

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
    msg.setTimeStamp(0.378114964887);
    msg.setSource(2604U);
    msg.setSourceEntity(76U);
    msg.setDestination(8186U);
    msg.setDestinationEntity(194U);
    msg.system = 19901U;
    msg.duration = 49074U;
    msg.speed = 0.172865407114;
    msg.speed_units = 198U;
    msg.x = 0.201081954183;
    msg.y = 0.528659426792;
    msg.z = 0.220594106974;
    msg.z_units = 235U;

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
    msg.setTimeStamp(0.0454219885078);
    msg.setSource(15373U);
    msg.setSourceEntity(193U);
    msg.setDestination(60391U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.209022575482;
    msg.lon = 0.819453896079;
    msg.speed = 0.453189060144;
    msg.speed_units = 242U;
    msg.duration = 20909U;
    msg.sys_a = 63722U;
    msg.sys_b = 27024U;
    msg.move_threshold = 0.360787466492;

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
    msg.setTimeStamp(0.337795623491);
    msg.setSource(56583U);
    msg.setSourceEntity(29U);
    msg.setDestination(53851U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.076153513927;
    msg.lon = 0.778566743695;
    msg.speed = 0.118507112139;
    msg.speed_units = 196U;
    msg.duration = 1863U;
    msg.sys_a = 13U;
    msg.sys_b = 43387U;
    msg.move_threshold = 0.501141368231;

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
    msg.setTimeStamp(0.499582445242);
    msg.setSource(22725U);
    msg.setSourceEntity(23U);
    msg.setDestination(60027U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.630759871614;
    msg.lon = 0.150919536424;
    msg.speed = 0.435406742183;
    msg.speed_units = 107U;
    msg.duration = 42010U;
    msg.sys_a = 3593U;
    msg.sys_b = 1618U;
    msg.move_threshold = 0.863033653028;

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
    msg.setTimeStamp(0.697119606743);
    msg.setSource(36821U);
    msg.setSourceEntity(185U);
    msg.setDestination(33054U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.350960004666;
    msg.lon = 0.119053970009;
    msg.z = 0.147745335381;
    msg.z_units = 34U;
    msg.speed = 0.888159433457;
    msg.speed_units = 191U;
    msg.custom.assign("XZZDEPURTLMCCFAKHBHXNGFPFRGIZRLBAYRNWJLMWCUAZAQMDZUNRCAOJROCOSBWGFSTJMBPIPTKSUIJKW");

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
    msg.setTimeStamp(0.194818993344);
    msg.setSource(11561U);
    msg.setSourceEntity(247U);
    msg.setDestination(65476U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.665160538187;
    msg.lon = 0.00379401731048;
    msg.z = 0.15905502714;
    msg.z_units = 176U;
    msg.speed = 0.845695420571;
    msg.speed_units = 166U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.322357352259;
    tmp_msg_0.lon = 0.728762195857;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("NLIIDAPRLBJFULEHOPDCOWYWBWQMRWQEXEVEDORMQTXHMBGCVAZIBCXXTQYTFXTRYZDNUHSLAVFZGQYPOVGYCFQKEMRQSPARTUFMMNSOWTFEKCSOLJHPKGIKBDPKCUQJJWUYVYFGKCZYHRNTICZWKVBGNWCDEMVWRSSHEPIYHNPJXWNUUKXIDOBKQARLLJIJQDSUFYPTXJUZLSJHXZMCEBDONGRSUVDGVIBNAGFOLXZAOZTEIJMPFT");

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
    msg.setTimeStamp(0.0986023272205);
    msg.setSource(18589U);
    msg.setSourceEntity(158U);
    msg.setDestination(3868U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.0471947640972;
    msg.lon = 0.181871004239;
    msg.z = 0.240742412917;
    msg.z_units = 163U;
    msg.speed = 0.852551236706;
    msg.speed_units = 124U;
    msg.custom.assign("RTACPMTSRBQANNXUZTFGCIMQGYSRZYVJWIZWVUGDGDOZGRDEXYISXVXAFNPTKSQUZFMFIAIPQGGVHDLCYHRPKYQLTOMFELBHWCAAQEKQLLDSEMMWCLWRORXXBNWORUJVDDOPWTVFNQHMXJZUDNXCIKCLJYUPABUVIAENBOUPRNCCBFGUPZPJQZSMLG");

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
    msg.setTimeStamp(0.254939388058);
    msg.setSource(63702U);
    msg.setSourceEntity(213U);
    msg.setDestination(17719U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.800201505876;
    msg.lon = 0.767295882489;

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
    msg.setTimeStamp(0.997276092982);
    msg.setSource(5861U);
    msg.setSourceEntity(232U);
    msg.setDestination(24420U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.181551957736;
    msg.lon = 0.84106704005;

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
    msg.setTimeStamp(0.507637543864);
    msg.setSource(34983U);
    msg.setSourceEntity(70U);
    msg.setDestination(13756U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.612461668927;
    msg.lon = 0.405457302256;

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
    msg.setTimeStamp(0.802423727112);
    msg.setSource(36836U);
    msg.setSourceEntity(234U);
    msg.setDestination(28953U);
    msg.setDestinationEntity(20U);
    msg.timeout = 58180U;
    msg.lat = 0.965595612519;
    msg.lon = 0.266692254446;
    msg.z = 0.468573073347;
    msg.z_units = 232U;
    msg.pitch = 0.0744856234581;
    msg.amplitude = 0.561253322251;
    msg.duration = 15529U;
    msg.speed = 0.527630472788;
    msg.speed_units = 198U;
    msg.radius = 0.47375986948;
    msg.direction = 13U;
    msg.custom.assign("WHTZTOEMGVHSOUGJUOLDXDBOQJPARS");

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
    msg.setTimeStamp(0.713120368);
    msg.setSource(30280U);
    msg.setSourceEntity(44U);
    msg.setDestination(34372U);
    msg.setDestinationEntity(27U);
    msg.timeout = 35434U;
    msg.lat = 0.756281807565;
    msg.lon = 0.142215310523;
    msg.z = 0.585209616455;
    msg.z_units = 188U;
    msg.pitch = 0.0753797080092;
    msg.amplitude = 0.215236818858;
    msg.duration = 57565U;
    msg.speed = 0.255946974044;
    msg.speed_units = 131U;
    msg.radius = 0.885088678553;
    msg.direction = 199U;
    msg.custom.assign("HADHEXJCRDNNPRNCYKXKEORISPVIWHPRMXVMNUSQPGZQNWWENTIMTMYXZIAJRPQXBLFSEQICEPLCXOKUYMSNGFZNVTGLPAEBQVSTGJOAFH");

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
    msg.setTimeStamp(0.178213616813);
    msg.setSource(39501U);
    msg.setSourceEntity(80U);
    msg.setDestination(7174U);
    msg.setDestinationEntity(221U);
    msg.timeout = 63456U;
    msg.lat = 0.0569503750037;
    msg.lon = 0.680454119451;
    msg.z = 0.214059041179;
    msg.z_units = 136U;
    msg.pitch = 0.81183780211;
    msg.amplitude = 0.294571997307;
    msg.duration = 57292U;
    msg.speed = 0.224193617952;
    msg.speed_units = 106U;
    msg.radius = 0.737912678093;
    msg.direction = 87U;
    msg.custom.assign("HWLJGFIRUOGVQJKOVIISECYRBUPDMWESXYRVEECXBTQFJCKATAJWTUSQAUBCMKSXIFATNGKQBGPUIIXPSPGQHMFCADTNKVHMITRDXPZJBUGJNWWEPGLXHIMKOPMKVHXDEWPFJHLWSBOOKYNTEQLOXKORDXCWJQRCASYHRVHSNNFNARKSEYXHPEWQDFDAJZYYSOZZQZOQGLNYHDLNUZAMFMUCLZVZZN");

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
    msg.setTimeStamp(0.147272893422);
    msg.setSource(30394U);
    msg.setSourceEntity(99U);
    msg.setDestination(45763U);
    msg.setDestinationEntity(161U);
    msg.formation_name.assign("FAHYPWXOYMDOBWUDDEPIFMPMRUQDDIAOMSIBNEQVAYD");
    msg.reference_frame = 94U;
    msg.custom.assign("CTOGTXRBOYTCEOCDQAOBFUTXBPAKFAGDCVVPXJURHGMSJNPPUYEEBZARWJCNNKXYQTHUCSIYPUMDKLRETMINMFYAWDNFOAOJPAWSEEKJMHLBOSXHZVQJQRLRGXNSLMIPLJTGZMDZXRNEFDRUIDXZGHCUKVZMUWBIGISFIGBLKTYIWCQPSRWLBJGLHALNUFODQFKIEIYNGVZFYVFBOAOHWEVVCBZHQKKTLTMJHYCSS");

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
    msg.setTimeStamp(0.36390300865);
    msg.setSource(22375U);
    msg.setSourceEntity(66U);
    msg.setDestination(43427U);
    msg.setDestinationEntity(70U);
    msg.formation_name.assign("RSXIQVLDJGSHDNTUBSNGHRRLNFPZBMQVGOJFHRIPPZODUBZNBCUKYVDZKJFXOBWZMUGPOENPWHNBZMUCLUNHBNWJOKCTNRILTZALFWTAGUIEYXTTJCGMQDODXQFCIZN");
    msg.reference_frame = 148U;
    msg.custom.assign("KXEPMYEUTHEKYHAWBJQNXWBANOSBAWRJGEILJZQMUZSZOHDLXNXZDLMKUFTXDHVWRTVLGFRAATKPBMFPRMUBBFQPYKXYTPAHMRJYO");

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
    msg.setTimeStamp(0.958374519361);
    msg.setSource(33901U);
    msg.setSourceEntity(19U);
    msg.setDestination(14639U);
    msg.setDestinationEntity(113U);
    msg.formation_name.assign("JLLCJUKXYBXAVQTISKJLZVMXHWSKBTBFSFMDCRGDWSXYMVBCACOKHTHZYPEUODXQTBFAPEGCXZYHIPYJPLTUESLSHVKVJMPCHBYGQMHAOKEAHRDNRYIUQUNVTNMBGIRCDLYFSDPRDDFONJGFHEQZUMIZXWRNOWVD");
    msg.reference_frame = 254U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 39861U;
    tmp_msg_0.off_x = 0.121969327396;
    tmp_msg_0.off_y = 0.964610740088;
    tmp_msg_0.off_z = 0.801638655542;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("CAWZIDTDQWZARVUIMWBASWGFNIELRMKGTHMNLCYLJXHLNSVMVUBOUOUYUQQSOMNW");

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
    msg.setTimeStamp(0.410971649718);
    msg.setSource(64048U);
    msg.setSourceEntity(110U);
    msg.setDestination(52093U);
    msg.setDestinationEntity(116U);
    msg.group_name.assign("TPDQXMBJNAFTJIUVTZOVXHSQYZQUXKASMNBXMAOWVKDCKDLZFKRNVIHBZRSQOMQLWWJWTQFMI");
    msg.formation_name.assign("XERMVACIGKFPDZARMRTWFXSDMIDULNUHDGFAJCHNWPZPSUMJSDOZNTBLNKEJWAQXBKRCBPBPYZTQHUYKREYBVLVKRCTZXYXWJMOLPVVKOUMIWACIQZTTQPTFSOPOL");
    msg.plan_id.assign("IGBTWAIIAYKSPHJGTMLPCMDNLHPFKBIAMSZNRLIBHZSTNMHDZBSGRXMUXJAHJUEQQKKFYOOJEVUHCNFMYRTVLZRPNZOPFKGLURWWDUEAEMKOEQDFXEKWOCIVKTK");
    msg.description.assign("GMSRYBNLUUFTMZCNZMLVAPDTJBDMSIKOVXHHMHQUEOEPFRUW");
    msg.leader_speed = 0.0297506989803;
    msg.leader_bank_lim = 0.727303511519;
    msg.pos_sim_err_lim = 0.32153230951;
    msg.pos_sim_err_wrn = 0.819481952792;
    msg.pos_sim_err_timeout = 51325U;
    msg.converg_max = 0.0337661171412;
    msg.converg_timeout = 12553U;
    msg.comms_timeout = 39647U;
    msg.turb_lim = 0.0929505642387;
    msg.custom.assign("MGLOOXAIZAPMSOGZLQBRIYKCVIHBXBEKTKZYLPBSYYTYLFZDUWRUOTCVI");

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
    msg.setTimeStamp(0.257884681126);
    msg.setSource(49163U);
    msg.setSourceEntity(101U);
    msg.setDestination(14467U);
    msg.setDestinationEntity(129U);
    msg.group_name.assign("ZQQNPKTOQIJGGRHDEYYBNBSCZGTPSTGSKBBLFVZAKTICTVYSBBXRVUEMWPROVMJNBGFHUAUNFAJDEIZQXSFMCVKFEVPGWZAEAIRLOCA");
    msg.formation_name.assign("PKFPCEWMHQLXDNRTQZCHRORLJWIBSZDQEIXJBEMWZJMJLGHYRJQDLKNXYOTPZIESCJNCEQWBCAYMYFPNJGODILTYHSRHWRSJWFUDHGFSZGCIITDYFUPBUJGPNQTVVKDBGLMBDOYXVVBOKUPQUEJPAGIXKGAIGXLWYMPZOB");
    msg.plan_id.assign("RJWDZRGNQEHLWQXFMOSACLLLUOWJXVJGCFIEQYFVKWKPYOAAJNEAUHTDJNCKIYNSNEVRLFLKBQAVZLFGEVMYTHQWUUMGXWIYEUDSPGSWCRXDWZXDSZPEZRQRKGBLDRMYQPYMFHWSUH");
    msg.description.assign("TAHPLUPGOXBEATQCGHIKHRKLAVUZBESDKNHCFJDGADIHYKPKEFKUOAZOZUDQVGPMFRFLZMJXYIWTXSMEQDRKQLTGCTOHEDNWHYSXQONRBILOBXWWMMBJSCAWGCFAQETELFMOAYUJTVMDPVZVTUDNWBBHPJOYLCDLXMHEGK");
    msg.leader_speed = 0.859809039686;
    msg.leader_bank_lim = 0.0409318559259;
    msg.pos_sim_err_lim = 0.568158682985;
    msg.pos_sim_err_wrn = 0.883684549611;
    msg.pos_sim_err_timeout = 5205U;
    msg.converg_max = 0.754676882671;
    msg.converg_timeout = 9768U;
    msg.comms_timeout = 39552U;
    msg.turb_lim = 0.685033134533;
    msg.custom.assign("YALVKFLQYHAIDBDXWONITBIIXMCLEBYJVWLXVZIXHITFAZJOEEMPFTCCNEPASOVRBBREUSTACYBFGVCLNPPVTUDVFNGUOWAJOZFHGNRKYSXHQVWGJKBXPCQJQYNQSOUREAZUDUYZDOKZCVEQKWHKKTNDRQRQMFOROYK");

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
    msg.setTimeStamp(0.339427423804);
    msg.setSource(33949U);
    msg.setSourceEntity(85U);
    msg.setDestination(18196U);
    msg.setDestinationEntity(116U);
    msg.group_name.assign("VVXMSYXBWLMATLSZGADJLRNJTOFQYKFCG");
    msg.formation_name.assign("YTPKFLZQIXVWVXNAACYJKCEQGNVSYZHXMRKYUPJYWFTFQXNVSJPOZRAVUOVWPMNCYQMQHGSJDUQAINGFOTQTGNDASTEFDWKOFGWEIJADDHURZZAZEHEVBTIYSDFU");
    msg.plan_id.assign("GBSRYXSCWPRPOFCMJNDUZWEXOCLGINOFAPNWSGYUIZVXDKXCRYDJIUXZOCOMEBSKZAFQMLDPNXZJQHEHXCAPAINEUCSIWQMIDTGFIJGNSETOKPHVHGTITHKKAEYVBJFXWHMUQUVYUEUAJRNFOHNEZRHLLVDSQLLZLYEMYHTE");
    msg.description.assign("ZFCAFCCVFUYEWIGGQGFRQHMALRPWPEPZQSYQFSSANVTFHORVJOUBCEBEUGJZP");
    msg.leader_speed = 0.845655608555;
    msg.leader_bank_lim = 0.641121581406;
    msg.pos_sim_err_lim = 0.990030893942;
    msg.pos_sim_err_wrn = 0.819011077875;
    msg.pos_sim_err_timeout = 20382U;
    msg.converg_max = 0.365835880187;
    msg.converg_timeout = 64263U;
    msg.comms_timeout = 10048U;
    msg.turb_lim = 0.819087016866;
    msg.custom.assign("FPCXBTQDPWLVH");

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
    msg.setTimeStamp(0.494217387937);
    msg.setSource(38586U);
    msg.setSourceEntity(66U);
    msg.setDestination(17787U);
    msg.setDestinationEntity(58U);
    msg.control_src = 15724U;
    msg.control_ent = 245U;
    msg.timeout = 0.698636551725;
    msg.loiter_radius = 0.0923492212922;
    msg.altitude_interval = 0.0164600836745;

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
    msg.setTimeStamp(0.847498868661);
    msg.setSource(43836U);
    msg.setSourceEntity(6U);
    msg.setDestination(13225U);
    msg.setDestinationEntity(248U);
    msg.control_src = 41849U;
    msg.control_ent = 219U;
    msg.timeout = 0.777912454844;
    msg.loiter_radius = 0.169158281391;
    msg.altitude_interval = 0.530031671707;

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
    msg.setTimeStamp(0.214874254445);
    msg.setSource(58038U);
    msg.setSourceEntity(22U);
    msg.setDestination(5318U);
    msg.setDestinationEntity(108U);
    msg.control_src = 55073U;
    msg.control_ent = 248U;
    msg.timeout = 0.7146521009;
    msg.loiter_radius = 0.185475321924;
    msg.altitude_interval = 0.766352256921;

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
    msg.setTimeStamp(0.136910273587);
    msg.setSource(43602U);
    msg.setSourceEntity(136U);
    msg.setDestination(51522U);
    msg.setDestinationEntity(81U);
    msg.flags = 161U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.627916069588;
    tmp_msg_0.speed_units = 12U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.40803865601;
    tmp_msg_1.z_units = 94U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.690502347643;
    msg.lon = 0.298051753973;
    msg.radius = 0.0506737673169;

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
    msg.setTimeStamp(0.337336727792);
    msg.setSource(14802U);
    msg.setSourceEntity(87U);
    msg.setDestination(23019U);
    msg.setDestinationEntity(15U);
    msg.flags = 18U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.844935599828;
    tmp_msg_0.speed_units = 75U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.945231772299;
    tmp_msg_1.z_units = 202U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.527585793074;
    msg.lon = 0.458347001684;
    msg.radius = 0.861201425113;

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
    msg.setTimeStamp(0.538621753938);
    msg.setSource(18995U);
    msg.setSourceEntity(174U);
    msg.setDestination(55164U);
    msg.setDestinationEntity(116U);
    msg.flags = 61U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.930483231635;
    tmp_msg_0.speed_units = 69U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.575410414712;
    tmp_msg_1.z_units = 45U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.455980716655;
    msg.lon = 0.688028643246;
    msg.radius = 0.0944120561898;

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
    msg.setTimeStamp(0.880685879296);
    msg.setSource(26983U);
    msg.setSourceEntity(254U);
    msg.setDestination(43776U);
    msg.setDestinationEntity(174U);
    msg.control_src = 63123U;
    msg.control_ent = 84U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 190U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.217590268967;
    tmp_tmp_msg_0_0.speed_units = 19U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.944965318866;
    tmp_tmp_msg_0_1.z_units = 87U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.600063531178;
    tmp_msg_0.lon = 0.674959539109;
    tmp_msg_0.radius = 0.728392408186;
    msg.reference.set(tmp_msg_0);
    msg.state = 247U;
    msg.proximity = 91U;

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
    msg.setTimeStamp(0.586809623048);
    msg.setSource(33231U);
    msg.setSourceEntity(220U);
    msg.setDestination(3953U);
    msg.setDestinationEntity(70U);
    msg.control_src = 54133U;
    msg.control_ent = 221U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 131U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.256803482407;
    tmp_tmp_msg_0_0.speed_units = 52U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.533530941006;
    tmp_tmp_msg_0_1.z_units = 55U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.147852477637;
    tmp_msg_0.lon = 0.37346821007;
    tmp_msg_0.radius = 0.809535455683;
    msg.reference.set(tmp_msg_0);
    msg.state = 177U;
    msg.proximity = 23U;

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
    msg.setTimeStamp(0.832590602218);
    msg.setSource(55526U);
    msg.setSourceEntity(252U);
    msg.setDestination(36500U);
    msg.setDestinationEntity(149U);
    msg.control_src = 5500U;
    msg.control_ent = 185U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 89U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.600943409653;
    tmp_tmp_msg_0_0.speed_units = 235U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.571319122494;
    tmp_tmp_msg_0_1.z_units = 228U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.670922735119;
    tmp_msg_0.lon = 0.190778480127;
    tmp_msg_0.radius = 0.508058711314;
    msg.reference.set(tmp_msg_0);
    msg.state = 2U;
    msg.proximity = 134U;

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
    msg.setTimeStamp(0.984325673032);
    msg.setSource(53774U);
    msg.setSourceEntity(237U);
    msg.setDestination(34871U);
    msg.setDestinationEntity(245U);
    msg.ax_cmd = 0.256828499816;
    msg.ay_cmd = 0.944673676478;
    msg.az_cmd = 0.300817158475;
    msg.ax_des = 0.0946080659442;
    msg.ay_des = 0.732935645342;
    msg.az_des = 0.852524676296;
    msg.virt_err_x = 0.0871133814022;
    msg.virt_err_y = 0.442186901366;
    msg.virt_err_z = 0.479294815245;
    msg.surf_fdbk_x = 0.498607506697;
    msg.surf_fdbk_y = 0.661948789497;
    msg.surf_fdbk_z = 0.232954247205;
    msg.surf_unkn_x = 0.241554321871;
    msg.surf_unkn_y = 0.243576444471;
    msg.surf_unkn_z = 0.681714440118;
    msg.ss_x = 0.0480893674611;
    msg.ss_y = 0.255018536555;
    msg.ss_z = 0.720424072613;

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
    msg.setTimeStamp(0.385012149778);
    msg.setSource(17614U);
    msg.setSourceEntity(53U);
    msg.setDestination(60932U);
    msg.setDestinationEntity(64U);
    msg.ax_cmd = 0.0566681815369;
    msg.ay_cmd = 0.853444753;
    msg.az_cmd = 0.801487871225;
    msg.ax_des = 0.172757501822;
    msg.ay_des = 0.0450719710823;
    msg.az_des = 0.457511862443;
    msg.virt_err_x = 0.661967737179;
    msg.virt_err_y = 0.337502486569;
    msg.virt_err_z = 0.831619964458;
    msg.surf_fdbk_x = 0.125623926418;
    msg.surf_fdbk_y = 0.651506890121;
    msg.surf_fdbk_z = 0.562896450221;
    msg.surf_unkn_x = 0.502913125568;
    msg.surf_unkn_y = 0.858923228542;
    msg.surf_unkn_z = 0.198954153565;
    msg.ss_x = 0.189288509342;
    msg.ss_y = 0.509095534448;
    msg.ss_z = 0.256925823094;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("QLOHZPTDVIXWQBPFCZYOSLLDTGTSZJATAKJGIRJESKWXPJUKELXFYEJXDVEFIRCEUSGKVOXCYQKDXCMNIJVHJFRAHKEVVMUSYDNMPBHARPIWNZWXWMQWMYOAFHCTXBUZBADUMCFUAUZTOLJDZWYZLNGDBFTOFYL");
    tmp_msg_0.dist = 0.0944470514375;
    tmp_msg_0.err = 0.937913717862;
    tmp_msg_0.ctrl_imp = 0.138522079543;
    tmp_msg_0.rel_dir_x = 0.444963363439;
    tmp_msg_0.rel_dir_y = 0.176955900425;
    tmp_msg_0.rel_dir_z = 0.985697776943;
    tmp_msg_0.err_x = 0.756740799547;
    tmp_msg_0.err_y = 0.992644374943;
    tmp_msg_0.err_z = 0.345055815091;
    tmp_msg_0.rf_err_x = 0.471400141116;
    tmp_msg_0.rf_err_y = 0.187472786171;
    tmp_msg_0.rf_err_z = 0.161794743679;
    tmp_msg_0.rf_err_vx = 0.80825390226;
    tmp_msg_0.rf_err_vy = 0.391453233374;
    tmp_msg_0.rf_err_vz = 0.712892605056;
    tmp_msg_0.ss_x = 0.992119794936;
    tmp_msg_0.ss_y = 0.611840828879;
    tmp_msg_0.ss_z = 0.867616297937;
    tmp_msg_0.virt_err_x = 0.27802475161;
    tmp_msg_0.virt_err_y = 0.0613171967574;
    tmp_msg_0.virt_err_z = 0.0941337885117;
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
    msg.setTimeStamp(0.73370273953);
    msg.setSource(21558U);
    msg.setSourceEntity(164U);
    msg.setDestination(58213U);
    msg.setDestinationEntity(179U);
    msg.ax_cmd = 0.866983724339;
    msg.ay_cmd = 0.0571843789906;
    msg.az_cmd = 0.932717136687;
    msg.ax_des = 0.0285195717805;
    msg.ay_des = 0.982436834433;
    msg.az_des = 0.0635215182802;
    msg.virt_err_x = 0.0903686270172;
    msg.virt_err_y = 0.449075910319;
    msg.virt_err_z = 0.581757568334;
    msg.surf_fdbk_x = 0.648469527998;
    msg.surf_fdbk_y = 0.149548630158;
    msg.surf_fdbk_z = 0.792622820506;
    msg.surf_unkn_x = 0.0150825163557;
    msg.surf_unkn_y = 0.88241722631;
    msg.surf_unkn_z = 0.312739257472;
    msg.ss_x = 0.190429312664;
    msg.ss_y = 0.917750536437;
    msg.ss_z = 0.305132119803;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("UNFFSRWTEVWRHGQQHWCPLGLLYPJOIPILSAMYGHUIZSHNUCEJZHRLICXBEDRXZZFWZYCOZNPJKDIWROECEGSIQHUYUOPHXSEQFNEBWWMIFWVVOBMUBLKBGYYNXJBONGKYXMXXKTVZPQQOONTFTKMRBQUKCCXZQ");
    tmp_msg_0.dist = 0.131055916726;
    tmp_msg_0.err = 0.297419775713;
    tmp_msg_0.ctrl_imp = 0.7333111153;
    tmp_msg_0.rel_dir_x = 0.678852428329;
    tmp_msg_0.rel_dir_y = 0.45051932047;
    tmp_msg_0.rel_dir_z = 0.32455900685;
    tmp_msg_0.err_x = 0.80059539252;
    tmp_msg_0.err_y = 0.858425480704;
    tmp_msg_0.err_z = 0.566307987029;
    tmp_msg_0.rf_err_x = 0.146240122584;
    tmp_msg_0.rf_err_y = 0.536721068781;
    tmp_msg_0.rf_err_z = 0.256559103331;
    tmp_msg_0.rf_err_vx = 0.860314367938;
    tmp_msg_0.rf_err_vy = 0.882625964524;
    tmp_msg_0.rf_err_vz = 0.216577057265;
    tmp_msg_0.ss_x = 0.465503251285;
    tmp_msg_0.ss_y = 0.335093896257;
    tmp_msg_0.ss_z = 0.265411107121;
    tmp_msg_0.virt_err_x = 0.0466667822079;
    tmp_msg_0.virt_err_y = 0.305170177919;
    tmp_msg_0.virt_err_z = 0.855395297866;
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
    msg.setTimeStamp(0.299586088535);
    msg.setSource(17412U);
    msg.setSourceEntity(66U);
    msg.setDestination(19450U);
    msg.setDestinationEntity(234U);
    msg.s_id.assign("SDBKNICOJBCLXEVLCYOZSUEDKWMLQZMZXJOJEESXDFVAPFJWCHSAXYQOBXJJKANBZPMFRVRNLOQEDMNZPDHGNONHEBVGMQFKFFWEIJKBRPUFPYLNWPBAGIQAWUTBPMMCATQHNURWGTEI");
    msg.dist = 0.471630109587;
    msg.err = 0.899570149729;
    msg.ctrl_imp = 0.904606261465;
    msg.rel_dir_x = 0.411205444819;
    msg.rel_dir_y = 0.406688497723;
    msg.rel_dir_z = 0.146909253143;
    msg.err_x = 0.0180322647672;
    msg.err_y = 0.30727405676;
    msg.err_z = 0.318279076601;
    msg.rf_err_x = 0.57515966675;
    msg.rf_err_y = 0.653033766667;
    msg.rf_err_z = 0.718287542816;
    msg.rf_err_vx = 0.757800762363;
    msg.rf_err_vy = 0.302087302156;
    msg.rf_err_vz = 0.659162804864;
    msg.ss_x = 0.960631919083;
    msg.ss_y = 0.656587463025;
    msg.ss_z = 0.511298448163;
    msg.virt_err_x = 0.24416759119;
    msg.virt_err_y = 0.784977648278;
    msg.virt_err_z = 0.23003738781;

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
    msg.setTimeStamp(0.798194740236);
    msg.setSource(23790U);
    msg.setSourceEntity(73U);
    msg.setDestination(39335U);
    msg.setDestinationEntity(254U);
    msg.s_id.assign("RHDMVPUMYWV");
    msg.dist = 0.155559192961;
    msg.err = 0.194867983189;
    msg.ctrl_imp = 0.529590338507;
    msg.rel_dir_x = 0.597336513406;
    msg.rel_dir_y = 0.413026044707;
    msg.rel_dir_z = 0.0430134019085;
    msg.err_x = 0.602835133737;
    msg.err_y = 0.586141670548;
    msg.err_z = 0.892444189811;
    msg.rf_err_x = 0.0525972693026;
    msg.rf_err_y = 0.988898180432;
    msg.rf_err_z = 0.0322700269505;
    msg.rf_err_vx = 0.0256239185477;
    msg.rf_err_vy = 0.792888084002;
    msg.rf_err_vz = 0.657330139275;
    msg.ss_x = 0.470714267668;
    msg.ss_y = 0.804225654532;
    msg.ss_z = 0.05912739389;
    msg.virt_err_x = 0.469471827298;
    msg.virt_err_y = 0.655697971161;
    msg.virt_err_z = 0.893042234663;

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
    msg.setTimeStamp(0.491640340799);
    msg.setSource(26623U);
    msg.setSourceEntity(65U);
    msg.setDestination(29983U);
    msg.setDestinationEntity(95U);
    msg.s_id.assign("ZFKUWDBWYVYLNDMCZSEQTOHCZRKMYPKQGGMELWDSFVVRPPWINVNHSMJBJRRORTDKFEZTJ");
    msg.dist = 0.32304382072;
    msg.err = 0.0296156765055;
    msg.ctrl_imp = 0.897411125293;
    msg.rel_dir_x = 0.0920258285015;
    msg.rel_dir_y = 0.32294982603;
    msg.rel_dir_z = 0.723076788516;
    msg.err_x = 0.485318323046;
    msg.err_y = 0.0387960661688;
    msg.err_z = 0.270194784593;
    msg.rf_err_x = 0.779719535122;
    msg.rf_err_y = 0.907264280767;
    msg.rf_err_z = 0.891203274597;
    msg.rf_err_vx = 0.257001258192;
    msg.rf_err_vy = 0.258737294594;
    msg.rf_err_vz = 0.00743678325681;
    msg.ss_x = 0.832716305968;
    msg.ss_y = 0.440978846455;
    msg.ss_z = 0.140368721798;
    msg.virt_err_x = 0.207773191577;
    msg.virt_err_y = 0.43635071947;
    msg.virt_err_z = 0.687326715281;

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.595350325739);
    msg.setSource(20007U);
    msg.setSourceEntity(27U);
    msg.setDestination(61307U);
    msg.setDestinationEntity(63U);
    msg.op_mode = 190U;
    msg.error_count = 100U;
    msg.error_ents.assign("SGARVXXHOPRMQZBKEYXEHVCDGLCTQEXUDYEIKSSWCIYGNJJAFRILJLWKFWGRZTCQWTBQTOLGEHNPRVSNEDLZWZSUOWBYNDVOUSFGZLMJAMAJWDMURUJBTQJZUKPDHTFUEMSPOILYOHXBHBONPILXCVIXVEWFAQTIFKPMCH");
    msg.maneuver_type = 36007U;
    msg.maneuver_stime = 0.92735478425;
    msg.maneuver_eta = 21095U;
    msg.control_loops = 733894649U;
    msg.flags = 247U;
    msg.last_error.assign("HMHDLKRDADGRIEIENQSOJZJJUZPGYETRECOXZNBMKIRNRMAOGJPOEYHHORSVPCISQVUZDVPPXEJKCSQMVYKJOXLUDVCYRHOZUYWFECWBANWZPWZDNLAXYTWIBIOPBJGVIRFQLMTNPOUVOTRWSKS");
    msg.last_error_time = 0.930585478204;

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
    msg.setTimeStamp(0.196370769996);
    msg.setSource(18893U);
    msg.setSourceEntity(156U);
    msg.setDestination(24322U);
    msg.setDestinationEntity(54U);
    msg.op_mode = 41U;
    msg.error_count = 157U;
    msg.error_ents.assign("VFGZKQPHHIGJZYWCATPDKTJNLKPAUFSDCXYMQIIVKJYBMHQBGFXHOFULSEZZWFUNVKZPPXLTSDMKPKUUXT");
    msg.maneuver_type = 65278U;
    msg.maneuver_stime = 0.611664824949;
    msg.maneuver_eta = 35060U;
    msg.control_loops = 3322046047U;
    msg.flags = 137U;
    msg.last_error.assign("SZGGITMDCWEZPSJLAAVGRFMFSQNPSMEULFYTWMQSBNJLYWSDEVUMFNUKVPKBWTPYBGOMWQDCTUJAFHXHUHPHUDTEZBARIJXXQWLGFLEFIRQPXAJUXBHHIXFPSTHNVIAIBCKGTWQHXDTUDJJEEJNZYQQLWYNEKAYCGXAZNXMVJGPONCTWKA");
    msg.last_error_time = 0.078894362885;

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
    msg.setTimeStamp(0.900195846772);
    msg.setSource(15901U);
    msg.setSourceEntity(137U);
    msg.setDestination(51985U);
    msg.setDestinationEntity(185U);
    msg.op_mode = 33U;
    msg.error_count = 228U;
    msg.error_ents.assign("OTVLSILQWGIQLRZMWOHPSXWQWPZCVZFKJUAAMUKHMVPYOBMZTHILUEUYQROTFUQVGKKUKFZGYACO");
    msg.maneuver_type = 33366U;
    msg.maneuver_stime = 0.389968437748;
    msg.maneuver_eta = 25161U;
    msg.control_loops = 3029719041U;
    msg.flags = 214U;
    msg.last_error.assign("ZFKXCXSWJTLJVRVXMCXUADSBXUUSHVUHZDUFRWGWIIPWEWVIKYKGOYKHFBHQEZCMYOJQJSPWYTJLIKPDVGLESKVRBEAFZAQTOEKEYGPEOJQLTQAZQZBLMDINVBNRKTSRQUUYGSGFWNNXOGNCGLORNCBFGVNHJPLTBROPYKRLTMWNCTGIOVATOPICJRMWUPQIJZADAAXXAIDSMFSDQLMWYHDPEKFYBQODJDVEBMMXZFHSC");
    msg.last_error_time = 0.0832913527581;

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
    msg.setTimeStamp(0.0772567382682);
    msg.setSource(26943U);
    msg.setSourceEntity(164U);
    msg.setDestination(50054U);
    msg.setDestinationEntity(91U);
    msg.type = 102U;
    msg.request_id = 53278U;
    msg.command = 122U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 17093U;
    tmp_msg_0.lat = 0.768792533955;
    tmp_msg_0.lon = 0.277759358812;
    tmp_msg_0.z = 0.204610003245;
    tmp_msg_0.z_units = 35U;
    tmp_msg_0.duration = 22925U;
    tmp_msg_0.speed = 0.796305144465;
    tmp_msg_0.speed_units = 172U;
    tmp_msg_0.type = 122U;
    tmp_msg_0.radius = 0.12103903091;
    tmp_msg_0.length = 0.45028243275;
    tmp_msg_0.bearing = 0.340189320212;
    tmp_msg_0.direction = 170U;
    tmp_msg_0.custom.assign("DGIUENKCCEFKSETQORITMDOBTAPGQZIZJMHYIPTGXGOXUFZZAOHARMWPKGNZAPNYVIBJBKBVRPQGDDCBUFXVGXTDAJXJEGJRLLHFQZAMYPVPKGYFSTLKVYXBUCNWAJRMNQZHFBQTFCHUQYLYEMSJRVVXVPINIHFOCHSSYA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 33627U;
    msg.info.assign("YQMMWYJGLKYDKSONOSDWPOZDRTFOCZBWVSWSQITIPTMIUNIEEXCBOMNIDHJFXHHDEGRFGCLKMSJJGKHCQBKNWJPYVTYVNLIWUMPHGRYSOKQHWJXPMEFQURDCOBQAEURTZTFXXYUYFAJFWPASXIZUGTRIVTVPCETPBMOVNZN");

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
    msg.setTimeStamp(0.206721673541);
    msg.setSource(3347U);
    msg.setSourceEntity(131U);
    msg.setDestination(28072U);
    msg.setDestinationEntity(190U);
    msg.type = 194U;
    msg.request_id = 3405U;
    msg.command = 14U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.123454097222;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 21214U;
    tmp_msg_0.custom.assign("DTYZGFQMYPMKORPGDNJUTPPVKQZXK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 46226U;
    msg.info.assign("FJAYRAKTJIYLHHCIISXYPSBUTPRVDNGCGMAT");

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
    msg.setTimeStamp(0.914509805245);
    msg.setSource(38914U);
    msg.setSourceEntity(2U);
    msg.setDestination(47914U);
    msg.setDestinationEntity(90U);
    msg.type = 160U;
    msg.request_id = 20101U;
    msg.command = 219U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("OXWNYXAQGVKHESIQMBIUYUOZRHRERGYYCFZAQCJHQXAJYCMIWBTPHNESKFRGJNNRTAGTTVFAMULSJPRONEHFZQXWDWRIRNCSXCLJQTESEPMBRXIPDAVZLZZOBIZDFWPTCQASPOVOQIFZWVJTEGYQGJXNMBMUWDLFKJAPKKOKSYTAZAFPOMODTMHLEUTOUEDLVNKMJHVBBSHPESBWKPUBSWGCCIZDGLXUUNMQ");
    tmp_msg_0.formation_name.assign("PFWMFKZXYVUTWQAKYLTUIAXLBSJGXYSRJGDBJJENGYPNILEVXMTHGZXJWOXULSCEGVLZJVREINO");
    tmp_msg_0.plan_id.assign("FYXDYOGFRLJKOVSDQKBOJICHCQIUCNZJSRXVIXXAPAQPPYQITUFRMWTBSBRTMMUFPNSGUEITEPUZDISJWKFGENBA");
    tmp_msg_0.description.assign("VTDJPLEZZFQHJOQERUOGHSNQPOXEMHEPLZVCKHTTCVSMETOYLTXDNWFJAPLNJWCXFCECDQBGEPXIHWESFFLSKWVUIJNLZAZSIXSSXUIGAYVSBFKWWHUOTNSCWQWVECRTHRMLQYARW");
    tmp_msg_0.leader_speed = 0.0335928056372;
    tmp_msg_0.leader_bank_lim = 0.905101789471;
    tmp_msg_0.pos_sim_err_lim = 0.958882420496;
    tmp_msg_0.pos_sim_err_wrn = 0.313004779638;
    tmp_msg_0.pos_sim_err_timeout = 26153U;
    tmp_msg_0.converg_max = 0.284437693973;
    tmp_msg_0.converg_timeout = 41761U;
    tmp_msg_0.comms_timeout = 37741U;
    tmp_msg_0.turb_lim = 0.401278628648;
    tmp_msg_0.custom.assign("BRQDXFDNQLQLH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 48794U;
    msg.info.assign("DULZAQOSIYXZIPKVKPUTFYMTGTLTVURWVGIUQLNIKRFYDXAHBRXJQTIXMCWBOHPMZMBDACMNAHEDLNHSVVWJSIXXSNGWHAZLMEGDPFNTPBEJPWYAJTEWFUOSXMEYQIKDNQULYUHJXVVGMAILRBYWJUFECHSVBTEVHTCEOYOMKQGZNLJOHGZWRFQEXSCKQCROYPYERRKILFZP");

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
    msg.setTimeStamp(0.283618144353);
    msg.setSource(12503U);
    msg.setSourceEntity(19U);
    msg.setDestination(35542U);
    msg.setDestinationEntity(254U);
    msg.command = 54U;
    msg.entities.assign("GVPFNKTIXRMRPVTYABBESLZFKTFIRCFDCJXWZLJTWZBPDFJHABEWVYGUVFYIUTPEOOAXFILKVQJHTNLUNKIWGIFTKTOHDQNMNUBLTENWVROCLHVAHKSOMPSVCSODRLGQERPXKUSXMGZUALBHKUHXKMNCMVWQNDRGYOHPXYSJCMCYDEBGSDOAPBWAZSDAZJSUJPDWNMTZSMEYIVRZJLGXQMNHQOCWJEDBLZYFHACF");

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
    msg.setTimeStamp(0.647233094245);
    msg.setSource(4729U);
    msg.setSourceEntity(118U);
    msg.setDestination(37633U);
    msg.setDestinationEntity(133U);
    msg.command = 4U;
    msg.entities.assign("ZCKFDVFJBAWHESTHUEWTJFMLXCXFSYCVCGFGAADOSADAUVGIMHCZRKDQTZHUONGNVNOMFGPTXARYZRRWODPUEMTPPBLUGDQNNSKQNLJUBRQQHFYJIAGIKMTQBOEWDCKILUZYLCQXVRPWUQWYVXEVBPIJMFPZDZLOXHSAJHIZWBYUWUIVBNWSNKRKYMXPINSLELIIFO");

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
    msg.setTimeStamp(0.805995985598);
    msg.setSource(7729U);
    msg.setSourceEntity(216U);
    msg.setDestination(32331U);
    msg.setDestinationEntity(165U);
    msg.command = 129U;
    msg.entities.assign("YQDHJOBXTHBYTJQWJPAFMRHSPNWPMIGOEDRJJAGWRZJFHKHSSEEQZLUMAIRVFSHCPQBOERTGHZAITFNWKXLOKVKXCPTNYATAYNKTGTOFUQNOXWQBSYZKWVVLKCPAUYCWZEWBBFQMQPMDPNP");

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
    msg.setTimeStamp(0.0630544910883);
    msg.setSource(61426U);
    msg.setSourceEntity(236U);
    msg.setDestination(7833U);
    msg.setDestinationEntity(40U);
    msg.mcount = 202U;
    msg.mnames.assign("LPAULIGFEZSYBMQOLH");
    msg.ecount = 170U;
    msg.enames.assign("OOWANMJQHAZDLPKZGHELRNBXHKZTNVGTIILCYRXKBKJVXKBBSDDUOPSHUFIKXZKVOADIIAOBHLFCASDYCPQAMIYOELWLPPANYZZMFRGJMFUOGQGTQFJZQTLXUQFWDTFYHVBSOTSUHAGTSHWCJCNQUPCUUBRNEVVTYSGNREKVLOIYKRLARBISTEMJWWPDVXIGWYXLPJERGZUPHORHQVSYQVMNMYMWWFWMCEGDFKDEQR");
    msg.ccount = 224U;
    msg.cnames.assign("DVYMSTHFFXXKULBHSRTBICTKEUQGCOIXJRNRGJYEDSXQIYLRDYPCQQCFVKMOYDDOPRZOYSOOLCMKJWTEZWYDGXUGWVPUWLSFGVFZVBRSIETAJXYDGOUQMXL");
    msg.last_error.assign("ZHEJSUQXFPOHXUHKVJAUEFDCKQBCSAOMSVEOSVQBDKB");
    msg.last_error_time = 0.0166983528733;

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
    msg.setTimeStamp(0.584575801163);
    msg.setSource(47954U);
    msg.setSourceEntity(162U);
    msg.setDestination(58310U);
    msg.setDestinationEntity(115U);
    msg.mcount = 98U;
    msg.mnames.assign("ODZDMCCFXGMEPALYEKOORFWOHCGTJUEUMUHLCFSHBYHTFNXKPURIYAUOZTJGEYNHNAUWMACLPGWZECVVADEJCQRAWHZVGQRTJAOLDLIDZVSNVHYNIRKQPIIKUFKNSBKTWQSBTDYXOIXRQRXSGJCYBLMPDMZZGREPVUSELU");
    msg.ecount = 3U;
    msg.enames.assign("MTQRYNZTSFWJHIGOOODZTXTAPEUVJQCMAVIHBMDKJRPSHOKZSFCMSLZIHWREWNSAJEYPYOKVRWZIEEIEZMNAJNWFUGCGDUBPBJPTWDVSIDYBEBVBJGHEQKXXBGRNVBPXXFOFWACYRYKSUPKHAFMUCBAOHXYQ");
    msg.ccount = 115U;
    msg.cnames.assign("CNUPOTBBCNQSSSQGEZTVYVFJCWQUTYYIJAHAPAWPZPKEHMLFWIHVOGPBOTHIXHGXNAKJFNVWILQUOHLGYUFGMPPWCMFRVQIEDYFCZQCBNFVLCHJODAHNONXYGKYTSNUOYFEXSXLSEKWDD");
    msg.last_error.assign("MBQOYOSSNEBXFDMNFQQQPTFATXQLRUXDXSHWPLLJWGVALWABJFV");
    msg.last_error_time = 0.326300909803;

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
    msg.setTimeStamp(0.103189955936);
    msg.setSource(6598U);
    msg.setSourceEntity(218U);
    msg.setDestination(14880U);
    msg.setDestinationEntity(208U);
    msg.mcount = 163U;
    msg.mnames.assign("TYPMXPWOIZRCDJTKPEHTIVBOCNLWBXUQPXUFHENJEIYHBHVDQDVGEHXQMNJCHAHFIYONCYIWOAZWATCUMCKTQXJLZUMLSYYOEWXZUUSFLTOFDNRDUXGEFYTCWTRFZXJVSSQKCBKGIQQGBRTSAKIDFABYJHMEVEKZSDWLWNSKUQRLWLBZSVMPVRVHGROAQJURPJSNUQPBMHGDAPLBELPTAYGNCZYIRFJIVKADZKAJFI");
    msg.ecount = 28U;
    msg.enames.assign("XGWLQPFWDEVIC");
    msg.ccount = 207U;
    msg.cnames.assign("NNVZRZZHLYYAWRNIJJJLZHCCRZGKAFLCUYXHTNPQIKPIFPEKTMSLFDDTQTTCHCZIDTBAKMKWBEVHQGEEAUYOEDNXWFPUWZUYVDMMNWKOROASLAXQTUYCIDBBSPFLTBVLPJSSBHRDJAPTISOVRAF");
    msg.last_error.assign("KFXBLFKMXPQUDCSONNOJEGQIOQWMNTCQOSCVAUEEVJEAVPJIQWSAVQGWGSTFXJNCXVWQPROUYZZBKRRLMJTDSDIOGUICGTRPRYALZXNLSJPXHOQNGIMKFDRBUMUFZKBVKYLTHEGEHPJRBMVYLOFRYBEGQTUZDEVGWEWIXMSTLARZMYDPQSJHRVUH");
    msg.last_error_time = 0.605923604739;

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
    msg.setTimeStamp(0.0701756711906);
    msg.setSource(62615U);
    msg.setSourceEntity(38U);
    msg.setDestination(53545U);
    msg.setDestinationEntity(95U);
    msg.mask = 81U;
    msg.max_depth = 0.274611339602;
    msg.min_altitude = 0.296101953087;
    msg.max_altitude = 0.170884117113;
    msg.min_speed = 0.373051073687;
    msg.max_speed = 0.182297409706;
    msg.max_vrate = 0.0069013274826;
    msg.lat = 0.842779904059;
    msg.lon = 0.761402632437;
    msg.orientation = 0.811293062117;
    msg.width = 0.931842536444;
    msg.length = 0.331546526875;

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
    msg.setTimeStamp(0.445326819441);
    msg.setSource(38228U);
    msg.setSourceEntity(34U);
    msg.setDestination(8591U);
    msg.setDestinationEntity(245U);
    msg.mask = 37U;
    msg.max_depth = 0.365535514994;
    msg.min_altitude = 0.231782594716;
    msg.max_altitude = 0.585319595352;
    msg.min_speed = 0.419457765601;
    msg.max_speed = 0.11241994854;
    msg.max_vrate = 0.315486426962;
    msg.lat = 0.878332314497;
    msg.lon = 0.418771885126;
    msg.orientation = 0.672164648387;
    msg.width = 0.833768845608;
    msg.length = 0.167453832898;

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
    msg.setTimeStamp(0.860606697177);
    msg.setSource(46018U);
    msg.setSourceEntity(48U);
    msg.setDestination(47249U);
    msg.setDestinationEntity(154U);
    msg.mask = 204U;
    msg.max_depth = 0.224515475716;
    msg.min_altitude = 0.580183753481;
    msg.max_altitude = 0.422257107545;
    msg.min_speed = 0.583947012358;
    msg.max_speed = 0.604244244394;
    msg.max_vrate = 0.148154346036;
    msg.lat = 0.68484242463;
    msg.lon = 0.849262034702;
    msg.orientation = 0.215904035843;
    msg.width = 0.176298640464;
    msg.length = 0.0375304281971;

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
    msg.setTimeStamp(0.38060552421);
    msg.setSource(62846U);
    msg.setSourceEntity(200U);
    msg.setDestination(9322U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.328393622426);
    msg.setSource(6103U);
    msg.setSourceEntity(171U);
    msg.setDestination(18835U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.372355843823);
    msg.setSource(25398U);
    msg.setSourceEntity(8U);
    msg.setDestination(17985U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.210768819929);
    msg.setSource(11474U);
    msg.setSourceEntity(148U);
    msg.setDestination(20418U);
    msg.setDestinationEntity(154U);
    msg.duration = 23877U;

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
    msg.setTimeStamp(0.0665953754769);
    msg.setSource(4016U);
    msg.setSourceEntity(208U);
    msg.setDestination(53212U);
    msg.setDestinationEntity(188U);
    msg.duration = 20000U;

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
    msg.setTimeStamp(0.620324057439);
    msg.setSource(53144U);
    msg.setSourceEntity(135U);
    msg.setDestination(17252U);
    msg.setDestinationEntity(145U);
    msg.duration = 27733U;

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
    msg.setTimeStamp(0.213092652895);
    msg.setSource(37070U);
    msg.setSourceEntity(226U);
    msg.setDestination(27911U);
    msg.setDestinationEntity(174U);
    msg.enable = 238U;
    msg.mask = 3633588448U;
    msg.scope_ref = 990634014U;

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
    msg.setTimeStamp(0.256498281628);
    msg.setSource(41224U);
    msg.setSourceEntity(98U);
    msg.setDestination(37916U);
    msg.setDestinationEntity(153U);
    msg.enable = 242U;
    msg.mask = 2868461105U;
    msg.scope_ref = 3241780173U;

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
    msg.setTimeStamp(0.3109840555);
    msg.setSource(54748U);
    msg.setSourceEntity(69U);
    msg.setDestination(42436U);
    msg.setDestinationEntity(195U);
    msg.enable = 246U;
    msg.mask = 3502216909U;
    msg.scope_ref = 190653032U;

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
    msg.setTimeStamp(0.343506171293);
    msg.setSource(31957U);
    msg.setSourceEntity(6U);
    msg.setDestination(47018U);
    msg.setDestinationEntity(2U);
    msg.medium = 226U;

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
    msg.setTimeStamp(0.624451804643);
    msg.setSource(41942U);
    msg.setSourceEntity(181U);
    msg.setDestination(10229U);
    msg.setDestinationEntity(47U);
    msg.medium = 228U;

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
    msg.setTimeStamp(0.565287138108);
    msg.setSource(38379U);
    msg.setSourceEntity(65U);
    msg.setDestination(53820U);
    msg.setDestinationEntity(225U);
    msg.medium = 189U;

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
    msg.setTimeStamp(0.723825625592);
    msg.setSource(15041U);
    msg.setSourceEntity(124U);
    msg.setDestination(978U);
    msg.setDestinationEntity(50U);
    msg.value = 0.245008948449;
    msg.type = 47U;

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
    msg.setTimeStamp(0.307306655989);
    msg.setSource(15895U);
    msg.setSourceEntity(2U);
    msg.setDestination(64121U);
    msg.setDestinationEntity(171U);
    msg.value = 0.688065301062;
    msg.type = 48U;

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
    msg.setTimeStamp(0.0194600286384);
    msg.setSource(18563U);
    msg.setSourceEntity(199U);
    msg.setDestination(62361U);
    msg.setDestinationEntity(0U);
    msg.value = 0.341993811804;
    msg.type = 68U;

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
    msg.setTimeStamp(0.037412104966);
    msg.setSource(7090U);
    msg.setSourceEntity(173U);
    msg.setDestination(3780U);
    msg.setDestinationEntity(167U);
    msg.possimerr = 0.602069880613;
    msg.converg = 0.988351534629;
    msg.turbulence = 0.617184336495;
    msg.possimmon = 51U;
    msg.commmon = 62U;
    msg.convergmon = 26U;

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
    msg.setTimeStamp(0.642937671612);
    msg.setSource(61192U);
    msg.setSourceEntity(223U);
    msg.setDestination(53029U);
    msg.setDestinationEntity(38U);
    msg.possimerr = 0.625644575612;
    msg.converg = 0.458685293548;
    msg.turbulence = 0.28327046227;
    msg.possimmon = 14U;
    msg.commmon = 236U;
    msg.convergmon = 37U;

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
    msg.setTimeStamp(0.886283310237);
    msg.setSource(59237U);
    msg.setSourceEntity(10U);
    msg.setDestination(28648U);
    msg.setDestinationEntity(26U);
    msg.possimerr = 0.622144356487;
    msg.converg = 0.970986366861;
    msg.turbulence = 0.298365192364;
    msg.possimmon = 171U;
    msg.commmon = 10U;
    msg.convergmon = 111U;

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
    msg.setTimeStamp(0.744186264712);
    msg.setSource(5854U);
    msg.setSourceEntity(92U);
    msg.setDestination(51880U);
    msg.setDestinationEntity(28U);
    msg.autonomy = 247U;
    msg.mode.assign("XJOFPNWQYKGFVCWSEEBSHWBXDDZBTOATOMDZNZIVYFHBLCMUZQCKOARXVGJHEORCBWSFUYPAAYVWFVRUTZZQSFQSEZEFXLADGLIOKCSVPZYGNSXJUXSPTUJWFBRUCQLGBPHOGVRGJKQGNMKGGLJVDYXSYANBNUJRUHWPDHQMULRAHBKTNMKFIFDHPEZNWIVKOBYXTJ");

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
    msg.setTimeStamp(0.57298433985);
    msg.setSource(44724U);
    msg.setSourceEntity(129U);
    msg.setDestination(63283U);
    msg.setDestinationEntity(200U);
    msg.autonomy = 117U;
    msg.mode.assign("ZEKOSLWXJDXTWSMNLVJMEDWBRDYPVTUAEGRMQXYFBHJZOUAFAONKQJZUZYXPZSWBTGKYRZZFQMHUFNGBATJQVHCSCGYNKHNHRDGBNBPVDJIARVINAEEGKUEIFKKDIU");

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
    msg.setTimeStamp(0.251956940452);
    msg.setSource(17124U);
    msg.setSourceEntity(71U);
    msg.setDestination(22844U);
    msg.setDestinationEntity(119U);
    msg.autonomy = 11U;
    msg.mode.assign("WOOXTZOZXWHGLEKHCFEIEIGRHKZCJGQQVXTONWHBBNVALOSE");

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
    msg.setTimeStamp(0.586157322058);
    msg.setSource(52493U);
    msg.setSourceEntity(85U);
    msg.setDestination(43516U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.608681607175);
    msg.setSource(25782U);
    msg.setSourceEntity(208U);
    msg.setDestination(5108U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.110862473399);
    msg.setSource(40263U);
    msg.setSourceEntity(72U);
    msg.setDestination(48967U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.154626238277);
    msg.setSource(27371U);
    msg.setSourceEntity(102U);
    msg.setDestination(18054U);
    msg.setDestinationEntity(178U);
    msg.plan_id.assign("GYTAWMHFLKFBTGIRIEDJUBVPLDFR");
    msg.description.assign("CFEOXKROVRJVDIOYECGHFFVPUYMKYGAPLRSHCQHBAWNBRFSACZXWJWIYTONPZSJFCUBFKZKOPZMGWRTNRZXWTXTCBJBJGEMIKAZLQAHEZSXFVUBSYQSEBSNDDTIUGYBGIDDQX");
    msg.vnamespace.assign("YVMUADILPJNYMEDEPFHRNAZSMPYVHDGGROHOAIODTNOFHQXWCTLJCEHCBXUKBRNJEPYAFVYQVFNTNGMHDTMTNILDZQKWO");
    msg.start_man_id.assign("QONEPYXPGGGHNHCFUBOOONAIARKLHJYCWLMWDDRTIFRXEHGZIPBZESWAJZVBPIEBTZZYLBEIUANSADNCBQFLMGMYISOLIEAHSQPBJLDOFKBTIGNTJHQKUSTRJEQEBNDGZJZSVXMVWMPQUCOYVLWVZQDYXHYPWNNZHKEVHBYCNCJCAOLMUTSVMOPLAFRWXQIGDTUFCRKKQSC");
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.0782822900831;
    tmp_msg_0.i = 0.489994699778;
    tmp_msg_0.d = 0.923420477622;
    tmp_msg_0.a = 0.0893660572024;
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.245634630288);
    msg.setSource(54487U);
    msg.setSourceEntity(57U);
    msg.setDestination(32487U);
    msg.setDestinationEntity(185U);
    msg.plan_id.assign("KAEOGVEIIDJQJKRPCARZGOCPIHTSQJKKSAFJOUCDCILBXQPRDFYRNTAMEEBJWPVIUXNIKDCJLDUAHTMMN");
    msg.description.assign("HHETZBDGEEJSTNRCZDXNSYNAUBJOOYGXBGPHLFITICXPEHDCXLAMOFJFUZALNKWEPQ");
    msg.vnamespace.assign("KRQOYRXBWIKAUBQSGVKMZHGIGSDTBJHINJCLACZCBRXUMVKCXCTGTJPYNLDSSPYLFDHZELUPBUSGYLYRRRNMULKWJEQDNTEXFYWBWDWUQFVHKAHGOPRCHDWOTMPHDAIFZTYJZJMZRWPGMMCQZVIXAFQVPVSKOMXTQPSFVEKCFONLZWAGHJJRENDXVEONFGNMIKDHCFQPIENCBS");
    msg.start_man_id.assign("RYQNKZBEOGPUAWTNXLXISMQUNWNKXBJZFSUXUVOIPYEAIQWKYFLRWBCKPNSDT");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("SXZOLWKNEDSBLNVFSALQTYGQZAJRRNJJOIMBNQRTTLZYAFOTFEKQDPUNKOMHQABLEBWXQFKWZHQZFWTSJW");
    IMC::Elevator tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 53384U;
    tmp_tmp_msg_0_0.flags = 230U;
    tmp_tmp_msg_0_0.lat = 0.725523848446;
    tmp_tmp_msg_0_0.lon = 0.102069274674;
    tmp_tmp_msg_0_0.start_z = 0.471767368333;
    tmp_tmp_msg_0_0.start_z_units = 169U;
    tmp_tmp_msg_0_0.end_z = 0.620245815079;
    tmp_tmp_msg_0_0.end_z_units = 166U;
    tmp_tmp_msg_0_0.radius = 0.481910191808;
    tmp_tmp_msg_0_0.speed = 0.302473407691;
    tmp_tmp_msg_0_0.speed_units = 77U;
    tmp_tmp_msg_0_0.custom.assign("BDYZLUSAYUSGECYNRXFLYZWOSXOMMVIPELPEGJCMXTSHWGJXDLGAORFWEDJEXQTYGNUWOKRCXWBPYYVBODSKVOQSRVEUEKFAKUNGLMVVOYZCKHSQFQKPANRINXMQALRPURPAZBJZWATWCLBEHDCQGIDMMKZMBJTGCIUGSZJFHCNVHQQDMAISWXRXHTSDJTHKKNFCYT");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Rows tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 16032U;
    tmp_tmp_msg_0_1.lat = 0.563746839947;
    tmp_tmp_msg_0_1.lon = 0.568203734426;
    tmp_tmp_msg_0_1.z = 0.516183966186;
    tmp_tmp_msg_0_1.z_units = 147U;
    tmp_tmp_msg_0_1.speed = 0.847961826132;
    tmp_tmp_msg_0_1.speed_units = 175U;
    tmp_tmp_msg_0_1.bearing = 0.954716704652;
    tmp_tmp_msg_0_1.cross_angle = 0.341142665111;
    tmp_tmp_msg_0_1.width = 0.933654379357;
    tmp_tmp_msg_0_1.length = 0.718356949841;
    tmp_tmp_msg_0_1.hstep = 0.702057647375;
    tmp_tmp_msg_0_1.coff = 91U;
    tmp_tmp_msg_0_1.alternation = 79U;
    tmp_tmp_msg_0_1.flags = 191U;
    tmp_tmp_msg_0_1.custom.assign("RQTCNCFTVRSOEGGBWWYWECUOBFKBWOQXOTUCAFZUZUDZGOSYUBHAQJXSGRFRKZZSITQKLNFNDIMMAJVTMTXHJZYOLZQLMRGBYQLVEIYDPHSBHWWN");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("VTKJBIVTCMINGNVEICOXZWHJQGWGHDWLDRNGZHFAHHRBYQDCMKLLSZOANVLIGFLCWBIUJWBQRXUAHXD");
    tmp_msg_1.dest_man.assign("JHEMRPYAVKKEELZKZIQEKLPTSFODCKCHKIKJGQJDCWRNVMKTEFBUXYOQXPTHHPCNCNWUDHAWZMWDBIQFNVEAIWLROMJHLEHELJWMZCBUQGVUXFBMYGGOAFGGMIVPLBGAVBIGTJROLOZSYRZASKAFSYPYRSLIQBSCWXMEOXBLTNTOQZTIJODYFXNTAHLJXEYTYPIRVHKSBNWNUVOR");
    tmp_msg_1.conditions.assign("KCGRUQECMEYXFLPGQLSNJMIGSIZVIFEXBYKNUVYNVIDPHYTBYGACVCALZKQDGWXPJNOZMD");
    msg.transitions.push_back(tmp_msg_1);
    IMC::AcousticDiagnostic tmp_msg_2;
    tmp_msg_2.enable = 210U;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.805587523133);
    msg.setSource(60126U);
    msg.setSourceEntity(158U);
    msg.setDestination(23372U);
    msg.setDestinationEntity(28U);
    msg.plan_id.assign("MNRUNKVMWCCVYOIONXZIILCEQEJHSAFWDVQJHTJKBZYFHTSEYKLBULQAPCDKBFWOTKGDLLXIZWHTAROWUVQVZPLGIOWDRFUIEBJKSYGBHXRQPMAYNMUTPRFTKAGFCLPBQRJVGNMTEHAKJUNIRDIXBCFWDOIKRCCLTCACSEJQMGX");
    msg.description.assign("XONLKSAUMMMLBOOZXPWPYAKVGLRJNZMXQWKEAAFDZYFIISNWRZKLDJZKCPVVVHTIBUZSPJFPYJBHKAUTRT");
    msg.vnamespace.assign("QBCHVJRTYRXYDVRMUUOVXIHHHXSJTRRBGWLGELHZASHBZQKWBPFDJQKTEZALCIARBD");
    msg.start_man_id.assign("LOISGKZFUWTCGHJMPQRSOUKKIETUXHZPAWRUDTOSECWBDJGYSZBSBLYPLOHPKMITNXATCTGWOLRFZDSQFEAKRHDJVZGQQQFAGUONRUEWPMCZNWLERQCLMPHFCOXOIDEUIQAAQCXXRWCKDQIEBNGYVDBXNMEDVBMJJKHHLAWELFIADMJFSVTQFFKWNJBGLXTYYHYIWACVVPVIVR");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("RQRFZAOUJPKFIEWSOZJNWGGTDTHUXQMZUSFJPKYFOGHTKJXPTMBBBOIDVPMHNKIYBLUFQIPEGKOZOCXOUBAHDCELWCJWXWIAMTFNMJLEZUQMLIFRHYVAFLLHLRTEENSBHXKTNZOSSSXWGEXKMCZTEPQYPGDDQOW");
    IMC::Rows tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 38094U;
    tmp_tmp_msg_0_0.lat = 0.0811594263616;
    tmp_tmp_msg_0_0.lon = 0.0846670195191;
    tmp_tmp_msg_0_0.z = 0.696074886989;
    tmp_tmp_msg_0_0.z_units = 136U;
    tmp_tmp_msg_0_0.speed = 0.838885522676;
    tmp_tmp_msg_0_0.speed_units = 17U;
    tmp_tmp_msg_0_0.bearing = 0.131668937002;
    tmp_tmp_msg_0_0.cross_angle = 0.774232078179;
    tmp_tmp_msg_0_0.width = 0.838329989925;
    tmp_tmp_msg_0_0.length = 0.0828037330363;
    tmp_tmp_msg_0_0.hstep = 0.526383590142;
    tmp_tmp_msg_0_0.coff = 208U;
    tmp_tmp_msg_0_0.alternation = 74U;
    tmp_tmp_msg_0_0.flags = 200U;
    tmp_tmp_msg_0_0.custom.assign("GHRHTATFEQFZLZALVRSKCLDVARYFZTPCPVZPCPCGEZERRSSGKBXMXVEASUYKIDWDWUYASKWZITQIDTFOQFNYZVVGHHUXOSEQKGUKJIFIECGTKYQUUBJQRJULWJDFPLHXBHOFBLAWQIQPZCERONND");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::LogBookControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.command = 227U;
    tmp_tmp_msg_0_1.htime = 0.372696193611;
    IMC::LogBookEntry tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.type = 130U;
    tmp_tmp_tmp_msg_0_1_0.htime = 0.250821042526;
    tmp_tmp_tmp_msg_0_1_0.context.assign("IAKZGTHNHBPUPQJMBCQMSJYQNNFEXCNDLENLEZMYLDLIQCSRVDQHPSIUDULNJFSNVEGGJFXJTEMNBIVKVVTVBYRLGFRBGQAIFZXYHYTDZBDEKXMJWATFCRKEGHASPZWCIKAOQKKVSNGXWIQMVCPJKIRWMXBROWTYFATHYEHOD");
    tmp_tmp_tmp_msg_0_1_0.text.assign("WOFXHFDHAGVXIJDNMJVGBYOLSCIGZLJZVCSBNRLZBWWUOYRNSHUMYRGRFQKTLRLMINSCDXRAOIDEZYTYTMDAMVYTKDQYEOTJYLBNYFSGEJTHXNUUTCQPHXUMXKVIIFWJZCBUESAWPLHIQDHNQAFNIJKGXAWYXKPMBCTRGDSKVFLBEGHROZLEXHNPCJ");
    tmp_tmp_msg_0_1.msg.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::DesiredPath tmp_msg_1;
    tmp_msg_1.path_ref = 2367572875U;
    tmp_msg_1.start_lat = 0.0157767407525;
    tmp_msg_1.start_lon = 0.526954990471;
    tmp_msg_1.start_z = 0.331066663843;
    tmp_msg_1.start_z_units = 24U;
    tmp_msg_1.end_lat = 0.136609235201;
    tmp_msg_1.end_lon = 0.922513337517;
    tmp_msg_1.end_z = 0.494979018279;
    tmp_msg_1.end_z_units = 80U;
    tmp_msg_1.speed = 0.425341108573;
    tmp_msg_1.speed_units = 99U;
    tmp_msg_1.lradius = 0.493699915617;
    tmp_msg_1.flags = 228U;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.524477340948);
    msg.setSource(40011U);
    msg.setSourceEntity(62U);
    msg.setDestination(33950U);
    msg.setDestinationEntity(66U);
    msg.maneuver_id.assign("FXGFVVTXOCOPRTHKDYAQQTIZWUWZRJEQEWHLEQHBINSDLAGETSZORFXWVDYKYLVZZCHUSURRBGNXHMIVMTGFKKSIPHVURNCRBNCBM");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 8466U;
    tmp_msg_0.control_ent = 246U;
    tmp_msg_0.timeout = 0.484138085126;
    tmp_msg_0.loiter_radius = 0.252794437698;
    tmp_msg_0.altitude_interval = 0.34571252057;
    msg.data.set(tmp_msg_0);
    IMC::LblDetection tmp_msg_1;
    tmp_msg_1.tx = 151U;
    tmp_msg_1.channel = 78U;
    tmp_msg_1.timer = 19447U;
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
    msg.setTimeStamp(0.74162395618);
    msg.setSource(57293U);
    msg.setSourceEntity(188U);
    msg.setDestination(11098U);
    msg.setDestinationEntity(162U);
    msg.maneuver_id.assign("NGIZULXQMOEACZLHXMRUKWQOKAZLDZFYCUESLMUBIQPXDYBXTRAJQHHYIUIETBOKDAPSXIFCSVDSTBRAQHZLKTWEEWXMMVEAEJBXHCYOFFKIJUYNRZSKCKBUAHFDJVMOTNGIRAPOZJQDVGSZPKQSXZVECWAQJOFTDVIVGGCMXYGYVQJJFGJRYNIWBQIFXOYSWHSHOUUTELRDLVFSWBECRNMTNYKPMAPCGHGLC");
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("BRHMHPFDKEKFTQEJUUEWXOBSAM");
    tmp_msg_0.reference_frame = 194U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 61161U;
    tmp_tmp_msg_0_0.off_x = 0.935091822429;
    tmp_tmp_msg_0_0.off_y = 0.0515330874348;
    tmp_tmp_msg_0_0.off_z = 0.377656610684;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("ZRODPGTORJYTZBAORANROXVZTAJZDECQMQNPHFPGHHPVIGTRNNILNWUZICMCBLZXWCHVQK");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.234956454101);
    msg.setSource(46960U);
    msg.setSourceEntity(53U);
    msg.setDestination(46610U);
    msg.setDestinationEntity(19U);
    msg.maneuver_id.assign("ATJGUYKSXSVSWXOBMSDZIOSMQWHYIXYJGAJBVDMSWBPQYWEBEVQXZBRJGXLPOACOPRURLARDGDHKVCNDFKZRNWNYEZLYQAEWHVHVRGIYPOEHVUDZCNDXUEFVWPUKSFLQBFTATMNMLQLVFQRJPZYRQZAZIMJWHCXOQSJBBTFTIDMFLKKHUKIKXPLCNJNIXSNIDCBGIWUCEBQYVCHPRIZ");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 41157U;
    tmp_msg_0.lat = 0.887963373008;
    tmp_msg_0.lon = 0.264071587881;
    tmp_msg_0.z = 0.233364982339;
    tmp_msg_0.z_units = 136U;
    tmp_msg_0.speed = 0.447078172016;
    tmp_msg_0.speed_units = 16U;
    tmp_msg_0.bearing = 0.376212778141;
    tmp_msg_0.cross_angle = 0.394636422316;
    tmp_msg_0.width = 0.6783955107;
    tmp_msg_0.length = 0.115822158285;
    tmp_msg_0.hstep = 0.905056747165;
    tmp_msg_0.coff = 189U;
    tmp_msg_0.alternation = 142U;
    tmp_msg_0.flags = 129U;
    tmp_msg_0.custom.assign("JYTWMEXKAEJTJDVLWIFBWBVMEYGANIDRBTEQAHLUYPHFKXDKLFOORTYHAG");
    msg.data.set(tmp_msg_0);
    IMC::PlanControlState tmp_msg_1;
    tmp_msg_1.state = 99U;
    tmp_msg_1.plan_id.assign("LJXWWUZGFJFXCDAEVNKDGSRJQIOKTPLSFVVFIURFTEWTQBQHCNNY");
    tmp_msg_1.plan_eta = -1398140506;
    tmp_msg_1.plan_progress = 0.254874557497;
    tmp_msg_1.man_id.assign("YJFNCIGFKFHNJPJOV");
    tmp_msg_1.man_type = 22964U;
    tmp_msg_1.man_eta = -578602041;
    tmp_msg_1.last_outcome = 67U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DevCalibrationState tmp_msg_2;
    tmp_msg_2.total_steps = 195U;
    tmp_msg_2.step_number = 64U;
    tmp_msg_2.step.assign("PBGUXLWPCIWSGJQDKVETVOBLRPGJWHSFDBYTVDYBWHDJYEIHLHJDXGNDXESXIOHVOBCTKKU");
    tmp_msg_2.flags = 2U;
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
    msg.setTimeStamp(0.306261894736);
    msg.setSource(34167U);
    msg.setSourceEntity(175U);
    msg.setDestination(8449U);
    msg.setDestinationEntity(169U);
    msg.source_man.assign("YHCFVDLOXOZFIRKPBXZVLMAPIXQEPUTQPSNGTTCYPXIDVYUXYVUHBZZRTROBRPXACOJEWYMKMKDRVRKSBFAJRAAGJLJHLCFUMGTVFEJCKNDOZDMWUJWQWKVQWHLSZGZNAIBRQRLAXECVOSLESPTFKSVMRSDMPONXYLIBNUGIYENBNSKQPPKFBUYOOWWHCDAJSQIHNQDZVGAHEDWXMEMHOGFMZLWFYWBQUJKTY");
    msg.dest_man.assign("PBIRZDNYFCPVOHMWZBKYGEZYCTBVIKVBSDKTZLLRUMHGTENAEP");
    msg.conditions.assign("MNFSWLDFSZYXTFDXSWULIKZAOHGK");

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
    msg.setTimeStamp(0.99766779294);
    msg.setSource(21124U);
    msg.setSourceEntity(37U);
    msg.setDestination(45898U);
    msg.setDestinationEntity(202U);
    msg.source_man.assign("FKGXGROYVZBWPXLARFJHYUJOIBWRASXJDFNKMMXLAJTXLDEZTWCNAFTWQJGYVXGSCDEVLZBZODYRNVKMURNYBBTCZPJMXHISNFHBHPPEUHHQCQMGIUPSOUCVIRLKVGGYTTVCJOSQMEWHWPERZSPKSHEOODOYGNWRKCLFPZU");
    msg.dest_man.assign("MRRKUJYZCBFNYTNZELADOFGLATQIVCQTYIKMRQKSFVBLAGQKHNAOPWEMUSRDIUZPPKQBDOXVTLDEEDSSNZKNTUEGSERHLVJMCTEOKCWCLZUXTVFTAXQYMAEQOWZTUJCNZJIOSFDLLNWWIRUXHIWMIJDMEMPXWGJSNRFHVBZGRSXYZMAHDBWPTHXWBHZG");
    msg.conditions.assign("QWEIMQDJLJWBSIZCGTOUSCFSNLPAZWAWNIZUBJE");

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
    msg.setTimeStamp(0.748297985184);
    msg.setSource(39851U);
    msg.setSourceEntity(175U);
    msg.setDestination(60475U);
    msg.setDestinationEntity(53U);
    msg.source_man.assign("XFGMOWCHAEZDCWKSKTFKCNQDJRUPQEKTLFBUAMBIYQNWEDKXLBWEHRLFAGOTTOIVVISJQGHIJANOBHWJJYUTHJBYQBALSHRLJOENPSEUNES");
    msg.dest_man.assign("VLNTWZEXRLZFTWFVUUCBEZAEGHNODJENCLGDUZGFVYRVPWITAYAOCUCCINSODJEEQKFSMGRRQZWLJJUDVTQXOKOTYZNUWOBBYPCZWYFITOKMJXDHQXMDNWZGFNBYYZCQHKKCXUZJTIJPYGFIGCUBAAAWMYRRPHMUDOEJXCNSFTWIHLMHWBQAPKQ");
    msg.conditions.assign("QHQOSYLCXCFWIFJEHAVFLXZXHBGNHIHSJDKCWYUSENQPLUTOZJOADBLGEAPEDTUGPJAHIRCZAUXXBZDMYKGRAZYGPEGDIAUQXKWAILRPESJDVVEZNPMFRRDPPGFBVSMWJIPKTSQTNGVWRHWTTWSSYTCRKSNEXQTBDUKZEMKMLOCZQIYZMYJMNRNVFIXHOAPQJJKFZIATXXVVRHHBYUFOCLNBSKJGLYGOKLDMUBLBORNWUVMFBO");

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
    msg.setTimeStamp(0.690533898331);
    msg.setSource(22968U);
    msg.setSourceEntity(233U);
    msg.setDestination(19477U);
    msg.setDestinationEntity(215U);
    msg.command = 69U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CPWEZMRQOBALYTYJBKKBXAAMVAJFJHEKYGGUKBRIJLMMCUKVBOZDUCLFCYIVBQCNYMPSODFIUOITXNZVTSFASGUEMWNEIMRGOKWIJQTRQQQYGTDOBTNDNHHJWEKVNKZSZXTYRAZNVHXLLUAYAVTCVRHOZHWPPGSBZXTMRPD");
    tmp_msg_0.description.assign("OXAGVILHHITSJXUEAYVDVUBFSKNDNQPAJMGUTOIZMUYHLUKDFECTINLRPCOZGM");
    tmp_msg_0.vnamespace.assign("DHDPWEYEJBGQMRCGURZTORHQHPWQZBXABOVIYQXTWVZFHEBLVMWMEBPLKOKGDYOQMTPIZMHBWZFHGKGQ");
    tmp_msg_0.start_man_id.assign("KUGXWRSYATNRGXSUVVSUAPAKITMLWSHUSDFIATCYJBUBJITUCZQFDWMGZXVKGPNNQGROZEVDCBSLBTHLZROHSNGYPOREPMHNB");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("YRXEIEVILPUGRMVKIEZQBNWWSPNWLSABOVLBZUOWYEBAKTVPRHHOLGLOJDWUELAPYPMMSBZSLAGYRXCCQHDQVGNVIZZNJFVWDSBIAFITGYEQCOZHSNBDKGGQJYUMOFFCAKGDIKLLRCMVUTXQVHOOYSDBFNFAEHRTEUKFHETXTMUT");
    tmp_tmp_msg_0_0.dest_man.assign("IBNNMNNBBZQRADDMCCMYDOWRSDPIPXSMQHOJASETXCADJYHZEVVAFHQCUMAOOZXGRCZMOFKSVAJDMXNGHVUNYINSYIVKWIOFRASNDYTPULSJJHPREXLWQCFIUQOKTTMGXGLXRLFHE");
    tmp_tmp_msg_0_0.conditions.assign("AWDCDKBFDDZMICKYLHXZJAYSFXLHBLXZIQMOCTPZUNTCTAYAGAUQZBSLYQPLPRXKXWBLMNBDVDJPQVNEIENEREGNLYXKUHUUFAMQEUBSSAM");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::DevDataBinary tmp_tmp_msg_0_1;
    const char tmp_tmp_tmp_msg_0_1_0[] = {29, -55, 4, 21, -90, 70, 62, -93, 81, 28, 96, -98, 94, 69, 83, -11, -26, -33, 107, 94, -27, 91, -51, -98, 89, -71, -92, 32, 31, -16, -12, 67, -49, -124, -15, -1, -127, 38, 48, -30, 10, 116, -99, -66, -72, -87, -75, 53, 90, 58, 9, 52, -41, -85, -87, 94, -49, -91, 55, -55, -62, 27, 107, -100, 62, 117, 39, 59, 105, 124, 83, -62, 123, -110, -57, 17, 106, 11, 10, -125, -49, 96, 42, -23, -106, -38, 117, 37, -89, 27, 40, -26, 83, -80, 45, -80, -109, 64, 5, 6, 97, 69, 112, -38, 103, 75, -53, 110, -14, -105, -50, 39, 18};
    tmp_tmp_msg_0_1.value.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::PlanDB tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.type = 76U;
    tmp_tmp_msg_0_2.op = 114U;
    tmp_tmp_msg_0_2.request_id = 63195U;
    tmp_tmp_msg_0_2.plan_id.assign("LWNPBKTGJVFXSONZAKDDMBFMXCHIDYZCYFWKGNL");
    IMC::SmsRx tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.source.assign("UXNSJIAABOHMKXSOUYGRCJEFGAPSSBMZHYXDLHMNHJXCZYLRLCURKVBQUDCZBPNRZELACQWHEZIZNNFLLXZFYVDTGVYLIMYBQIEQCNPVMZKQURKWTBGQOOWKK");
    const char tmp_tmp_tmp_tmp_msg_0_2_0_0[] = {31, 108, -15, -115, -92, -63, -17, 35, 117, 53, 79, 70, -93, 74, 46, 82, -50, 84, 17, -55, 32, 62, -104, 118, 14, -98, -81, -117, 124, -109, 54, -91, 53, -125, -106, 110, -64, -67, -31, -121, -41, -17, -66, -41, 24, -15, -52, -18, -10, 103, 87, 111, -46, 121, 112, -19, 18, -68, -26, 38, -102, 110, 71, 24, 17, -70, -43, -117, -28, 60, -70, -126, -105, -94, 60, 51, 103, 44, -101, 95, 31, 101, 125, 70, -79, 87, 114, 32, 58, -38, -16, -3, 94, -5, 5, -90, 43, 66, 51, 102, -113, -44, 19, -78, -69, 41, -51, -67, -55, 122, -86, 120, -52, 61, -43, -25, 71, 55, -123, 111, -112, -42, -100, -61, -30, 6, -84, -80, 48, -96, 76, 1, -42, -30, -55, 60, 120, -4, 27, 52, -91, -74, -65, 87, -79, -98, -86, 113, -23, 118, 36, -6, -68, 57, -47, -60, 82, 24, -63, 62, -94, -57, 0, -47, -6, 95, 3, -107, 119, 46, 111, 44, -37, -5, 86, -126, 28, -101, 23, 5, 95, 92, 44, 32, 10, -30};
    tmp_tmp_tmp_msg_0_2_0.data.assign(tmp_tmp_tmp_tmp_msg_0_2_0_0, tmp_tmp_tmp_tmp_msg_0_2_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_2_0_0));
    tmp_tmp_msg_0_2.arg.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.info.assign("XGTZRNMDIMNUQIWVTBTQYZWPAIQNEOQFODGHCQMLKFDKSNBELXTKGSILSUQIKAAJJREEPUVGLVUOMQICZKWVJIBBVXMYZQEWGBQYBLKKMCFUVOTUTHFBEZZOLDGVKWDYCCFXSLUDTRNJCTJVCRATIAKCLSGRYNPPOSSDEQEHXRJWFPVPOFXZFXAMDBYRHEJBKHLMWYNAGOUSCZWTPYU");
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
    msg.setTimeStamp(0.55264426989);
    msg.setSource(9922U);
    msg.setSourceEntity(118U);
    msg.setDestination(11473U);
    msg.setDestinationEntity(23U);
    msg.command = 45U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CLVZWGQWPIZZIEH");
    tmp_msg_0.description.assign("VHNLAEMTRJOETSLKNGUBCWYEMRUZMWFDUCWJMJIHZGAPNVPXEVWPKSFJVOXMIZDECMHROARHCOKBEXLUZIKUFHEFOMHYTXPZLUDUTHXBFBSWSSVNYDGLCIZRUQP");
    tmp_msg_0.vnamespace.assign("HAMXBOREIRBYLFPGEXZPAUPUCKVPSFJGSQISEAJDQATUBWWODPBWONMWBKSUAZI");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DSABJEDFPEKCNZAZBLVLXJAREXXFXWRGCURVCCMYNIAJROSZXXSNEGBVEKHADTDHGUKUFOZEINWHYAOPGHLHQJNFFXNIKMTODZ");
    tmp_tmp_msg_0_0.value.assign("OVMFHKMWNNCUREUYIEOWMXQHUBFCCNAMJSJRJKFGBEDDCVETAWGTTLNQEXXZEGIPSOGUIZRXZDCFKQQXPOYL");
    tmp_tmp_msg_0_0.type = 236U;
    tmp_tmp_msg_0_0.access = 150U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("UKQKXOWUSXYNEVUMZVPYFASFOGUYHFWBCEBPBQQNXCPJVZLTJSBKADTAGDBUCOASWJHNNMRWC");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("LDRRXMPAUVWENVUWHZNEUBERKIUJQVWSUTKLFF");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.136589925515;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.37875719248;
    tmp_tmp_tmp_msg_0_1_0.z = 0.730737320334;
    tmp_tmp_tmp_msg_0_1_0.z_units = 149U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.720876504231;
    tmp_tmp_tmp_msg_0_1_0.duration = 21231U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.451883436884;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 74U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("OWHSWFEWYQLQHMGTIRXLSQZBPRUBQWSJNNQKCWZMOKFYODDRPGADUGJYNLXIUVBOPCJVJYDXHDMBQIXORFISKHKSAGQHFLLNIGVRVUVIBETYOWOXRMZEYMHKNMOMXUJFPPRSKCFAIQVZTGNGMENEEULJDRBVFFPGXDMYCHHNIGWVTERBZIWZEFNITXYCTABLYCTDAUDJPJZAMABXNEROSPGWVOJQTSUTQAKHLSLSLZBJCHACYCCEZZ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_1_1;
    IMC::DesiredPitch tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.value = 0.278900234433;
    tmp_tmp_tmp_msg_0_1_1.control.set(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_tmp_msg_0_1_1.duration = 49546U;
    tmp_tmp_tmp_msg_0_1_1.custom.assign("GYLJCGBNCENIGCURVFDDFMXCBSHJJYZKWVKUFDUASFHFVZATPAZKRAFMQIPTOILTLRYNLOHZDSRGNQGUMIJCIWKMXGDMXPWCQTLOTPNIYYVHYZCAFHWQTOACPHSKVZSKUSEXNNIQBNMRBRPXMPAOXGZQX");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("QJXCPDCUTKWUWHW");
    tmp_tmp_msg_0_2.dest_man.assign("KHWHEKEMZHEMZTQIBFDILPXZAFQXRIQHRVUSTGXMWJOAWKSCKRLYAXCLBNNHMQWZC");
    tmp_tmp_msg_0_2.conditions.assign("BAMTMERZUZFYXPKQHQBZTGOGPJUKMQDSPTEOAYXQRVXLOCSORYMJLBAXVPLHXFOBACHMQPKTSSBLDIDKVNJPMIYWIJSCVFYGWEUHTWWIFGTPBAYNONUDGJVOTLZGTKWFTLNDMWECPPFDINRUAUSFXZAVNXJYRUZVURUBDIVCFFYKQDMCZBWZBNLIKICPVUGMJHEHMQFREQZYGVRXBNGCJSLZEXNHJQSLASHI");
    IMC::SmsTx tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.seq = 980032636U;
    tmp_tmp_tmp_msg_0_2_0.destination.assign("ACJOQOLTXHNLFYNVMBBDWZULIOYELDDCZFTEFPXXGSFHDGUUZWRPYVSNAEQHLDGDMVQAHVGSILWGICJCURHYVMUWRCAQTCKHGIBBTXTUESSVSBNPVXHGNQRQTSQTQVLUGZETMSLXKDKPNJYPFXYJTBUJZOHIIKXZLGAWJRLOQWNIRIDPAZBRMTVNA");
    tmp_tmp_tmp_msg_0_2_0.timeout = 42663U;
    const char tmp_tmp_tmp_tmp_msg_0_2_0_0[] = {-40, -98, -87, 68, -73, -126, 0, -69, 27, 81, 109, 85, 81, 38, -121, -24, -86, 108, -76, -95, -111, -20, 7, -60, 63, 103, 64, -24, -98, 107, -44, -43, -4, 56, 30, -93, -78, -74, -127, -27, 119, 97, 51, 84, 100, -24, 19, 100, 118, 50, 15, -33, -120, -89, 120, -46, -84, 70, 7, -81, 113, 84, 6, 100, -82, -47, 65, 80, -83, 125, -11, 37, -44, -88, 93, 52, 95, -100, -66, -78, -16, -82, -103, -54, 96, -5, 98, -118, -93, -4, -111, 21, -110, -99, -123, -74, 121, 87, -117, 90, -94, -64, -28, 122, 98, 64, -41, 61, -49, 43, -86, 23, 41, -40, 67, -83, 103, -16, -65, 86, 77, -12, 17, 47, -29, -27, -111, -23, -26, 3, 113, 8, 109, 82, -106, -11, 91, -56, -125, -117, 121, 20, -24, 11, -116, 93, 106, 38, 27, -46, -86, 113, 19, 91, -94, -31, 97, 97, 11, 15, -77, -91, -102, 80, -65, -89, -26, -32, -27, -126, -44, -44, 10, 91, 74, -48, 77, 102, 13, 99, -11, -15, -7, 44, -88, -76, 83, 63, -42, 113, -50, -28, 126, -13, 69, -75, -50, 35, -30, -62, -56, -52, -49, -7, 77, -90, -116, -74, 103, 66, 57, -97, 97, 112, -85, 6, -27, -46, -53, 48};
    tmp_tmp_tmp_msg_0_2_0.data.assign(tmp_tmp_tmp_tmp_msg_0_2_0_0, tmp_tmp_tmp_tmp_msg_0_2_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_2_0_0));
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::TrexOperation tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.op = 57U;
    tmp_tmp_msg_0_3.goal_id.assign("MEXBXOLPWDRNQNFULHTDFTESZNJPUNMRDBQEDYDHHHRVWJJT");
    IMC::TrexToken tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.timeline.assign("LIQDMWWKJFFZDCAGKTLUUVAXJYBKUHURDZVAXMOSWUJOIBCPKPQKUTAJPXBJRAVLEGSBNINYFASSQKPRKERBYMLQZJTMIBHDFNTDSCQTHRXXXQYHFVLKHSNGQTJIDWEPOCZSUVQOPUYWLGKVDZECZVTFEMHMNHWITIVGVMCCEINRXFJQYWWXIRMBROFSEMYDCZESGI");
    tmp_tmp_tmp_msg_0_3_0.predicate.assign("VXTGCWKLRMGZDIHGOGFJACWCNBFLACBETFCTVYILFECIBAAXLOFNVNPUDQDECVZWYPCQUYNKWFIKXMSXYGBGBTWDATZEBP");
    tmp_tmp_msg_0_3.token.set(tmp_tmp_tmp_msg_0_3_0);
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.691842829036);
    msg.setSource(52175U);
    msg.setSourceEntity(164U);
    msg.setDestination(13524U);
    msg.setDestinationEntity(13U);
    msg.command = 120U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YNRYNAOVXKRMDKCGMFCGJJFGGVHVNXQBYJDJNAGMPPFRICEYCLOTXENUZUBWTBSAKO");
    tmp_msg_0.description.assign("PBXNIANVGMOAGLWGQPBDFDWRGZWDOMYXJECUEWEKHLMHOSOEIFJCZKDNTDYTPBCRUSVEFXYDHUAIYYGSXZFWJVOTIAHFLLPFUDQGPWBONIXKBRKMMNSARYFZKYBFQSEQKTPKEWPAVBMCLCCAKZHSBRNTLACIWTREPPMWVYVHLQMJGUUTUBJNVDQTUHMKSRYBYWQJSCVGZEOQZPJHHDLGDTKGIRCXVXX");
    tmp_msg_0.vnamespace.assign("DGZLMEKRKMAENWRVGBJDYXXSDVOMWHLTXXNQMOJSTHEIZZMZMNCFDFHTTFQCEMVIENXDJBMKYAGYOFGQVBJISLUNCRCBQXYCXIZSEAARHCANWNOLIOZPPQUJOQCSPJBUJPAYOWCZYFRIIGXMDQFSCHAUFRIWQLHZVUIKRWGUTGYESDENAWP");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GMIMMHIKVGZUKMIXWBTUUXICGDMDKSGONVVPHERBHJZPFORNHYACJIDSRSFBJQBYQFUCTUNYHYBEEOKIJBZTCUONOWBQSPMGFGKFVYPKRNCLROW");
    tmp_tmp_msg_0_0.value.assign("VEVPAQUDHVVPAWDMRLMCFBMSTHOYPFOJKITUODISSRHTBDRERZCLBOAZDGERPGRRXNWJDGJTHDIUKNYNXOKVGUCNBWPJFOOXGJKXSFBCRVFYZZXKOBYJXFAKFZWIMLUEWMKOSAXWTWSPFCEYBYHXSIELPCGYXKLHCJRQIGVJQAGWZPZDULOTGNNMGDBQYKVTLVQUEFDINQWPVUSHKRQZLZCAELQWSJEINABAATMQHMP");
    tmp_tmp_msg_0_0.type = 213U;
    tmp_tmp_msg_0_0.access = 193U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TTEGITXCNWMHZLIQRUERNORAGVAWYFPTMSIXGBNMVPARIXMYOSXHLNTHOUEKQTXPFNDCUQZQKAPPZTQMSHAOCUNRVDHJXJCFMPFLVSEUQIZOHAIBLOWWMJVXLODLZYSUSJVZVCERXYBCDBNYBETLQFMUAHPIKCMREGDJLHNCXKVOMZCSFKFDJFUGWVYLUPSBJGNKWWHAWRSYDEZDQBOIIKQUPBAFJXZRGZFBB");
    IMC::Acceleration tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.133407055671;
    tmp_tmp_msg_0_1.x = 0.579653662262;
    tmp_tmp_msg_0_1.y = 0.66697256364;
    tmp_tmp_msg_0_1.z = 0.791562609409;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.469905706688);
    msg.setSource(36975U);
    msg.setSourceEntity(21U);
    msg.setDestination(33834U);
    msg.setDestinationEntity(25U);
    msg.state = 215U;
    msg.plan_id.assign("KHLYZHYGBSEHTMAVTUDHLHWAHUZTAWLLVOPSFSIDONJYNIBJBWEXGUMBRUESNUOHKMRPNOYETQMRXFRPZBZIQBVPVUUNPVBLZCSIZROLFSGIQJWWMFUYMTYSDWMFSXIYWJCFCCHDFEJAQRMDJQVKXDHZNOSFXTUJXQGJPAYCAXDLKRDXITFK");
    msg.comm_level = 45U;

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
    msg.setTimeStamp(0.55610961376);
    msg.setSource(35730U);
    msg.setSourceEntity(223U);
    msg.setDestination(5801U);
    msg.setDestinationEntity(200U);
    msg.state = 119U;
    msg.plan_id.assign("XBFSKQTDAKJOBZMDWMHATRUSUOOUGCZFTGHMTWXATWRCKDYFCHRIPUSJFPIGMORMXUOZSHIJHLZCDLDK");
    msg.comm_level = 8U;

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
    msg.setTimeStamp(0.390729311848);
    msg.setSource(59717U);
    msg.setSourceEntity(121U);
    msg.setDestination(6610U);
    msg.setDestinationEntity(96U);
    msg.state = 48U;
    msg.plan_id.assign("YDDKXUMIMBNXBOVJGALFJHZBORSVUHPPXXFQBDOANWNSYCQPMYUSFGOWWJOKCQACATGCTTWHVDXLQZCLIKFXKXDWUNJFYTBLSCZUPYLHSXRZAJR");
    msg.comm_level = 138U;

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
    msg.setTimeStamp(0.85919296722);
    msg.setSource(50083U);
    msg.setSourceEntity(13U);
    msg.setDestination(36764U);
    msg.setDestinationEntity(233U);
    msg.type = 149U;
    msg.op = 216U;
    msg.request_id = 57910U;
    msg.plan_id.assign("UWSSCZASEXIWMROELRYEXAZUWGKITVYZALQFMTACZOBGQLVYCHVJXRDNXGCQMYVSQRDFTPIMDLRIJPFVMOUEKPTPGOTPRIMPQONHCUPTCGAUJWHDDJVSAKXJVZXDAAWTLWFPPTASUBU");
    IMC::AcousticDiagnostic tmp_msg_0;
    tmp_msg_0.enable = 237U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KIOVNIEKDYKKPLJYOMAVGGRVTRASHLZPLSTSFWWUWEWQEBLWYMHXRDFODEWKXNTZZUFCKSLIQAGHOVTORJTUIFSISRRXPQIXMWAAJXVGNTQYPZNMCQZYVGVLQCN");

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
    msg.setTimeStamp(0.57171470596);
    msg.setSource(37995U);
    msg.setSourceEntity(194U);
    msg.setDestination(4524U);
    msg.setDestinationEntity(55U);
    msg.type = 42U;
    msg.op = 226U;
    msg.request_id = 31988U;
    msg.plan_id.assign("HYKXHJUUTDSQFWXFLJAQCEDTDQSZODYCLKOVRGSBWAMXWQBNMMTRODMDFUBVWGAWYXTSWZNSZVLAAGOVCOAJMWNHPOEULCVRGVGCFDIUSBNBORZIEMCVSABHZFZJYJPJSAVRFPXLREXOBZNHQTYHNCFDPUNUPJXYTKLIIHWQDIWKEFYTPIIHEZARPEGSEJLKFUM");
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.648135556748;
    tmp_msg_0.x = 0.6539568814;
    tmp_msg_0.y = 0.747192000481;
    tmp_msg_0.z = 0.168780475692;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VPZAXETWMRYVCDCHPCMTGKLOMHWHGFHFLIMSOUBCIEPTDEYWVXOAKRVFFIYYJMLRZSGERUQRBGIJVMINRSQBNEOTUDLFUXPDYIUBOLUXMWGZCJAPDFYIAZHQIKKOWGQGELNHNBQQFOKKWZWRJDZZHKALUAALOTKDHLSVZMPEBNOJSJAJKTXDCNGMNKQVQIEFSYHONAMPCCRNGTISWXWTYBNUPDBBERZVDLPZQUFQRWCCXPXSXTBAS");

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
    msg.setTimeStamp(0.777203137996);
    msg.setSource(43072U);
    msg.setSourceEntity(143U);
    msg.setDestination(33979U);
    msg.setDestinationEntity(50U);
    msg.type = 43U;
    msg.op = 149U;
    msg.request_id = 7874U;
    msg.plan_id.assign("FKIWWUVOXNPCTOGUWWEKKFFNVYJPXPGUHHWGZXRWVLUBIZYCLQVAPDXBRIFPDIHEJRMSLQACUZOFRDESTAYLAMONURTXXHGKTMKMJFWLJQSIXAHQJFRMYQQFPBNUHIOJRSQCOOJJPEULNCTADLNWOQRWCPXXIBNJGKYLE");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.702088140138;
    tmp_msg_0.lon = 0.464678081821;
    tmp_msg_0.z = 0.0755175689443;
    tmp_msg_0.z_units = 12U;
    tmp_msg_0.speed = 0.92468786842;
    tmp_msg_0.speed_units = 17U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 62099U;
    tmp_tmp_msg_0_0.off_x = 0.432465926675;
    tmp_tmp_msg_0_0.off_y = 0.29538153436;
    tmp_tmp_msg_0_0.off_z = 0.31319029842;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.693590717068;
    tmp_msg_0.custom.assign("XMKXBXLLAOUYGJUCVQLNKYFNNADWBROXTWVHUEFJQRVMAGQPQGGSEESCGFKEMEKIONJOODKLNJQRCAODXDOQCPJYRUHLKWDSITYAIKIKNPYAJWKAJVYSVLOTXUCCIFNHHFDFPVGAOIBZ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SOMSVXDIGDWFXBUZZVGIIDCSOCNBFKZBGNOSZZEHRTJTJFKYAGJVBAYYOWHSBPXFKCETUNMDYEDHLNYQLPZMELQXSWLDRQOMWZXEAEWPTADJJQR");

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
    msg.setTimeStamp(0.447577521819);
    msg.setSource(59989U);
    msg.setSourceEntity(151U);
    msg.setDestination(55361U);
    msg.setDestinationEntity(60U);
    msg.plan_count = 32U;
    msg.plan_size = 2764733808U;
    msg.change_time = 0.489123020737;
    msg.change_sid = 8426U;
    msg.change_sname.assign("AIOAXDFBKOZTNOXMBIYAGTKQICYEQEUMKJBRJFHPUDEMIKDIESPUFZCULZYKHDVFBBVJDOXNSCNQYKWPXSZKRNMEDQBZMGGFQOEIQIRACRFCMJSFSXPRKRQELQSHJTZYGWVTYJPLLAPHKLAWZVWIJTOWCMYURNXLNWFPVXVWNEHCRLLFSHOYRSBJGHVVWKWVGASADXYUGXCQPBZHDLTNNZCXGOJPZUREIQHUFLTISBTMPMDTBW");
    const char tmp_msg_0[] = {-88, 4, -60, 91, 10, 64, 126, 51, -86, -86, -120, 65, 114, 46, -34, 119, -48, 32, 119, -119, -11, -21, -93, -24, -36, 33, -54, 6, 60, 24, -11, 112, 64, 91, 42, 6, -98, -63, -128, -13, 105, -52, -16, -93, -6, -38, 0, -34, -67, 96, -90, -33, 75, 112, 33, 82, -75, 104, -54, -64, -68, 14, -6, 14, -54, -35, 14, -4, 41, -94, 13, 52, 17, 14, -93, -43, -73, 112, 22, -8, 21, 95, -77, 23, -22, 20, 40, -10, -110, -37, -120, -35, -44, 88, -87, -30, -91, 124, 70, -29, 31, -102, 12, 71, -96, -13, 17, -2, 97, 1, -9, -59, 115, 54, 15, -37, 9, -112, 83, 35, -26, -60, 90, -10, 90, 101, -107, -8, -97, 107, -122, -79, 89, -121, 70, -40, -54, -9, -64, -32, 116, 38, -84, -9, -51, 80, -8, -119, -112, -38, 40, 125, 3, 56, 48, 83, -33, -117, -120, 34, 18, 114, -117, 100, 19, -108, -112, -87, 58, 55, 99, -116, -63, -11, -1, 107, -118, 75, 88, 91, 69, -94, -74, 16, -94, -113, -85, -69, -79, 93, -25, -71, 61, -7, 38, -106, -128, -100, -110, 111, -114, -70, -31, -118, -43, 100, 77, -84, 20, 45, -2};
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
    msg.setTimeStamp(0.585592483223);
    msg.setSource(9482U);
    msg.setSourceEntity(132U);
    msg.setDestination(50437U);
    msg.setDestinationEntity(180U);
    msg.plan_count = 22969U;
    msg.plan_size = 1934842217U;
    msg.change_time = 0.661896766679;
    msg.change_sid = 14349U;
    msg.change_sname.assign("IHZQAZKQNPXJBOGLTPHWONRRCPDEWPJXRACETGIKFIADGXGCLTXRBYPSGAZMTDYTCVXFMTVDEYNZSSVQLYYULXFCZHTLUOUHU");
    const char tmp_msg_0[] = {-36, 23, -11, 5, 41, 62, -65, 53, 108, 34, 84, 53, -50, -5, -12, 67, -91, -2, -15, 49, 33, -50, -126, 76, -72, -108, -38, -14, -48, 45, 30, 112, 21, 52, -108, 105, -42, -8, -41, 122, -86, 27, -114, -108, 36, -119, -85, 87, 29, 99, -40, -36, -18, 53, 27, -121, 105, 8, -54, 82, 100, 69, -102, 100, 11, -96, -7, 106, 26, 24, 42, -32, 73, 76, -42, 36, -88, 116, -117, -91, -106, 0, 38, -111, -51, -94, 24, -74, 65, 1, -34, 123, 91, -126, 55, -53, 46, 47, 29, -42, -125, 67, 115, -51, 120, 90, 23, 78, -56, 64, 87, -48, 126, -96, 112, 54, 16, -55, 76, -86, 125, 90, -42, 108, 12, 88, -45, -46, 97, -8, 108, -4, -80, -112, 40, 8, 125, 47, -81, 34, 28, 108, -87, -74, 102, 43, -41, -113, 46, -17, -53, 91, -76, 107, 41, -120, 39, -127, -85, -18, 35, 61, -4, -18, -26, -111, -87, -23, -69, -27, -23, 78, 61, 39, 40, -4, 35, -37, 73, 38, -34, -1, -36, 46};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("EWRMQADJIQPZW");
    tmp_msg_1.plan_size = 45704U;
    tmp_msg_1.change_time = 0.185078788982;
    tmp_msg_1.change_sid = 25674U;
    tmp_msg_1.change_sname.assign("PQLHZSHGZNGCHOPSEPKEHUQQVPNSCQBRBLOSDMRIGIZTARRXEIKTGPYTGHBHXAJZWAABKKVGGAXIXLFETHCILFJYAMWLRPAVZASWNCDKSKMHYYGRJPDRMYXVWMNBTNWCPOMLJYNVVFTDZEYXADIBDMFXOTFDBLIVEOSIRVNXEVXEUQFQFQQNWYKCTEKUZLOWTJUXOWIRSYUJBQJIVJFRZUUMB");
    const char tmp_tmp_msg_1_0[] = {-60, 35, 62, -126, 81, -54, 117, -26, -108, -110, -2, 60, 10, -21, 96, -66, -91, 12, 3, 41, 98, -89, -14, 42, 87, 123, -49, 15, -26, -112, -64, -34, 126, 49, -6, -23, -89, 50, -104, -8, -98, -45, -118, 89, -26, 21, 102, -85, -74, 64, 58, -51, -121, 50, -40, -55, -80, -107, -126, 74, -80, -58, 115, -15, 0, 8, 62, 20, -124, 47, 61, 105, 51, -73, 68, -101, 69, 58, 34, -90, -125, -123, -4, 18, 96, -13, -11, -61, 26, -24, -74, 96, 32, -71, -53, -107, 124, 30, 40, 78, -1, 52, -96, 42, -74, 126, -106, 104, -107, -84, -6, 107, -127, 126, 50, 51, -76, 93, -1, -69, -78, -126, -73, 112, 110, 76, 61, -66, 98, -2, -33, 37, 83, -18, 7, 108, 108, -12, -119, -82, 91, 77, -69, -12, 81, -118, -28, 75, -19, 42, -101, 104, -82, -108, -75};
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
    msg.setTimeStamp(0.990542580795);
    msg.setSource(32186U);
    msg.setSourceEntity(38U);
    msg.setDestination(2483U);
    msg.setDestinationEntity(132U);
    msg.plan_count = 58858U;
    msg.plan_size = 551856046U;
    msg.change_time = 0.897716661351;
    msg.change_sid = 51332U;
    msg.change_sname.assign("SSZCASCFIBSAQQDBOMXRNMAJBMRLMBXBCSMPAOBBTMULDQCEDRLTGWZTXFEPECDFENUDQQBWWVJFPLZFXWCAYHLARNEDYBGHXJXIXSAKYJSBUSIWPFOHNQZYQKVWXANTJHTUVRQVTSYIITNCDMMOPLWEYKKGQPZKGGRHOWETGHCRMYEGMKHWFFOPEAJIZUHUOGVVPV");
    const char tmp_msg_0[] = {-58, -30, 107, 54, 85, 26, 8, 53, -32, -38, 73, 21, 114, -1, -71, -73, 72, -97, 28, -100, 91, 61, 34, 63, 33, 12, -13, -125, -108, -4, -105, 77, 27, -62, 99, -102, -62, -94, 116, 52, -66, 111, 7, -124, -114, -54, 29, -78, -46, -12, 32, 59, 111, -120, 36, -57, 80, 116, 58, 60, -83, -91, -57, 124, 45, 111, 113, 49, 51, 44, -121, 44, 85, -86, 103, 22, -104, -99, -78, -121, -93, 89, -99, 55, -97, 47, 11, 8, -38, -64, 47, 2, 52, -62, -78, -122, -114, -58, -53, -20, -59, 79, -36, 19, 48, -60, -120, -56, 89, -91, -103, 8, -21, 76, 119, 86, 8, -40, 80, -29, 92, 24, 116, 115, -65, -75, 83, 43, 74, -9, 126, 49, -9, 32, 55, 86, -81, -128, 12, -44, -22, -29, -78, -76, -84, -41, -123, -39, -33, -65, 67, 117, 6, -50, 15, -82, -36, 26, -18, -50, 98, 49};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("VSFGWMYFTSETZJBPJFOKNQOWHIRULLCJHJZEZXTQLIWZDGVYRGZLOTRBYXFEBKRTDKEHSIMWRPPRGFVNVTXWMOBBIQYTGNJYNPWAGASEQWSASNOYAZSKXOALQSCMVNUAUCTLXXUFHADKUQDRTVMQISHBODIOMJY");
    tmp_msg_1.plan_size = 37083U;
    tmp_msg_1.change_time = 0.582314950176;
    tmp_msg_1.change_sid = 26785U;
    tmp_msg_1.change_sname.assign("EFNPPLZPUPTZGXXMIEZGOEWUPCKYNQMVFSQULUHKEVXSRJVWATEJFMMYGCVHSQPVAEOUGVEBILQWJSULENTDRJXJBUXCRDCZQXFFTHKGOWSABEOMULKAFTNAXMMISPDLANHNWDBHHKIGBPXEOVZDRWJSDIVBYJIQTYQZACYCO");
    const char tmp_tmp_msg_1_0[] = {-81, -75, 35, 83, 42, -116, 76, -14, 33, 29, 81, 75, -74, -93, -91, -61, 15, 107, -69, -82, 17, 25, -47, 118, 31, 97, -111, -106, -84, -5, 80, -22, 6, 46, -7, 88, -51, -62, 0, 53, 10, -11, -110, -76, -47, 111, -97, 40, -115, -102, 57, 31, 10, 43, 93, -105, 77, -50, 116, 94, -109, 111, 124, -15, -96, -85, 33, 41, 39, 20, -54, -54, -15, 89, 102, -22, 53, -123, 10, 91, 1, 10, -65, 99, 94, -110, -94, 98, 69, -82, -82, 104, -17, 65, -74, -57, -45, 44, 36, 104, -60, 23, 50, 83, -85, -1, -12, -63, -35, 92, -117, 41, 39, -27, -10, 65, 54, 33, -15, 66, 111, -21, -110, 61, 9, -104, 71, 114, -42, -105, 58, 76, -60, 111, 28, -48, -89, -25, 0, 116, 8, -83, -65, -30, -3, 45, -89, 86, -67, -119, -58, 124, -75, 25, 28, 22, -22, -61, 61, -43, -64, -95, 42, 87, -28, -25, 122, 78, -82, 114, 84, 46, 29, -48, -3, -62, 118, 122, 112, 17, 121, 115, -68, 18, -77, -26, 40, -27, -128, 9, 76, -55, 76, 57, -59, 94, 106, 78, -34, 45, -82, 92, -47, 24, 23, 50, -117, 41, 80, -108, 103, 125, 118, 112, -46, 31, 23, -88, -109, 20, -65, 116, -92, 14, -13, -15, -67, -26, -83, 93, -37, 79};
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
    msg.setTimeStamp(0.377422307387);
    msg.setSource(24195U);
    msg.setSourceEntity(60U);
    msg.setDestination(59000U);
    msg.setDestinationEntity(242U);
    msg.plan_id.assign("TTXNXWCTBKVPARYVARMHUWLONRIQVEXPOPSMCZKCDONHISDR");
    msg.plan_size = 40044U;
    msg.change_time = 0.834627345412;
    msg.change_sid = 60988U;
    msg.change_sname.assign("OEDHNBDROVBPFNFBKRUSBGSJURVTZWTIMPFBUUAJGVJALVWYVMFDQZCRJGDQLMOJEPCKSQTXLKEAPICEXETQLTBFOGKJWTYLLWFHCMPYHTRSOCODFZNARBBHHGNXWWCEIUYKUVLJGQXWXOAGDHSPNXIPOFZ");
    const char tmp_msg_0[] = {117, 80, 17, -84, -16, 0, 25, -65, -119, 34, -38, -39, -90, 107, -42, 59, 94, 0, -91, 98, -48, 111, -51, 102, -53, -18, -39, 35, -119, -61, -75, -80, 67, -32, 1, 86, 50, 54, 10, -91, 36, 8, 72, -75, 111, 23, 27, 20, 76, 29, 123, 65, 42, 25, 17, -42, -114, -123, -45, 91, -24, -14, -104, 37, -37, 123, 102, -48, 12, 21, 66, -43, 75, -33, -101, 86, -6, 6, 76, -44, -62, -121, 84, 113, 59, 65, -92, 63, 100, -126, 64, 11, -124, 49, 19, 93, 31, -88, -113, -7, -76, 37, -102, 40, 17, 45, 54, -102, -33, 31, 103, 121, -15, 5, 66, -124, 98, 92};
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
    msg.setTimeStamp(0.825248839058);
    msg.setSource(24415U);
    msg.setSourceEntity(72U);
    msg.setDestination(54781U);
    msg.setDestinationEntity(197U);
    msg.plan_id.assign("NPIZUIJLSFEDORWIZHFPOCJTZERYOHYJJMMZHLMOZLGYWBGTBKJCGEWAEXUVUNIKNLLWMLQSEESYIUDGUJVVOOHMDXBZBYCACKRNERI");
    msg.plan_size = 36257U;
    msg.change_time = 0.167183825607;
    msg.change_sid = 42472U;
    msg.change_sname.assign("XGQEJZPENITSWYIOWOUCOBGSNKVFACPNFFNHUWQQPLMLZJVOFXGWSRMRUYLLQTBZZUXSAGAVXPTYHFXVKHEXDJNHTZJQIMOPRDEAQSJRAWXKSEKYVSGWUENRB");
    const char tmp_msg_0[] = {71, -69, 82, 67, 1, -54, -77, 121, -39, 72, 34, 51, 54, -97, -51, -61, -102, 104, 122, -30, 6, 19, -7, 49, -27, 78, 45, 45, 77, 13, -49, -61, -41, -119, -95, 73, -116};
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
    msg.setTimeStamp(0.830309850487);
    msg.setSource(61773U);
    msg.setSourceEntity(142U);
    msg.setDestination(1883U);
    msg.setDestinationEntity(0U);
    msg.plan_id.assign("NJPAXAAVOPBUCYTNAYZECUUUDKBRLTQNBFCBBQYNBYQWQMZNIPEVRDXPZDJTSNOTWKRIMLXATPOJOMSOPJSHRKLVZAGVFGFCLMDCJQHQCRCJFUEXKUWJEQJEUOZAGEUSRVRXONMKHSLDSVGSYWOQNOSIMWVUKWBXHGDTE");
    msg.plan_size = 25497U;
    msg.change_time = 0.87958987535;
    msg.change_sid = 54491U;
    msg.change_sname.assign("XCNJWKIOJSHXDTSNLTPWQIHJPWEMUWHBKBSPGKXOQBKPXZCCLDYPBOQXMOJTLXGGVVWMXJNZAFSLYJUHWUQAHBLBKSZNTRTUYQHLNOZAGFDVSA");
    const char tmp_msg_0[] = {43, 41, -3, -14, 42, -66, 89, 89, 53, -33, -15, 72, 122, -26, -78, -40, -55, -87, 123, -77, -71, -10, 15, -90, 34, -104, 85, -5, 17, 4, 61, 73, 75, -63, -97, 95, 110, 57, 46, -58, -6, 84, -51, 43, 124, 86, 92, 37, 80, -104, 87};
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
    msg.setTimeStamp(0.871050803315);
    msg.setSource(37634U);
    msg.setSourceEntity(54U);
    msg.setDestination(24267U);
    msg.setDestinationEntity(242U);
    msg.type = 228U;
    msg.op = 117U;
    msg.request_id = 38282U;
    msg.plan_id.assign("NLZGKRTVHOXKOLAIHFJARJZOBKJIKDBEMMEPAJPKALGANPONHJNQYVFSMDRIXWFYCJXDTBUREDSIPLTXJE");
    msg.flags = 15946U;
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.809945016275;
    tmp_msg_0.lon = 0.825005225046;
    tmp_msg_0.height = 0.63697602376;
    tmp_msg_0.x = 0.892589342994;
    tmp_msg_0.y = 0.921029226403;
    tmp_msg_0.z = 0.37828613933;
    tmp_msg_0.phi = 0.844483440666;
    tmp_msg_0.theta = 0.965145389307;
    tmp_msg_0.psi = 0.682512032125;
    tmp_msg_0.u = 0.0810536610236;
    tmp_msg_0.v = 0.82203801945;
    tmp_msg_0.w = 0.158843235078;
    tmp_msg_0.vx = 0.10544094351;
    tmp_msg_0.vy = 0.276672477802;
    tmp_msg_0.vz = 0.404946988785;
    tmp_msg_0.p = 0.0334637747461;
    tmp_msg_0.q = 0.130588052066;
    tmp_msg_0.r = 0.490193326763;
    tmp_msg_0.depth = 0.842438544256;
    tmp_msg_0.alt = 0.841867831397;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ATHJSKXNZDAOYBTWXMCLBRYLZXZYOSJCSKUMXLWLGITZNRFXFJQRKVGDAZUBDJBZJYDHASBBHORIGDFIZSUUXCQNNMMSMEUBVQFCPHVOFHWKEGHSDAQUVMVMVZXVPPTHAUQGOPDFFWILKRWSTFDHEVBPERRQTIYWCZNBVOPRLOOBGJJPFAIPUWKLPCYITJXQYXOGQDFALAELHNRCRUZKTGEPSEGUXYNQMQDEEEWMYJNV");

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
    msg.setTimeStamp(0.925782207239);
    msg.setSource(36413U);
    msg.setSourceEntity(217U);
    msg.setDestination(60952U);
    msg.setDestinationEntity(171U);
    msg.type = 33U;
    msg.op = 119U;
    msg.request_id = 37731U;
    msg.plan_id.assign("RARTHXMAXSGICWJAZOUUHAOHGHKDLVVOYXMLCHEJWERPJPGVKKQFZVETNUCEKXACBZFZFFUUWRFFPMIDKPQCMEBQSOXABFSHTNLKNODIUTJPHRBVDKGRYIGTGKOTWBYTIZUKWTPQLWZNTHHBGCRIPSOCRQMSJNMZERCNYYWSZJYUXWNLCEOZQGUMAEBILLPVQRZQCKABJFVOJV");
    msg.flags = 35673U;
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 20109U;
    tmp_msg_0.ttl = 8378U;
    tmp_msg_0.destination.assign("PRNFWDZWQZVQCIEQLYNYMHINGYCTSZBSDXRKOTYQVTMUGPFFUCBGCFWHUIAHCOOPRXDKMPUKBISHYHKXFHUYXWAMTLGSQZIEOVCBPJJDUBAHOXVPRBGFXWARJEAKXIIEJSDCVODQRLZTJAVBTSYJGXTVQKMEUFCNMQDNGMH");
    const char tmp_tmp_msg_0_0[] = {112, 93, -49, 92, -71, 0, -84, 45, -48, -47, 90, 85, -116, 80, -3, 82, -9, 96, -31, -23, 30, -87, 121, -115, 68, 54, -30, -119, -36, -67, 64, 121, -72, -128, -89, -89, -116, 92, 6, -54, -99, 1, -107, -1, 25, -113, -80, -78, -105, -58, 44, -94, 68, -67, 90, 34, -102, 75, 2, -127, 14, 111, 28, -13, -49, -92, -39, -43, 2, -85, 67, 105, -37, 90, 35, -17, -41, 111, -54, 92, 85, -102, 119, -62, 64, -64, -104, -16, -1, -19, -17, -45, -13, -85, 85, -68, 105, -12, 116, 22, -20, 114, 91, -18, 93, 27, 11, 126, 72, -17, 108, 2, -52, 54, -66, 87, -16, -54, -52, -63, 61, -98, -59, -65, -50, 96, 115, -18, 13, -125, -122, 54, 8, 22, -6, -68, 123, 20, -64, -93, 102, -38, -83, -34, -99, -60, 9, 112, 83, 12, -94, -16, 57, -51, 35, 101, 5, -22, 0, 9, 90, -2, -23, -53, -48, 118, -83, 59, -21, -96, 46, -110, -127, 107, -48, -6, 57, -109, -114, -107, -67, 26, 105, -99, -108, 103, 107, -122, -17, -20, 101, 64, -14, 98, 94};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JSZPMLUMDRZNWKAZOUKRUPKIIQLGVZEBDOUBHNWTHKLHJQDOBIFQGZWGJMNMSIRSVJLWOJQQVFEWGOUDMYLCACOFJTXPMYXUEJPZYECPYBYKMSPNXGGWRBFJGXAMFZXYDFFARHEEVDXGSPNIVLTJGOPSOQSIKTAGFRCELVQJNXRHB");

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
    msg.setTimeStamp(0.719379291106);
    msg.setSource(50649U);
    msg.setSourceEntity(54U);
    msg.setDestination(60422U);
    msg.setDestinationEntity(242U);
    msg.type = 168U;
    msg.op = 30U;
    msg.request_id = 26086U;
    msg.plan_id.assign("NCIZPMFAJQYZVBSYQUAOOWFCMRSXYTYQLHJXNVEGAGDFMRWTKCBGKTLSEUBBSNUPQIUBGCGOEIMPASYBEJKVQIUPLFZPRJEEDEKRPHDSCIZWEGNJMXPFTXLXDKVAXQBYVFLDDETRQNLHXHUPWGATVRHQMCBZNOJNYC");
    msg.flags = 39332U;
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 40U;
    tmp_msg_0.frag_number = 10U;
    tmp_msg_0.num_frags = 208U;
    const char tmp_tmp_msg_0_0[] = {72, -127, 109, -32, -43, 42, -10, -73, -68, 113, -40, -104, 59, 47, 101, 62, 14, 45, -14, 59, 41, -26, -73};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SDMZXZHCSUJMPDTBBACBUCKSOOKJQCVPTULBEMFQOEPTTGIDAGHXXJPWVUBMRBUNGNTVFFQBDRFJKKPVDHWZIIQPRCMMNDEZJXKARPNDFAWGKSCJZMBPATQQWWOLLHIZKRLETYASMNWEYEPKIHSOYZRLOZRQXLUAUWCCYHNFEEAVBKYJYYHXSQ");

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
    msg.setTimeStamp(0.215359082967);
    msg.setSource(52790U);
    msg.setSourceEntity(67U);
    msg.setDestination(23599U);
    msg.setDestinationEntity(37U);
    msg.state = 58U;
    msg.plan_id.assign("HWJXEKTSOFSBCFLNVITFATROECDBLCISJUUVROYFZHJQA");
    msg.plan_eta = -2033312938;
    msg.plan_progress = 0.85542123012;
    msg.man_id.assign("EOODNQQRBWZYMQNCEKMCRZLQAWEOQQPOTZQEWRIKJVPGSAKVKZGYRRVGIXMTSDLPJHUJGNTTWAMAYVLHCUIOHQWOIIUNOASIHJLBS");
    msg.man_type = 39787U;
    msg.man_eta = 1430982035;
    msg.last_outcome = 70U;

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
    msg.setTimeStamp(0.459191964361);
    msg.setSource(11068U);
    msg.setSourceEntity(28U);
    msg.setDestination(43047U);
    msg.setDestinationEntity(125U);
    msg.state = 112U;
    msg.plan_id.assign("BBKEDRWNVSCTHHBCNGPAJMZCCAAZGFXOQUAHTSORBHSRCZOMYNPDFDKQDMTYJFQIPTXNRHMUWDIFCBAZWVCILEOLLYMCWTNOPXFWSXWRBEBUASTHTKJKEJYLGDROMJLHLFRWJXBAPKIY");
    msg.plan_eta = -1269285134;
    msg.plan_progress = 0.265465222836;
    msg.man_id.assign("VCQRTFSSEZIMJMCHUDVXBJEUE");
    msg.man_type = 39053U;
    msg.man_eta = -858181593;
    msg.last_outcome = 5U;

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
    msg.setTimeStamp(0.0959943064771);
    msg.setSource(20753U);
    msg.setSourceEntity(133U);
    msg.setDestination(20755U);
    msg.setDestinationEntity(214U);
    msg.state = 215U;
    msg.plan_id.assign("RLMVUFNXIMXYLUCLKWYFHTHXYLGYZPTGLDJFQOSFKKERDATJELVRZCPPVDDMRZAQZUHCIOTXTYCPBIOSQPEXBAAPABOZUJRFCSZCSHLDSNAYULKENKKQ");
    msg.plan_eta = 869353282;
    msg.plan_progress = 0.383469350865;
    msg.man_id.assign("STWDSZVAXKGSFMBOEBNHJSIAJFZTCLGYCWUONQVHTKPLDRNBXRAHNACAUDZGRMPYFTOGIWHFKKEZXIYYBZHYCCHUFTQKGBGEDYRWPIONIBHMXRVGMJMTJEJJZLWMPGTPYYJSTTRYXFJWBVCLJVDCCNEMWPOEKQDGZILDFQAAMVRQIAWJQPUBHXZZLLSRXORIOKWZVNXLOHEDOQUPPDVSSIUOBUVFPLGDCRNIEFMUXMQCLWQYXENEQKBHUTSA");
    msg.man_type = 7857U;
    msg.man_eta = 674700938;
    msg.last_outcome = 156U;

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
    msg.setTimeStamp(0.861111023987);
    msg.setSource(24469U);
    msg.setSourceEntity(150U);
    msg.setDestination(41573U);
    msg.setDestinationEntity(33U);
    msg.name.assign("QBCWKDLYEWSZRKNUTVRBUBXGQCVDNOVVHNHYMESHWCESCCIJIQEYCCOFUCPGLAAXKPSITFUJOSYEFLKNKDWPJTNLQKWZQSXRTCXEURKEPRBBZHODZJITKMPTVQSPFZJTU");
    msg.value.assign("VBVQRNBYIDOPAJUMUXDIEGPTRNGZNWCQQIFWGZDICMZEZHOBXELRVF");
    msg.type = 252U;
    msg.access = 141U;

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
    msg.setTimeStamp(0.391004418098);
    msg.setSource(53200U);
    msg.setSourceEntity(16U);
    msg.setDestination(15881U);
    msg.setDestinationEntity(68U);
    msg.name.assign("AKKRBCHDPAFQGFEYGKRJIRRKIVYLGMNEALDGJCIQUXLFEIHPUKQESVCQSGOQXMYPIFKIRCRTXZMWDDWMRNWYDDETPOHFTVUCNPJZPSADBYGPGBCVXWWLXDBCNYGZJVXXLKFHLMDRBHUSBYLYZHMKS");
    msg.value.assign("QXEBPDJGFWMBSYQWVSUSENKSR");
    msg.type = 194U;
    msg.access = 146U;

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
    msg.setTimeStamp(0.0929396582533);
    msg.setSource(7247U);
    msg.setSourceEntity(173U);
    msg.setDestination(35024U);
    msg.setDestinationEntity(178U);
    msg.name.assign("SKECJOZMYRERGRFGLTOXBKNOYZPNBVNVJNETPVIDCFLADJTLFAIV");
    msg.value.assign("SQITIBYCNAPNTCWJHFJQXCHXDNESCFXFBHOPNGXSBODKSWVAKCIKGDEVYWPGNNDOPZIKLIQZKTMMPV");
    msg.type = 173U;
    msg.access = 33U;

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
    msg.setTimeStamp(0.304299293868);
    msg.setSource(30642U);
    msg.setSourceEntity(174U);
    msg.setDestination(43284U);
    msg.setDestinationEntity(86U);
    msg.cmd = 55U;
    msg.op = 42U;
    msg.plan_id.assign("YBQAIWBSGFXLCPAAJZXONUBFDNNYQAEYOC");
    msg.params.assign("DDAHEVSPRMAJKQSOYJGHZSPNTMG");

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
    msg.setTimeStamp(0.689615175602);
    msg.setSource(20475U);
    msg.setSourceEntity(221U);
    msg.setDestination(65030U);
    msg.setDestinationEntity(184U);
    msg.cmd = 30U;
    msg.op = 192U;
    msg.plan_id.assign("PGXEBFHNJPZUWOQUGOVKHSEOBXEIBADWVDPJVJSTUDPXLXZATFWRKRTLBNLQDBFLRFAFIAIGPUUMYDBPPPKCNVKOIACWVJATQKRDDTZZSYGOCZLYQJIBHEHHMQSNUMAHRZMSEXVFRKEMGSKFCAQXNMMAYCS");
    msg.params.assign("XJECYSFYYLVXMXTOQBSZIHBCDJEBCNSBNJAGZWPIIJHHKTAWWTOKIEGBWAVQRXNWDYGLOIVQFACULEPVAUFMSLHFKUGRZGQSPUEWNGOCXOTTIZTKUQHBVPKOMYJSLKKZNLIEGRFYYWRXORLATEDAMQNDBMHHYCPUCFMOHPDANPAXEKIKCWCODMWRFXMRXP");

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
    msg.setTimeStamp(0.43626712272);
    msg.setSource(32889U);
    msg.setSourceEntity(153U);
    msg.setDestination(43752U);
    msg.setDestinationEntity(179U);
    msg.cmd = 171U;
    msg.op = 35U;
    msg.plan_id.assign("BXCXBPMAGOKIREUSRXXOBNKQILNNEPJ");
    msg.params.assign("YBJVVBLHBOAMMPCETKGAXLKHNDYJJCWUDVHLKMSMPUVFQIDCCKXXTNRDOEUFTBACTOORVMIOMBAZ");

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
    msg.setTimeStamp(0.976959102151);
    msg.setSource(41438U);
    msg.setSourceEntity(209U);
    msg.setDestination(36180U);
    msg.setDestinationEntity(159U);
    msg.group_name.assign("VTEKZJQSXSNBYIFWPBTHODRGETRQZYRLSVCHZPBHGEQNRMJPPSVANDYLSUZZBOUDPPDQSBINJPCJFLA");
    msg.op = 147U;
    msg.lat = 0.330486788025;
    msg.lon = 0.700068775175;
    msg.height = 0.189033286235;
    msg.x = 0.614319097547;
    msg.y = 0.178601676875;
    msg.z = 0.815631877169;
    msg.phi = 0.504555703557;
    msg.theta = 0.315869461709;
    msg.psi = 0.931522468756;
    msg.vx = 0.644680512949;
    msg.vy = 0.0200650158196;
    msg.vz = 0.639705414263;
    msg.p = 0.0383073570809;
    msg.q = 0.201020810197;
    msg.r = 0.333399736435;
    msg.svx = 0.647891511349;
    msg.svy = 0.478655997234;
    msg.svz = 0.0831728041152;

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
    msg.setTimeStamp(0.219596369005);
    msg.setSource(28491U);
    msg.setSourceEntity(154U);
    msg.setDestination(21899U);
    msg.setDestinationEntity(248U);
    msg.group_name.assign("AAXBOMBUERRLYNFCCSHUUAELXYGDMQRQJLLEIZIZUYMRDPSDUFSDOBAJOXDZBUHEGXHWFTTRSOIWBDYFAIAHJULXNWXQGHHLQIMVOSSMWSEJCYYPZIVYPTJKNQGDSPCNVEQZFQBTRJLPHDZZWXFLRVRJDEBECXQZAPWNKTGBCBZNHO");
    msg.op = 187U;
    msg.lat = 0.492915095685;
    msg.lon = 0.660739181478;
    msg.height = 0.314193548878;
    msg.x = 0.543920494168;
    msg.y = 0.446955714391;
    msg.z = 0.540863039468;
    msg.phi = 0.519109865593;
    msg.theta = 0.16426144509;
    msg.psi = 0.0125001635527;
    msg.vx = 0.555503969713;
    msg.vy = 0.082695785312;
    msg.vz = 0.681323550351;
    msg.p = 0.202498270018;
    msg.q = 0.458732559014;
    msg.r = 0.0299786753359;
    msg.svx = 0.072763499297;
    msg.svy = 0.904823343561;
    msg.svz = 0.266880201738;

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
    msg.setTimeStamp(0.231967109776);
    msg.setSource(18160U);
    msg.setSourceEntity(157U);
    msg.setDestination(52604U);
    msg.setDestinationEntity(94U);
    msg.group_name.assign("BBOTFHYGQRYOULKOPISOONWYMNGZRMVYXEMEUTNLNCNROKMIUNSCCTMOIVLKTVCTBCFINWZDHHVGQBXDPUFRRSHLTJGDKEKAZBQABAEJCEFKRGGMBECJIGCUPREFLQUGIXKPJLXXHHZRQXMTNZJ");
    msg.op = 13U;
    msg.lat = 0.819682091677;
    msg.lon = 0.591710894282;
    msg.height = 0.761676268109;
    msg.x = 0.134413936369;
    msg.y = 0.147829213127;
    msg.z = 0.811033183555;
    msg.phi = 0.393749035969;
    msg.theta = 0.860936119161;
    msg.psi = 0.382547441667;
    msg.vx = 0.553536470783;
    msg.vy = 0.923842620924;
    msg.vz = 0.401730478225;
    msg.p = 0.782679738033;
    msg.q = 0.801654957051;
    msg.r = 0.120934270621;
    msg.svx = 0.125306249589;
    msg.svy = 0.157681385977;
    msg.svz = 0.681362035103;

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
    IMC::ReportedState msg;
    msg.setTimeStamp(0.129818771209);
    msg.setSource(38761U);
    msg.setSourceEntity(231U);
    msg.setDestination(11238U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.30906486673;
    msg.lon = 0.167075915162;
    msg.depth = 0.75201399875;
    msg.roll = 0.077156847414;
    msg.pitch = 0.536178094846;
    msg.yaw = 0.943591904658;
    msg.rcp_time = 0.0065218171089;
    msg.sid.assign("LBTUVXUBAHQQNGMWHTYKRTHUVWJDGUKTXFWKECSKVJAIFQSGIWUPXIOOPEVTQODTJLYDRNPGBPYKIZUHONAPRGAQQAIZBFVSVGFJAPMDWEJMLQHGTIXKOWYGVEYZICHGNZLKDIOCABMHRWDMUUERFOCVNVSZBMNJLREWWNQCEISQPCBBGHLAZZCXKJFXTL");
    msg.s_type = 77U;

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
    msg.setTimeStamp(0.149372809103);
    msg.setSource(47793U);
    msg.setSourceEntity(134U);
    msg.setDestination(39729U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.95057493408;
    msg.lon = 0.822708392207;
    msg.depth = 0.815132503485;
    msg.roll = 0.888760914973;
    msg.pitch = 0.902011135018;
    msg.yaw = 0.677844922642;
    msg.rcp_time = 0.844041799352;
    msg.sid.assign("UODPKWUTGKSKBXDAWPTEULRJVZYKADQNOEGFUQHAJIJQEBGJNSQCIJJDISGKHMETRYCXNVCZTJYILGZELHTQOEUWOTDFVTMWLVIMDHNGYPUYSDGBFSBEOCCRYDZQVQBSCAFRNMRUNNU");
    msg.s_type = 103U;

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
    msg.setTimeStamp(0.472573293282);
    msg.setSource(64931U);
    msg.setSourceEntity(80U);
    msg.setDestination(3546U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.126999059736;
    msg.lon = 0.058637682967;
    msg.depth = 0.368342677378;
    msg.roll = 0.339839356478;
    msg.pitch = 0.803812729399;
    msg.yaw = 0.374207712193;
    msg.rcp_time = 0.180617489002;
    msg.sid.assign("YZDDMOUCWZHGIAJNDPQYCJLHKRDNBVEVKRGIHJPHPMSZQQMBIBWZPUWSTNQFJUXXLEPCIZEAAVGFSXVKQCNTAWLOBXKTTKBUQYRUZFBOUUNFIYXHIRBPXHOJMDEKPBHEOLPATOCPLEECKFLIXYZUBXQIGCAZSRAMGGJRTMURGXFOLDUTESHYWWFAHLFAVJFS");
    msg.s_type = 20U;

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
    msg.setTimeStamp(0.679708457561);
    msg.setSource(9268U);
    msg.setSourceEntity(153U);
    msg.setDestination(61564U);
    msg.setDestinationEntity(58U);
    msg.id.assign("OMBFFUPCTSUMFICRISVGAIYNTWOZPZDSALJKKWYPKCZTFLNHSTHYOEUCTFPITMYRWLDUWPCGHBCALQBVRDLNTPMSEKEDIKJJBLQZQYEIVQUNJCXHHTLJOYILHOWVRTMEXJGSXMJYAVPDZXIKNCCWEHXKJBBRAGVYFBUWTHANGBXEGGVDJQMIORDKDPE");
    msg.sensor_class.assign("PKCMRDJZVUYZF");
    msg.lat = 0.376955921074;
    msg.lon = 0.638708696209;
    msg.alt = 0.519931952856;
    msg.heading = 0.057367377457;
    msg.data.assign("WXUZLNCRRUIOZPAXKSZILAVVQOIVDLKSCCNMMWTZANRITYZOFMQGRDGPDE");

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
    msg.setTimeStamp(0.0769325445331);
    msg.setSource(47683U);
    msg.setSourceEntity(248U);
    msg.setDestination(58539U);
    msg.setDestinationEntity(138U);
    msg.id.assign("AMJLSPJDLOTSHRPCGIBPWBEHMADQXHNWVJDUQDYLNIHYLEUIKHCCZFRJHIZZEYAJOGMNDYLGJOKSTBKUNDAGVIMXFKTSTWBMCPRBLGQZTIEBOKEZRIFFYDQAGSUBOHVZUVOALKXOXVKIQAJTCWHEZRABSEXTCPSLWQNKQFOGSWWFXWXEEHYPGRWAQUVMSMITOIXRPMFVSUXGTXKYBLPJVUQPANVJRJCBFRPOHUCZLVRFNNYEU");
    msg.sensor_class.assign("MCWHYSSJZWLRUQGYPILPTUYBLIUALBNVOHJEOTQKISQZRESKMMGGZD");
    msg.lat = 0.482541382784;
    msg.lon = 0.776797118561;
    msg.alt = 0.350505247638;
    msg.heading = 0.0298892729757;
    msg.data.assign("JPQVCDAOPBLZRBMFJXBSECLNZDTXTKRHWUHNHEBEZANHVEAQYCNUWVIYQUYVUECLFIEGYORPTWIBJPHJIXBILAJZVRRUFCIXXTNZUMWBODSABLQGFUKLXQWNSKYCGHUPLSKOSZSHTOWGPMLVDDZMROARGDDXJVFGKPHQFMRKVOAROJJIVAKQVDLHMCUNWYFCPMQTXPTCDMFN");

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
    msg.setTimeStamp(0.951973091651);
    msg.setSource(56570U);
    msg.setSourceEntity(170U);
    msg.setDestination(3376U);
    msg.setDestinationEntity(127U);
    msg.id.assign("RXXXKWZDEKRCUGGHZSNSQVOPELRAFVZMVTDKUJKPLVENIQIIANTUGDHFSLSYPZIWMNWKRADLRGBCLLMHGBKTLQXMCFGYFNDEYDSFDGMWQUUAXNXYVZBAHRKGFJBTIAJEAKXIMUNBVOHBS");
    msg.sensor_class.assign("ZFMYOVXTWGRNSHRTTWGVAPBYYODQLCSQHVRWRAACPPI");
    msg.lat = 0.346020328953;
    msg.lon = 0.90055631496;
    msg.alt = 0.468080705512;
    msg.heading = 0.170676984213;
    msg.data.assign("ZVORCFIWAIBKUQQBRZNFJPVEMBROGJIDGWPPIPAESNZMEKURBHCXSEOZROOKCHUBOMLVYNBYXWRNMLFTVQTBMW");

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
    msg.setTimeStamp(0.920522832166);
    msg.setSource(41511U);
    msg.setSourceEntity(77U);
    msg.setDestination(30449U);
    msg.setDestinationEntity(10U);
    msg.id.assign("KTOVLERVMIZKEQXUNFXRHSSEKTQGAPTIUNJLHQFFPMVCFAAKYWOKIGQINGUOCSWFYDHCBXCPCDJWLAVC");

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
    msg.setTimeStamp(0.449958990175);
    msg.setSource(26293U);
    msg.setSourceEntity(134U);
    msg.setDestination(21265U);
    msg.setDestinationEntity(232U);
    msg.id.assign("ZOUIXWODBCNKLUAQTCASFSLPTPGHESQJZPCGJMCGXXQIZXLHIOYKKIHCUESATFKFDDGYJTHADUZBDROATMFAYURZ");

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
    msg.setTimeStamp(0.629720619915);
    msg.setSource(14876U);
    msg.setSourceEntity(188U);
    msg.setDestination(16222U);
    msg.setDestinationEntity(241U);
    msg.id.assign("DHFQBCWMJFZFCXOSHCWBIWYQTMKP");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("QXBFJMVJCVSEKTSUTTPXLPAHYYHFFBTCOWEHTTZPYEUMHNUABZWOBPWROUOXTVNSAIWFBYMPSWEUVHQWRJYVFCDRIXRXLAMRLQXRFCGJEDQIKSMCAAIZDZTXFHSJLQHISZHMNIHKGBXZDPLVRJU");
    tmp_msg_0.feature_type = 244U;
    tmp_msg_0.rgb_red = 58U;
    tmp_msg_0.rgb_green = 73U;
    tmp_msg_0.rgb_blue = 5U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.670300817616;
    tmp_tmp_msg_0_0.lon = 0.48843254946;
    tmp_tmp_msg_0_0.alt = 0.648310819791;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.898109257709);
    msg.setSource(50069U);
    msg.setSourceEntity(204U);
    msg.setDestination(15585U);
    msg.setDestinationEntity(59U);
    msg.id.assign("AQYGSCRKDGXT");
    msg.feature_type = 64U;
    msg.rgb_red = 46U;
    msg.rgb_green = 163U;
    msg.rgb_blue = 99U;

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
    msg.setTimeStamp(0.124588011641);
    msg.setSource(37006U);
    msg.setSourceEntity(148U);
    msg.setDestination(5129U);
    msg.setDestinationEntity(205U);
    msg.id.assign("JTLLWFOCSUDFTVJWQZPPJRNOASDHDKUYFYANAVQCWIOYWKSKUHHYCZTJZXSKLCNIMNRLZHBPZGEFEZHYALEUNDVOXMVWRTZRDGPGNCEZUCUSUQUGGXXYSROAOCMLTGTGBXLFYKDKVEGXEPZXEINIQSGJQNAMRIFIQEMRQYBDJHWPDKAWVPCIXBCQXPYOBKSTBBXINJNKGMPBOQVLWJEJWOH");
    msg.feature_type = 159U;
    msg.rgb_red = 72U;
    msg.rgb_green = 196U;
    msg.rgb_blue = 20U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.96980424576;
    tmp_msg_0.lon = 0.182160895915;
    tmp_msg_0.alt = 0.110091385089;
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
    msg.setTimeStamp(0.301724412278);
    msg.setSource(28610U);
    msg.setSourceEntity(49U);
    msg.setDestination(52874U);
    msg.setDestinationEntity(225U);
    msg.id.assign("JGVVABOHOBJDUIDFMWVDOXMRQZYEELSGMZJUNKFNMJCWSZMEPNZYGIXRXMQIMLWSOQXUUANJKAXGWRRDP");
    msg.feature_type = 241U;
    msg.rgb_red = 17U;
    msg.rgb_green = 144U;
    msg.rgb_blue = 19U;

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
    msg.setTimeStamp(0.00386217402169);
    msg.setSource(12804U);
    msg.setSourceEntity(215U);
    msg.setDestination(15250U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.288504511813;
    msg.lon = 0.717970809112;
    msg.alt = 0.836019455085;

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
    msg.setTimeStamp(0.763113030943);
    msg.setSource(7147U);
    msg.setSourceEntity(134U);
    msg.setDestination(56477U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.531688010426;
    msg.lon = 0.328188802334;
    msg.alt = 0.0483511763439;

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
    msg.setTimeStamp(0.282796566689);
    msg.setSource(28205U);
    msg.setSourceEntity(54U);
    msg.setDestination(9676U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.926507434991;
    msg.lon = 0.188639955129;
    msg.alt = 0.682153687611;

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
    msg.setTimeStamp(0.863241188955);
    msg.setSource(40609U);
    msg.setSourceEntity(175U);
    msg.setDestination(48009U);
    msg.setDestinationEntity(18U);
    msg.type = 149U;
    msg.id.assign("NAFNEUJSBQEFPSJVXPSRUIIQPXFULBDBKQHVTNCKBMBXDZKTSGLTGLWKJSGDZTHQFDNKWL");
    IMC::Abort tmp_msg_0;
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
    msg.setTimeStamp(0.243970821026);
    msg.setSource(34081U);
    msg.setSourceEntity(138U);
    msg.setDestination(25833U);
    msg.setDestinationEntity(100U);
    msg.type = 247U;
    msg.id.assign("RCZUDVOKEARAWKCFMVGFIEANONBSQCTUBNPBNALMLHKWJKPXMFZQRHYRDWMQUOEPZMWVDICTAGENKYHGPCASZCKBNWJFYTUTQVIJSFTSLWWDVSHEEEOMIIZIMOJXZWRNGGMHJABTDJYQJSQGSSIXXJXLAEPYBUNGDAIXRYBGQURHFVVBGTXDDVSDUCNKFZTXWPILHZBFRYBLETOHCX");
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.145335170814;
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
    msg.setTimeStamp(0.227927176619);
    msg.setSource(6909U);
    msg.setSourceEntity(185U);
    msg.setDestination(33316U);
    msg.setDestinationEntity(88U);
    msg.type = 198U;
    msg.id.assign("KUFLVOXKTGOGPQEOTCYFJARRKMHFEIPETAXCRSOMDRHYOIDOBCAHPMMBQCQWILXCNGPFYNKJDFOYBMBFESPAQWPA");
    IMC::RestartSystem tmp_msg_0;
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
    msg.setTimeStamp(0.165549348335);
    msg.setSource(17146U);
    msg.setSourceEntity(239U);
    msg.setDestination(25294U);
    msg.setDestinationEntity(95U);
    msg.localname.assign("PARCZXGHILJMXMGWESLVITUERZEOIYZZHXHDUHUBQBEJGJFLQPQYSSVYYAUAFQQJNWTTRWTZTDAXVXHSBKEQRGCVBMPRNHOLOTDKMEFNYFNLWPUYJLLFGCYKTZLUFSXJIPNWDFYHDWNIFKKRTNUVTOVJVOAXRCUBCZNPDAWVMYFOWCL");

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
    msg.setTimeStamp(0.0406168834429);
    msg.setSource(30093U);
    msg.setSourceEntity(35U);
    msg.setDestination(8269U);
    msg.setDestinationEntity(149U);
    msg.localname.assign("LMSYOENPCWHQVOUNYALGMKLQGVZCPSMFNQWFUOIKRGXWYJXRDDRWQGYEHAYHXETMUGCWCSAUSNGAZKCEYJOOXUOTFDRDEFWTAEOLDSRHMJJEVQNPOBMFYZIIBTBTSRLQFABUCZVGLEJMPBDIYKBGIMFXHFANZUFQYVNUKPPK");

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
    msg.setTimeStamp(0.636264198493);
    msg.setSource(5535U);
    msg.setSourceEntity(242U);
    msg.setDestination(17154U);
    msg.setDestinationEntity(244U);
    msg.localname.assign("EYNJAZCVYWRVLUWBOZSMHQUOZOLLXNPYYUEOVUGMJVSWQWVLSIXZQMGBZBKONTWCIQIRDMFZCJGPJENGAPHASRBYPSOTAFKXLFABRIXXQNYTDGDIKKGTJWZNQFIAEHVJVSMFUMYMPACGXBCHFJCMROTNITILKCJGDDPFPBCCG");

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
    msg.setTimeStamp(0.709547794092);
    msg.setSource(9209U);
    msg.setSourceEntity(51U);
    msg.setDestination(16050U);
    msg.setDestinationEntity(124U);
    msg.timeline.assign("QLKBDUSUVRYGQXVMFGKJJNVGIGUKOGDQBAAYIHIODZCQBUIEJCLPQAGECEDRCRZAAIFRHLWCUMCXFMDRBNWNFLEKMNHFTFWPWAHHXZQZJMMWBXQYTYIQDJHMOFXPRTOCDZVGTUZFVHHLGAJXHLYZZGOOAZPSKVXGWKCRKRPUTZEXSIDX");
    msg.predicate.assign("KWIJSVHDAZCOOYHHLANEKFCWQQCPEMMAZVXSCPHMIAITTVQTAYQQVUUUKWYNNKZIOHLORRIWTRSDVSJHRGROLYGBJBFGYOVWYUIVKXJTNEXEXGDXGKORCEUWRZMNJSUDXPQEI");
    msg.attributes.assign("BIAYRUOONRPAJNKKKDCDUZITIMFSUZYPAAXYMXZRCGHJHEAWFTIVZMGHJZFJUFERJELWJKFULDRXXNQCVMBLLGPWDCIQTWFOVQBUUVKXQHYIYRSGCUVJOQFPEDFTWSFKGMNJWIBIVKLQYPKSTZLLGENZTHSXEEZEXSPSG");

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
    msg.setTimeStamp(0.0194365649331);
    msg.setSource(53659U);
    msg.setSourceEntity(225U);
    msg.setDestination(9901U);
    msg.setDestinationEntity(90U);
    msg.timeline.assign("CBVOTDNDOUXRQTNRSKNVLJBDOKUAAWIMYMCZJOHTX");
    msg.predicate.assign("TVSNPXZAEBRVEMKCUTJQXULODHARCXLTUHXNJZUNDCVIQEYBHWNQGIAVVEBXWPIKYZAYVMYMRXFSASUZKJTSGPFFHWQLBNDCWTGDMGXVVUJUOVLMHABBEADRKILIMFGAONPLOHBGPGJWLPNYGQEEWOKZCFLNCKQMSAIISWOLRR");
    msg.attributes.assign("ARISCYPMIEGGXOBBVHXNWWWGBSNOEIEEPNXEVDHVZKFOHYVAKITOPLAJMWXAQSDAVQCLFGTHECDKMYUBUGQZSANPVMUIJXKWHCRURGLJPMHMFMLXGDIFQYTUCZNTNSWYLHPJRZZAGMRBWYPKNJOEZEHUHDKBJDZSWXWTJQMUBQTZKGJRLURLADFIHGOQFOD");

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
    msg.setTimeStamp(0.381450220818);
    msg.setSource(11172U);
    msg.setSourceEntity(48U);
    msg.setDestination(35611U);
    msg.setDestinationEntity(71U);
    msg.timeline.assign("KRKDWNHYPFJXYLGTJTRTCJOHNLCFIGBPVNBHBTZAXMRTZWDFJBMPEWUHVNXHFTJEAXKLCDMKXFASQTJNWVLPBUKGQPCOVHBBIRTFFNMYANIOKIESDXPLRZJXYECIGUBWQOQMUJ");
    msg.predicate.assign("MCCJYLOWMNYKIAYCQQMSOUYBJZUUOHLWXORRGZZGPXSMLJDFKCLPVEPCAGWVTAKTQYGZQOUVFLFENVPJIFCKBGABPPXHLGGISSXJNRRIPHSNYICBDWELXXUKBATNWXKHXKRIGDVBMQEBHUQRWPSOQKQZOGRIHQLJBMNRMNLCFJKFEASAMVYYNHH");
    msg.attributes.assign("MBPTQSCEDDSHHCQVLPGAYZHGXVAOOUUBLZFFWHRKPRRQGCEECCKMTHWJVFPSJJSKZBVKIULTSUINOWPPVEAAWARFQNTDRJHRXRXFSEJCMMLIIBWNHMASQYXTWCMEOENNBQDLCXPOLLSWGSBGZXRHIQLNWTDUUUZMDEWBNDPOIBX");

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
    msg.setTimeStamp(0.45220008516);
    msg.setSource(19348U);
    msg.setSourceEntity(4U);
    msg.setDestination(15986U);
    msg.setDestinationEntity(233U);
    msg.command = 230U;
    msg.goal_id.assign("XLHIASZJXZTQCGIMITOPLGCUKLKPIYFEYXQAEJWMGPJLBHDPDRNOSWBUHYDCOADOZBZALJFWQMPNKDHXFLYKKNEVLWXTSPLJXPSCNYRDDYYVUAUZGHSXZGUEVBTOEMQKFWMNVRVWTKAKFNWQXEYFAHBXIQDYZAMEJTQGRIJEHQXUMHBZVVIRJSBQUURMVRZGATVIZDWMLKCYGNSSRPFVPBOBUINBCWETSITLCFO");
    msg.goal_xml.assign("BXDWUCYREBWMQHGQCRDTKMFVTVMYCKKCHDMQSNWHWYLVPCOXZBJHDPGCMGGHHETLUUNEBQZFLUIACRYGXVEYBAFPBGIEIVAGIPNXHHJQKLZOWLXIEKPPGNQLVULURDFAJUABLRFKTRHTRLSYXTCQREFZSRBYGYDVIKBXPXXMUOKJSKAUVSWOZARTJYYJZQFZJIMNANEONQTFFDEPFMWVSKWJ");

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
    msg.setTimeStamp(0.738503705015);
    msg.setSource(19343U);
    msg.setSourceEntity(128U);
    msg.setDestination(43851U);
    msg.setDestinationEntity(218U);
    msg.command = 169U;
    msg.goal_id.assign("PLTTVSHHHGARUJQEGFULIHCMRUFJCHZAZUFBMTTRSPQXNGTGBXJKWNMZCPQKVQYRBNGEGLIIYXDWUSKQCSTILKLHCFDVEXNKCWNJHFPOQEZUYONYSBTPSWGDIGPWXKCLBJTWGRXOVUADOAJNLMCMYRHYQDWDYFDCFMWARPFTILCMOADQMBPDZJSSYEKZLGOFOVOIYHVVRRIDEBKZNQWANMXNAJEOBHQLREVIPA");
    msg.goal_xml.assign("IAEBQFONCGPMWNGUTCMRJULIUBDKNQXZRHIWXWTPGXCXQBSETXYUXLTHUMTDAPAHLIMTEFRNIMLJSPYZPCAOGOJBMQMKQSBVXYUSNBJNYAJPFFRPTOSBVZY");

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
    msg.setTimeStamp(0.845401701802);
    msg.setSource(12081U);
    msg.setSourceEntity(51U);
    msg.setDestination(46854U);
    msg.setDestinationEntity(229U);
    msg.command = 46U;
    msg.goal_id.assign("QDVOCPGCQZNNABHHATNUAUJQRLUUEJOSMGAWZPIRWIZNSLXDPWWTBZTGVWSNZKVTNBVDJJSORYWLXKMCLKWKDCTZBMFKTGISMYOCIZDUDPMKBDFCHJCFAXCLFNAWDQYLLQBFHPQYRJEVAOBHIXLDFPUORIHMIMDSZASGEMEKEHYSGLOQUXUXTGMJKEREA");
    msg.goal_xml.assign("ISVGYCJUJMNFZXNGMKAVWCQSDONVUTSHJHRLZZAVKFNDQLTLHXSKAEYDHJOHRMWQNWYIFBTBRCOMAEWWGFBVGRYQYOUCPMJOXMFWCCTSPIVIMBXECBWGCFBXYQGSAYNKDXORDYRSIMLXUKQGZBRIHQVEFPAVBMELXUQUKQLPTXWTVDKIZAOSRDAZDIITPJUTIRKEBH");

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
    msg.setTimeStamp(0.977715155435);
    msg.setSource(39607U);
    msg.setSourceEntity(103U);
    msg.setDestination(33252U);
    msg.setDestinationEntity(101U);
    msg.op = 134U;
    msg.goal_id.assign("IQWUVRURXDWBVQQVBFCHZSXBYGKHNELXMPFNWKFPRCZKARGFKDTGEOJIUIEPYEFFGYUHNDGCKDAQFRWJOBYSCLIHACSLKXEMXHDGAMZAMIUMMVLJOPSASLZLJOBVJHWPLGBVKRUOCSJMQWOZZPQLTOCAXNOPLZCPOMTKUDTXEWRIPKJKXSVIEEZTINDUIQYHNNTAPOYTVBQJGSSGHBRVDVXANYCDHWYJYMUZERNWTNIGTBZSCTFQQYMDU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YFZIFJPUZPRRINDXEJXEKVGNNZGEBJFECACKUOKYAWQMDAFXOHIDXRSMCOLTPGRJZLRHHGJSFQOXNOGMQISBWNGIPDCGIOUJLELKSTTNATUBOTJKZGZDCIAHWKIENTRXZKVPPOSWLAABNOCXWVZGXNHHDAYSQMYBUSZIGL");
    tmp_msg_0.predicate.assign("YXCQKZLYIJUEYNVKEJHHKXTMHZDRAGZGZRAEUBTNQZRWYICKVXLQVXDNIGYDAOVVCCGIUDGVPMBYBPYFHFRTXSJMXLTTPOHLCHKTHVECMDXRQDFTHSPVPCRIWXAEAIQRBBGKF");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CTVLUDACAVRIXIFEZYDRJIJWVHCVVUZARFGIJUPMZPUQTUWCUEJYQYGPKZBVMIYQYRDBBQAHKSPGWKJQGSGJQWOEFAPZFJLSPNHMOMFLSAWGSXDTCTU");
    tmp_tmp_msg_0_0.attr_type = 14U;
    tmp_tmp_msg_0_0.min.assign("JXNHXSSAUDJIYWKDKCUBSTPKHEBEDNRMUDVQOGIIAVIKCQZZSFBPCVFBTLGDCICTYLAILFFPKUGQKMOOLRRPMPEVRYSUGZKWNYWSPTEBPEJQOMNDMDQGMCCHALYIXZOKGJBRMVSOEXJVDF");
    tmp_tmp_msg_0_0.max.assign("BOYAAOVSFFRKPUYWOJODHXWMECZZAHLJYVCPWPJODOQBYMUPBNNZJBMYEDANKRSJRBVRENGIRDCHTZSGOQFNHGIKTQVANXFXXWSUQGVXDXMIFFQKAELKXAWBMTUXCMWLOYEHYYYVGHIRMEVRHXRVKTLVFFLZFDGPBWVJKLN");
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
    msg.setTimeStamp(0.106703769413);
    msg.setSource(23542U);
    msg.setSourceEntity(207U);
    msg.setDestination(46693U);
    msg.setDestinationEntity(155U);
    msg.op = 10U;
    msg.goal_id.assign("LVPTWEEGTIQIHQPTSYBVHAWHPPVQXLTFGRDSQRQOMISKGPEYITGVHLNYJFDOSDEAEYMAQTRZEWRLVLDRDRINBZVCUXXXKKJGZXACFNBSMGSNPVLCZHHXPJWWGPZUAEJLGMPKDOUMGFTSHWMKOEUIKXJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OSYNUXFWEGQHMHCVKYWYTLHPXESDHCIPLSVLTUPGVMLIRKIZNBUUGNGTSDRGJMWREOJCUNAWT");
    tmp_msg_0.predicate.assign("IPBTMMBXQTZTWSPNKABIYTLSXMEJNLANJEFJKWIZKVQNTTVEFLVBPYZADKGAUHZJNZXTZDHCXC");
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
    msg.setTimeStamp(0.349616186239);
    msg.setSource(29964U);
    msg.setSourceEntity(173U);
    msg.setDestination(22727U);
    msg.setDestinationEntity(0U);
    msg.op = 222U;
    msg.goal_id.assign("RHIFSGSAMBVTVISSRQFPJZOLKNROIWREWDCNNKLVXEVDXXDWKZQVZETJUAYVDESCWRAEXNZGPAFZMGCTKFSOHIJFZIBCAEBFTVNKPFWNODYILQBNOYMQPDYETIXEJJNXDPHFRYRGUCJADMCWJAWCONYLOGDKOHDGZLYHUJHJSFOMMUMTTPVOBUGBUCIKNLSUESLYPCM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MIWXHZDETFPJYIZVFCTXZUWHYJMXJFVFEWIRSSPQTGOALJWQCVTNTKXEHHAFJPESOHOYKCYTDQJRIWLCMXXOYIUFPEHUBXPXYQZGLGLDUNVTPPUVNAEVBFCJAAYNVALNOFQBZRALHWWUVEKWGEWLKXIMYZFXLRMMIGGZKQDPABMRWNNSQZQCRMSHULDCEKKOMKGBRZTOZHDJIKBNDYVLDTOCDCRGUDJSSBFGQUNSSARPOICPB");
    tmp_msg_0.predicate.assign("XCRVTZFBQRFA");
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
    msg.setTimeStamp(0.77780434037);
    msg.setSource(30995U);
    msg.setSourceEntity(181U);
    msg.setDestination(46404U);
    msg.setDestinationEntity(22U);
    msg.name.assign("SENQLOVDCBEXVZWBWZXNRSCZOAHOHKSLRJANWXSRMYBTQDLUHQXVASKGZQNICUGDTVGFYCEMGLJEZZDSSUDYNPIHZNWFJKFIYEYGIVSGQQTAQRAMHOYMISAIKWBZOKCFJWYVAOJQBKNMSNBGKRLMPEOOLRFKHKEEUMTCPPDDIXCETFKCVYJUJFIYVDTBMTFNJTUAHFHUJCXVLOREGZIHPXUPRDTXVRIMBPBFHLWXQAGDPOUWX");
    msg.attr_type = 52U;
    msg.min.assign("ADYXLRLPQKCWRLKHLBVERCPRMNIUQGPDZMKZVQABOIPOOMDZLJZJTNZBHSWRIARFTWNEJEGVXMWITVYXGYOIBWVFJJLPESUXENNABKGMRRAFUKOJVOBHYJYETCUKZMCWGFVKCXZMTCFSGBIDWZASLPOYYACKAQPJEHXIAEUVJOTSQEHXQHWRXQILDSRCDUSAVSTXEUUZHIDFSMHOBGDBGNDFUKGJCPCGDFWBFMXYNNTWPZKTN");
    msg.max.assign("DTXXSZZOTATFSKYTUGJADRJWCWGRHBFMPXOUPGGAXSIXPDBLNLIQVAJDRWREGSMZFBMKUIXLHZIAZVLTSWHTCCMNMOUAWFELOSYBJHUVXLFSHDPBKLJGHQEROPHHWQBIONNBSTKLRTDVKJVFJSMQRYPWSCRKZYWNUMPNNJWZTGEFYYGZCKQQYMLRLOCITJYBKGVIVEAFIAZBDCVQXCMBNV");

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
    msg.setTimeStamp(0.554403819864);
    msg.setSource(49363U);
    msg.setSourceEntity(22U);
    msg.setDestination(47287U);
    msg.setDestinationEntity(236U);
    msg.name.assign("UJNDAOEPKETAVISCEOKBNRDLKQBSOLNEIAGUPJMDPDGMWVBYWZVLABZRQFKPEWWHDIUYONOXSPTFCZYGQMEYJKBMEDHQOTLIOOTXWZMVEDARSXHHJXSHMYFYRGWYDGKONPXTAFCLGJMIXVLVKIEJLUNFVZBARIPPOBWJCPQ");
    msg.attr_type = 227U;
    msg.min.assign("CLUKQDQZYJGJXSKSPUUNHQLYDGSDIZZKVENYZFITEGRLIUNRHMCHYEXRUTAWOLRVYKIICLDFJGVMIWQCMVFZZLOVBEQOCZSOWMRDHJXWQJYRVLGJHBFAXJPWMATLXEFD");
    msg.max.assign("YAVVKVONALCEBHRBPFWHOXBJIODCRZLHHUAWPISQAJYIGUJVVAWRMHFQCSEUOSMECZULSZHXTKFYZODWPXQDFNOWQMOUEUHDPJGKUCOUXJZACIDIJETFEFYRLFDYZGNKPFMKWJIBI");

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
    msg.setTimeStamp(0.41055577042);
    msg.setSource(32094U);
    msg.setSourceEntity(59U);
    msg.setDestination(49844U);
    msg.setDestinationEntity(118U);
    msg.name.assign("OBULANGGFVUZTLHKG");
    msg.attr_type = 145U;
    msg.min.assign("QIKTPHJEIIDEDVWUJABKKHNOAUXCSVNCHXNHXKPRYEISUWABYHZHAYLGQVUAMGQDLACWPBJCNFWSCWSPMQUOSMYCLBADDJSTWICDNUQBTRKAVVSYZYKFJONPTRJLUVKKTPDEGVRMXURRPFZYPJCXFLQMIEHIWAHJFDJLEGWRGCZYGGHWXBNKSEMBRTBFZLOKXZTXBVNMIFPEDEY");
    msg.max.assign("YMUKUOVFNPKPWXYSGGAMWZMRLDKXZXFTSBVLEURINOWDFWMNUBLOJIDTGKSGFTKSDBISMGGQZCFLFPBTTSPZPRCFURBJNKIZOXNYDEWQLRDNREAIEVYQOHRHOPDRBEKIVVOJCYERBHXCMKQHUVYJSGZQADFVVETEQCTXXZOWLDSSPJLOOSUEQNQWAXFIQPXANTJDJGHIJGLUZAWCNKMAIKXHAJCTCUHHJUILPBZFW");

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
    msg.setTimeStamp(0.972724889518);
    msg.setSource(17582U);
    msg.setSourceEntity(30U);
    msg.setDestination(56672U);
    msg.setDestinationEntity(6U);
    msg.timeline.assign("YLSPQLSZIUZDBNPQZOWUOHTCSKZIAAKUDKYCZZKKAAJTRFGHTTPZWGNKNRWTUKPTQASXYUBOVIYHGCFPMGJENWFEAMOVASMJGEQGUHYJEPITJFFLRXZPBXUIMXMLILSWJCOTLNCHNCPREUCBDRPSNVHVKLDQAGDABIOLSCOTNOXDFRFKNFJRWQAWTOJHM");
    msg.predicate.assign("RRRNTJNQGTERMSGLVFEYAVUZOSLGJTYDTIMCFAESKAMQKOTF");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("LWABPHXLHMHWAJZEWKIGLVMBDPRGQIACJGCYNEMOOSUNYXMUOFOTRDPETCQKPKZZUFQNGBWXSJFHRPOHSAXSEXSWXPYBVTABLYDVKFXHPZRSINYGSGXILCLJVEKVZCSHQQHUABZOIIURMHRWIZWSRNTKOTEFLUAVNNSYEWLYDMGVQDEMGMPTCCNKBJQRCBFQGRERFVUNDQFOPUJCIVIMITYXJZZXAPK");
    tmp_msg_0.attr_type = 1U;
    tmp_msg_0.min.assign("JKOUQGDWWOBYGAYHOKHEKMTBPNEGLQLHOZQWUCEYZYPHRNIEHCSZWFFGBAMGLFFNIROGILNJDQTPXHSLFWBVJKOCVRNSMNCMZZJKHLUIFDRLRKSEWUVIZIPDQTJYWVCSNUYWATVCWXVPEQPABDEXRKVVQIFIEADBXADLDHXFBZTACBMDYCUAQ");
    tmp_msg_0.max.assign("GVZOCMDBFTMTIGEKADGJSJLHDIGXPXYNPIYUB");
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
    msg.setTimeStamp(0.745485250193);
    msg.setSource(37494U);
    msg.setSourceEntity(99U);
    msg.setDestination(17720U);
    msg.setDestinationEntity(141U);
    msg.timeline.assign("QPBFSWLHBWELFKIRETSOQOAPBSNIRHANAZOWYELMKCDQAKZFOLBONUGJFARVWNQMSHTOPIPDGOZCADHKXRHU");
    msg.predicate.assign("RUWQNFUDGNOCPUXVWKIICUIBNDRJEY");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WTAYVQIJGSXFEVBSAAUXIIDUUHMTNBLXJMRCWWTNDQPQKBZPGURILFZHKICBZYSINET");
    tmp_msg_0.attr_type = 224U;
    tmp_msg_0.min.assign("SOFAZIRKETGYGAWWNTEXWMFEZAQDHDOSKQJUVYTTUQHAYKQIIEIMKAVUQSCLHFPWFTHMABOLBYMKYUZLOSOMNSDBZGUWJVJGMTPXANJLLYLXMQPSZIOQNDJKWRTMKCUQCBQNGJEVBVSKEKLPTOZYCGWBDEZMOBAZEDDRNRRWLUROFEDPNUMXFGLXGJVFBDFUUPTISXFIWJIYHRQPRIHOBVAWIVRXSHEHFJTPNLXNCSJPBPZVHCCKR");
    tmp_msg_0.max.assign("AMSBLXZRSHCKTTVLJHISAMFRSPAAMKLDLEOMJZDCJYQUOIWTOXFSCVNUKBBLFOIAWICGAQGWFHLEUNKAKKORFGDGYTPIXVZIQWDMHDBZGYNSNDFINCXQUVFLHPZGBPWEMXEWIYVQHJRUDNGCRNSBPMAFA");
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
    msg.setTimeStamp(0.277322409311);
    msg.setSource(12414U);
    msg.setSourceEntity(120U);
    msg.setDestination(38604U);
    msg.setDestinationEntity(153U);
    msg.timeline.assign("CKKUSJIRZKEUVXFILTIOCADJQWGFCDFQEUBFEIBQEYBPPKCNUDXGZKUOMMXQGQMTUTXXBDWTVGKYGFHHCTRMXNSZMLFHCDPVOGHULASNIJRQAOFZVCCDARLMSHLLBNOEMVLJCWTWSAWDBIYHIFNXKZAYGAOHLIHTOVOBPUTQZWQZJZRGXBSYPAKPELJYJKNONEIPBHMHNFJUZSWSTWWVAQMYNQV");
    msg.predicate.assign("MPQSHQEESVCPRWFDMSGAJZGNVYATQHFFUHHSFCTZWYWZNLHSSJILQJVQTVFLPNGTXCJZBAODDYRAGUPVFRAIVCXPXEOOEKDSVHBUIXYVUVMBOLUNEDMTGBGSQKYANNTVORUEDOZCZJNCWZWIGBBLPBKXRFWQUMMMKKXINYRJSWQLKMOBAZNCFSHMFBGUCPKEWJIRHIKUUIFRD");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("YPOZRDXDTIYKIUIOCJUNHCLOXHDCANQCOKTFOADKWBCFSYQXVEGOMWGNTHXFMTAAQTPMJJWBNIJJGMLKVHIBZBQCFURBUEPCOJCSJIABQYRHWMAGFECTVHVNWGQUEZNPRPBFEHDETVNKORJTKSXUSMKFZWSPTWELHZABDQMDYVGXHLI");
    tmp_msg_0.attr_type = 27U;
    tmp_msg_0.min.assign("LYJNOXTIVEEDTVAWAJNWYIZYIAYTKMHZKAVC");
    tmp_msg_0.max.assign("QXJLNGEREYQAIVWFKVMRHWQDKGEAMLIMCUVJNHOPCASAWARETBGHDVXYLZQDSMFQCPKKLQOJIHQNVPWEBYAARGPHSFNVWQTOHEXXNMYHUXKEKGBRFDBSUXBFINTRQXDKJSWXMYNFNZJUPARHZBJVIISWTUOCMZSBSLZTODGSCGOOYKCDFJHOMIEGZBYDCCJUXYEAUTRLCBZPIMLXDAYDTULIGKGYJVKNMFBFETZZOLWPQOPZPFNWSRUJIVVT");
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
    msg.setTimeStamp(0.378819742641);
    msg.setSource(35085U);
    msg.setSourceEntity(81U);
    msg.setDestination(2378U);
    msg.setDestinationEntity(209U);
    msg.reactor.assign("BNWMBOMHIMLSJKTYUOAWRYJEXHYAEQFJTITOYBTDTALWRMLCUWCBSVCGEVGDOOEUGVFFUVSNGGKUBHETDDZCGQODQQRUSZPARZIFUXVTYENAVKLYZXHIANJCHCKGRKJXSZOQNPAOUCQMO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ADAJNMJGBTEITYVHOMTRXXVFNGWUCATXRJYUIXUEDIHRGTMKPGOUIRNBCDNFXBOBXNKJSVMJBQSZGSULZMSLKQGSFPTNCVXSHXBQXABKGICY");
    tmp_msg_0.predicate.assign("MZYVONAJWWMJPTVLOVJTWVKFPTJJLCSGEFUPCMUQZGVGYONTCQ");
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
    msg.setTimeStamp(0.380814314041);
    msg.setSource(61342U);
    msg.setSourceEntity(9U);
    msg.setDestination(3019U);
    msg.setDestinationEntity(173U);
    msg.reactor.assign("DGYVCTNAEQWQOIRCGAKUSETYNVYDRQSETCAFDTDSFQYPKRFGHYYIOILIRPMFIAUBLZRIJINGZXHXDKLKHCECTLXCGLTYHBPFTEEJWAJOEJPSYXQVMBZPPOGJMEOAFSJVNCTMJLWRQJZWCWRDXQOPZUTN");

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
    msg.setTimeStamp(0.89125025365);
    msg.setSource(53487U);
    msg.setSourceEntity(20U);
    msg.setDestination(3591U);
    msg.setDestinationEntity(210U);
    msg.reactor.assign("DWXUUTPCCZMMJOZBEPWIYDTUODFVKMZXZBHTVEJWFASQJQSSHZLTTQJFYQPYFQEAAXLCEMLGINGJNSUXREYFRQLHITHDZESSGIDJHVMQTGROWTNXRPV");

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
    IMC::VideoData msg;
    msg.setTimeStamp(0.511699042934);
    msg.setSource(53313U);
    msg.setSourceEntity(15U);
    msg.setDestination(22734U);
    msg.setDestinationEntity(200U);
    msg.id = 208U;
    msg.width = 20654U;
    msg.height = 63764U;
    msg.widthstep = 61148U;
    msg.channels = 18U;
    msg.depth = 1U;
    msg.finaldata = 78U;
    const char tmp_msg_0[] = {42, 81, -126, -118, -90, 7, 123, -16, -46, 33, -98, -5, 70, 68, 86, -22, 125, -75, -102, 124, -79, 10, 97, -25, -33, 38, 110, 94, 100, 57, -51, -45, 124, -68, -100, -76, 32, -54, -116, -100, -12, -9, -31, -74, -67, -95, 110, 56, 94, 33, -6, -88, -109, 87, 97, 72, -97, 5, 37, -54, 49, 125, -86, -128, -126, -61, 67, -74, 61, -102, -37, -37, -104, 51, -82, -6, 52, 93, -120, 29, 91, 125, -47, -128, -88, -95, 111, 78, 74, -31};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VideoData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VideoData msg;
    msg.setTimeStamp(0.940099627642);
    msg.setSource(55925U);
    msg.setSourceEntity(38U);
    msg.setDestination(28007U);
    msg.setDestinationEntity(148U);
    msg.id = 214U;
    msg.width = 6610U;
    msg.height = 57207U;
    msg.widthstep = 49769U;
    msg.channels = 132U;
    msg.depth = 12U;
    msg.finaldata = 12U;
    const char tmp_msg_0[] = {-118, -122, 103, 124, 77, 48, -2, 57, -118, -95, 96, -80, 62, 114, -3, 78, -67, -28, -42, 67, -101, -37, 63, -123, -117, 55, 116, -84, 123, -47, 44, -84, -119, -5, -22, -119, -87, -103, -92, -113, 42, 71, -118, -54, 25, -2, 57, -78, -48, 50, -32, -82, -39, -7, -94, 91, -52, -16, -86, -23, 19, -35, 5, 84, 27, -115, 37, -118, 104, 71, -50, -77, -35, 11, -90, 16, -127, 74, 32, -120, -81, 35, -67, -105, 119, -68, -65, -63, 16, -84, -4, 74, 41, -83, -73, 62, 119, -75, -44, -1, -26, 26, -56, 102, -3, -110, 122, 85, 125, -56, 16, -35, 48, -21, 36, 66, 8, -32, -50, -70, 118, -41, 83, 48, 87, 82, 31, 83, 17, -87, 76, 22, -60, -71, -87, 11, 60, -115, -81, 58, -7, 81, 34, 119, 101, 58, -118, 51, -62, -94, 48, -113, -79, 37, 120, 80, 40, 33, 78, -28, -2, -24, 71, 90, -63, -103, 47, -19, -90, -117, 120, -86, 39, -105, 123, 92, -126, 87, 73, 98, 15, -9, -81, 124, -5, -102, -84, 122, -65, -98, 101, -100, 29, 44, 1, 53, -1, 86};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VideoData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VideoData msg;
    msg.setTimeStamp(0.711294827445);
    msg.setSource(41082U);
    msg.setSourceEntity(5U);
    msg.setDestination(63446U);
    msg.setDestinationEntity(55U);
    msg.id = 19U;
    msg.width = 24787U;
    msg.height = 51804U;
    msg.widthstep = 9359U;
    msg.channels = 77U;
    msg.depth = 81U;
    msg.finaldata = 49U;
    const char tmp_msg_0[] = {31, -72, 75, 37, -81, -21, -39, -71, -80, -111, 52, 75, -118, 8, 12, 71, -52, 59, -125, -11, -115, 108, -55, 126, -47, 12, -49, -94, 106, -62, -87, -67, -30, 53, -120, -12, 2, 78, -108, 43, -99, 30, -56, -115, 16, -34, -62, -108, -109, -99, -67, 43, 19, 101, 56, 75, -56, -62, -35, -68, 70, 84, -120, 91, -112, 93, -2, -42, 49, -100, -58, -53, 14, 98, 0, -26, 100, 55, 21, 42, 13, -63, -88, 9, 103, -31};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VideoData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RawImage msg;
    msg.setTimeStamp(0.726657711153);
    msg.setSource(2181U);
    msg.setSourceEntity(188U);
    msg.setDestination(18001U);
    msg.setDestinationEntity(61U);
    msg.width = 65432U;
    msg.height = 12298U;
    msg.channels = 58U;
    msg.depth = 132U;
    const char tmp_msg_0[] = {-36, 49, -111, 19, -30, -38, 42, -85, 25, 77, 20, 86, -3, -2, -47, 23, -35, -13, -75, -30, 83, 24, 61, 57, -50, 1, -124, 52, -29, -120, -108, -86, -71, -27, 82, -128, -99, -81, 22, -16, -102, -51, -98, 80, 114, -71, -99, -81, -1, -98, 54, 57, -49, -71, -47, 120, 9, 106, 25, -110, 88, -53, 30, -17, 41, -115, -53, -82, -70, 113, 115, 49, -85, 78, 93, 66, 7, 45, 18, -79, -119, -98, -98, -79, -59, 121, -84, -109, 120, -115, 35, 74, 54, -67, 23, 48, -29, 78, 118, -100, 112, -91, -100, -39, -103, -108, -39, 47, -128, 87, -16, -6, 108, 16, 81, -57, 45, -119, -26, -71, 63, -68, -19, -81};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RawImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RawImage msg;
    msg.setTimeStamp(0.288334477349);
    msg.setSource(51927U);
    msg.setSourceEntity(171U);
    msg.setDestination(6134U);
    msg.setDestinationEntity(90U);
    msg.width = 36684U;
    msg.height = 25975U;
    msg.channels = 184U;
    msg.depth = 65U;
    const char tmp_msg_0[] = {-4, -90, -96, -114, 60, 2, -121, -93, 0, -112, -90, -13, -63, -73, -77, -27, -118, 59, -96, -100, -46, -53, 16, 62, 6, -101, 69, -27, -123, 47, -16, 83, 101, 120, -71, 40, -64, -2, 60, 77, -27, 90, 112, 41, 30, 47, -125, 77, 51, -118, -90, 68, 24, -121, 17, 116, -14, -54, -85, 77, 78, 81, 37, -67, -6, 8, 79, 102, -81, -50, -84, 16, 49, -36, -32, 70, 49, -51, -7, -125, 50, -84, -78, -52, 48, 76, -20, 93, 77, 75, 32, 62, -48, 41, 73, 55, 26, 105, -127, -113, 118, 72, 42, 73, -111, -90, 110, -12, -20, -96, 83, -38, 85, 27, -89, -29, -79, 74, 4, -9, -5, 126, -24, -40, -95, -87, 95};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RawImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RawImage msg;
    msg.setTimeStamp(0.485998364342);
    msg.setSource(4262U);
    msg.setSourceEntity(146U);
    msg.setDestination(7410U);
    msg.setDestinationEntity(167U);
    msg.width = 51191U;
    msg.height = 12980U;
    msg.channels = 109U;
    msg.depth = 8U;
    const char tmp_msg_0[] = {-65, 100, -28, 65, 102, -116, -13, 69, 34, 79, -122, 72, 44, -90, -106, 27, 94, -75, 122, 26, 50, 56, -57, 125, -80, -35, -14, -70, 73, -122, 74, -119, 98, -116, -108, -108, -14, -66, -18, -53, 101, -38, 97, -125, -50, -128, -98};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RawImage #2", msg == *msg_d);
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
    msg.setTimeStamp(0.692950268387);
    msg.setSource(158U);
    msg.setSourceEntity(194U);
    msg.setDestination(37189U);
    msg.setDestinationEntity(4U);
    msg.frameid = 156U;
    const char tmp_msg_0[] = {43, 16, -7, 59, -47, 125, -42, 65, 50, 7, 33, 86, 125, 81, 62, -66, 17, 116, -127, -39, -74, -66, 112, -78, -121, 41, 55, 16, 49, 85, -30, -59, 71, 16, 13, 119, -101, -97, -45, 28, -127, 78, -43, -113, 33, -5, -86, -79, -89, -91, 0, 79, -39, 2, -81, -79, -91, 114, 92, 8, 48, 19, -97, 37, -78, 39, 39, 80, 94, -15, 70, 1, 78, 66, 97, 17, 3, 96, 30, 80, -34, 109, -67, 104, -124, -128, -57, 96, -19, -72, -112, -86, -83, -39, -54, -63, -89, -83, -128, -5, 67, 122, 116, 96, -2, -94, 35, -53, 34, 115, -115, -64, 40, -45, -66, -39, 47, 112, 72, 60, -97, 40, 101, 40, 55, -100, 40, -108, -122, -100, -118, 122, -115, 69, 115, -128, -36, 70, 1, 70, -20, 60, -95, 111, 111, 112, 67, 66, -95, -94, -91, 67, 121, 98, 48, 9, 47, 113, 23, 46, 72, 50, -38, -14, 21, 102, -101, 62, 99, -54, 53, -37, -92, 69, 106, -121, -18, -53, 110, -114, 34, -61, 0, -46, 49, 48, 35, 76, 50, -92, 25, -9, 34, -93, 36, -66, -60, -39};
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
    msg.setTimeStamp(0.483867980834);
    msg.setSource(54966U);
    msg.setSourceEntity(72U);
    msg.setDestination(63585U);
    msg.setDestinationEntity(46U);
    msg.frameid = 44U;
    const char tmp_msg_0[] = {-84, 20, 56, 113, 96, 44, 34, -124, 49, 124, 39, 108, 103, 94, 79, 26, -92, -114, 124, 25, -116, 54, 75, -125, 56, -56, 95, 31, -93, -28, 34, -38, -1, -101, 14, -65, -80, 125, 40, 65, 78, -51, 35, 58, -119, 13, 97, -74, 10, -73, -25, 88, -31, -87, -82, -90, 99, -78, -48, -38, 25, 122, 39, 37, 106, 37, -59, 124, -103, 106, -49, -56, 20, -103, -19, 79, -105, 123, 123, -21, 76, 33, 26, -38, -8, 59, 82, -45, -1, -14, -30, 55, 61, 49, 82, -109, 99, -44, 1, -127, -79, -116, -27, 103, 38, -87, 70, -56, 77, -114, 62, 62, -64, -82, -113, -63, -86, -5, -55, 80, 44, 46, -36, -49, -53, 39, -51, -65, 7, 42, -127, 44, -110, 76, 106, -74, -96, -66, -24, -3, 113, -104, 116, -104, 90, 75, -47, 110, -106};
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
    msg.setTimeStamp(0.495936005107);
    msg.setSource(42536U);
    msg.setSourceEntity(230U);
    msg.setDestination(30996U);
    msg.setDestinationEntity(254U);
    msg.frameid = 80U;
    const char tmp_msg_0[] = {-121, -79, -10, -18, 60, 57, -17, 58, 20, -12, -117, 6, -18, 80, -13, 26, -27, 51, 60, -8, 56, 104, 77, 107, 28, -28, -40, -99, 115, -90, -63, -44, 21, -86, 26, -89, -80, -117, -6, 117, 121, 123, 69, 111, -10, 62, 61, -105, -92, -31, 1, -106, -76, -109, 28, -113, -103, -25, 104, -56, 34};
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
    msg.setTimeStamp(0.684669922954);
    msg.setSource(1984U);
    msg.setSourceEntity(166U);
    msg.setDestination(55834U);
    msg.setDestinationEntity(220U);
    msg.fps = 101U;
    msg.quality = 113U;
    msg.reps = 214U;
    msg.tsize = 78U;

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
    msg.setTimeStamp(0.585008433087);
    msg.setSource(38844U);
    msg.setSourceEntity(158U);
    msg.setDestination(47830U);
    msg.setDestinationEntity(187U);
    msg.fps = 36U;
    msg.quality = 123U;
    msg.reps = 199U;
    msg.tsize = 143U;

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
    msg.setTimeStamp(0.52147285295);
    msg.setSource(33868U);
    msg.setSourceEntity(125U);
    msg.setDestination(5872U);
    msg.setDestinationEntity(6U);
    msg.fps = 130U;
    msg.quality = 108U;
    msg.reps = 154U;
    msg.tsize = 96U;

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
    msg.setTimeStamp(0.879988368991);
    msg.setSource(21935U);
    msg.setSourceEntity(72U);
    msg.setDestination(49379U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.390069917125;
    msg.lon = 0.313459915461;
    msg.depth = 226U;
    msg.speed = 0.853370052688;
    msg.psi = 0.859993443611;

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
    msg.setTimeStamp(0.217041720549);
    msg.setSource(49688U);
    msg.setSourceEntity(57U);
    msg.setDestination(47284U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.777789078899;
    msg.lon = 0.895462629308;
    msg.depth = 234U;
    msg.speed = 0.771321984868;
    msg.psi = 0.0182715653227;

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
    msg.setTimeStamp(0.285821151682);
    msg.setSource(22095U);
    msg.setSourceEntity(9U);
    msg.setDestination(14939U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.115475629193;
    msg.lon = 0.942507363867;
    msg.depth = 212U;
    msg.speed = 0.923532420055;
    msg.psi = 0.30504874995;

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
    msg.setTimeStamp(0.764414809582);
    msg.setSource(4746U);
    msg.setSourceEntity(78U);
    msg.setDestination(20823U);
    msg.setDestinationEntity(249U);
    msg.label.assign("QLOLCVRNPCQIAIJKZGYJEDVCIFZRUKXUKSLKWBQXBBVYUIEEVHIMWVDDIZTDBAZWHOWRQQWBMMGVFSWKMRQPXWPEEQBXUFFEFVNRSINCFJFBZCGGVLTGHUBEYYNPUGIL");
    msg.lat = 0.759178518153;
    msg.lon = 0.0790716991034;
    msg.z = 0.0551861192767;
    msg.z_units = 116U;
    msg.cog = 0.931814725075;
    msg.sog = 0.823035415406;

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
    msg.setTimeStamp(0.785216058253);
    msg.setSource(38421U);
    msg.setSourceEntity(87U);
    msg.setDestination(40810U);
    msg.setDestinationEntity(18U);
    msg.label.assign("VJPORWOHQEBYALARSKFFNQFLCACPJBFIVTHKMUCUNMJBLWMFPXIDHLUKJDAVUBERNWAUGLQRQJCLTVIHQMMLAFIOZIDVJYEFVGCXCGBMBGKSETAKCDEACJZRZTPGJQDZSYJKGFPWAPCRDYGDXHSQAGMHYW");
    msg.lat = 0.559572234084;
    msg.lon = 0.165548135512;
    msg.z = 0.229975865268;
    msg.z_units = 119U;
    msg.cog = 0.518162118262;
    msg.sog = 0.797082754852;

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
    msg.setTimeStamp(0.556629657742);
    msg.setSource(1763U);
    msg.setSourceEntity(157U);
    msg.setDestination(17236U);
    msg.setDestinationEntity(130U);
    msg.label.assign("YLBNSUNDOHIHUZMKNAKDWRWCBJIMVIZHQBQJLAVLUFVDPKLMZEHMREXCUJWSDOVLRFXTAOIGTLNKFVIUOXKAVRWSYTXUPEXKGZSENWPCOQHMCEUTLCXAEAYHFGYRKNHLN");
    msg.lat = 0.492861035876;
    msg.lon = 0.954811733129;
    msg.z = 0.523012679989;
    msg.z_units = 173U;
    msg.cog = 0.279862764353;
    msg.sog = 0.387322675547;

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
    msg.setTimeStamp(0.878158526932);
    msg.setSource(12268U);
    msg.setSourceEntity(142U);
    msg.setDestination(33988U);
    msg.setDestinationEntity(240U);
    msg.name.assign("VFKDDSBYLOPNWZMKOTIHGNFZAQIHZCTSHUXRFBLJKDJRBCRAFFWHMWOVYSPLQCHOCOWXREAJUGAXNSOEOYEMTCYHXAGDEETAAFUCJLIKGKVXSONYHXNTTZIQXBZSLBGFPBDXYLQUEPLZWRVXVIBCYAQNEWZ");
    msg.value.assign("LEZBUSQPZEYLIZUCVRKXGDODPOCSDNMXOTQBHHVVRNQPTPOGNSYLJIWYDGTWYJLZKERMWJEJALCEUHXDFGUQMATUUZJIGWFXTQSCLKORYHTZNGHSB");

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
    msg.setTimeStamp(0.675767742272);
    msg.setSource(20174U);
    msg.setSourceEntity(159U);
    msg.setDestination(1221U);
    msg.setDestinationEntity(89U);
    msg.name.assign("QHDMUVSPCGDKPQZUTZMRJNXOGPKNKTGGHDVEBABVGYSHZCLPZBCGJOMCLZIADQKWKWLDFISILEYEAEXBNVFBMPLRXDFTJEOSUQHHTOIAYFGWSWFJKVWVRWATXTAEQMYWCBMSZTWBGZLQNCVDAIEYEBQJXAOMSLHRNCQIDBIQORYCVJUEPNWUPZROXRUSSLZXRNGJGJUAZYPS");
    msg.value.assign("YDLOXUZAIMWAHFUIGYSPLIAGCJCFEBOBGERTLWXMSWGFMHBSCIXXSQJNMEZPCTYHWRVRVT");

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
    msg.setTimeStamp(0.0624658427841);
    msg.setSource(53783U);
    msg.setSourceEntity(246U);
    msg.setDestination(35506U);
    msg.setDestinationEntity(182U);
    msg.name.assign("UEKNLSLBSOABWUKVLPLRFBZHLICMWODKDICCVUAHSIPOQSSKOCNPKOWBJMYXMRGGZZJLXGZLTPQQDYHJWNAHJXROENYHUFQMJORQEIFEDVFIDWEJPLZMEBZEFSFQQBCMDTNUFBCATDKWPUVVFRXPFGNSKZTVXEIVAFJRHETYZHOYGGPNXDP");
    msg.value.assign("QNSCASFIIAYGGOMXUIUTZYNJJGVBXXAXTWIPTRYYLSVKRACQFYJDCEBQFGZHLZRUGEUVCDMLKOOAJAKTUDWNIRPDJHDCXTREXXOAQWUWNLKIWUHFQXPAKZTEPRCGABFEUHPZMENSHDVKREFHRQVSGZDBPNKYISHGFJVNBELODIVMIQWWMPJOTOALVCYZSCLTOLBMTFMYIPBSGTO");

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
    msg.setTimeStamp(0.272868735825);
    msg.setSource(27345U);
    msg.setSourceEntity(147U);
    msg.setDestination(1108U);
    msg.setDestinationEntity(155U);
    msg.name.assign("NVZMVRWFURXLMKBPUMZEGQQWRHJDPSQAYPNIXXJRBUVKOMECKYIMSCWIBDTHTHAXWRTKPVREIWLZVM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JWKROUUVRA");
    tmp_msg_0.value.assign("VOPOSJBSCCZNQUUEWNYSRSTQZNCRCBHMYCTBZMHRVVCZQQUJDTHUBOBWXIHEAXJBTAFXZRNNOLMPTAFHEJGOYADKNLGPPXUDYJRBUIGBVCXLWLM");
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
    msg.setTimeStamp(0.777235652946);
    msg.setSource(24930U);
    msg.setSourceEntity(251U);
    msg.setDestination(22197U);
    msg.setDestinationEntity(163U);
    msg.name.assign("QAVHXGNDUDVVRGGQDCJCKPSMXQMFDPFKDYJMSJCQOAWTMXD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CLRIRQDMPKVHYBZKQHIHYBWJCZSQLVRTIP");
    tmp_msg_0.value.assign("EPQUDFAQXYSBBCQZIVRNPWLSUENCKZVAYEVCSJLAHZIFISZCAXUANGCWLPGCNHTGBNVMQSTTHJAKYVPXMUCNNZOOWBMECOWDRWVXHEQZHVBPBVKYUZVAIYHYUYRXPDAUIBRMXJMFKBTEYQPOKWJSHVRMTSXTLQDWLJDTDPMFIFFFLRHOLKRIXQRUTOUPHOMWXKIRMTMGKGAPJDKSINOZDCDL");
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
    msg.setTimeStamp(0.285939600016);
    msg.setSource(2841U);
    msg.setSourceEntity(88U);
    msg.setDestination(42032U);
    msg.setDestinationEntity(189U);
    msg.name.assign("VAIFIYWYMRZRXANOUWURYHQZSBKAKDPXVQRWWKANJTYTDOGAFAKOCMILSBVVFH");

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
    msg.setTimeStamp(0.201297667881);
    msg.setSource(47475U);
    msg.setSourceEntity(6U);
    msg.setDestination(15224U);
    msg.setDestinationEntity(142U);
    msg.name.assign("URVLJWAILOZJYPAYCRCWZREAKATCWRTOBZJHLKFQMHBXUVBVALDNOSPDSBOQOYXHCZWUVQGUDTDCHEGLOMXAFUWFGQTOETSLQYIDDXVINNPRPJGJWQDSROTALXVRBXCYAHPSPMEEKWATMUNYFSSEZDQPXDGKZKBCIOKMXIFNNUEFRCSHJONJIGVWQUHUBCBFALCMEJYLMTBGSRIIGNMDVZKVNXFJKGWZZPTVUYQEKHELPMJZ");
    msg.visibility.assign("UVVFMDBJYMDKEXWZZEOPKGWJBQKRIVGBAMPWONXOKPFXCASKAYAKPTEUTBMUNNSZXTWPDIOKXCQDUUMIFQMURAOVGQVRHLCECWSTFXQRAZYNLDWLDPOQQYVCQLYIUNCYLGHYFEOIKHAJNGFHYHHXWPNBXJJENSPRSBDGIRYMWUSMSBTBQATEVXWDOMSFTFTJKQDHUIPJLEGGCIZRGHJJRSCYA");
    msg.scope.assign("RSLAOZJICAITRIIJ");

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
    msg.setTimeStamp(0.580466339595);
    msg.setSource(35047U);
    msg.setSourceEntity(135U);
    msg.setDestination(1690U);
    msg.setDestinationEntity(235U);
    msg.name.assign("DPFXRMJUSSHRZQUVCCPAOUTVWDMUFYROQAWKZOZHNIUZXPVFYHFJQCLBWRYFWDFSLCWBDKPMNXHSTSMVABYKPVRPZRTIGCLMANQJULHABLOSZGTCINPRBWJZXUNFFQMEYFTOPZGHNIADMDCKRJGTDXRBIHMJEDOYEHWMYXWWGTXECPIYKESZJVHVLUEGGBXEQDTGIBYNJGELOEN");
    msg.visibility.assign("TXYXCPKWMUQRWTD");
    msg.scope.assign("OFTBPUTQWAQAZGFRKHLDUMUDSCRLUCOGVJZHFEUSKSDJRBJNTYPYWMXWDQMZNJSTPDHGVEEDQLAQIWOREPETRQCYBKTF");

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
    msg.setTimeStamp(0.632735264108);
    msg.setSource(37908U);
    msg.setSourceEntity(152U);
    msg.setDestination(20005U);
    msg.setDestinationEntity(47U);
    msg.name.assign("EAFPRPVOOTBJUATGFDXSARHBXIMBVRQELUCLXTDTKFDHWLDCFYTSUIXGNHVNCLSIZECHMKYPNNGDXREUPSYUDBZLKOREKVWLPHEGWAZWIJFODFJPOUWFIXBGIQ");
    msg.visibility.assign("LAJQYRYOXVKDGFNLSODCQWGIGXEKXFIIUFHOKWPOZCZJBCTMBRUGVEHMXIKVHIDSWJ");
    msg.scope.assign("UOFUKIFCOABRJRUABHMIDADFGMDXKSBPZVHWIYOYFYXCKZRKGLGMCQZWEHEHSODSLKDGVTDICXJBCTPFLIXDMZPUVVIQQZNTWDXLSQTKAEOFMLOTEEGWAFWQAOYSVGTLRHZOGTHNUPIHEWBVWKQDMARYMIBNCCRSS");

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
    msg.setTimeStamp(0.118197514585);
    msg.setSource(43167U);
    msg.setSourceEntity(209U);
    msg.setDestination(33717U);
    msg.setDestinationEntity(9U);
    msg.name.assign("SVEZPDPQUIXHWJRGPRXAVLRUPUXOCTTGGVFZEPSYYWBULHTEOCRRGNRZDZMDWMAHHTKQKGYZSYPJXJVQGRISRSMMANSMULTAXRIZDWIFCELFNPYDBBSLVQJBFVUGETOCFSAUYYXVJQNKOGQNEFAVYPMLJQHJBFLKWDZHEASCLW");

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
    msg.setTimeStamp(0.016931079972);
    msg.setSource(38767U);
    msg.setSourceEntity(65U);
    msg.setDestination(24005U);
    msg.setDestinationEntity(75U);
    msg.name.assign("QWSCCHPANRUZBGQGFUUYWXSJOFZF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EVWOJYUGLVHXUYUYUNCBFODMVBXNDINCAGGSMTLPXYENCIOAWXMVJFURNNOCASBXUCYQSZBLQDMZIDRFXWIVRKOOHEBMAPNPPYTDVKVTRWZRCYZMGBXHGJAGCIMJMAHXXWDHCKSRTPTDEEVCKSREQBWGBJPNHZFDHWCUILTKYAO");
    tmp_msg_0.value.assign("SVVXWCLNUDVYZYHKHVOXFEEIJCXTAJHKJKENWRJGCNHCETJSGOIQBZLSATCNXOGIVOKZUNICAJADOMMTUSMNUWTFRLEWQPLTXCVGDBGVXKCNDRQFXBEUGJGQYLTPHAALEBNJLZPCUZDIEFZQQKYMSBSQZNPXIMRWCOMFEFLBRMPI");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.763335874674);
    msg.setSource(65380U);
    msg.setSourceEntity(148U);
    msg.setDestination(49595U);
    msg.setDestinationEntity(13U);
    msg.name.assign("SDRGPYQGTRBKSDDJM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WQURVTKDOCYJAJFRGZGIEOOHUQNMKVKTNRVKXZCBJDTHWCLWQCDRDAVSONLIYBPRMFMPDEQOKUCXYJTFUKHAEFUZDVSZMIWGPHDYGHNBGMNULAKEJYBMQPSBMFGXZQQPXCTIXPYHIBYSBSSFJGFNEFMRIDPZVAFUJANCOKOETVTEOYQXLOQGKAXEWAZWHUGRIYVLRSJCHG");
    tmp_msg_0.value.assign("YBMDWQGHSLBWTCNLLMZZTGNWDEHUCEPFNXIFPUUDMURYSCTECRMWGQAAQUEUKAHXTKQVFGOLKYXDFMJZRYZL");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.458931629403);
    msg.setSource(29148U);
    msg.setSourceEntity(163U);
    msg.setDestination(33851U);
    msg.setDestinationEntity(181U);
    msg.name.assign("BXMNAPMZEUZCHDHAURGHZYUNKPXBJAUGTLLSEKTRVAUMVYCTJSJTFBOAOAOGLPZQJEVJUIWNUKROZLPRSFBIDGGXNRLCYQLEYYKKQPVKUXTKJBGQALYDRZFHWAJVGKDXNLXBPSCDWVPOFURFHPDPCYSCWMIPIHRQIXEMOBREVMZHLNDICMCTXEOGQYVIMSZDTVWFOHTBTWIYMNBFXWFIEFNVFWCWKQQAOJZZU");

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
    msg.setTimeStamp(0.318812683745);
    msg.setSource(46607U);
    msg.setSourceEntity(111U);
    msg.setDestination(38200U);
    msg.setDestinationEntity(130U);
    msg.name.assign("GVTTLLICLSVKIZVHLHGHRIWASZGVEYBONWXTFBCTSHENUPIJJWJZPBGHADOFZQCSLPGJNYPVTBKBSYMMQIJXFNDZXQEMAFWXBUYLOXIAWGTDMRMOBRGELWQZDLEAXPHWAMDXHUUACXKIOIJTJQXRQBYHCFSRUUKUVGAKLNRPQNKPNNCKKCSPJSDRFDVZEETHBJFDUOXTBYCOQMOMNZNWSZVIGSCJLDAH");

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
    msg.setTimeStamp(0.114866086366);
    msg.setSource(41901U);
    msg.setSourceEntity(52U);
    msg.setDestination(1297U);
    msg.setDestinationEntity(124U);
    msg.name.assign("MNBJIUZDQHXLWAJFA");

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
    msg.setTimeStamp(0.851225919536);
    msg.setSource(44033U);
    msg.setSourceEntity(221U);
    msg.setDestination(31953U);
    msg.setDestinationEntity(151U);
    msg.timeout = 28022891U;

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
    msg.setTimeStamp(0.360800360023);
    msg.setSource(127U);
    msg.setSourceEntity(189U);
    msg.setDestination(45090U);
    msg.setDestinationEntity(119U);
    msg.timeout = 244896364U;

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
    msg.setTimeStamp(0.614928364801);
    msg.setSource(60800U);
    msg.setSourceEntity(126U);
    msg.setDestination(27472U);
    msg.setDestinationEntity(116U);
    msg.timeout = 2449223201U;

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
    msg.setTimeStamp(0.408676543835);
    msg.setSource(5487U);
    msg.setSourceEntity(216U);
    msg.setDestination(41575U);
    msg.setDestinationEntity(210U);
    msg.sessid = 1046934995U;

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
    msg.setTimeStamp(0.751272803945);
    msg.setSource(49275U);
    msg.setSourceEntity(187U);
    msg.setDestination(42726U);
    msg.setDestinationEntity(191U);
    msg.sessid = 1294796381U;

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
    msg.setTimeStamp(0.254718423413);
    msg.setSource(19215U);
    msg.setSourceEntity(97U);
    msg.setDestination(4475U);
    msg.setDestinationEntity(34U);
    msg.sessid = 680767235U;

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
    msg.setTimeStamp(0.17984894287);
    msg.setSource(40150U);
    msg.setSourceEntity(19U);
    msg.setDestination(39317U);
    msg.setDestinationEntity(157U);
    msg.sessid = 2095841341U;
    msg.messages.assign("OAKRENRKHMKHNIHKOYXUBLZSLPIDJZQYHJMGJRLBVSVUXYQFXMMPB");

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
    msg.setTimeStamp(0.801522784444);
    msg.setSource(59913U);
    msg.setSourceEntity(93U);
    msg.setDestination(1785U);
    msg.setDestinationEntity(135U);
    msg.sessid = 3893910611U;
    msg.messages.assign("CZIXWQQEPXICEHOMYZJANQLEIUUUZULCSOKXPSHYTOIIJUTKUIDGMVMJRSMIRMVCNWXYBZNHLJJOTHEFRGXTFBHWZTOETVNBIAIOHPSRFUAJTEKCNEGQWYNYBGPBCLKJGTDDBSCHQNPYAP");

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
    msg.setTimeStamp(0.0966730538733);
    msg.setSource(26525U);
    msg.setSourceEntity(46U);
    msg.setDestination(37009U);
    msg.setDestinationEntity(221U);
    msg.sessid = 779044672U;
    msg.messages.assign("JTFORXUCNKXHZUKXHBUXGBLIUQKDWQCSSZUADDOLJUZNEKHGQETPNUVQVBHIDXPECGIMXFNDEZEGLZAEKQLGWMYIOEUDYZPVITKXAGYRMYPXRLNTTMXRRESFATTYGUEHCWBVCWSPYJWYS");

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
    msg.setTimeStamp(0.944561214005);
    msg.setSource(34888U);
    msg.setSourceEntity(106U);
    msg.setDestination(36558U);
    msg.setDestinationEntity(225U);
    msg.sessid = 535509473U;

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
    msg.setTimeStamp(0.0595517338798);
    msg.setSource(41578U);
    msg.setSourceEntity(226U);
    msg.setDestination(33546U);
    msg.setDestinationEntity(52U);
    msg.sessid = 1794593602U;

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
    msg.setTimeStamp(0.469055067797);
    msg.setSource(12066U);
    msg.setSourceEntity(131U);
    msg.setDestination(163U);
    msg.setDestinationEntity(213U);
    msg.sessid = 3558194261U;

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
    msg.setTimeStamp(0.83213930581);
    msg.setSource(40723U);
    msg.setSourceEntity(242U);
    msg.setDestination(50946U);
    msg.setDestinationEntity(61U);
    msg.sessid = 3780889754U;
    msg.status = 59U;

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
    msg.setTimeStamp(0.0176646164583);
    msg.setSource(65152U);
    msg.setSourceEntity(229U);
    msg.setDestination(15801U);
    msg.setDestinationEntity(107U);
    msg.sessid = 52870177U;
    msg.status = 207U;

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
    msg.setTimeStamp(0.654448346372);
    msg.setSource(11177U);
    msg.setSourceEntity(217U);
    msg.setDestination(40835U);
    msg.setDestinationEntity(15U);
    msg.sessid = 1316647974U;
    msg.status = 82U;

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
    msg.setTimeStamp(0.664777607347);
    msg.setSource(61612U);
    msg.setSourceEntity(87U);
    msg.setDestination(49947U);
    msg.setDestinationEntity(241U);
    msg.name.assign("ZYVIPDSYQUOCJKDQBVTTKUWJH");

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
    msg.setTimeStamp(0.718743596881);
    msg.setSource(33140U);
    msg.setSourceEntity(38U);
    msg.setDestination(944U);
    msg.setDestinationEntity(2U);
    msg.name.assign("ISBJWKHGHEGLVQFLCDVPJPFOSXOSAELNEDBURIEKJAWPZWEGTOXQKHWITANQIMJZWAJHHUJGTTNTFPZOKANBEECRNCVYUPPRSGPHMLNCILIDSKFDQYEDKMCZZSHWLYFYROFGDAZIMYMOLDQIZSAHOHWWMXMLEDYCXCMPEFVVRZBOJBYAFBJTTRNSTBCGUJZSROCUAQQRVBYKGFVQDGUUWLPO");

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
    msg.setTimeStamp(0.181962756571);
    msg.setSource(12036U);
    msg.setSourceEntity(15U);
    msg.setDestination(46341U);
    msg.setDestinationEntity(37U);
    msg.name.assign("YHCURXKRDOVVSIWNUCYTJCAQQVYYMCOHWBCVBRCBIJTESPDTYFSAGBUIXFHKNTFGLEFNWUHNKOCPDMBKWKMMEJNPAOGIFXXLMEFSNYBJIKBLVNSJJKAXLYGRLAIUQFJHGMWGZSPBRSMTXHGZHPREQPZVSPTZNEHQADOWWKCROSJWHRNWK");

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
    msg.setTimeStamp(0.793126945128);
    msg.setSource(37095U);
    msg.setSourceEntity(114U);
    msg.setDestination(1290U);
    msg.setDestinationEntity(43U);
    msg.name.assign("AZSKAWKVWATIOCDPOYNLAETXBNZGFWUPHVDIQY");

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
    msg.setTimeStamp(0.0910197167661);
    msg.setSource(44117U);
    msg.setSourceEntity(183U);
    msg.setDestination(6675U);
    msg.setDestinationEntity(44U);
    msg.name.assign("MZDTAQGXPVNRTCIRPJBDUNVHDIDMAZJHNFL");

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
    msg.setTimeStamp(0.0524629712879);
    msg.setSource(11547U);
    msg.setSourceEntity(24U);
    msg.setDestination(37117U);
    msg.setDestinationEntity(225U);
    msg.name.assign("YJXPMHMHBWRIAMLRKUJAWNEQNCUPEJYU");

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
    msg.setTimeStamp(0.606828957557);
    msg.setSource(4196U);
    msg.setSourceEntity(74U);
    msg.setDestination(41360U);
    msg.setDestinationEntity(128U);
    msg.type = 194U;
    msg.error.assign("CGRYQSTNKCGMZHHCERGHHRFUJIBYXREAFMNNPOSQLDZFFISZFQUBMXZDOGPJISUBKKQLVWBHODVMIJDZJYPTPLGBHSPNUVVKECYTZCWXAUTVWKRTQVRWYQAEWWXXGNWAPHBVMBVMJXGLCQDEYSIBSOKLWLRLVQFLYDOJBHOQCERQKRNXFWYESBTDEZOZIOAIHTUXCMMCZU");

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
    msg.setTimeStamp(0.379867226304);
    msg.setSource(6431U);
    msg.setSourceEntity(248U);
    msg.setDestination(63035U);
    msg.setDestinationEntity(53U);
    msg.type = 51U;
    msg.error.assign("QTKQUFLNTKNEOPXKDMEAGWZGWWITLFRQARJFSZVKXDXOCHNFZMVHHWRHBAXOOJACMBGZMUSUQEBLWYWUPGPJAEGDCMYJSZIIAVMHDLEFJSHNPWDCBVBFHOMFGKIRNESKCZHYSNRUMTTVXDIVLCTPETDNYSQAPOFRYQLGPUKDYYOAZQUCRBNZWQAVIUSBKFPRSYJKCJMWRDXXYXAIVPLWQJEIZXCBOGLZIHDETJIEOBJMFLHNGNLUVYROQBXTU");

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
    msg.setTimeStamp(0.188134573531);
    msg.setSource(17289U);
    msg.setSourceEntity(56U);
    msg.setDestination(33699U);
    msg.setDestinationEntity(173U);
    msg.type = 172U;
    msg.error.assign("PNSBCOSHTHYYWNAVUTVKXNSHZIHOZZRWTIBSCIZYFFCAPYKOSSARPDUQBTCPNOOVDBTFVRMENCVRLKEDNKLGOEQJHEGWWBIABQMEJQPYDYFMZVJRWZMLJUTIGXMGIFZAULXXNSLMYWDGCACYUQOESMPLTLBMGVJA");

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
    msg.setTimeStamp(0.249048819586);
    msg.setSource(8238U);
    msg.setSourceEntity(109U);
    msg.setDestination(54019U);
    msg.setDestinationEntity(14U);
    msg.seq = 17577U;
    msg.sys_dst.assign("RGVXADJHLZTOWACJXKOUBIWQSBYX");
    msg.flags = 61U;
    const char tmp_msg_0[] = {-33, 57, -71, 80, 36, -31, 36, 106, -68, -100, -73, 94, -72, 35, -112, 99, -68, -76, -48, 63, 101, 105, -43, 4, 124, 19, 125, 65, 72, 75, -26, -45, 45, 3, -100, 122, 67, -110, -69, 56, 6, -118, 93, 95, -80, 81, 18, 114, 9, 53, -85, 48, 45, 14, -30, 42, -15, 6, 107, 18, -63, 96, -113, 113, 99, -17, -28, -30, -86, -34, 41, 7, 35, -98, -38, -118, 90, 96, -44, 113, -71, 120, 119, -78, -100, 104, 111, 50, -36, 25, 34, 106, 58, 26, 111, -32, 39, -19, -53, 12, -112, -67, 121, 21, 25, -115, -86, -29, -51, -35, 2, 91, 3, 111, 108, -85, -118, -53, 85, 28, -22, 31, -76, 80, 124, -9, 43, -75, 60, -65, -21, -92, -67, -105, 72, -25, -69, 9, -126, 24, 115, 55, 43, 73, -109, -4, 15, -11, -4, 110, 17, -31, -93, -62, 50, 117, 1, 3, -32, 110, -22, -26, -25, -63, -46, -53, -11, 43, 85, 91, -104, 2, -119};
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
    msg.setTimeStamp(0.869025183969);
    msg.setSource(49746U);
    msg.setSourceEntity(239U);
    msg.setDestination(62592U);
    msg.setDestinationEntity(36U);
    msg.seq = 7060U;
    msg.sys_dst.assign("RGUMJTOJTVZMLRDJGUXACDIZWLGVQAEOYWTEFAEYOPWVGNOFZLVAXDJMB");
    msg.flags = 90U;
    const char tmp_msg_0[] = {-122, -46, 17, -90, -17, 30, 2, -103, 104, 124, -17, -53, 77, -91, -32, -3, -73, 84, 73, -72, 13, 0, 14, 33, -67, 13, 17, 48, -43, -70, 116, 23, -96, -83, -68, -108, -2, 70, 23, -50, -86, 26, -11, 115, -105, -6, 21, -52, -56, -107, -96, 82, 29, -86, -89, -42, -78, 54, -76, 3, 47, -62, -94, 0, -23, 64, -101, 116, 87, -47, 0, 120, 105, -94, 60, 25, -61, -87, 5, 73, 60, 92, 110, 63, 118, -45, 107, -48, 65, -101, 62, -27, -121, 91, -14, -53, -80, 124, -4, -47, 64, 79, 16, 110, -123, 78, 89, 16, -41, 64, 32, -121, -48, 18, -98, 53, -56, 38, 57, 101, 63, 1};
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
    msg.setTimeStamp(0.032076596297);
    msg.setSource(44605U);
    msg.setSourceEntity(202U);
    msg.setDestination(29962U);
    msg.setDestinationEntity(84U);
    msg.seq = 56702U;
    msg.sys_dst.assign("NJHACJJJUUNBJQOHYGXCXLMBPFZZVGVOXGLEWZFVMSAWIGXFPHVEYXQUZTWLXIQTMNNBQFKIMHDMWVDHZYMQZBSWESJUXWSUKQCAGVVSI");
    msg.flags = 140U;
    const char tmp_msg_0[] = {118, 47, 115, 84, -20, 10, -53, 21, 7, 45, 77, -44, 14, 106, -33, -102, -93, 78, 87, 50, 74, -107, -123, -45, 55, -32, 17, -30, 37, -88, 81, -107, -50, 82, 100, 64, 78, 116, -82, 24, 44, 98, -120, -126, 38, 49, -38, 33, 24, -78, -101, 73, 47, 73, 101, -62, -102, 38, -73, 71, -13, 124, 62, 0, -93, 60, 36, -62, -88, -122, -25, -83, -107, 69, -7, -2, -29, 88, -30, -93, -1, -113, 97, 55, -92, 18, 6, -116, -50, 29, 4, -52, -11, 43, -111, -56, 60, 122, 66, -78, -109, -87, -128, -48, -95, 21, 8, 28, 88, 42, 77, -41};
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
    msg.setTimeStamp(0.0107167606875);
    msg.setSource(59261U);
    msg.setSourceEntity(119U);
    msg.setDestination(30446U);
    msg.setDestinationEntity(209U);
    msg.sys_src.assign("CWMDHZMIXCORAQPUHLKMAFQJYYRIZGIRZQWCQDSBPKQOB");
    msg.sys_dst.assign("HEIFKMZYDYNEKUVUGRWPBUITHLZDQNKHLZYJWAWDPQQILFFPNGORCFCWVYBWRLGCOPWIWXUBKBSXMSNMQOFGSUBATNAPHSCZVXRJBMECXPJE");
    msg.flags = 147U;
    const char tmp_msg_0[] = {-85, 86, 76, -64, 77, -5, -24, -109, 48, -106, -20, -52, 95, -80, 108, -43, -32, 85, 3, 43, -114, 101, -85, -101, 78, -31, 12, 40, 54};
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
    msg.setTimeStamp(0.405529386053);
    msg.setSource(4534U);
    msg.setSourceEntity(79U);
    msg.setDestination(24986U);
    msg.setDestinationEntity(128U);
    msg.sys_src.assign("IOVNJHWGXTUWKAGMLSMPPISCBWFCHMDLUCGZTIOLDYTLVJISQFNYLUOYUFZMCSMHFWCRBOQIYJQATAVTPRKFFWNHRNVWSERVAOVLBDJUPBFNNZJMJIEQMZIYYTRMCRTGBJGDHGBRGAQHYMLGZJLOQZAWEHFXXNOXPKMZUFAPYTPNDDEZYKBRUVXZDCHZEQVGCIKEWUGOVHKJCEDQDASKUFUXIPKXWYPLEEIQBOOHSTAJXPBSNWBTCSXREKXL");
    msg.sys_dst.assign("JUYDMSYQMLYGKPNSCDORRHXCYLFUAWPDCFBBYDKUJSAABLBDNVEIXWTSCMCNQSPEFZZJTYGQRCEQWGNUROTIPTLADNTFJPJEKPHFGBHGSEVTGWLIXHLXGFMKPJDNHLAENMHIMIFPRXZZDUEWNCIUXQVSTFNXCOAWJBDRPXIIJHOXKIOYKPVUVQUQK");
    msg.flags = 208U;
    const char tmp_msg_0[] = {-37, -19, 104, -10, 78, 99, 115, -16, -6, 107, -82, -38, -82, 84, -122, -110, 77, 88, -92, 12, 3, -15, -56, -60, 29, -87, 68, -85, 40, 121, 20, 61, 5, -83, -59, 47, -89, -58, 48, 102, 56, 19, 96, 4, 56, 102, 83, 85, -48, 124, 112, -79, 1, 103, 48, -68, -127, -23, -36, -46, -53, -20, 16, -1, 123, -61, -62, 50, 50, 61, -62, 64, -70, 57, 119, 126, -39, -120, 64, 58, -67, 28, -47, 52, -117, 91, -88, -61, 0, 94, -24, -6, -92, -118, 10, -33, -14, 90, 4, -95, -115, 126, 64, 125, -32, 96, 115, 43, 111, -103, 55, -105, 93, -56, -43, 112, -42, -41, -114, -90, -64, -60, 18, 58, 101, 63, -87, 55, 60, 117, 62, -118, -37, -46, -102, 0, -115, -74, -76, -28, 120, 103, -114, 120, -102, -122, 113, 49, -79, -123, 87, -58, -20, 98, -50, -12, -25, -28, 121, -14, -15, 78, 73, -87, 60};
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
    msg.setTimeStamp(0.86078196274);
    msg.setSource(1502U);
    msg.setSourceEntity(11U);
    msg.setDestination(19715U);
    msg.setDestinationEntity(54U);
    msg.sys_src.assign("CTXMZFPKOZMPBZNLPBSYBKWIGLHQQAOHPKMMNLLHOLTDQWPWLVYBCRYHWCBUOXSJWSZOSHXVZFVEETJGUVBDLEZYRMPSNIDXINFZWMKMRJTGCWCYOVUYFGNBNRXCPQRVSPCJRUUUGBEFA");
    msg.sys_dst.assign("SRZGMBPKHFXQAMIQIRFFMZRPGLBFROVPNMLVGSNNTRZNJYDAVWEPJVIIKHYUTDHJJVAETINLXQJKDAJDICFSLXHQPZDKLJDFRHBWXBVBSKQXHVZQR");
    msg.flags = 105U;
    const char tmp_msg_0[] = {2, -103, -67, 82, 110, 92, -88, 43, -21, -43, 12, -66, 46, -77, 67, -86, -33, -36, 118, 17, -29, 36, 51, -81, 108, 22, -13, 114, 60, -67, 3, 3, 40, -59, 91, -30, -98, 84, 124, 92, 22, 12, -27, 9, 20, -122, 29, -85, -57, 5, -51, -125, 103, -52, 83, 24, 67, -71, -101, -24, -13, 51, 24, 7, -79, -94, 32, -59, -89, -30, 63, -2, -39, -75, -26, -51, -100, 56, 100, -97, -83, 72, -115, 109, -78, -35, -21, -27, -62, 28, -43, -30, 59, 24, 85, -2, -67, -34, 24, -40, -96, 29, -19, 61, 54, 61, 34, -50, 85, -53, -125, 69, -20, -74, 5, -49, -98, 61, 86, -69, -48, -11, 79, 68, 100, -59, 68, -43, -82, 31, -18, -74, -123, -52, 45, 16, -104, 53, -98, -49, 111, -110, -34, 67, -97, -41, -46, 95, 85, -63, 83};
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
    msg.setTimeStamp(0.0682549185251);
    msg.setSource(49869U);
    msg.setSourceEntity(238U);
    msg.setDestination(53065U);
    msg.setDestinationEntity(38U);
    msg.seq = 19092U;
    msg.value = 81U;
    msg.error.assign("QIEVJTVOGLNDKLFDZOFMDSFNGEKHGMNNZEMFFWIPHPOPCZOHLKLREIOODPSQCAGKLHRBTGEOESAWAXQKAHEHYKSUYTVJCCAITUSHPPBWQYTXJQRZHBNJCMFXBCLRDDYGSUWDMIVJUVZKJUTAPYACIERUHVXZYDSCXFTYBZWWTMUWIMZRMZYRJULCDFQLHBRBVUBPJPENSVIOGMMLXVTBPKYDAOAQGGXJKGYIASQJBWLWCXOIQNEU");

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
    msg.setTimeStamp(0.567583177211);
    msg.setSource(21271U);
    msg.setSourceEntity(17U);
    msg.setDestination(61612U);
    msg.setDestinationEntity(4U);
    msg.seq = 35056U;
    msg.value = 214U;
    msg.error.assign("ERVGDRUBVKMAOMJTFOIYMQDGOXXEPEVJFUXFMGEHPZNHAJIZXSZWGDSQTXSOYWSXUWVNQRCZOGMXBFLXAGRA");

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
    msg.setTimeStamp(0.223632065926);
    msg.setSource(22702U);
    msg.setSourceEntity(102U);
    msg.setDestination(45933U);
    msg.setDestinationEntity(60U);
    msg.seq = 54477U;
    msg.value = 20U;
    msg.error.assign("ZJUCDHZQVUHBLPQUAXILSHYWOBISEHPZT");

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
    msg.setTimeStamp(0.800668310994);
    msg.setSource(1392U);
    msg.setSourceEntity(199U);
    msg.setDestination(19307U);
    msg.setDestinationEntity(133U);
    msg.seq = 54253U;
    msg.sys.assign("NWCKPWJDHAJKKRKGIWCNTUHAPPLDMVHSCFPGMXCIVCGSTYIQMCWQEWHJSVTALABANJUHAXTMGXUDYMNXHBPIKPCHYMNRNVRQLADLBVLSDIWMLEBUWBBPSIDCZXCZZOBLUYVBJKZUOEUXMZJTTKZGIJDHOIPZQUOYRHEWKFDFLQCSRTORQXTQSELOYBHOEUYXPFYAEDZQGIVMNKJXOAVGWNKNQPEYGSTRBSG");
    msg.value = 0.501881941838;

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
    msg.setTimeStamp(0.0194093728817);
    msg.setSource(17343U);
    msg.setSourceEntity(151U);
    msg.setDestination(3340U);
    msg.setDestinationEntity(94U);
    msg.seq = 13561U;
    msg.sys.assign("HEVPHRIGEPQBCFIMAFURWKIYLV");
    msg.value = 0.301248326724;

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
    msg.setTimeStamp(0.242270322633);
    msg.setSource(54488U);
    msg.setSourceEntity(254U);
    msg.setDestination(30285U);
    msg.setDestinationEntity(238U);
    msg.seq = 42677U;
    msg.sys.assign("HRDIAHJRIVTZUWFAZQFBLMQKVJOWXMPYOTYSKHJMZUUESUZXENGGJMBKBPSXLTLNXAEPDTWBIFZRCNZFGEPNHMDBXTJIAPJMNRYEVGGGCDACYLRJCHKPFZWBDPMTWTKSHHOIKUPUGQVIKRVNFQOGOWVUFXUWOJOQEQCOYSAPQSISQEDMZZADEAWKBTWJSYGLVBPHSKNWCUQZOUYFCFMHDYCNXBXIIOLBXXLRF");
    msg.value = 0.779590836339;

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
    msg.setTimeStamp(0.788891313751);
    msg.setSource(11998U);
    msg.setSourceEntity(125U);
    msg.setDestination(5442U);
    msg.setDestinationEntity(54U);
    msg.action = 95U;
    msg.longain = 0.325580564351;
    msg.latgain = 0.319323480488;
    msg.bondthick = 604900582U;
    msg.leadgain = 0.967256348572;
    msg.deconflgain = 0.456481945876;

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
    msg.setTimeStamp(0.802731043475);
    msg.setSource(30309U);
    msg.setSourceEntity(116U);
    msg.setDestination(49512U);
    msg.setDestinationEntity(155U);
    msg.action = 165U;
    msg.longain = 0.464506546454;
    msg.latgain = 0.976345190741;
    msg.bondthick = 715743900U;
    msg.leadgain = 0.37054679814;
    msg.deconflgain = 0.869671682667;

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
    msg.setTimeStamp(0.0957546949966);
    msg.setSource(16708U);
    msg.setSourceEntity(28U);
    msg.setDestination(56234U);
    msg.setDestinationEntity(208U);
    msg.action = 88U;
    msg.longain = 0.893326973493;
    msg.latgain = 0.313754514911;
    msg.bondthick = 3922444107U;
    msg.leadgain = 0.590540257997;
    msg.deconflgain = 0.670234923977;

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
    msg.setTimeStamp(0.379050006022);
    msg.setSource(1453U);
    msg.setSourceEntity(194U);
    msg.setDestination(10746U);
    msg.setDestinationEntity(249U);
    msg.err_mean = 0.741332818758;
    msg.dist_min_abs = 0.240747100875;
    msg.dist_min_mean = 0.791733200045;

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
    msg.setTimeStamp(0.613720729088);
    msg.setSource(20976U);
    msg.setSourceEntity(161U);
    msg.setDestination(53813U);
    msg.setDestinationEntity(27U);
    msg.err_mean = 0.0621979824383;
    msg.dist_min_abs = 0.0791472506693;
    msg.dist_min_mean = 0.2359867166;

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
    msg.setTimeStamp(0.512071899512);
    msg.setSource(45450U);
    msg.setSourceEntity(118U);
    msg.setDestination(63633U);
    msg.setDestinationEntity(145U);
    msg.err_mean = 0.922057848778;
    msg.dist_min_abs = 0.409891291171;
    msg.dist_min_mean = 0.476309680451;

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
    msg.setTimeStamp(0.375153354434);
    msg.setSource(26022U);
    msg.setSourceEntity(137U);
    msg.setDestination(46867U);
    msg.setDestinationEntity(60U);
    msg.uid = 18U;
    msg.frag_number = 138U;
    msg.num_frags = 33U;
    const char tmp_msg_0[] = {-34, 41, 54, -108, -35, 114, -77, -82, 105, 34, 108, 49, -54, 114, 87, -11, -91, 24, -83, 73, 97, 2, 60, 57, -111, -107, 92, -13, 32, -45, -10, -109, 120, -110, 73, -65, 30, -44, 5, 89, -88, 123, -98, -121, 85, 94, -68, -110, 108, 90, -20, -47, 17, -78, 107, 80, -50, -118, 65, -33, -78, 57, 115, -92, -108, -110, -17, -102, 60, 75, 10, -50, 77, -77, -18, -105, 19, 98, -120, -20, -71, 119, 12, -124, -92, -58, -104, -77, -100, 18, 101, -6, -11, -35, -70, 46, 30, -32, 110, 71, 59, -82, 125, -104, 18, -91, 19, -100, 99, -5, -81, -31, 86, -51, 58, -14, 112, -101, 117, 6, 40, -28, -88, 98, -103, -102, -76, 98, 100, 94, -92, -107, -22, 50, 46, -52, 86, -53, -63, -56, -10, 14, 64, 13, -60, 24, -57, 81, -36, -119, -54, -11, 97, -90, 105, -108, -19, 33, 71, -103, 108, -54, -2, 82, -18, 24, -123, 91, 68, -43, -46, -117, -72, -23, -95, -21, -119, -47, -66, 44, 83, 32, 78, 18, -72, 28, -35, -79};
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
    msg.setTimeStamp(0.660748227374);
    msg.setSource(27001U);
    msg.setSourceEntity(224U);
    msg.setDestination(22328U);
    msg.setDestinationEntity(63U);
    msg.uid = 226U;
    msg.frag_number = 26U;
    msg.num_frags = 113U;
    const char tmp_msg_0[] = {-21, -100, -96, 90, 110, -21, -28, 24, 84, 115, 90, -42, 18, 92, 65, 47, 31, 73, 117, -72, 63, 94, 68, 113, 46, -92, -26, -23, 15, -20, -119, 16, 120, 84, 56, 20, -103, -43, 39, -13, -31, 0, -107, 28, -53, -102, -33, -1, -115, -65, -47, -121, -122, -118, 54, -21, -127, -124, 56, 15, -34, -124, 51, -42, 57, -79, -115, -66, -89, 22, -1, -60, 62, 110, -125, 109, 80, -11, -88, -37, -48, -69, -87, -89, 22, -89, -62, -76, -12, -5, -52, 60, -6, 118, 62, -9, 27, -117};
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
    msg.setTimeStamp(0.3056360391);
    msg.setSource(58516U);
    msg.setSourceEntity(33U);
    msg.setDestination(12054U);
    msg.setDestinationEntity(42U);
    msg.uid = 39U;
    msg.frag_number = 236U;
    msg.num_frags = 151U;
    const char tmp_msg_0[] = {39, -27, 61, -16, 62, -64, -33, -102, 32, -41, -19, 26, -62, 79, -25, 65, -41, -80, 42, -57, -125, 22, -9, 80, -97, 0, -5, 41, -119, 64, -82, -6, 84, -80, -62, 9, 38, -115, -13, 51, 81, 96, 92, 44, -126, 44, 4, -60, 126, -63, 52, 42, 95, -52, 32, 3, -89, -3, -116, -80, -39, -74, -69, 79, 7, -34, 79, 76, 97, 110};
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
    msg.setTimeStamp(0.952232648423);
    msg.setSource(17332U);
    msg.setSourceEntity(157U);
    msg.setDestination(6772U);
    msg.setDestinationEntity(212U);
    msg.content_type.assign("FJSBJCOCRQTLGBODBTGNADI");
    const char tmp_msg_0[] = {6, 5, 18, 12, -98, 60, 73, 124, -17, -121, -118, -102, 110, 101, 115, 77, -65, -65, 74, -33, -58, -31, -27, -23, -80, 112, -15, -91, 47, 117, -23, -118, 52, 61, 54, -23, 31, 85, 99, -120, 77, -50, -86, 54, -124, 101, -24, -55, -90, 71, 107, -29, -109, -90, 63, -76, 87, -78, -35, 66, 95, -85, -124, 102, 82, 57, 51};
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
    msg.setTimeStamp(0.131865361527);
    msg.setSource(29822U);
    msg.setSourceEntity(156U);
    msg.setDestination(43629U);
    msg.setDestinationEntity(155U);
    msg.content_type.assign("QAEJLTGMGUDYNVDLHNVQPREZNIIUQYZVTMCBZBKJZKAJFHHNIG");
    const char tmp_msg_0[] = {24, 75, 1, 36, 118, -67, 48, 61, -92, 112, -108, -62, 99, 123, 108, -106, 10, -79, 125, 18, -116, 94, 98, 32, 75, 84, 36, -12, -25, 56, 8, 79, 100, 61, -85, 50, -99, -74, -109, -43, -48, 75, -87, 45, 8, 71, -73, 76, -25, -106, 76, 101, -60, -46, -52, 101, -84, -122, -117, 126, -71, 76, 51, 107, -102, -43, -14, 69, 89, -84, -67, 0, -58, -2, 27, -84, -7, -115, -78, -50, 4, -116, -56, 112, 108, 78, -27, -61, -72, 9, 116, -103, -12, 126, -57, 36, 50, -92, -93, -80, 90, -64, 15, -70, 66, 96, -32, -104, -34, 6, 79, 19, 18, 5, -104, -122, -49, -126, 8, 86, -119, -119, 22, -82, 16, 31, 100, -43, -28, -34, -64, -61, 126, -94, 39, -23, 102, -96, 92, 68, 76, -79, -102, -89, -63, -102, 97, 116, 23, 30, -56, -32, 32, -117, 42, 81, 15, 58, -35, 8, -93, -60, -49, 52, 85};
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
    msg.setTimeStamp(0.382706598858);
    msg.setSource(4151U);
    msg.setSourceEntity(65U);
    msg.setDestination(60825U);
    msg.setDestinationEntity(200U);
    msg.content_type.assign("RGUTWRYKKEELDQTZHRZLYUDBOJIBAGQIXNZPOUPWXOWINLAGQEAMGVZFCCOIJDOQRCYB");
    const char tmp_msg_0[] = {60, 86, 10, 48, 13, -89, -113, -2, -20, -28, -52, 94, -67, 18, 108, 34, -26, 48, 78, -53, -28, -67, 86, -36, -79, -8, 50, -55, -83, -8, 51, -82, 44, -122, -44, 73, 122, 8, -48, 64, 95, -125, -5, -85, -24, -117, -21, -82, -5, 6, 124, -111, -24, -60, 14, 32, 8, -38, -124, 81, 124, -5, -54, 111, 45, 107, -127, -66, 50, 86, 63, 123, -59, -47, 51, -42, -114, -9, -108, 3, 124, -30, 106, -113, 13, 95, -94, 109, 95, 97, 22, -86, -99, -75, 67, 53, -58, -108, 82, -3, 1, -93, -71, 102, 102, -33, -42, -20, -19, -6, -12, -2, -93, 107, -24, 6, -62, 100, 27, -23, 49, 101, -63, 101, -62, 112, -63, 87, 115, 66, 115, 22, -65, 23, 59, -42, -9, 99, 124, -114, 22, -77, -99, -88, -12, 88, 60, -4, 102, -22, 3, -44, -59, 26, 12, 91};
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
    msg.setTimeStamp(0.890117267795);
    msg.setSource(21323U);
    msg.setSourceEntity(155U);
    msg.setDestination(51316U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.598515869483);
    msg.setSource(217U);
    msg.setSourceEntity(69U);
    msg.setDestination(33542U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.103644272294);
    msg.setSource(13283U);
    msg.setSourceEntity(122U);
    msg.setDestination(43070U);
    msg.setDestinationEntity(35U);

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
