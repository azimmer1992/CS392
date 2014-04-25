#include "../lib/my.h"

/*Precondition: takes a char* as input
 *Postcondition: returns a char** as output
 */
char **my_str2vect(char *str)
{
  int numarg=0;
  int strstart, i;
  int pos=0;
  char **str2vect;

  for(; str[pos]!='\0'; pos++)
    if(str[pos]!=' ')
      {
	numarg++;
	while(str[pos]!='\0' && str[pos]!=' ')
	  pos++;
      }

  str2vect = (char **)xmalloc((1+numarg)*sizeof(char *));
  str2vect[numarg]='\0';
  numarg=0;

  for(pos=0; str[pos]!='\0'; pos++)
    if(str[pos]!=' ')
      {
	strstart=pos;
	while(str[pos]!='\0' && str[pos]!=' ')
	  pos++;
	str2vect[numarg] = (char *)xmalloc((1+pos-strstart)*sizeof(char));

	for(strstart, i=0; strstart<pos; strstart++, i++)
	  str2vect[numarg][i] = str[strstart];
	str2vect[numarg][i+1]='\0';
	numarg++;
      }

  return str2vect;
}
