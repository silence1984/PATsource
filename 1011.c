 #include<stdio.h>
 
 int main()
 {
   int n = 0;
   long a[100][3];
   
   scanf("%d", &n);
   for (int i = 0; i < n; i++)
   {
     scanf("%ld %ld %ld", &a[i][0], &a[i][1], &a[i][2]);
   }
   for (int i = 0; i < n; i++)
   {
     if (a[i][0] + a[i][1] > a[i][2]) printf("Case #%d: true", i+1);
     else printf("Case #%d: false", i+1);
     if (i<(n-1)) printf("\n");
   }
   
   return 0;
 }
