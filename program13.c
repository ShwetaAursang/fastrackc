#include<stdio.h>
void main()
{
	int n,r=0, rem, c;
	
	printf("Enter an integer: ");
    scanf("%d", &n);
	c=n;
	while(n!=0)
	{
		rem=n%10;
		r=r*10+rem;
		n=n/10;
	}
	if(c==r)
	{
	printf(" entered number is palindrome\n");
		}
		else
		printf(" entered number is not palindrome\n");
}
