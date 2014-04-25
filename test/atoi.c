#include "../lib/my.h"

int main()
{
  my_str("Got here");
  my_int(my_atoi("123"));
  my_char('\n');
  my_int(my_atoi("456.78"));
  my_char('\n');
  my_int(my_atoi("45 is my #"));
  my_char('\n');
  my_int(my_atoi("   123   456"));
  my_char('\n');
  my_int(my_atoi("abc123"));
  my_char('\n');
  my_int(my_atoi("-123"));
  my_char('\n');
  my_int(my_atoi("+-+-+---+++----17"));
  my_char('\n');
  return 1;
}
