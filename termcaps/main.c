#include "myselect.h"

/*Precondition: termcaps is ran with user input
 *Postcondition: termcaps is ran until esc or enter is signaled
 */

int main(int argc, char **argv)
{
  int n;
  char buf[4];
  signal(SIGINT, restore_terminal);
  if(argc < 2)
    {
      my_str("Not enough arguments");
      my_char('\n');
      exit(1);
    }
  init_terminal();
  my_str("Terminal initialized\n");
  init_caps();
  my_str("Caps initialized\n");
  setup_elems(argc, argv);
  my_str("Elements setup");
  signal(SIGWINCH, show_elems);
  my_str("Signal setup\n");
  term_vi();
  term_clear();
  my_str("Screen cleared");
  show_elems();
  while(1)
    {
      n = read(0, buf, READMIN);
      buf[n] = '\0';
      check_char(buf);
    }
  restore_terminal();
  return 0;
}
