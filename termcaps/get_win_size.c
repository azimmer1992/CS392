#include "myselect.h"

/*Precondition: window is initiated or size is changed
 *Postcondition: values for the window size are modified to represent this change
 */

void get_win_size()
{
  ioctl(0, TIOCGWINSZ, &(gl_env.win));
}
