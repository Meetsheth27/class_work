#include<stdio.h>
main()
{
	char str[10];
	int i,leg=0;
	
	printf("ENTER THE STRING : ");
	scanf("%s",&str);
	
	for(i=0;str[i]!='\0';i++)
       {
				leg++;				
	   }
	   printf("TOTAL CHARACTERS ARE : %d",leg);
}
