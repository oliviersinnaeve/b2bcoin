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
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
  {32000, "e7ae994ab205bbd069445da11b5c64fc7d9ca42a51a0071f7011f6db44d77cea"}
, {64000, "1d0a8aad28fd92d17d214e552c7465d19e08cd7fa1f723d8de7f559d4f347302"}
, {94177, "197ee8147ea9f9a9af7a743602ace0fa852a2da36b766b2f2803714fc5ed1f25"}  // Make sure we are on correct chain after adding ZAWY (DA1)
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
}
