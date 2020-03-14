#include <stdio.h>

int main()
{
  int i, c, prevChar, /* test middle of line*/ inCommentSection, isMultiLine, inString, inChar;
  char buffer[10000];
  char test[40] = "//Don't affect string";
  i = inCommentSection = isMultiLine = inString = 0;
  prevChar = '\0';
  // Test single line
  for (c = getchar(); c != EOF; c = getchar())
  {
    /*Test
    multi line */
    if (!inString && !inChar)
    {
      if (c == '/')
      {
        if (prevChar == '/')
        {
          inCommentSection = 1;
          buffer[--i] = 0;
        }
        else if (prevChar == '*')
        {
          inCommentSection = isMultiLine = 0;
          c = getchar();
        }
      }
      else if (c == '*' && prevChar == '/')
      {
        isMultiLine = inCommentSection = 1;
        buffer[--i] = 0;
      }
      else if (c == '\n' && inCommentSection && !isMultiLine)
      {
        inCommentSection = 0;
        c = getchar();
      }
    }

    if (!inCommentSection)
    {
      if (!inChar && c == '"')
        inString = !inString;
      if (!inString && c == '\'')
        inChar = !inChar;
      buffer[i++] = c;
    }
    prevChar = c;
  }
  printf("%s", buffer);
}
