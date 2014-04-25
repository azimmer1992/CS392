#include "../lib/my.h"
/*Precondition: Receives a string
 *Postcondition: Returns the legnth of the string as an int
 */

int my_strlen(char* str)
{
  int size = 0;
  if(str == NULL)
    return -1;
  while(str[size] != '\0')
    size++;
  return size;
}
