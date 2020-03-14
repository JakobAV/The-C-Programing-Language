#include <stdio.h>

int main()
{
  int c, nb, nt, nl;

  nl = 0;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
      ++nb;
    if (c == '\t')
      ++nt;
    if (c == '\n')
      ++nl;
  }
  printf("Blanks: %3d\nTabs: %3d\nLines %3d\n", nb, nt, nl);
}