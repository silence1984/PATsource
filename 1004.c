#include <stdio.h>

int main()
{
  int max, min, n = 0;
  char name[100][11];
  char id[100][11];
  int grade[100];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%s %s %d", name[i], id[i], &grade[i]);
    if (grade[max] < grade[i]) max = i;
    if (grade[min] > grade[i]) min = i;
  }
  printf("%s %s\n%s %s\n", name[max], id[max], name[min], id[min]);
  return 0;
}
