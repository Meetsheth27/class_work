//largest number from 3 given by user.
#include<stdio.h>
main()
{
	int a,b,c,ans;
	
	printf("Enter the number : \n\n");
	scanf("%d",&a);
	
	printf("Enter the number : \n\n");
	scanf("%d",&b);
	
	printf("Enter the number : \n\n");
	scanf("%d",&c);

	if(a>b)
	{
		printf("A is greatest...");
	}
	else if(b>c)
	{
		printf("B is greatest...");
	}
	else
	printf("C is greatest...");
	
}

