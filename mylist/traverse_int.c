#include "../lib/mylist.h"

/*Precondition: takes a t_node* as input
 *Postcondition: prints contents of list with " " between each elem, if NULL or empty prints "List is empty"
 */

void traverse_int(t_node *list)
{
  int size=0;
  while(list)
    {
      my_int(((int *) list->elem)[0]);
      my_str(" ");
      list = list->next;
      size++;
    }
  if(!size)
    my_str("List is empty");
}
