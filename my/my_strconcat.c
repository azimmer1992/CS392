#include "../lib/my.h"

/*Precondition: takes two strings as input
 *Postcondition: returns a new string with s2 appended to s1
 */

char *my_strconcat(char *s1, char *s2)
{
  int x;
  if(s1==NULL && s2==NULL)
    return NULL;
  int s1len = (s1==NULL)?0:my_strlen(s1);
  int s2len = (s2==NULL)?0:my_strlen(s2);
  int len = s1len+s2len+1;
  char *str = (char *)xmalloc(len*sizeof(char));
  for(x=0; x<s1len; x++)
    str[x] = s1[x];
  for(x=0; x<s2len; x++)
    str[s1len+x] = s2[x];
  str[len--]='\0';
  return str;
}
