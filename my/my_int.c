#include "../lib/my.h"
/*Precondition: Receives a signed int as input
 *Postcondition: Prints the int to the terminal
 */

void my_int(signed int i)
{
  unsigned int abs;
  unsigned int exp;
  if(i < 0)
    {
      my_char('-');
      abs=-i;
    }
  else
    abs=i;
  for(exp=1; (abs/exp)>=10; exp*=10)
    ;
  for(; exp; abs%=exp, exp/=10)
    my_char('0' + (abs/exp));
}
