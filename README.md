libopenpty/README

  By Thomas Habets <thomas@habets.pp.se> 2010


What
----
Portable openpty() for systems that don't have it.


Portability
-----------
Verified to be working:

Linux     Native openpty()


Using library in a project
--------------------------
cd /path/to/project
git submodule add http://github.com/ThomasHabets/libopenpty.git
git submodule init
git submodule update

Add to configure.ac:
  FIXME

Add to Makefile.am:
  SUBDIRS=libopenpty

Add to src/Makefile.am:
  AM_CFLAGS=-I$(top_srcdir)/libopenpty/include @AM_CFLAGS@
  myproghere_LDADD=../libopenpty/src/liblibopenpty.a


--------------------------------------------------------------------------
Send questions/suggestions/patches/rants/0days to synscan@googlegroups.com
