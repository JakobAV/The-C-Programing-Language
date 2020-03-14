#include <stdio.h>

#define MAXLENGTH 1000
#define TABSTOP 10
int main()
{
  int c, i, j, columnNumber, columnsToTabStop;
  char buffer[MAXLENGTH];

  i = 0;
  columnNumber = 0;
  columnsToTabStop = 0;
  for (c = getchar(); c != EOF; c = getchar())
  {
    if (c == '\t')
    {
      columnsToTabStop = TABSTOP - (columnNumber % TABSTOP);
      for (j = 0; j < columnsToTabStop; j++)
      {
        buffer[i++] = ' ';
      }
      columnNumber += columnsToTabStop;
    }
    else
    {
      buffer[i++] = c;
      columnNumber++;
    }
  }

  printf("%s", buffer);
}