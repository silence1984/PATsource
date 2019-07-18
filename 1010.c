#include <stdio.h>

int main()
{
	int number[3000];
	char c;
	int n, j, k = 0;
	scanf("%d", &number[n++]);
	while((c = getchar()) == ' ')
	{
		scanf("%d", &number[n++]);
	}
	j = n / 2;
	for (int i = 0; i < n; i = i + 2)
	{
		if (number[i+1] == 0) j--;
		number[i] = number[i+1] * number [i];
		number[i+1] = number[i+1] - 1;
	}
printf("j=%d", j);
	for (k=0; k < n; k = k + 2)
	{
		if (j == 1) break;
		else if (number[k+1] != -1)
		{
			printf("%d %d ", number[k], number[k+1]);
			j--;
		}
	}
	for (;k < n; k = k + 2)
	{
		if (number[k+1] != -1)
		{
			printf("%d %d", number[k],number[k+1]);
			break;
		}
	}

	return 0;
}
