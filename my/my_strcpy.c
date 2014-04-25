#include "../lib/my.h"

/*Precondition: takes two strings as input
 *Postcondition: overwrites s1 with s2, returns s1, if s1 is null returns null, if s2 is null returns s1
 */

char *my_strcpy(char *s1, char *s2)
{
  int x;
  if(s1 == NULL)
    return NULL;
  if(s2 == NULL)
    return s1;
  for(x=0; s2[x] != '\0'; x++)
    s1[x] = s2[x];
  s1[x++]='\0';
  return s1;
}
