#include<stdio.h>
main()
{
	int years,months,days;
	printf("Enter years :");
	scanf("%d",&years);
	months=years*12;
	days=years*365;
	printf("%d years =%d months\n%d years =%d days",years,months,years,days);
}
