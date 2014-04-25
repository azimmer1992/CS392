#include "../lib/mylist.h"

/*Precondition: takes t_node* as input
 *Postcondition: returns size of list
 */

unsigned int count_nodes(t_node *data)
{
  unsigned int size = 0;
  if(data)
    {
      while(data)
	{
	  data = data->next;
	  size++;
	}
    }
  return size;
}
