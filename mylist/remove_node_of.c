#include "../lib/mylist.h"

/*Precondition: takes t_node** and unsigned int as input
 *Postcondition: returns elem of node n and removes it from list, if NULL input returns NULL
 */

void *remove_node_of(t_node **phead, unsigned int n)
{
  t_node *holder;
  t_node *tmp;
  void *elem;
  if(!(phead==NULL))
    if(*phead)
      {
	if(n==0)
	  remove_node(phead);
	else
	  {
	    holder = *phead;
	    while((*phead)->next && n>0)
	      {
		tmp = *phead;
		*phead = (*phead)->next;
		n--;
	      }
	    elem = (*phead)->elem;
	    (*phead)->elem = NULL;
	    tmp->next = (*phead)->next;
	    (*phead)->next = NULL;
	    free(*phead);
	    *phead=holder;
	    return elem;
	  }
      }
  return NULL;
}
