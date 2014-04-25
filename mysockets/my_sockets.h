#ifndef _MY_SOCKETS_H_
#define _MY_SOCKETS_H_
#include "../lib/my.h"
#include <sys/socket.h>
#include <sys/types.h>
#include <stdio.h>
#include <strings.h>
#include <signal.h>
#include <netinet/in.h>
#include <netdb.h>

typedef struct s_env
{
  int sockfd;
} gl_env;

#endif
