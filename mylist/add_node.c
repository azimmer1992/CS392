#include "../lib/mylist.h"

/*Precondition: takes a t_node* and t_node** as input
 *Postcondition: adds a new node at the head of the list, if t_node* or t_node** are NULL it does nothing
 */

void add_node(t_node *data, t_node **phead)
{
  if(data && phead)
    {
      if(*phead)
	{
	  data->next = *phead;
	  *phead = data;
	}
      else
	*phead = data;
    }
}
