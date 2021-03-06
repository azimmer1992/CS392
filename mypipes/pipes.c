#include "../lib/my.h"

int main(int argc, char **argv)
{
  char *buffer = (char *)xmalloc(BUF_SZ*sizeof(char));
  pid_t pid;
  int fds[2];
  int fds2[2];
  int n;
  pipe(fds);
  if((pid=fork())<0)
    exit(0);
  if(pid>0)
    {
      wait();
      close(fds[1]);
      n=read(fds[0], buffer, BUF_SZ);
      my_str("I am the grandparent. ");
      my_str(buffer);
      my_char('\n');
    }
  else
    {
      pipe(fds2);
      if((pid=fork())<0)
	exit(0);
      if(pid>0)
	{
	  wait();
	  close(fds2[1]);
	  close(fds[0]);
	  n=read(fds2[0], buffer, BUF_SZ);
	  my_str("I am the parent. ");
	  my_str(buffer);
	  my_char('\n');
	  write(fds[1], buffer, BUF_SZ);
	  exit(0);
	}
      else
	{
	  close(fds2[0]);
	  buffer=my_vect2str(&argv[1]);
	  write(fds2[1], buffer, BUF_SZ);
	  my_str("I am the child. ");
	  my_str(buffer);
	  my_char('\n');
	  exit(0);
	}
    }
  return 1;
}
