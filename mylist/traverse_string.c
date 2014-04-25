#include "../lib/mylist.h"

/*Precondition: takes a t_node* as input
 *Postcondition: Prints contents of list with " " in between each item, if NULL or empty prints "List is empty"
 */

void traverse_string(t_node *list)
{
  int size = 0;
  while(list)
    {
      my_str(list->elem);
      my_str(" ");
      list = list->next;
      size++;
    }
  if(!size)
    my_str("List is empty");
}
