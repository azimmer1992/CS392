#ifndef _CLIENTSERVER_H_
#define _CLIENTSERVER_H_
#include "../lib/my.h"
#include <signal.h>
#include <sys/types.h>

typedef struct s_env
{
  int clipid;
  char flag;
} gl_env;

#if 0
/*Precondition: called with an alarm signal
 *Postcondition: prints an error message and kills the client
 */
void timeout(int);

/*Precondition: called with a signal
 *Postcondition: notifies the client that the server has acknoledged it's connection
 */
void ack(int);

/*Precondition: receives client and server pids
 *Postcondition: sends the client's pid to the server
 */
void sendpid(int, int);
#endif

#endif
