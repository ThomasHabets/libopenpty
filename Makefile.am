# libopenpty/Makefile.am

include $(top_srcdir)/Makefile.am.common

#SUBDIRS=src #doc

lib_LTLIBRARIES = libopenpty.la
libopenpty_la_SOURCES = src/pty_common.c
libopenpty_la_LDFLAGS = -version-info 0:0:0

#library_include_HEADERS = something/foo.h something/bar.h

AM_CFLAGS=-I$(top_srcdir)/include @AM_CFLAGS@

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libopenpty.pc

if HAVE_OPENPTY
  libopenpty_la_SOURCES += 
else
if HAVE_SOLARIS
  libopenpty_la_SOURCES += src/pty_solaris.c
else
  libopenpty_la_SOURCES += src/pty_socketpair.c
endif
endif

# test program
#noinst_PROGRAMS=test_openpty

#test_openpty_SOURCES=test_openpty.c
#test_openpty_LDADD=libopenpty.a

mrproper: maintainer-clean
	rm -f aclocal.m4 configure.scan depcomp missing install-sh config.h.in
	rm -fr config.guess config.sub build-stamp autom4te.cache/
	rm -f Makefile.in configure autoscan*.log debian/debhelper.log
	rm -f debian/substvars debian/files
	rm -fr debian/tmp
	rm -f config/install-sh config/missing config/depcomp
	rm -fr config m4 libltdl
