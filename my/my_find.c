#include "../lib/my.h"

/*Precondition: takes a char and string as input
 *Postcondition: returns a pointer to a letter or null if not found
 */

char *my_find(char *str, char c)
{
  int x;
  if(str == NULL)
    return str;
  for(x=0; str[x]!='\0'; x++)
    if(str[x]==c)
      return &str[x];
  return NULL;
}
