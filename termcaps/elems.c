#include "myselect.h"

/*Precondition: window is resized or initialized
 *Postcondition: the selected elements are shown
 */

void show_elems()
{
  int max, i, x, y;
  get_win_size();
  gl_env.flag=0;
  term_clear();
  for(i=x=y=max=0; i<gl_env.nbelems; i++, y++)
    {
      if(y>=gl_env.win.ws_row)
	{
	  y=0;
	  x+=(max+5);
	  max=0;
	}
      if(max<gl_env.elements[i].size)
	max = gl_env.elements[i].size;
      if((x+max) >= gl_env.win.ws_col)
	{
	  term_clear();
	  my_str("Please enlarge the window");
	  gl_env.flag=1;
	  return;
	}
      gl_env.elements[i].x = x;
      gl_env.elements[i].y = y;
      refreshout(i);
    }
  refreshin();
}

/*Precondition: program is started 
 *Postcondition: based on the selctions those elements are shown in the program
 */
void setup_elems(int n, char **vect)
{
  int x;
  gl_env.elements = (t_elem*)xmalloc((n-2)*sizeof(t_elem));
  for(x=2; x<n; x++)
    {
      gl_env.elements[x-2].elem = my_strdup(vect[x]);
      gl_env.elements[x-2].size = my_strlen(vect[x]);
      gl_env.elements[x-2].x = 0;
      gl_env.elements[x-2].y = 0;
      gl_env.elements[x-2].mode = 0;
    }
  gl_env.nbelems = x-2;
  gl_env.pos = 0;
}
