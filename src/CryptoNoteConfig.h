// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <cstdint>
#include <limits>

namespace CryptoNote {
namespace parameters {

const uint32_t CRYPTONOTE_MAX_BLOCK_NUMBER                   = 500000000;
const size_t   CRYPTONOTE_MAX_BLOCK_BLOB_SIZE                = 500000000;
const size_t   CRYPTONOTE_MAX_TX_SIZE                        = 1000000000;
const uint64_t CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX       = 30;
const uint32_t CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW         = 10;
const uint64_t CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT            = 60 * 60 * 2;

const size_t   BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW             = 60;

// MONEY_SUPPLY - total number coins to be generated
const uint64_t MONEY_SUPPLY                                  = UINT64_C(18446744073709551615);
const size_t MIN_MIXIN                          = 0;
const uint8_t MANDATORY_MIXIN_BLOCK_VERSION     = 0;
const uint32_t MIXIN_START_HEIGHT                          = 0;
const uint32_t MANDATORY_TRANSACTION                          = 0;
const uint32_t KILL_HEIGHT                          = 0;
const uint64_t TAIL_EMISSION_REWARD                          = 0;
const size_t CRYPTONOTE_COIN_VERSION                          = 0;
const uint32_t ZAWY_DIFFICULTY_BLOCK_INDEX                 = 94175;
const uint32_t ZAWY_DIFFICULTY_LAST_BLOCK                 = 235949;
const uint64_t ZAWY_DIFFICULTY_MIN                 = 1;
const uint32_t ZAWY_LWMA_DIFFICULTY_BLOCK_INDEX                 = 235950;
const uint32_t ZAWY_LWMA_DIFFICULTY_LAST_BLOCK                 = 0;
const uint64_t ZAWY_LWMA_DIFFICULTY_MIN                 = 1;
const size_t ZAWY_LWMA_DIFFICULTY_N                 = 120;
const uint32_t ZAWY_LWMA2_DIFFICULTY_BLOCK_INDEX                 = 0;
const uint32_t ZAWY_LWMA2_DIFFICULTY_LAST_BLOCK                 = 0;
const uint64_t ZAWY_LWMA2_DIFFICULTY_MIN                 = 1;
const size_t ZAWY_LWMA2_DIFFICULTY_N                 = 0;
const uint32_t BUGGED_ZAWY_DIFFICULTY_BLOCK_INDEX                 = 0;
const unsigned EMISSION_SPEED_FACTOR                         = 18;
const uint64_t GENESIS_BLOCK_REWARD                          = UINT64_C(0);
static_assert(EMISSION_SPEED_FACTOR <= 8 * sizeof(uint64_t), "Bad EMISSION_SPEED_FACTOR");

const size_t   CRYPTONOTE_REWARD_BLOCKS_WINDOW               = 100;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE     = 100000; //size of block (bytes) after which reward for block calculated using block size
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2  = 20000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1  = 10000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE;
const size_t   CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE        = 600;
const size_t   CRYPTONOTE_DISPLAY_DECIMAL_POINT              = 12;
const uint64_t MINIMUM_FEE                                   = UINT64_C(1000000);
const uint64_t DEFAULT_DUST_THRESHOLD                        = UINT64_C(1000000);
// Use 0 for default max transaction size limit
const uint64_t MAX_TRANSACTION_SIZE_LIMIT                          = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE * 110 / 100 - CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE;
const uint64_t DEFAULT_FEE                          = MINIMUM_FEE;

const uint64_t DIFFICULTY_TARGET                             = 120; // seconds
const uint64_t EXPECTED_NUMBER_OF_BLOCKS_PER_DAY             = 24 * 60 * 60 / DIFFICULTY_TARGET;
const size_t   DIFFICULTY_WINDOW                             = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY; // blocks
const size_t   DIFFICULTY_WINDOW_V1                          = DIFFICULTY_WINDOW;
const size_t   DIFFICULTY_WINDOW_V2                          = DIFFICULTY_WINDOW;
const size_t   DIFFICULTY_CUT                                = 60;  // timestamps to cut after sorting
const size_t   DIFFICULTY_CUT_V1                             = DIFFICULTY_CUT;
const size_t   DIFFICULTY_CUT_V2                             = DIFFICULTY_CUT;
const size_t   DIFFICULTY_LAG                                = 15;  // !!!
const size_t   DIFFICULTY_LAG_V1                             = DIFFICULTY_LAG;
const size_t   DIFFICULTY_LAG_V2                             = DIFFICULTY_LAG;
static_assert(2 * DIFFICULTY_CUT <= DIFFICULTY_WINDOW - 2, "Bad DIFFICULTY_WINDOW or DIFFICULTY_CUT");

const size_t   MAX_BLOCK_SIZE_INITIAL                        = 100000;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_NUMERATOR         = 100 * 1024;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_DENOMINATOR       = 365 * 24 * 60 * 60 / DIFFICULTY_TARGET;

const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS     = 1;
const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS    = DIFFICULTY_TARGET * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS;

const uint64_t CRYPTONOTE_MEMPOOL_TX_LIVETIME                = 60 * 60 * 24;     //seconds, one day
const uint64_t CRYPTONOTE_MEMPOOL_TX_FROM_ALT_BLOCK_LIVETIME = 60 * 60 * 24 * 7; //seconds, one week
const uint64_t CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL = 7;  // CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL * CRYPTONOTE_MEMPOOL_TX_LIVETIME = time to forget tx

const size_t   FUSION_TX_MAX_SIZE                            = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT * 30 / 100;
const size_t   FUSION_TX_MIN_INPUT_COUNT                     = 12;
const size_t   FUSION_TX_MIN_IN_OUT_COUNT_RATIO              = 4;

const uint32_t KEY_IMAGE_CHECKING_BLOCK_INDEX                = 0;
const uint32_t UPGRADE_HEIGHT_V2                                = 1;
const uint32_t UPGRADE_HEIGHT_V3                                = 2;
const unsigned UPGRADE_VOTING_THRESHOLD                      = 90;               // percent
const uint32_t UPGRADE_VOTING_WINDOW                         = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
const uint32_t UPGRADE_WINDOW                                = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
static_assert(0 < UPGRADE_VOTING_THRESHOLD && UPGRADE_VOTING_THRESHOLD <= 100, "Bad UPGRADE_VOTING_THRESHOLD");
static_assert(UPGRADE_VOTING_WINDOW > 1, "Bad UPGRADE_VOTING_WINDOW");

const char     CRYPTONOTE_BLOCKS_FILENAME[]                  = "blocks.bin";
const char     CRYPTONOTE_BLOCKINDEXES_FILENAME[]            = "blockindexes.bin";
const char     CRYPTONOTE_POOLDATA_FILENAME[]                = "poolstate.bin";
const char     P2P_NET_DATA_FILENAME[]                       = "p2pstate.bin";
const char     MINER_CONFIG_FILE_NAME[]                      = "miner_conf.json";
} // parameters

const char     CRYPTONOTE_NAME[]                             = "b2bcoin";

const uint8_t  TRANSACTION_VERSION_1                         =  1;
const uint8_t  TRANSACTION_VERSION_2                         =  2;
const uint8_t  CURRENT_TRANSACTION_VERSION                   =  TRANSACTION_VERSION_1;
const uint8_t  BLOCK_MAJOR_VERSION_1                         =  1;
const uint8_t  BLOCK_MAJOR_VERSION_2                         =  2;
const uint8_t  BLOCK_MAJOR_VERSION_3                         =  3;
const uint8_t  BLOCK_MINOR_VERSION_0                         =  0;
const uint8_t  BLOCK_MINOR_VERSION_1                         =  1;

const size_t   BLOCKS_IDS_SYNCHRONIZING_DEFAULT_COUNT        =  10000;  //by default, blocks ids count in synchronizing
const size_t   BLOCKS_SYNCHRONIZING_DEFAULT_COUNT            =  100;    //by default, blocks count in blocks downloading
const size_t   COMMAND_RPC_GET_BLOCKS_FAST_MAX_COUNT         =  1000;

const int      P2P_DEFAULT_PORT                              =  39155;
const int      RPC_DEFAULT_PORT                              =  39156;

const size_t   P2P_LOCAL_WHITE_PEERLIST_LIMIT                =  1000;
const size_t   P2P_LOCAL_GRAY_PEERLIST_LIMIT                 =  5000;

const size_t   P2P_CONNECTION_MAX_WRITE_BUFFER_SIZE          = 32 * 1024 * 1024; // 32 MB
const uint32_t P2P_DEFAULT_CONNECTIONS_COUNT                 = 8;
const size_t   P2P_DEFAULT_WHITELIST_CONNECTIONS_PERCENT     = 70;
const uint32_t P2P_DEFAULT_HANDSHAKE_INTERVAL                = 60;            // seconds
const uint32_t P2P_DEFAULT_PACKET_MAX_SIZE                   = 50000000;      // 50000000 bytes maximum packet size
const uint32_t P2P_DEFAULT_PEERS_IN_HANDSHAKE                = 250;
const uint32_t P2P_DEFAULT_CONNECTION_TIMEOUT                = 5000;          // 5 seconds
const uint32_t P2P_DEFAULT_PING_CONNECTION_TIMEOUT           = 2000;          // 2 seconds
const uint64_t P2P_DEFAULT_INVOKE_TIMEOUT                    = 60 * 2 * 1000; // 2 minutes
const size_t   P2P_DEFAULT_HANDSHAKE_INVOKE_TIMEOUT          = 5000;          // 5 seconds

const uint32_t  P2P_FAILED_ADDR_FORGET_SECONDS                  = (60*60);     //1 hour
const uint32_t  P2P_IP_BLOCKTIME                                 = (60*60*24);  //24 hour
const uint32_t  P2P_IP_FAILS_BEFORE_BLOCK                       = 10;
const uint32_t  P2P_IDLE_CONNECTION_KILL_INTERVAL               = (5*60); //5 minutes

const char     P2P_STAT_TRUSTED_PUB_KEY[]                    = "";

const char* const SEED_NODES[] = { "144.217.87.79:39155", "168.235.102.154:39155", "194.32.76.162:39155" };


struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = { {10000, "36b4144839124eb86a4656cb4ba97fd98a616a493f98a32ccd377bd0c55e85f3"}
, {20000, "9414a6d6f15dc9b38bb68ac497e1e4e9ba22bb616d6962863379033da00f2a01"}
, {30000, "5abd0ab43b5d8f80b35b775a1a27e0678acdd761f31be1b05bb5f0c29e58c89f"}
, {40000, "5fabc540aeb3792e9632720516608675ef755ee4b49e1847acc8dbeb736309ef"}
, {50000, "5409a69f5c8322fd99b89d7ea4fd43797a8a6b761469cb00455b0368781b2a9e"}
, {60000, "9433d39acfdbb4a30ded5ae7fc657f9e7fe14472d0ed8b5497eab22634fdbe5b"}
, {70000, "d5c8b164658854e340422fd7d4d28d06c7d6b151b3afd8f8432f8719c3f7239d"}
, {80000, "2b57c984173007993d27687f77804292538a161cfab6cc0af83bd0b9236e8365"}
, {90000, "cb8f9fa862d812f9ba5a121e88a0747061fecc68fde4d98fd6114de773faf92b"}
, {100000, "fe4ddb36465bd3d3c734c5982b1f6e7f7bb4ec82a9c7516fde6e3a383d347c82"}
, {110000, "a977ede7e6f7e64a40f6e876443ef53c060fe3c9617c2a6e50d5b36ac192ba64"}
, {120000, "c8c18c08855a69449edfe6c8166638b161c9632d5c7892c6e733f8ce95c6a185"}
, {130000, "9d6559aa26b4648bbb49b575eac8adba425e0e0135df25e5dfebd3e657d524da"}
, {140000, "dac68ab11ba681f80314cf27da58a1a2f74c0f6433ae1e59f133c9452ac9d3ff"}
, {150000, "5a6c026722e3bb6d0c102319ed577c0ea4d5a7cc0d0bb5285b2194ec9bbf6453"}
, {160000, "793ef67bddc5cb70dd46da1e7ee8854495070197b4f724a732bca6e612eb46e0"}
, {170000, "715b64231eba76b01690e1f890dcd2b2455dc71550ae8e159a6713b43a2de17d"}
, {180000, "3d1ef27cc64411b3f2c6afea4223f685c47290b8c8f60aa114e3958f65362fa9"}
, {190000, "fe1abc32001873431652118e44fdab67dd4340047403207b00ff719154216c5d"}
, {200000, "ae93792176a8c92eaefc2e14b1e6028df489cead6382e8d49e012763b31c3f28"}
, {210000, "2aee12db12a12acabc878dba2648c2250e45953f1c35cd5bdc80accc6883d882"}
, {220000, "1762f8f8c4f579c2aec63d697c1a04fdaf0bca6088a2b7569d066f0938909876"}
, {230000, "97d9dae46c19e91f7fb39444d30e9d7ecf1af133d989a00731569e12527cc09d"}
 };

} // CryptoNote

#define ALLOW_DEBUG_COMMANDS



