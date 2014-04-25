#include "../lib/my.h"

/*Precondition: takes two strings as input
 *Postcondition: returns positive if s1 is greater than s2, negative if s2 is greater than s1, 0 if equal
 */

int my_strcmp(char *s1, char *s2)
{
  int x;
  if(s1==NULL && s2==NULL)
    return 0;
  else if(s1==NULL)
    return -1;
  else if(s2==NULL)
    return 1;
  else
    {
      for(x=0; s1[x]!='\0' || s2[x]!='\0'; x++)
	{
	  if(s1[x]>s2[x])
	    return 1;
	  else if(s2[x]>s1[x])
	    return -1;
	}
      return 0;
    }
}
