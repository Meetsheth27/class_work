#include<stdio.h>
main()
{
	int sum,i,no;
	
	printf("Enter the value of No :\n\n");
	scanf("%d",&no);
	i=1;
	while(i<=no)
	{
		sum+=i;
		i++;
	}
	printf("THE SUM OF ALL NUBMERS IS : %d",sum);
}
