#include "myselect.h"

/*Precondition: program starts
 *Postcondition: term caps are initiated
 */

char *get_term_cap(char* cap)
{
  char *str;
  static char area[2048];
  if(!(str=(char *)tgetstr(cap, (char**)(&area))))
    {
      my_str("Error getting term cap");
      my_char('\n');
      exit(1);
    }
  return str;
}

/*Precondition: function is called
 *Postcondition: caps are initialized
 */

void init_caps()
{
  char ex[2];
  char *term;
  term = getenv("TERM");
  if(!term)
    {
      my_str("Error initializing caps");
      my_char('\n');
       exit(1);
    }
  char bp[2048];
  tgetent(bp,term);
  gl_env.clear = get_term_cap(CLEAR);
  gl_env.left = KL;
  gl_env.down = KD;
  gl_env.right = KR;
  gl_env.up = KU;
  ex[0] = (char) ESC;
  ex[1] = '\0';
  gl_env.esc = ex;
  gl_env.underline = get_term_cap(UNDERLINE);
  gl_env.under_end = get_term_cap(UNDER_END);
  gl_env.standout = get_term_cap(STANDOUT);
  gl_env.stand_end = get_term_cap(STAND_END);
  gl_env.move = get_term_cap(MOVE);
  gl_env.cursoroff = VECAP;
  gl_env.cursoron = VICAP;
}

/*Precondition: program is started
 *Postcondition: function allows writing directly to the terminal
 */

int my_termprint(int n)
{
  return write(1, &n, 1);
}

/*Precondition: terminal needs to be cleared
 *Postcondition: clears the terminal
 */
void term_clear()
{
  tputs(gl_env.clear,1,my_termprint);
}
