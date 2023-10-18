/*
*****
****
***
**
*
*/
#include<stdio.h>
main()
{
	int i,j,n;
	
	for(i=1;i<=5;i++)//rows
	{
		for(j=5;j>=i;j--) //colnms
		{
			printf("*");
	 	}
		printf("\n");
	}
}
	

