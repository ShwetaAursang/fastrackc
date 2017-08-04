#include <stdio.h>
 void main()
{
    int b, e;

    long r ;

    printf("Enter a base number: ");
    scanf("%d", &b);

    printf("Enter an exponent: ");
    scanf("%d", &e);
    if(e==0)
    {
        printf("Ans = 1");
    }

    while (e != 0)
    {
        r *= b;
        --e;
    }

    printf("Ans = %ld", r);
}
