#include "../lib/my.h"
int main()
{
  char teststr[]="Welcome!";
  char teststr2[]="Howareyoudoing?!";
  char teststr3[]="Hi";

  my_char('a'); //Prints out char a
  my_char('\n'); //Prints out a new line
  //my_char((char) NULL); //Prints out nothing

  my_char('\n');
  my_str(teststr); //Prints out Welcome!
  my_char('\n');
  my_str(teststr2); //Prints out Howareyoudoing?!
  my_char('\n');
  my_str(teststr3); //Prints out Hi
  my_char('\n');

  my_int(69); //Prints out 69
  my_char('\n');
  my_int(42); //Prints out 42
  my_char('\n');
  my_int(-128); //Prints out -128
  my_char('\n');
  my_int(0); //Prints out -128
  my_char('\n');
  my_int(2147483647);
  my_char('\n');
  my_int(1000);
  my_char('\n');
  my_int(1<<(8*sizeof(int)-1));
  my_char('\n');

  my_num_base(69,"\0"); //Prints out Base not valid
  my_char('\n');
  my_num_base(42, "Hi"); //Prints out iHiHiH
  my_char('\n');
  my_num_base(-128,"Welcome!"); //Prints out -lWW
  my_char('\n');
  my_num_base(128, "Howareyoudoing?!"); //Prints out uH
  my_char('\n');
  my_num_base((1<<(8*sizeof(int)-1)), "Howareyoudoing?!");
  my_char('\n');
  my_num_base((1<<(8*sizeof(int)-1)), "Hi");
  my_char('\n');
  my_num_base(5, "1");
  my_char('\n');

  my_int(my_strlen((char*) NULL)); //Returns -1
  my_char('\n');
  my_int(my_strlen("")); //Returns 0
  my_char('\n');
  my_int(my_strlen(teststr)); //Returns 8
  my_char('\n');
  my_int(my_strlen(teststr2)); //Returns 16
  my_char('\n');
  my_int(my_strlen(teststr3)); //Returns 2
  my_char('\n');
  my_char(teststr3[-1]);
  my_char('\n');

  my_revstr(""); //Returns 0
  my_int(my_revstr(teststr)); //Returns 8, string is now !emocleW
  my_str(teststr);
  my_char('\n');
  my_int(my_revstr(teststr2)); //Returns 16, string is now !?gnioduoyerawoH
  my_str(teststr2);
  my_char('\n');
  my_int(my_revstr(teststr3)); //Returns 2, string is now iH
  my_str(teststr3);
  my_char('\n');

  my_int(my_strindex("", 'a')); //Returns -1
  my_char('\n');
  my_int(my_strindex(teststr, '!')); //Returns 7
  my_char('\n');
  my_int(my_strindex(teststr2, 'H')); //Returns 0
  my_char('\n');
  my_int(my_strindex(teststr3, 'i')); //Returns 1
  my_char('\n');

  my_int(my_strrindex(teststr, 'e')); //Returns 6
  my_char('\n');
  my_int(my_strrindex(teststr2, 'o')); //Returns 10
  my_char('\n');
  my_int(my_strrindex(teststr3, 'f')); //Returns -1
  my_char('\n');

  return 0;
}
