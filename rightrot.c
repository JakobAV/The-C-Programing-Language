#include <stdio.h>

unsigned int rightrot(unsigned x, int n)
{
 return x >> n | x << (sizeof(unsigned)*8-n);
}

int main()
{
  unsigned z = rightrot(0xFFFFFFF2, 2);
  printf("%d", z);
}