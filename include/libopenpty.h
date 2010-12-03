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

#include <pty.h>

int openpty(int *amaster, int *aslave, char *name,
	    struct termios *termp, struct winsize *winp);


#ifdef __cplusplus
}
#endif

#endif /*  __INCLUDE__LIBOPENPTY_H__ */
