#include <stdio.h>

unsigned int invert(unsigned x, int p, int n)
{
 return (x & ~(~(~0 << n) << (p+1-n))) | (~(~0 << n) << (p+1-n)) & ((~x >> (p+1-n) & ~(~0 << n)) << (p+1-n));
}

int main()
{
  unsigned z = invert(0xFFFFFFF2, 2, 2);
  printf("%d", z);
}