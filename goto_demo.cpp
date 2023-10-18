#include<stdio.h>
main()
{
	int i;
	
	printf("\n Enter a num : ");
	scanf("%d",&i);
	
	if(i%2==0)
	goto even;// Even is called label.
	
	else
	 
		goto odd;
		
	even : printf("\n the number is even...");
			return 0;
			
	odd : printf("\n the number is odd...");			
}
