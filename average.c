#include<stdio.h>
main()
{
	int a,b,c,d,e,total;
	printf("Enter 5 expense :\n");
	scanf("%d\t%d\t%d\t%d\t%d",&a,&b,&c,&d,&e);
	total=(a+b+c+d+e)/5;
	printf("Average is : %d",total);
}
