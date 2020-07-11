#include <stdio.h>

int fistbitcount(unsigned x)
{
  int n;
  for(n = 0; x != 0; x &= (x-1))
    n++;
  return n;
}

int main()
{
  int z = fistbitcount(0xFFFFFFFF);
  printf("%d", z);
}