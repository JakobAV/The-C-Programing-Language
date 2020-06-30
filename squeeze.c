#include <stdio.h>
#include <stdbool.h>

void squeeze(char s1[], char s2[]);

int main()
{
  char s1[] = "abcdef";
  char s2[] = "abf";
  int i;
  squeeze(s1, s2);
  for (i = 0; s1[i] != '\0'; i++)
  {
    putchar(s1[i]);
  }
}

void squeeze(char s1[], char s2[])
{
  int i, j, k;
  bool isExcluded;
  for (i = j = 0; s1[i] != '\0'; i++)
  {
    isExcluded = false;
    for (k = 0; s2[k] != '\0'; k++)
    {

      if (s1[i] == s2[k])
      {
        isExcluded = true;
        continue;
      }
    }

    if(!isExcluded)
      s1[j++] = s1[i];
  }
  s1[j] = '\0';
}