#include<stdio.h>
// #include<stdlib.h>

int main()
{  
    int i = 0;
    int count = 0;
    scanf ("%d", &i);
    while (i != 1)
    {
        if (i % 2 == 0)    
        {      
            i = i / 2;      
            count++;    
        }    
        else    
        {      
            i = (i * 3 + 1) / 2;      
            count++;    
        }
    }
    printf ("%d\n", count);

    // system("PAUSE");  
    return 0;
}