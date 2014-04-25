#include "../lib/mylist.h"

/*Precondition: takes a void* and t_node* as input
 *Postcondition: creates a new node with value void* and pointing to t_node*, if void* is NULL it will return NULL
 */

t_node *new_node(void *data, t_node *point)
{
  t_node *new = (t_node *)xmalloc(sizeof(t_node));
  if(!data)
    return NULL;
  new->elem=data;
  new->next=point;
  return new;
}
