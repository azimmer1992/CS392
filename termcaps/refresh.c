#include "myselect.h"

/*Precondition: element needs to be printedw with underline
 *Postcondition: prints the element with an underline
 */
void refreshin()
{
  if(gl_env.pos < 0)
    gl_env.pos=0;
  term_move_to_item(gl_env.pos);
  term_underline();
  if(gl_env.elements[gl_env.pos].mode)
    term_standout();
  my_str(gl_env.elements[gl_env.pos].elem);
  term_standend();
  term_underend();
}


/*Precondition: element needs to be printed without an underline
 *Postcondition: prints element without an underline
 */
void refreshout(int n)
{
  term_move_to_item(n);
  if(gl_env.elements[n].mode)
    term_standout();
  my_str(gl_env.elements[n].elem);
  term_standend();
}
