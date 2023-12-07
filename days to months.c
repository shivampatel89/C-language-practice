#include<stdio.h>
main()
{
	int days,months,day;
	printf("Enter days (minimum 30 days) :");
	scanf("%d",&days);
	months=days/30;
	day=days%30;
	printf("Months :%d and Days :%d",months,day);
}
