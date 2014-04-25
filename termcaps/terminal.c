#include "myselect.h"

/*Precondition: program starts
 *Postcondition: the terminal is initialized for termcaps
 */

void init_terminal()
{
  int fd;
  char *name;
  struct termio line;
  name = ttyname(0);
  fd = open(name, O_WRONLY);
  gl_env.stdio_backup = dup(1);
  dup2(fd, 1);
  ioctl(0, TCGETA, &line);
  gl_env.line_backup=line;
  line.c_cc[VMIN]=READMIN;
  line.c_cc[VTIME]=READTIME;
  line.c_lflag&=~(ICANON|ECHO|ISIG);
  ioctl(0, TCSETA, &line);
  get_win_size();
}

/*Precondition: program is exiting
 *Postcondition: terminal is restored to pre-termcaps status
 */

void restore_terminal()
{
  ioctl(0, TCSETA, (gl_env.line_backup));
  dup2(gl_env.stdio_backup, 1);
}
