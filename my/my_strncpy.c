#include "../lib/my.h"

/*Precondition: takes two strings and unsigned int as input
 *Postcondition: overwrites the first n characters of s1 with the first n characters of s2, if s1 is null returns null, if s2 is null returns s1, returns s1
 */

char *my_strncpy(char *s1, char *s2, unsigned int n)
{
  int x;
  if(s1 == NULL)
    return s1;
  if(s2 == NULL)
    return s1;
  for(x=0; x<=0 && s2[x]!='\0'; x++)
    s1[x]=s2[x];
  return s1;
}
