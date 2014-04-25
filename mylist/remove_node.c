#include "../lib/mylist.h"

/*Precondition: takes t_node** as input
 *Postcondition: returns elem of head node and remove from list, if NULL input returns NULL
 */

void *remove_node(t_node **phead)
{
  t_node *holder;
  void *elem;
  if(!(phead == NULL))
    if(*phead)
      {
	holder = (*phead)->next;
	(*phead)->next = NULL;
	elem = (*phead)->elem;
	(*phead)->elem = NULL;
	free(*phead);
	(*phead)=holder;
	return elem;
      }
  return NULL;
}
