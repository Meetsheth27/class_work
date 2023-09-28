#include<stdio.h>
main()
{
	int a;
	printf("enter the value : ");
	scanf("%d",&a);
	if(a%5==0)
	{
		if(a%3==0)
		{
			printf("This number is divisible by 3..\n\n");	
		}
		else{
			printf("This number is not divisible by 3..\n\n");
		}
		printf("This number is divisible by 5..\n\n");	}
	else{
		printf("This number is not divisible by 5..\n\n");
	}
}
