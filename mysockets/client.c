#include "my_sockets.h"

gl_env env;

/*Precondition: client receives a SIGINT
 *Postcondition: sends a /exit message to server then the client closes
 */
void bye(int sig)
{
  write(env.sockfd, "/exit", 6);
  exit(0);
}

/*Precondition: executable is ran with an arguement of server port # and servername
 *Postcondition: client attempts to connect to server, if connected it will send messages to the server else it will prints an error message and exit
 */

int main(int argc, char **argv)
{
  struct hostent *server;
  struct sockaddr_in serv_addr;
  char *buffer = (char *)xmalloc(BUF_SZ*sizeof(char));
  int server_port, sockfd, n;
  
  if(argc < 3)
    {
      my_str("Not enough arguments");
      my_char('\n');
      exit(0);
    }

  signal(SIGINT, bye);
  server_port = my_atoi(argv[2]);
  if(server_port < 0)
    {
      my_str("Error, incorrect server port");
      my_char('\n');
      exit(0);
    }

 sockfd = socket(AF_INET, SOCK_STREAM, 0);
 env.sockfd = sockfd;
 if(sockfd<0)
   {
     my_str("Error opening socket");
     my_char('\n');
     exit(0);
   }

 server = gethostbyname(argv[1]);
 if(server == NULL)
   {
     my_str("Error no such host");
     my_char('\n');
     exit(0);
   }
 bcopy((char *)server->h_addr, (char *)&serv_addr.sin_addr.s_addr, server->h_length);
 serv_addr.sin_family = AF_INET;
 serv_addr.sin_port = htons(server_port);

 if(connect(sockfd,(struct sockaddr *) &serv_addr,sizeof(serv_addr)) < 0)
   {
     my_str("Error connecting to server");
     my_char('\n');
     exit(0);
   }
 
 my_str("Username: ");
 n=read(0, buffer, BUF_SZ-1);
 buffer[n-1]='\0';
 n = write(sockfd, buffer, my_strlen(buffer));
 if(n<0)
   {
     my_str("Error writing to server");
     my_char('\n');
     exit(0);
   }

 while(1)
   {
     n = read(0, buffer, BUF_SZ);
     buffer[n-1]='\0';
     n = write(sockfd,buffer, my_strlen(buffer));
     if(!my_strcmp(buffer, "/exit"))
       exit(0);
   }
}
