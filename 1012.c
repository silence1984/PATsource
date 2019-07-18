#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[6][1000];
    int n[6];
    scanf("%d", &n[0]);  //接收第一个正整数N
    for (int i = 0; i < n[0]; i++)
    {
        scanf("%d", &a[0][i]);
        switch (a[0][i] % 5)
        {
        case 0:
            a[1][n[1]++] = a[0][i];
            break;
        case 1:
            if (n[2] % 2 == 0) a[2][n[2]++] = a[0][i];
            else a[2][n[2]++] = 0 - a[0][i];
            break;
        case 2:
            a[3][n[3]++] = a[0][i];
            break;
        case 3:
            a[4][n[4]++] = a[0][i];
            break;
        case 4:
            a[5][n[5]++] = a[0][i];
            break;        
        default:
            break;
        }
    }

    for (int i = 1; i < 6; i++)
    {
        int sum;
        int max;
        float fsum;
        if (n[i] == 0 && i == 5) printf("N");
        else if (n[i] == 0) printf("N ");
        else switch (i)
        {
        case 1:
            sum = 0;
            for (int j = 0; j < n[i]; j++)
            {
                if (a[i][j] % 2 == 0) sum = sum + a[i][j];
            }
            printf("%d ", sum);
            break;
        case 2:
            sum = 0;
            for (int j = 0; j < n[i]; j++)
            {
                sum = sum + a[i][j];
            }
            printf("%d ", sum);
            break;
        case 3:
            printf("%d ", n[i]);
            break;
        case 4:
            fsum = 0;
            for (int j = 0; j < n[i]; j++)
            {
                fsum = fsum + a[i][j];
            }
            printf("%.1f ", fsum / n[i]);
            break;
        case 5:
            max = a[i][0];
            for (int j = 1; j < n[i]; j++)
            {
                if (max < a[i][j]) max = a[i][j];
            }
            printf("%d", max);
            break;
        
        default:
            break;
        }
    }

    system("PAUSE");
    return 0;

}
