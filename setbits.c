#include <stdio.h>

static unsigned setbits(unsigned x, int p, int n, int y)
{
 return (x & ~(~(~0 << n) << (p+1-n))) | ((y | (~0 << n)) << (p+1-n));
}

int main()
{
  unsigned z = setbits(0xFFFFFFFF, 16, 8, 8);
  printf("%d", z);
}