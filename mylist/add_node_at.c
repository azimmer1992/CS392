#include "../lib/mylist.h"

/*Precondition: takes t_node*, t_node** and unsigned int as input
 *Postcondition: adds node at index n in the list, if n > list legnth add it to the end; if either t_node* or t_node** are NULL does nothing
 */

void add_node_at(t_node *data, t_node **phead, unsigned int n)
{
  t_node *holder = *phead;
  if(data && phead)
    {
      if(*phead)
	{
	  if(n==0)
	    add_node(data, phead);
	  else
	    {
	      while((*phead)->next && n>1)
		{
		  *phead = (*phead)->next;
		  n--;
		}
	      data->next = (*phead)->next;
	      (*phead)->next = data;
	      *phead = holder;
	    }
	}
      else
	*phead = data;
    }
}
