// Copyright 2024 The IREE Authors
//
// Licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#ifndef IREE_IO_MEMORY_STREAM_H_
#define IREE_IO_MEMORY_STREAM_H_

#include "iree/base/api.h"
#include "iree/io/stream.h"

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

//===----------------------------------------------------------------------===//
// iree_io_memory_stream_t
//===----------------------------------------------------------------------===//

// Wraps a fixed-size host memory allocation |contents| in a stream.
// |release_callback| can be used to receive a callback when the stream is
// destroyed and the reference to the contents is no longer required.
IREE_API_EXPORT iree_status_t iree_io_memory_stream_wrap(
    iree_io_stream_mode_t mode, iree_byte_span_t contents,
    iree_io_stream_release_callback_t release_callback,
    iree_allocator_t host_allocator, iree_io_stream_t** out_stream);

#ifdef __cplusplus
}  // extern "C"
#endif  // __cplusplus

#endif  // IREE_IO_MEMORY_STREAM_H_
