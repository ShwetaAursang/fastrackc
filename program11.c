#include<stdio.h>
void main()
{
	int  num, bin, dec = 0, base = 1, rem;
 
    printf("Enter a binary number(1s and 0s) \n");
    scanf("%d", &num); /* maximum five digits */
    bin = num;
    while (num > 0)
    {
        rem = num % 10;
        dec = dec + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
    printf("The Binary number is = %d \n", bin);
    printf("Its decimal equivalent is = %d \n", dec);
}
