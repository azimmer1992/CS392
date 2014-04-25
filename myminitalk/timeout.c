#include "clientserver.h"

void timeout(int sig)
{
  my_str("Unable to reach server.");
  kill(gl_env.clipid, SIGINT);
}
