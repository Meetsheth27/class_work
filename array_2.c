//Sum of array......
#include<stdio.h>
main()
{
	int a[10];
	int i;
	for(i=0;i<=9;i++)
	{
		printf("\n\n\t a[%d]:",i);
		scanf("%d",&a[i]);
	}

	{
	
	for(i=0;i<=9;i++)
		{
			if(a[i]%2==0)
				{
					printf("\n\n\t a[%d]: %d",i,a[i]);
				}
		}
	}
}
	

