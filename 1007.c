#include <stdio.h>
// #include <stdlib.h>

int main()
{
    int count = 0, n = 0;
    int notPrime[100000] = {0,};
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        if (notPrime[i] == 0)
        {
            for (int j = 2; j*i <= n; j++) notPrime[j*i] = 1;
        }
    }
    for (int i = 2; i <= n-2; i++)
    {
        if (notPrime[i] == 0 && notPrime[i+2] == 0) count++;
    }
    
    printf("%d", count);
    
    // system("PAUSE");
    return 0;
}