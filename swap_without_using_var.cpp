//Swap variable without using 3rd variable.
#include<stdio.h>
main()
{
	int a=10,b=20;
	
	printf("Before swap a=%d , b=%d",a,b);
		a=a+b;
		b=a-b;
		a=a-b;
		printf("\n\nAfter swap a=%d,b=%d\n\n",a,b);
}
