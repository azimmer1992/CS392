#include "clientserver.h"

/*Precondition: receives client and server pids
 *Postcondition: sends the client's pid to the server
 */

void sendpid(int clipid, int serv_pid)
{
  int x = sizeof(pid_t)-1;
  unsigned int mask = 1<<(8*sizeof(pid_t)-1);
  my_int(mask);
  my_int(serv_pid);
  for(; x>0; x--)
    {
      if(clipid&mask)
	my_int(1);
      else
	my_int(0);
      mask>>1;
    }
}
