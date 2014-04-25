#include "../lib/mylist.h"

/*Precondition: takes a t_node* and t_node** as input
 *Postcondition: appends the node to end of list, if either are NULL does nothing
 */

void append(t_node *data, t_node **phead)
{
  t_node *holder = *phead;
  if(data && phead)
    {
      if(*phead)
	{
	  while((*phead)->next)
	    *phead = (*phead)->next;
	  (*phead)->next = data;
	  *phead = holder;
	}
      else
	*phead = data;
    }
}
