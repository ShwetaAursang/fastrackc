#include<stdio.h>

void main()
{
	int year;
	printf("Enter a year\n");
	scanf("%d",&year);
	//assert(leap(2013)!=0);
	if(((year%4)==0 && (year%100)!=0) || (year%400)==0)
	printf("%d is a leap year\n",year);
	else
	printf("%d is not a leap year\n",year);
}


