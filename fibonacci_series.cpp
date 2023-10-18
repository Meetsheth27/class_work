//fibonacci series 0 1 1 2 3 5 8 13......
#include<stdio.h>
main()
{
	int i,j,k,no;
	
	printf("Enter the value of No :\n\n");
	scanf("%d",&no);
	i=0;
	j=1;
	
	printf("\n%d %d",i,j);
	i=0;
	j=1;
	
	k=i+j;
	while(k<=no)
	{
		printf(" %d ",k);
		i=j;
		j=k;
		k=i+j;
	}
		
}
