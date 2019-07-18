#include <stdio.h>

int main()
{
	char pers[10][101];
	int n = 0;
	int flag[10];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		flag[i] = 1;
		scanf("%s", pers[i]);
	}

	for (int i = 0 ; i < n; i++)
	{
		int h, b, t, j = 0;
		while (pers[i][j] != 'P')
		{
			if (pers[i][j] != 'A')
			{
				flag[i] = 0;
				break;
			}
			j++;
		}
		if (flag[i] == 0) continue;
		h = j;
		j++;
		while (pers[i][j] != 'T')
		{
			if (pers[i][j] != 'A')
			{
				flag[i] == 0;
				break;
			}
			j++;
		}
		if (flag[i] == 0 || pers[i][j] == '\0') {flag[i] = 0; continue;}
		b = j-h-1;
		j++;
		while (pers[i][j] != '\0')
		{
			if (pers[i][j] != 'A')
			{
				flag[i] = 0;
				break;
			}
			j++;
		}
		if (flag[i] == 0) continue;
		t = j-h-b-2;

		if (h * b == t && b > 0) continue;
		else {flag[i] = 0; continue;}

	}

	for (int i = 0; i < n; i++)
	{
		if (flag[i] == 1) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}
