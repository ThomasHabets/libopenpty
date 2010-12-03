# -*- Autoconf -*-
# libopenpty/configure.ac
#

AC_PREREQ(2.61)
AC_INIT([libopenpty], [0.01], [thomas@habets.pp.se])
AC_CONFIG_AUX_DIR([config])
AC_CANONICAL_TARGET
AM_INIT_AUTOMAKE
AM_MAINTAINER_MODE
AC_CONFIG_SRCDIR([src/pty_common.c])
AC_CONFIG_HEADER(config.h)

# Checks for programs.
AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_RANLIB

# check for headers
AC_CHECK_HEADERS([pty.h util.h termios.h])

# Checks for library functions.
AC_CHECK_LIB([util], [openpty])
AC_CHECK_FUNCS([socketpair openpty _getpty])

# check for native
AC_CHECK_FUNC([openpty], [have_openpty=yes], [have_openpty=no])
AM_CONDITIONAL([HAVE_OPENPTY], [test x$have_openpty = xyes])

# check for _getpty()-style
have__getpty=no
AC_CHECK_FUNC([_getpty], [have__getpty=yes])
AM_CONDITIONAL([HAVE__GETPTY], [test x$have__getpty = xyes])

# check for solaris
is_solaris=no
case "${target_os}" in
solaris*)
	is_solaris=yes
	;;
*)
	;;
esac
AM_CONDITIONAL([HAVE_SOLARIS], [test x$is_solaris = xyes])

# enable subst
AC_SUBST([AM_CFLAGS])
AC_SUBST([AM_LDFLAGS])

# Checks for header files.
AC_HEADER_STDC
AC_CHECK_HEADERS([time.h sys/time.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_C_CONST
#AC_HEADER_TIME
AC_TYPE_UINT16_T
AC_TYPE_UINT32_T

# Output
AC_CONFIG_FILES([Makefile src/Makefile])
AC_OUTPUT

echo "
  $PACKAGE_NAME version $PACKAGE_VERSION
  Prefix.........: $prefix
  Debug Build....: $debug
  C Compiler.....: $CC $CFLAGS $CPPFLAGS
  Linker.........: $LD $LDFLAGS $LIBS
"
