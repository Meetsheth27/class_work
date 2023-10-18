#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)//rows
	{
			for(k=5;k>=i;k--)
			{
					printf("  ");
			}
			for(j=1;j<=i;j++) //colnms
		{
			printf(" *");
		}
		printf("\n");
	}
}
	

