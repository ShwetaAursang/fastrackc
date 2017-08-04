#include<stdio.h>
void main()
{
	double iv,fv,dec,dis,runway_dist;
	printf("Enter the initial and final velocity in kmph\n");
	scanf("%lf %lf",&iv,&fv);
	printf("Enter the deceleration of plane \n");;
	scanf("%lf",&dec);
	printf("Enter the distance of runway\n");
	scanf("%lf",&runway_dist);
	dis=(-(fv*fv-iv*iv)/(2*dec));
	printf("Distance of runway: %lf\n",dis);
	if(dis<runway_dist)
		printf("Plane can land safely\n");
	else
		printf("Plane cannot land safely\n");

}
