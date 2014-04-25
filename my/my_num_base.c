#include "../lib/my.h"
/*Precondition: Receives an int and string
 *Postcondition: Prints the int in the base which is equal to the length of the
 *string, using the charaters of the string as the symbols to print
 */

void my_num_base(int i, char* str)
{
  unsigned int u;
  unsigned int r;
  unsigned int e;
  if((r = my_strlen(str))>0)
    {
      if(i<0)
	my_char('-');
      u=(i<0)?-i:i;
      if(r == 1)
	while(u-- > 0)
	  my_char(*str);
      else
	{
	  for(e=1; (u/e)>=r; e*=r)
	    ;
	  for(; e; u%=e, e/=r)
	    my_char(str[(u/e)]);
	}
    }
  else
    my_str("Base not valid");
}
