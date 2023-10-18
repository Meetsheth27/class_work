#include<stdio.h>
main()
{
	int i,no,table=0;
	printf("Enter the value of No :\n\n");
	scanf("%d",&no);
	
	while(i<=10)
	{
		table=no*i;
		printf("\n\n %d * %d = %d",no,i,table);
		i++;
	}
}
