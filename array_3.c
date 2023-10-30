#include<stdio.h>
main()
{
	int a[5];
	int i,ele,flag=0;
	
	for(i=0;i<=4;i++)
	{
		printf("\n\n Input array value : ");
		scanf("%d",&a[i]);
	}
	printf("\n\n \...............................");
	for(i=0;i<5;i++)
	{
		printf("\n\n Array [%d] : %d",i,a[i]);
	}
	printf("\n\n\t Input element to search : ");
	scanf("%d",&ele);
	for(i=0;i<5;i++)
	{
		if(ele==a[i])
		{
			flag=1;
		}
		
	}
	if(flag)
	printf("THE NUMBER IS BETWEEN....");
	else
		printf("THE NUMBER IS NOT BETWEEN....");	
	
}
