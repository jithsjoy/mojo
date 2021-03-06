// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is auto-generated from
// gpu/command_buffer/build_gles2_cmd_buffer.py
// It's formatted by clang-format using chromium coding style:
//    clang-format -i -style=chromium filename
// DO NOT EDIT!

VISIT_GL_CALL(MapBufferSubDataCHROMIUM,
              void*,
              (GLuint target, GLintptr offset, GLsizeiptr size, GLenum access),
              (target, offset, size, access))
VISIT_GL_CALL(UnmapBufferSubDataCHROMIUM, void, (const void* mem), (mem))
VISIT_GL_CALL(
    MapTexSubImage2DCHROMIUM,
    void*,
    (GLenum target,
     GLint level,
     GLint xoffset,
     GLint yoffset,
     GLsizei width,
     GLsizei height,
     GLenum format,
     GLenum type,
     GLenum access),
    (target, level, xoffset, yoffset, width, height, format, type, access))
VISIT_GL_CALL(UnmapTexSubImage2DCHROMIUM, void, (const void* mem), (mem))
