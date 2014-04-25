#include "../lib/mylist.h"

/*Precondition: takes t_node* and unsigned int as input
 *Postcondition: returns elem at node index n from list, if n>legnth returns last node, if NULL input returns NULL
 */

void *elem_at(t_node *data, unsigned int n)
{
  if(data)
    {
      while(data->next && n>0)
	{
	  data=data->next;
	  n--;
	}
      return data->elem;
    }
  return NULL;
}
