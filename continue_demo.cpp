#include<stdio.h>
main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		if(i==3)
		continue; // skips the 3rd num then will print the output :- 1,2,4,5..
		printf("%d",i);
	}
	printf("\n\t\n\t");
}
