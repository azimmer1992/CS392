#include "myselect.h"

/*Precondition: one of the move keys are pressed
 *Postcondition: the selection pos is moved accordingly and the elements are reprinted accordingly
 */

void moveup()
{
  refreshout(gl_env.pos);
  if((gl_env.pos-=1) < 0)
    gl_env.pos = gl_env.nbelems-1;
  refreshin();
}

void movedown()
{
  refreshout(gl_env.pos);
  if((gl_env.pos+=1) >= gl_env.nbelems)
    gl_env.pos = 0;
  refreshin();
}

void moveleft()
{
  refreshout(gl_env.pos);
  if((gl_env.pos-=gl_env.win.ws_row) < 0)
    gl_env.pos = 0;
  refreshin();
}

void moveright()
{
  refreshout(gl_env.pos);
  if((gl_env.pos+=gl_env.win.ws_row) >= gl_env.nbelems)
    gl_env.pos = gl_env.nbelems - 1;
  refreshin();
}

void doselect()
{
  if(gl_env.elements[gl_env.pos].mode == 0)
    {
      gl_env.elements[gl_env.pos].mode=1;
      movedown();
    }
  else
    {
      gl_env.elements[gl_env.pos].mode = 0;
      refreshout(gl_env.pos);
      refreshin();
    }
}

void term_move_to_item(int n)
{
  tputs(tgoto(gl_env.move, gl_env.elements[n].x, gl_env.elements[n].y), 1, my_termprint);
}
