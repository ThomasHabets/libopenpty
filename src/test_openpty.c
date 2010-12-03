/** libopenpty/src/test_openpty.c
 *
 *  By Thomas Habets <thomas@habets.pp.se> 2010
 *
 */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include<stdio.h>
#include"libopenpty.h"

/**
 *
 */
int
main()
{
        int master;
        int slave;
        char name[1024];
        struct termios term;
        struct winsize win;

        if (-1 == openpty(&master, &slave, name, NULL, NULL)) {
                perror("openpty()");
                return 1;
        }
        printf("Opened pty %s\n", name);
        return 0;
}

/* ---- Emacs Variables ----
 * Local Variables:
 * c-basic-offset: 8
 * indent-tabs-mode: nil
 * fill-column: 79
 * End:
 */
