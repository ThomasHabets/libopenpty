# libopenpty/src/Makefile.am

include $(top_srcdir)/Makefile.am.common

#lib_LTLIBRARIES = libsomething-1.0.la
#libsomething_1_0_la_SOURCES = something.cc
#library_include_HEADERS = something/foo.h something/bar.h

AM_CFLAGS=-I$(top_srcdir)/include @AM_CFLAGS@

# library
noinst_LIBRARIES=libopenpty.a
libopenpty_a_SOURCES=pty_common.c

if HAVE_OPENPTY
  libopenpty_a_SOURCES += 
else
if HAVE_SOLARIS
  libopenpty_a_SOURCES += pty_solaris.c
else
  libopenpty_a_SOURCES += pty_socketpair.c
endif
endif

# test program
noinst_PROGRAMS=test_openpty

test_openpty_SOURCES=test_openpty.c
test_openpty_LDADD=libopenpty.a
