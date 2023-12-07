#include<stdio.h>
main()
{
	int a,b,c,total;
	printf("Enter value of height :");
	scanf("%d",&a);
	printf("Enter value of width :");
	scanf("%d",&b);
	printf("Enter value of lenght :");
	scanf("%d",&c);
	total=2*(b*c+a*c+a*b);
	printf("circumference of Prims is %d.",total);
}
