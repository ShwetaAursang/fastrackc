#include<stdio.h>

void main()
{
	int n;
	double sum=0;
	printf("Enter the series length: \n");
	scanf("%d", &n);
   	int fact = 1;
    	for (int i = 1; i <= n; i++)
    	{
       		fact=fact*i;         // Update factorial
       		sum=sum+1.0/fact;   // Update series sum
    	}
    	printf("Sum is %lf\n",sum);
}
