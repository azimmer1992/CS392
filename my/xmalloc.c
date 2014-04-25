#include "../lib/my.h"

void *xmalloc(int n)
{
  void *p;
  if((p=malloc(n))==NULL)
    {
      my_str("Virtual memory exhausted!\n");
      exit(1);
    }
  return p;
}
