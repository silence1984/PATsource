#include <stdio.h>
// #include <stdlib.h>

int main()
{
    int number[200] = {0,};
    int n, m = 0;
    scanf("%d %d", &n, &m);
    m = m % n;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    if (m) 
    {
        for (int i = n - m; i < n; i++)
        {
            printf("%d ", number[i]);
        }
        for (int i = 0; i < n - m - 1; i++)
        {
            printf("%d ", number[i]);
        }
        printf("%d", number[n-m-1]);
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            printf("%d ", number[i]);
        }
        printf("%d", number[n-1]);
    }

    // system("PAUSE");
    return 0;
}