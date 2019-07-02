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

const uint32_t CRYPTONOTE_MAX_BLOCK_NUMBER                        = 500000000;
const size_t   CRYPTONOTE_MAX_BLOCK_BLOB_SIZE                     = 500000000;
const size_t   CRYPTONOTE_MAX_TX_SIZE                             = 1000000000;
const uint64_t CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX            = 30;
const uint32_t CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW               = 10;
const uint64_t CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT                 = 60 * 6;

const size_t   BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW                  = 60;
const size_t   BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW_V4               = 11;

const uint64_t MONEY_SUPPLY                                       = UINT64_C(18446744073709551615); // total number coins to be generated
const unsigned EMISSION_SPEED_FACTOR                              = 18;
static_assert(EMISSION_SPEED_FACTOR <= 8 * sizeof(uint64_t), "Bad EMISSION_SPEED_FACTOR");

const size_t   CRYPTONOTE_REWARD_BLOCKS_WINDOW                    = 100;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE          = 100000; //size of block (bytes) after which reward for block calculated using block size
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2       = 20000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1       = 10000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT  = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE;
const size_t   CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE             = 600;
const size_t   CRYPTONOTE_DISPLAY_DECIMAL_POINT                   = 12;
const uint64_t MINIMUM_FEE                                        = UINT64_C(1000000);
const uint64_t DEFAULT_DUST_THRESHOLD                             = UINT64_C(1000000);
const uint64_t MAX_TRANSACTION_SIZE_LIMIT                         = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE * 110 / 100 - CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE;
const uint64_t DEFAULT_FEE                                        = MINIMUM_FEE;
const uint64_t DIFFICULTY_TARGET                                  = 120; // seconds
const uint64_t EXPECTED_NUMBER_OF_BLOCKS_PER_DAY                  = 24 * 60 * 60 / DIFFICULTY_TARGET;
const size_t   DIFFICULTY_WINDOW                                  = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY; // blocks
const size_t   DIFFICULTY_WINDOW_V4                               = 61;
const size_t   DIFFICULTY_CUT                                     = 60;  // timestamps to cut after sorting
const size_t   DIFFICULTY_LAG                                     = 15;  // !!!
static_assert(2 * DIFFICULTY_CUT <= DIFFICULTY_WINDOW - 2, "Bad DIFFICULTY_WINDOW or DIFFICULTY_CUT");

const size_t   MAX_BLOCK_SIZE_INITIAL                             = 100000;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_NUMERATOR              = 100 * 1024;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_DENOMINATOR            = 365 * 24 * 60 * 60 / DIFFICULTY_TARGET;

const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS          = 1;
const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS         = DIFFICULTY_TARGET * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS;

const uint64_t CRYPTONOTE_MEMPOOL_TX_LIVETIME                     = 60 * 60 * 24;     //seconds, one day
const uint64_t CRYPTONOTE_MEMPOOL_TX_FROM_ALT_BLOCK_LIVETIME      = 60 * 60 * 24 * 7; //seconds, one week
const uint64_t CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL = 7;  // CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL * CRYPTONOTE_MEMPOOL_TX_LIVETIME = time to forget tx

const size_t   FUSION_TX_MAX_SIZE                                 = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT * 30 / 100;
const size_t   FUSION_TX_MIN_INPUT_COUNT                          = 12;
const size_t   FUSION_TX_MIN_IN_OUT_COUNT_RATIO                   = 4;

const uint32_t KEY_IMAGE_CHECKING_BLOCK_INDEX                     = 0;
const uint32_t UPGRADE_HEIGHT_V2                                  = 1;
const uint32_t UPGRADE_HEIGHT_V3                                  = 2;
const uint32_t UPGRADE_HEIGHT_DA1                                 = 94175;
const uint32_t UPGRADE_HEIGHT_DA2                                 = 235950;
const uint32_t UPGRADE_HEIGHT_V4                                  = 243272;
const uint32_t UPGRADE_HEIGHT_V4_MTP                              = 315000;
const unsigned UPGRADE_VOTING_THRESHOLD                           = 90;               // percent
const uint32_t UPGRADE_VOTING_WINDOW                              = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
const uint32_t UPGRADE_WINDOW                                     = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
static_assert(0 < UPGRADE_VOTING_THRESHOLD && UPGRADE_VOTING_THRESHOLD <= 100, "Bad UPGRADE_VOTING_THRESHOLD");
static_assert(UPGRADE_VOTING_WINDOW > 1, "Bad UPGRADE_VOTING_WINDOW");

const char     CRYPTONOTE_BLOCKS_FILENAME[]                       = "blocks.bin";
const char     CRYPTONOTE_BLOCKINDEXES_FILENAME[]                 = "blockindexes.bin";
const char     CRYPTONOTE_POOLDATA_FILENAME[]                     = "poolstate.bin";
const char     P2P_NET_DATA_FILENAME[]                            = "p2pstate.bin";
const char     MINER_CONFIG_FILE_NAME[]                           = "miner_conf.json";
} // parameters

const char     CRYPTONOTE_NAME[]                             = "b2bcoin";

const uint8_t  TRANSACTION_VERSION_1                         = 1;
const uint8_t  TRANSACTION_VERSION_2                         = 2;
const uint8_t  CURRENT_TRANSACTION_VERSION                   = TRANSACTION_VERSION_1;
const uint8_t  BLOCK_MAJOR_VERSION_1                         = 1;
const uint8_t  BLOCK_MAJOR_VERSION_2                         = 2;
const uint8_t  BLOCK_MAJOR_VERSION_3                         = 3;
const uint8_t  BLOCK_MAJOR_VERSION_4                         = 4;
const uint8_t  BLOCK_MINOR_VERSION_0                         = 0;
const uint8_t  BLOCK_MINOR_VERSION_1                         = 1;

const size_t   BLOCKS_IDS_SYNCHRONIZING_DEFAULT_COUNT        = 10000;  //by default, blocks ids count in synchronizing
const size_t   BLOCKS_SYNCHRONIZING_DEFAULT_COUNT            = 128;    //by default, blocks count in blocks downloading
const size_t   COMMAND_RPC_GET_BLOCKS_FAST_MAX_COUNT         = 1000;

const int      P2P_DEFAULT_PORT                              = 39155;
const int      RPC_DEFAULT_PORT                              = 39156;

const size_t   P2P_LOCAL_WHITE_PEERLIST_LIMIT                = 1000;
const size_t   P2P_LOCAL_GRAY_PEERLIST_LIMIT                 = 5000;

const size_t   P2P_CONNECTION_MAX_WRITE_BUFFER_SIZE          = 64 * 1024 * 1024; // 64 MB
const uint32_t P2P_DEFAULT_CONNECTIONS_COUNT                 = 10;
const size_t   P2P_DEFAULT_WHITELIST_CONNECTIONS_PERCENT     = 70;
const uint32_t P2P_DEFAULT_HANDSHAKE_INTERVAL                = 60;            // seconds
const uint32_t P2P_DEFAULT_PACKET_MAX_SIZE                   = 50000000;      // 50000000 bytes maximum packet size
const uint32_t P2P_DEFAULT_PEERS_IN_HANDSHAKE                = 250;
const uint32_t P2P_DEFAULT_CONNECTION_TIMEOUT                = 5000;          // 5 seconds
const uint32_t P2P_DEFAULT_PING_CONNECTION_TIMEOUT           = 2000;          // 2 seconds
const uint64_t P2P_DEFAULT_INVOKE_TIMEOUT                    = 60 * 2 * 1000; // 2 minutes
const size_t   P2P_DEFAULT_HANDSHAKE_INVOKE_TIMEOUT          = 5000;          // 5 seconds
const uint32_t P2P_FAILED_ADDR_FORGET_SECONDS                = (60*60);     //1 hour
const uint32_t P2P_IP_BLOCKTIME                              = (60*60*24);  //24 hour
const uint32_t P2P_IP_FAILS_BEFORE_BLOCK                     = 10;
const uint32_t P2P_IDLE_CONNECTION_KILL_INTERVAL             = (5*60); //5 minutes

const char     P2P_STAT_TRUSTED_PUB_KEY[]                    = "";

const char* const SEED_NODES[] = { 
  "144.217.87.79:39155", 
  "168.235.102.154:39155", 
  "194.32.76.162:39155" 
};

struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = { 
  {32000, "e7ae994ab205bbd069445da11b5c64fc7d9ca42a51a0071f7011f6db44d77cea"}
, {64000, "1d0a8aad28fd92d17d214e552c7465d19e08cd7fa1f723d8de7f559d4f347302"}
, {94177, "197ee8147ea9f9a9af7a743602ace0fa852a2da36b766b2f2803714fc5ed1f25"}  // Make sure we are on correct chain after adding ZAWY (DA1)
, {96000, "caa5246b052594a879f3f14389c087b61c0d551e2286d83a18c17705402f8765"}
, {128000, "04741eeb627a18862bf78184a3f17ace4a68188b74b87d449505984615a8e1a5"}
, {160000, "793ef67bddc5cb70dd46da1e7ee8854495070197b4f724a732bca6e612eb46e0"}
, {192000, "41c3f63ac25cc804dcd3e05903df36928df4ea5a15cfc409e106b2cd9efd9710"}
, {224000, "1bf3a0336d5b76158030596844a50ca2da8fdc4c8d2f1eaff76d3763c5ff066b"}
, {235971, "83ac894283cb5dc6206a9248d947c6c71e17883fac32e57cd1a4558f994b871d"} // Make sure we are on correct chain after adding LWMA (DA2)
, {243273, "1661d23c1baaf489805f68a8fd48736b31b87e8d2960225ff8d9bc1e2600753b"} // Make sure we are on correct chain after V4
, {256000, "93ba502fc37a17ca201e23495ce73d69243e1f80ba9a0db064ccfdda510c31ec"}
, {288000, "a63d4eae1f0e66b97605d098711033b2e3f9c916b8a898b71b090f080d2f41f8"}
, {315109, "6b3fbff5a5eccb3b32563cdbc1b9681ebac17a578388df056363d1a77a075c88"} // Make sure we are on correct chain after adding the fix to LWMA
, {320000, "a314ad7e09b1c3fe5fdbca1e9428022e67117ac2f84f399687ae9aa6121bd31f"}
, {352000, "8dc4b1473661e9b471c9ebf1fbe3745ec6e66ed64536513bace2fedf4e43723f"}
, {384000, "654af65c219ec58dce9da6d34d2adbfba3e8121d3d81be49937205d8b6c6f4ed"}
, {416000, "6bae4c762df88415f9f2877f81bd1f0df6c33240ebd6f258b687dd81c8b99e60"}
, {448000, "75e3ba5344bc41878923e29bfb6ea31f71c1108d265fb15c669ea9cfc020b0f7"}
, {457000, "01afb94524e91c2521f556baaba963b4e74fee2592dce62204bb9bcc4ffb3914"} // Just for faster sync...
};

} // CryptoNote

#define ALLOW_DEBUG_COMMANDS
