#include "../lib/my.h"

/*Precondition: takes a char and string as input
 *Postcondition: returns a point to the last letter equal to c or null if not found
 */

char *my_rfind(char *str, char c)
{
  int x;
  int hold = -1;
  if(str == NULL)
    return str;
  for(x=0; str[x]!='\0'; x++)
      if(str[x]==c)
	hold=x;
  if(hold >=0)
    return &str[hold];
  else
    return NULL;
}
