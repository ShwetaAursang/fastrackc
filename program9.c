#include <stdio.h>
void main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm,a[20],x,y,z;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Enter the numbers to be checked\n");
    scanf("%d%d%d",&x,&y,&z);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        a[n]=t1;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
   for(i=1;i<=n;i++)
   {
    if(a[n]==x)
        if(a[n]==y)
            if(a[n]==z)
                printf("%d,%d,%d  are fibinocci series",x,y,z);
            else
        
        printf("Enetered numbers are not fibbinoci series\n");

   }
}
