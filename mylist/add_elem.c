#include "../lib/mylist.h"

/*Precondtion: takes a void* and t_node** as input
 *Postcondition: adds a node at the head of list with elem being void*, if either are NULL does nothing
 */

void add_elem(void *data, t_node **phead)
{
  if(data && phead)
    add_node(new_node(data, NULL), phead);
}
