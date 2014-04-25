#include "../lib/my.h"

/*Precondition: takes a char** as input
 *Postcondition: returns a char* as output
 */

char *my_vect2str(char **vect)
{
  int i;
  int j;
  int pos=0;
  int size = 0;
  char *vect2str;
  if(!(vect==NULL || vect[0]==NULL))
    {
      for(i=0; vect[i]!=NULL; i++)
	size=size+my_strlen(vect[i])+1;
      vect2str=(char *)xmalloc(size*sizeof(char));
      for(i=0; vect[i]!=NULL && pos<=BUF_SZ-1; i++)
	{
	  for(j=0; vect[i][j]!='\0' && pos<=BUF_SZ-1; j++)
	    {
	      vect2str[pos]=vect[i][j];
	      pos++;
	    }
	  vect2str[pos]=' ';
	  pos++;
	}
      vect2str[--pos]='\0';
      return vect2str;
    }
  return NULL;
}
