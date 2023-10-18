#include<stdio.h>
main()
{
	int n,a;
	
	printf("Enter the value : ");
	scanf("%d",&n);
	
	for(n=1;n%2==0;n++)
	{
		printf("EVEN %d",n);
	}
}
