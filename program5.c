#include<stdio.h>
void main()
{
	float iv,fv,t_c,t_t,d;

	printf("Enter the initial and final velocity of car\n");
	scanf("%f%f",&iv,&fv);
	printf("Enter the distance between car and truck\n");
	scanf("%f",&d);
	printf("Enter the time delay after which the truch starts\n");
	scanf("%f",&t_t);
	t_c=(2*d)/(iv+fv);
	printf("Time delay is %f\n",t_c);
	if(t_c<t_t)
		printf("Car collides the truck\n");
	else
		printf("Car wont collides the truck\n");

}
