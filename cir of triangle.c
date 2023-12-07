#include<stdio.h>
main()
{
	int a,b,c,total;
	printf("Enter value of 1st side :");
	scanf("%d",&a);
	printf("Enter value of 2nd side :");
	scanf("%d",&b);
	printf("Enter value of 3rd side :");
	scanf("%d",&c);
	total=a+b+c;
	printf("circumference of triangle is %d.",total);
}
