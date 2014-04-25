#include "../lib/my.h"
/*Precondition: Receives a string and char
 *Postcondition: Returns the last index of a char in the string which matches the input char
 */

int my_strrindex(char* str, char c)
{
  int ret = -1;
  int hold;
  if(str != NULL)
    for(hold=0; str[hold] != '\0'; hold++)
      if(str[hold] == c)
	ret = hold;
  return ret;
}
