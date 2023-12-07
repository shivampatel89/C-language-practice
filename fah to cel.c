//(°F - 32) × 5/9
#include<stdio.h>
main()
{
	float fah,cel;
	printf("Enter the value of fahrenheit:");
	scanf("%f",&fah);
	cel=(fah-32)*5/9;
	printf("Celcius :%.2f",cel);
}
