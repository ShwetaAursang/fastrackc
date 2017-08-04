#include<stdio.h>
#include<math.h>

void main()
{
	float kilowatt,joules,seconds;
	printf("Enter a energy consumption in joules and time duration in seconds\n");
	scanf("%f %f",&joules,&seconds);
	kilowatt=joules/(1000*seconds);
	printf("Power consumption in kilowatt=%0.2f\n",kilowatt);
	
}
