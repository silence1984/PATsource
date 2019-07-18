#include<stdio.h>

int main()
{
  int i = 0;
  int j = 1;
  int k = 0;
  int sum = 0;
  char* number[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu",};
  scanf ("%d", &i);
  while (i >= 1)
  {
    k = i % 10;
    sum = sum + k;
    i = (i - k) / 10;
  }
  i = sum;
  while (i > 0)
  {
    k = i % 10;
    i = (i - k) / 10;
    j = j * 10;
  }
  while (j > 10)
  {
    k = sum / (j / 10);
    printf("%s ", number[k]);
    sum = sum - k * (j / 10);
    j = j / 10;
  }
  printf("%s", number[sum]);

  return 0;
}
