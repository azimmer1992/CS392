#include "../lib/my.h"

/*Precondition: takes a two strings and unsigned int as input
 *Postcondition: compares the first n characters of the strings, if s1 is greater than s2 returns 1, if s2 greater than s1 returns -1, if equal returns 0
 */

int my_strncmp(char *s1, char *s2, unsigned int n)
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
      for(x=0; (s1[x]!='\0' || s2[x]!='\0') && x<n; x++)
	{
	  if(s1[x]>s2[x])
	    return 1;
	  else if(s2[x]>s1[x])
	    return -1;
	}
      return 0;
    }
}
