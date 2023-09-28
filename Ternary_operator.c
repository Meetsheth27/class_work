#include<stdio.h>
main()
{
	int x,y,z;
	
	printf("input number 1 : ");
	scanf("%d",&x);
	
	printf("input number 2 : ");
	scanf("%d",&y);
	
	z=x>y?x:y;
	printf("the greater number is  : %d",z);
}

