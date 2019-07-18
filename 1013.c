#include <stdio.h>
#include <math.h>

int isPrime(int i)
{
    int ret = 1;
    int k;
    if (i == 1 || (i % 2 == 0 && i != 2))
    {
        ret = 0;
        return ret;
    }
    for (k = 2; k <= sqrt(i); k++)
    /*第一次提交时判定条件为k < i - 1,结果有一条运行超时，
    改成 k < sqrt(i)只有两天答案正确，改成k <= sqrt(i),全对 */
    {
        if (i % k == 0)
        {
            ret = 0;
            break;
        }
    }
    return ret;
}

int main()
{
    int n1 = 0, n2 = 0, count = 0;
    int prime[100000] = {0,};
    scanf("%d %d", &n1, &n2);
    count = n2 - n1;
    int j = 1, n = 0, a = 2;
    while (j < n1)
    {
        if (isPrime(a)) j++;
        a++;
    }
    while (j <= n2)
    {
        if (isPrime(a)) prime[j++] = a;
        a++;
    }

    for (int i = n1; i < n2; i++)
    {
        if ((i - n1) % 10 == 9) printf("%d\n", prime[i]);
        else printf("%d ", prime[i]);
    }
    printf("%d", prime[n2]);

    return 0;
}