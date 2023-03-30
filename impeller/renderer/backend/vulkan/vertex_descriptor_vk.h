// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once

#include "flutter/fml/macros.h"
#include "impeller/renderer/backend/vulkan/vk.h"
#include "impeller/renderer/shader_types.h"

namespace impeller {

vk::Format ToVertexDescriptorFormat(const ShaderStageIOSlot& input);

}  // namespace impeller
