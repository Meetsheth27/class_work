#include<stdio.h>
main()
{
	int a,r;
	printf("Enter the number : \n");
	scanf("%d",&a);
	while(a>0)
	{
	r=a%10;
	printf("%d",r);
	a=a/10;
	}
}
