#include "../lib/my.h"

/*Precondition: takes a char* as input
 *Postcondition: returns an int from the char*
 */

int my_atoi(char *str)
{
  int myPower=1;
  int myNum = 0;
  int isNegative=0;
  int x=0;

  for(;str[x]!='\0', str[x]==' '; x++)
    ;

  while((str[x]>='0' && str[x]<='9') || str[x]=='-' || str[x]=='+')
    {
      if(str[x]=='-')// && !isNegative)
	isNegative = !isNegative;
      //if(str[x]=='-' && isNegative)
      //isNegative--;

      x++;
    }

  x--;

  while(str[x]>='0' && str[x]<='9')
    {
      myNum+=((str[x]-'0')*myPower);
      myPower*=10;
      x--;
    }

  if(isNegative)
    myNum*=-1;

  return myNum;
}
