#include<stdio.h>
main()
{
	float r,area,cir;
	printf("Enter value of radius :");
	scanf("%f",&r);
	area=3.14*r*r;
	cir=2*3.14*r;
	printf("Area and circumference are %.2f and %.2f",area,cir);
}
