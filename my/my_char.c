#include "../lib/my.h"
/*Precondition: Receives a char
 *Postcondition: Prints the char to the terminal
 */

void my_char(char c)
{
  write(1, &c, 1);
}
