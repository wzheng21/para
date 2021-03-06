// Copyright (c) 2021
// Authors: Weixiong (Victor) Zheng
// All rights reserved
//
// SPDX-License-Identifier: MIT

#pragma once

#include "para/thread/thread.h"

namespace para {

template <typename Function, typename... Args>
JoinableThread::JoinableThread(Function&& f, Args&&... args)
    : t_(std::forward<Function>(f), std::forward<Args>(args)...) {}

}  // namespace para
