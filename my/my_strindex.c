#include "../lib/my.h"
/*Precondition: Receives a string and char
 *Postcondition: Returns the index of the first char in the string which matches the input char
 */

int my_strindex(char* str, char c)
{
  int ret;
  if(str != NULL)
    for(ret=0; str[ret] != '\0'; ret++)
      if(str[ret] == c)
	return ret;
  return -1;
}
