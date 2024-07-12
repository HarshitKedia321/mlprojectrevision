/*
 * Copyright (c) 2017, 2022, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * The Universal Permissive License (UPL), Version 1.0
 *
 * Subject to the condition set forth below, permission is hereby granted to any
 * person obtaining a copy of this software, associated documentation and/or
 * data (collectively the "Software"), free of charge and under any and all
 * copyright rights in the Software, and any and all patent rights owned or
 * freely licensable by each licensor hereunder covering either (i) the
 * unmodified Software as contributed to or provided by such licensor, or (ii)
 * the Larger Works (as defined below), to deal in both
 *
 * (a) the Software, and
 *
 * (b) any piece of software and/or hardware listed in the lrgrwrks.txt file if
 * one is included with the Software each a "Larger Work" to which the Software
 * is contributed by such licensors),
 *
 * without restriction, including without limitation the rights to copy, create
 * derivative works of, display, perform, and distribute the Software and make,
 * use, sell, offer for sale, import, export, have made, and have sold the
 * Software and the Larger Work(s), and to sublicense the foregoing rights on
 * either these or other terms.
 *
 * This license is subject to the following condition:
 *
 * The above copyright notice and either this complete permission notice or at a
 * minimum a reference to the UPL must be included in all copies or substantial
 * portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#ifndef Py_PYTHON_H
#define Py_PYTHON_H

#include "pyconfig.h"

#define HAVE_UTIME_H
#define HAVE_UNISTD_H
#define HAVE_SIGNAL_H
#define HAVE_FCNTL_H
#define HAVE_SYS_WAIT_H

#define GRAALVM_PYTHON 1

/* If Cython is involved, avoid accesses to internal structures. While we are
 * supporting this in many cases, it still involves overhead. */
#define CYTHON_USE_TYPE_SLOTS 0
#define CYTHON_USE_PYTYPE_LOOKUP 0
#define CYTHON_UNPACK_METHODS 0
#define CYTHON_FAST_PYCALL 0
#define CYTHON_FAST_PYCCALL 0
#define CYTHON_USE_DICT_VERSIONS 0
#define CYTHON_AVOID_BORROWED_REFS 1
#define CYTHON_USE_TP_FINALIZE 0
#define CYTHON_USE_PYLIST_INTERNALS 0
#define CYTHON_USE_UNICODE_INTERNALS 0
#define CYTHON_USE_PYLONG_INTERNALS 0
#define CYTHON_USE_ASYNC_SLOTS 0
#define CYTHON_USE_UNICODE_WRITER 0
#define CYTHON_USE_EXC_INFO_STACK 0
#define CYTHON_FAST_THREAD_STATE 0

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/dir.h>
#include <dirent.h>
#include <locale.h>
#include <langinfo.h>
#include <assert.h>
#include <unistd.h>
#include <math.h>

#include "pyport.h"
#include "pymacro.h"
#include "object.h"
#include "methodobject.h"
#include "moduleobject.h"
#include "unicodeobject.h"
#include "pystate.h"
#include "pyarena.h"
#include "compile.h"
#include "pythonrun.h"
#include "ceval.h"
#include "pyerrors.h"
#include "context.h"
#include "modsupport.h"
#include "tupleobject.h"
#include "structseq.h"
#include "namespaceobject.h"
#include "structmember.h"
#include "pytime.h"
#include "pymem.h"
#include "objimpl.h"
#include "bytesobject.h"
#include "longobject.h"
#include "longintrepr.h"
#include "boolobject.h"
#include "floatobject.h"
#include "dictobject.h"
#include "setobject.h"
#include "complexobject.h"
#include "listobject.h"
#include "sliceobject.h"
#include "descrobject.h"
#include "fileobject.h"
#include "pyctype.h"
#include "bytearrayobject.h"
#include "warnings.h"
#include "patchlevel.h"
#include "pymath.h"
#include "pyhash.h"
#include "import.h"
#include "pycapsule.h"
#include "pylifecycle.h"
#include "pydebug.h"
#include "code.h"
#include "pyfpe.h"
#include "memoryobject.h"
#include "pystrhex.h"
#include "codecs.h"
#include "frameobject.h"
#include "traceback.h"
#include "classobject.h"
#include "pythread.h"
#include "funcobject.h"
#include "iterobject.h"
#include "typeslots.h"
#include "weakrefobject.h"
#include "sysmodule.h"
#include "fileutils.h"
#include "pystrtod.h"
#include "tracemalloc.h"
#include "genobject.h"
#include "osmodule.h"

#include "abstract.h"

#include "eval.h"

#endif
