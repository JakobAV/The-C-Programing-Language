#include <stdio.h>

int main()
{
  int c, i = 0;
  int lim = 1000;
  char s[lim];

  for (i=0; i<lim-1;)
  {
    if((c = getchar()) == '\n')
      break;

    if(c == EOF)
    break;

    s[i] = c;
    ++i;
  }
  printf("%s", s);
}