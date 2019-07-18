#include <stdio.h>
// #include<stdlib.h>

int main()
{
  int n = 0;
  int number[100] = {0,};
  int flag[101] = {0,};
  
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &number[i]);
    flag[number[i]] = 1;
  }

  for(int i = 0; i < n; i++)
  {
    int k = number[i];
    while (k != 1)
    {
      if (k % 2 == 0) k = k / 2;
      else k = 3 * k + 1;
      if (k <= 100) flag[k] = 0;
    }
  }
  
  n = 0;
  for(int i = 0; i < 101; i++)
  {
    if (flag[i] == 1)
    {
      number[n++] = i;
    }
  }
  for (int i = n-1; i > 0; i--)
  {
    printf("%d ", number[i]);
  }
  if (n > 0) printf("%d", number[0]);
  
  // system("PAUSE");
  return 0;
}
