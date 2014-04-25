#include "my_sockets.h"

/*Precondition: server receives a SIGINT
 *Postcondition: prints out a server ending message then kills the server
 */
void bye(int sig)
{
  my_str("Server has been seized by the euphoric neckbeards, goodbye!");
  my_char('\n');
  exit(0);
}

/*Precondition: executable is ran with an arguement of port #
 *Postcondition: server waits for clients to connect and will create a new fork for each client
 */

int main(int argc, char **argv)
{
  int n,x,y,pid;
  int clisockfd;
  struct sockaddr_in cli_addr;
  int size = sizeof(cli_addr);
  char *clientName = (char *)xmalloc(BUF_SZ*sizeof(char));
  char buffer[BUF_SZ];
  int sockfd;
  struct sockaddr_in serv_addr;
  int port = my_atoi(argv[1]);

  signal(SIGINT, bye);

  serv_addr.sin_family = AF_INET;
  serv_addr.sin_port = htons(port);
  serv_addr.sin_addr.s_addr = INADDR_ANY;
  

  if(argc<2)
    {
      my_str("Error, not enough arguments");
      my_char('\n');
      exit(0);
    }

  sockfd = socket(AF_INET, SOCK_STREAM, 0);
  if(sockfd < 0)
    {
      my_str("Error, problem opening socket");
      my_char('\n');
      exit(0);
    }

  if(bind(sockfd, (struct sockaddr*)(&serv_addr), sizeof(serv_addr))<0)
    {
      my_str("Error, problem binding socket");
      my_char('\n');
      exit(0);
    }

  listen(sockfd, 5);

  while(1)
    { 
      if((clisockfd = accept(sockfd, (struct sockaddr*)(&cli_addr), &size))<0)
	{
	  my_str("Error accepting client connection");
	  my_char('\n');
	  exit(0);
	}
      
      if((pid=fork())<0)
	exit(0);
      if(pid>0)
	continue;
      else
	{
	  n=read(clisockfd, buffer, BUF_SZ-1);
	  buffer[n]='\0';
	  clientName = my_strdup(buffer);
	  my_str("***");
	  my_str(clientName);
	  my_str(" connected");
	  my_char('\n');
	  while(1)
	    {
	      n=read(clisockfd, buffer, BUF_SZ-1);
	      buffer[n]='\0';
	      
	      if(!my_strncmp(buffer, "/me ", 4))
		{
		  my_str("***");
		  my_str(clientName);
		  for(x=3; x<n; x++)
		    my_char(buffer[x]);
		  my_char('\n');
		}
	      else if(!my_strncmp(buffer, "/nick ", 6))
		{
		  my_str("***");
		  my_str(clientName);
		  my_str(" changed their name to ");
		  for(x=6, y=0; x<n; x++, y++)
		    clientName[y]=buffer[x];
		  clientName[y]='\0';
		  my_str(clientName);
		  my_char('\n');
		}
	      else if(!my_strcmp(buffer, "/exit"))
		{
		  my_str("***");
		  my_str(clientName);
		  my_str(" disconnected");
		  my_char('\n');
		  break;
		}
	      else
		{
		  my_str("***");
		  my_str(clientName);
		  my_str(": ");
		  my_str(buffer);
		  my_char('\n');
		}
	    }
	  exit(0);
	}
    }
}
