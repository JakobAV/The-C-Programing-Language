#include <stdio.h>

static void lower(char *c)
{
  int i;
  for ( i = 0; c[i] != EOF && c[i] != '\0'; i++)
  {
    c[i] = c[i] >= 'A' && c[i] <= 'Z' ? c[i] + 32 : c[i];
  }
}

int main()
{
  char c[1064] = "ABCabc112A";
  lower(c);
  printf("%s", c);
}