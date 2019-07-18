#include <stdio.h>
// #include <stdlib.h>

int main()
{
    int b, s, g = 0;
    int n = 0;
    scanf("%d", &n);
    g = n % 10;
    s = ((n - g)/10)%10;
    b = ((n - g - s * 10)/100)%10;
    for(int i = 0; i < b; i++) printf("B");
    for(int i = 0; i < s; i++) printf("S");
    for(int i = 1; i <= g; i++) printf("%d", i);

    // system("PAUSE");
    return 0;
}