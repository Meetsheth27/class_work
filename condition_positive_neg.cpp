#include<stdio.h>
main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	if(num>0)
	{
		printf("This number is positive\n\n");
	}
	else if(num<0)
	{
		printf("This number is negetive\n\n");
	}
	else
	{
		printf("This number is zero\n\n");
	}			
}
