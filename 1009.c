#include <stdio.h>

int main()
{
  char s[80][80];
  char c;
  int i, j = 0;
  while ((c = getchar()) != '\n')
  { 
    if (c == ' ')
    {
      s[i][j] = '\0';
      j = 0;
      i++;
      continue;
    }
    else s[i][j++] = c;
  }
  for (j = i; j > 0; j-- )
  {
    printf("%s ", s[j]);
  }
  printf("%s", s[0]);
  
  return 0;
}
