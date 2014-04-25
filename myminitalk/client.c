#include "clientserver.h"

/*Precondition: run the executable
 *Postcondition: starts the client
 */
gl_env env;

/*Precondition: called when client receives acknowledgement from the server
 *Postcondition: changes the ack and wakes the alarm pause and kills the alarm
 */
void ack(int sig)
{
  env.flag = 1;
}

/*Precondition: called when the client times out when it cannot reach the server
 *Postcondition: prints an error message and the kills the client
 */
void timeout(int sig)
{
  my_str("Unable to reach server.");
  kill(env.clipid, SIGINT);
}

/*Precondition: send the clients pid to the server
 *Postcondition: server can send an acknowledgement to the client now that it has its pid
 */
void sendpid(int clipid, int serv_pid)
{
  int x = 0;
  int mask = 1<<((8*sizeof(pid_t))-1);
  for(; x<(8*sizeof(pid_t)-1); x++)
    {
      if(clipid&mask)
	kill(serv_pid, SIGUSR2);
      else
	kill(serv_pid, SIGUSR1);
      clipid<<=1;
      usleep(2000);
    }
}

/*Precondition: creates the msg from the argv**
 *Postcondition: sends the msg to the server which then prints it out char by char
 */
void sendmsg(char *msg)
{
  char mask=0x80;
  
}

int main(int argc, char **argv)
{
  int serv_pid;
  char *msg;
  if(argc > 2)
    {
      if((serv_pid = my_atoi(argv[1]))>0)
	{
	  env.clipid = getpid();
	  //my_int(env.clipid);
	  env.flag = 0;
	  msg = my_vect2str(&argv[2]);
	  signal(SIGUSR1, ack);
	  signal(SIGALRM, timeout);
	  sendpid(env.clipid, serv_pid);
	  if(!env.flag)
	    {
	      alarm(5);
	      pause();
	    }
	  alarm(0);
	  //my_str("Alarm disabled");
	  //sendmsg(msg);
	}
    }
  return 1;
}
