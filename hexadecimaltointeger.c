#include <stdio.h>

int power(int m, int n);

int main()
{
  int i, c, count, sum = 0;
  int limit = 100;
  char s[limit];
  unsigned int d[limit];

  if (getchar() != '0' || ((c = getchar()) != 'x' && c != 'X'))
    return 0;

  for (i = 0; i < limit - 1; i++)
  {
    c = getchar();
    if (c == '\n' || c == EOF)
      break;

    if (c >= '0' && c <= '9')
    {
      d[i] = c - '0';
      count++;
    } else if(c >= 'a' && c <= 'f')
    {
      d[i] = c - 'a' + 10;
      count++;
    }
    else if (c >= 'A' && c <= 'F')
    {
      d[i] = c - 'A' + 10;
    }
    else
      break;

    s[i] = c;
  }

  for (i = 1; i <= count; i++)
  {
    sum += d[count - i] * power(16, i - 1);
  }

  printf("Input of %s has the value of %d. count: %d\n", s, sum, count);
}

int power(int base, int n)
{
  int i, p;

  p = 1;
  for(i = 1; i <= n; ++i)
    p = p * base;
  return p;
}