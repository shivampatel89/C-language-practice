#include<stdio.h>
main()
{
	char Ename[20];
	int salary,average,total=0;
	int i=1;
	do
	{
		printf("Enter Ename :");
		scanf("%s",Ename);
		printf("Enter salary :");
		scanf("%d",&salary);
		total=total+salary;
		i++;	
	}
	while(i<=5);
	printf("\n");
	printf("Total salary :%d\n",total);
	average=total/5;
	printf("Average salary :%d",average);
	
}
