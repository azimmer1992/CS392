#include "../lib/mylist.h"

/*Precondition: takes t_node* and unsigned int as input
 *Postcondition: returns node at index n from list, if n>legnth returns last node, if NULL input returns NULL
 */

t_node *node_at(t_node *data, unsigned int n)
{
  if(data)
    {
      while(data->next && n>0)
	{
	  data=data->next;
	  n--;
	}
      return data;
    }
  return NULL;
}
