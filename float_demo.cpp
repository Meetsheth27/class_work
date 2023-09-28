#include<stdio.h>
main()
{
	int r;
	float pie=3.14, area;
	printf(" input the value of radius : ");
	scanf("%d",&r);
	
	area=pie*(r*r);
	
	printf("Area of circle : %.2f \n\n",area);
}
