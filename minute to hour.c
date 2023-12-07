#include<stdio.h>
main()
{
	int minute,hour,sec;
	printf("Enter Minutes :");
	scanf("%d",&minute);
	hour=minute/60;
	sec=minute*60;
	printf("Hour :%d\nSeconds :%d",hour,sec);
}
