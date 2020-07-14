#include <stdio.h>

void escape(char *s, char *t)
{
  int i, j;
  for (i = j = 0; t[i] != EOF && t[i] != '\0'; i++)
  {
    switch (t[i])
    {
    case '\n':
      s[j++] = '\\';
      s[j++] = 'n';
      break;
    case '\t':
      s[j++] = '\\';
      s[j++] = 't';
      break;
    case '\r':
      s[j++] = '\\';
      s[j++] = 'r';
      break;
    case '\\':
      s[j++] = '\\';
      break;
    default:
      s[j++] = t[i];
      break;
    }
  }
  t[j] = '\0';
}

void unescape(char *s, char *t)
{
  int i, j;
  for (i = j = 0; t[i] != EOF && t[i] != '\0'; i++)
  {
    if (t[i] == '\\')
    {
      i++;

      switch (t[i])
      {
      case 'n':
        s[j++] = '\n';
        break;
      case 't':
        s[j++] = '\t';
        break;
      case 'r':
        s[j++] = '\r';
        break;
      case '\\':
        s[j++] = '\\';
        break;
      default:
        s[j++] = t[i];
        break;
      }
    }
    else
    {
      s[j++] = t[i];
    }
  }
  t[j] = '\0';
}

int main()
{
  char input[1064];
  char output[1064];
  int c, i;
  i = 0;
  while ((c = getchar()) != EOF)
  {
    input[i++] = c;
  }

  unescape(output, input);

  printf("%s", output);
}

/*
void escape(char *s, char *t)\n{\n  int i, j;\n  for (i = j = 0; t[i] != EOF && t[i] != '\0'; i++)\n  {\n    switch (t[i])\n    {\n    case '\n':\n      s[j++] = '\\';\n      s[j++] = 'n';\n      break;\n    case '\t':\n      s[j++] = '\\';\n      s[j++] = 't';\n      break;\n    case '\r':\n      s[j++] = '\\';\n      s[j++] = 'r';\n      break;\n    case '\\':\n      s[j++] = '\\';\n      break;\n    default:\n      s[j++] = t[i];\n      break;\n    }\n  }\n  t[j] = '\0';\n}\n
*/