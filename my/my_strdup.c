#include "../lib/my.h"

/*Precondition: takes a string as input
 *Postcondition: allocates a duplicate of the string
 */

char *my_strdup(char* str)
{
  int x;
  if(str == NULL)
    return NULL;
  else
    {
      int len = my_strlen(str)+1;
      char *dup = (char *)xmalloc(len*sizeof(char));
      for(x=0; x<len; x++)
	dup[x]=str[x];
      dup[len-1]='\0';
      return dup;
    }
}
