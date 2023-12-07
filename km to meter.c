#include<stdio.h>
main()
{
	int kilometer,meter;
	printf("Enter kilometer :");
	scanf("%d",&kilometer);
	meter=1000*kilometer;
	printf("%d Kilometer equals to %d Meter.",kilometer,meter);
}
