#include "../lib/my.h"
/*Precondition: Receives a string
 *Postcondition: Prints the string to terminal
 */

void my_str(char* str)
{
  int x;
  if(str != NULL)
    {
      for(x=0; str[x] != '\0'; x++)
	my_char(str[x]);
    }
}
