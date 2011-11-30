/** libopenpty/include/libopenpty.h
 *
 *  By Thomas Habets <thomas@habets.pp.se> 2010
 *
 */
#ifndef __INCLUDE__LIBOPENPTY_H__
#define __INCLUDE__LIBOPENPTY_H__

#ifdef __cplusplus
extern "C" {
#endif

#ifdef HAVE_PTY_H
#include<pty.h>
#endif

#ifdef HAVE_TERMIOS_H
#include<termios.h>
#endif

#ifdef HAVE_UTIL_H
#include<util.h>
#endif

#ifndef HAVE_OPENPTY
int openpty(int *amaster, int *aslave, char *name,
	    struct termios *termp, struct winsize *winp);
#endif


#ifdef __cplusplus
}
#endif

#endif /*  __INCLUDE__LIBOPENPTY_H__ */
