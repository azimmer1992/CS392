#include "../lib/mylist.h"

/*Precondition: takes t_node** as input
 *Postcondition: empties entire list, if input NULL does nothing
 */

void empty_list(t_node **phead)
{
  if(phead && *phead)
    {
      t_node *tmp;
      while(*phead)
	{
	  tmp=*phead;
	  *phead = (*phead)->next;
	  tmp->next = NULL;
	  tmp->elem = NULL;
	  free(tmp);
	}
    }
}
