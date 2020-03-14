#include <stdio.h>

int main()
{
#if 0
  int c, lc;

  lc = EOF;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      if (c != lc)
        putchar(c);
    }
    else
      putchar(c);
    lc = c;
  }
#endif

  for (int c = getchar(); c != EOF; c = getchar())
  {
    if (c == '\n')
    {
      putchar('\\');
      putchar('n');
    }
    else if (c == '\t')
    {
      putchar('\\');
      putchar('t');
    }
    else if (c == '\\')
    {
      putchar('\\');
      putchar('\\');
    }
    else
    {
      putchar(c);
    }
  }
}