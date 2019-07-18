#include<stdio.h>
// #include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    //输入n个整数 
    int zs[101];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &zs[i]);
    }

    /*
    主要思想：设置一个标志数组，默认情况数组值为0；然后将对应下标为输入数据 i 的标志设为1；
    如果数据 i 在递推过程中出现，那么标志位数组下标为i的那个数组值设为2。
    然后将下标值为1的存入一个数组，按降序排序输出 
    */ 
    int biaozhi[101] = {0};  
    int save[10000] = {0};
    int sub=0;
    int temp;

    for(int i=0;i<n;i++)
    {
        int m = zs[i];  //某个输入 
        if(biaozhi[m] == 2)  //如果其标志为2，则跳过 
        {
            continue;
        }
        biaozhi[m] = 1;  //否则设为1 

        while(m!=1)
        {
            if(m%2==1)
            {
                m = (3*m+1)/2;   //递推过程出现的数字 
                biaozhi[m] = 2;
            }
            else
            {
                m = m/2;  //递推过程出现的数字 
                biaozhi[m] = 2;
            }
        }
    }

    //将数组值为1的下标存入另一个数组 
    for(int k=0;k<101;k++)
    {
        if(biaozhi[k] == 1)
        {
            save[sub] = k;
            sub++;
        }
    }

    //降序排序 
    for(int i=0;i<sub;i++)
    {
        for(int j=i+1;j<sub;j++)
        {
            if(save[i]<save[j])
            {
                temp = save[i];
                save[i] = save[j];
                save[j] = temp; 
            }
        }
    }
    for(int k=0;k<sub-1;k++)
    {
        printf("%d ", save[k]);
    }
    printf("%d", save[sub-1]);

    // system("PAUSE");
    return 0;
}