#include<stdio.h>
main()
{
	int a=10,b=20;
	printf("Value of A=%d and B=%d before swapping.\n",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("Value of A=%d and B=%d After swapping.",a,b);
}
