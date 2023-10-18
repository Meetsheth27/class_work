//switch case					
#include<stdio.h>	
main()	
{
	int day;
	printf("\n\t Enter a day : ");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1 :
		        printf("\n\t Sunday..");
				break;
		case 2 :
		        printf("\n\t Monday..");
				break;
		case 3 :
		        printf("\n\t tuesday..");
				break;
		case 4 :
		        printf("\n\t wednesday..");
				break;	
		case 5 :
		        printf("\n\t thursday..");
				break;
		case 6 :
		        printf("\n\t friday..");
				break;
		case 7 :
		        printf("\n\t saturday..");
				break;
		default :
					printf("\n\t You have entered invalid day!!!");																		
	}	
}
