#include "../lib/mylist.h"

/*Precondition: takes t_node** input
 *Postcondition: returns elem of tail node and removes from list, if NULL input returns NULL
 */

void *remove_last(t_node **phead)
{
  t_node *holder;
  t_node *tmp;
  void *elem;
  if(!(phead==NULL))
    if(*phead)
      {
	holder = *phead;
	while((*phead)->next)
	  {
	    tmp = *phead;
	    *phead = (*phead)->next;
	  }
	elem = (*phead)->elem;
	(*phead)->elem = NULL;
	free(*phead);
	tmp->next = NULL;
	*phead=holder;
	return elem;
      }
  return NULL;
}
