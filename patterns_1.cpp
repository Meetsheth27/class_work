/*
*****
*****
*/
#include<Stdio.h>
main()
{
	int a,i,j;
	printf("enter the rows to print : ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
