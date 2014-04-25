#include "myselect.h"

/*Precondition: waits for user input
 *Postcondition: performs the action the user inputs
 */

void check_char(char *c)
{
  if(!my_strcmp(c, (char *) SPACE))
    doselect();
  else if(!my_strcmp(c, gl_env.left))
    moveleft();
  else if(!my_strcmp(c, gl_env.right))
    moveright();
  else if(!my_strcmp(c, gl_env.up))
    moveup();
  else if(!my_strcmp(c, gl_env.down))
    movedown();
  else if(!my_strcmp(c, gl_env.esc) || !my_strcmp(c, (char *)ESC))
    {
      restore_terminal();
      getout(0);
      exit(1);
    }
  else if(!my_strcmp(c, (char *) ENTER))
    {
      restore_terminal();
      getout(1);
    }
}



  /*Precondition: called when the program is exiting
   *Postcondition: based on input selections are either printed or not printed out
   */

 
void getout(char c)
{
  int i;
  if(c)
    {
      for(i=0; i<gl_env.nbelems; i++)
	{
	  my_str(gl_env.elements[i].elem);
	  my_char(' ');
	}
    }
  my_char('\n');
  exit(1);
}
