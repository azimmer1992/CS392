#include "../lib/my.h"
/*Precondition: Receives a string
 *Postcondition: Reverses the character order in the string, return an int for the length of the string
 */

int my_revstr(char* str)
{
  int legnth;
  int start;
  for(legnth=my_strlen(str), start=0; start<(legnth/2); start++)
    {
      str[start]^=str[legnth-start-1];
      str[legnth-start-1]^=str[start];
      str[start]^=str[legnth-start-1];
    }
  return legnth;
}
