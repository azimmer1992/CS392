#include "../lib/my.h"

/*Precondition: takes two string and unsigned int as input
 *Postcondition: returns a new string with the first n characters of s2 appended to s1, if n is greater than s2 length it is the same as strconcat
 */

char *my_strnconcat(char *s1, char *s2, unsigned int n)
{
  int x;
  if(s1==NULL && s2==NULL)
    return NULL;
  int s1len = (s1==NULL)?0:my_strlen(s1);
  int s2len;
  if(s2==NULL)
    s2len = 0;
  else
    {
      if((s2len=my_strlen(s2)) < n)
	;
      else
	s2len=n;
    }
  int len = s1len+s2len+1;
  char *str = (char *)xmalloc(len*sizeof(char));
  for(x=0; x<s1len; x++)
    str[x] = s1[x];
  for(x=0; x<s2len; x++)
    str[s1len+x] = s2[x];
  str[len--] = '\0';
  return str;
}
