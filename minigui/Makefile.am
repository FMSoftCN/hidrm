# Copyright © 2019 FMSoft Technologies
#
# Permission is hereby granted, free of charge, to any person obtaining a
# copy of this software and associated documentation files (the "Software"),
# to deal in the Software without restriction, including without limitation
# the rights to use, copy, modify, merge, publish, distribute, sublicense,
# and/or sell copies of the Software, and to permit persons to whom the
# Software is furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice (including the next
# paragraph) shall be included in all copies or substantial portions of the
# Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
# THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
# IN THE SOFTWARE.
#
# Authors:
#    WEI Yongming <vincent@minigui.org>

include Makefile.sources

AM_CFLAGS = \
	$(WARN_CFLAGS) \
	-I$(top_srcdir) \
	$(PTHREADSTUBS_CFLAGS) \
	$(VALGRIND_CFLAGS) \
	-I$(top_srcdir)/include/drm

libdrm_minigui_la_LTLIBRARIES = libdrm_minigui.la
libdrm_minigui_ladir = $(libdir)
libdrm_minigui_la_LDFLAGS = -version-number 1:0:0 -no-undefined
libdrm_minigui_la_LIBADD = ../libdrm.la \
	@MINIGUI_LIBS@

libdrm_minigui_la_SOURCES = $(LIBDRM_MINIGUI_FILES)

libdrm_miniguiincludedir = ${includedir}/libdrm
libdrm_miniguiinclude_HEADERS = $(LIBDRM_MINIGUI_H_FILES)

pkgconfig_DATA = libdrm_minigui.pc
