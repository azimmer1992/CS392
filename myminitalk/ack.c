#include "clientserver.h"

void ack(int sig)
{
  env.flag = 1;
}
