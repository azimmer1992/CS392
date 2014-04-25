#include "../lib/my.h"

/*Precondition: takes two strings as input
 *Postcondition: concatinates s2 to the end of s1, if s1 is null return null, if s2 is null return s1, else return s1
 */

char *my_strcat(char *s1, char *s2)
{
  int x;
  int len;
  if(s1==NULL || s2==NULL)
    return s1;
  else
    {
      len=my_strlen(s1);
      for(x=0; s2[x]!='\0'; x++)
	s1[len+x]=s2[x];
      return s1;
    }
}
