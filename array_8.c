#include<stdio.h>
main()
{
	int a[20];
	int i,sum=0;
	
	for(i=0;i<=4;i++)
	{
		printf("Enter array :-");
		scanf("%d",&a[i]); 
		
		sum=sum+a[i];
	}
	printf(" The sum = %d",sum);	
}
