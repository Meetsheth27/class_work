#include<stdio.h>
main()
{
	char str[5][20];
	int i;
	
	
	for(i=0;i<=4;i++)
	{
		printf("\n\n Input a string :  ");
		gets(str[i]);
	}
	
	for(i=0;i<=4;i++)
	printf(" output : %s\n\n",str[i]);
}
