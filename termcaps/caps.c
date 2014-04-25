#include "myselect.h"

/*Precondition: modifications needed to be made to text
 *Postcondition: terminal printing settings are changed to make the appropriate changes to the text
 */

void term_underline()
{
  tputs(gl_env.underline, 1, my_termprint);
}

void term_underend()
{
  tputs(gl_env.under_end, 1, my_termprint);
}

void term_vi()
{
  tputs(gl_env.cursoroff, 1, my_termprint);
}

void term_ve()
{
  tputs(gl_env.cursoron, 1, my_termprint);
}

void term_standout()
{
  tputs(gl_env.standout, 1, my_termprint);
}

void term_standend()
{
  tputs(gl_env.stand_end, 1, my_termprint);
}
