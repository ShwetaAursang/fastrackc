#include<stdio.h>


void main()
{
	float watts,lumens,lumens_per_watt;
	printf("Enter power consumption in watts and luminous efficacy in lumens per watt\n");
	scanf("%f %f",&watts,&lumens_per_watt);
	lumens=watts*lumens_per_watt;
	printf("luminous flux is %f\n",lumens);
}
