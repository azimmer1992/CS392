#include "clientserver.h"

/*Precondition: run the executable
 *Postcondition: starts the server
 */

gl_env env;

/*Precondtion: server receives a SIGINT
 *Postcondition: prints out a server ending message then kills the server
 */
void bye(int sig)
{
  my_str("Server has been seized by the NSA, goodbye!");
  my_char('\n');
  exit(0);
}

/*Precondition: waits for either a SIGUSR1 or SIGUSR2 signal
 *Postcondition: based on which signal it receives it will change the clipid accordingly
 */
void receivepid(int sig)
{
  if(sig == SIGUSR2)
    env.clipid|=1;
  env.clipid<<=1;
}

/*Precondition: waits for either a SIGUSR1 or SIGUSR2 signal
 *Postcondition: based on the signals it will reproduce a string sent from the client
 */
void receivechar(int sig)
{
  char receive=0;
  
}

int main()
{
  int x = 0;
  env.clipid = 0;
  env.flag = 0;

  my_int(getpid());
  my_char('\n');

  signal(SIGINT, bye);

  while(1)
    {
      env.clipid=0;
      signal(SIGUSR1, receivepid);
      signal(SIGUSR2, receivepid);
      for(x=0; x<(8*sizeof(pid_t)-1); x++)
	{
	  my_int(env.clipid);
	  my_char('\n');
	  pause();
	}
      kill(env.clipid, SIGUSR1);
      my_int(env.clipid);
    }
  return 1;
}
