/* if marks are above 70 then distingtion
if above 60 then 1st class
if above 50 then 2nd class
if above 40 then pass
if less than 40 then fail*/
#include<stdio.h>
main()
{
	int marks;
	printf("Enter the marks of student : ");
	scanf("%d",&marks);
		
	if(marks>=70)
	{
		printf("The student will get a distingtion!");
	}
	else if(marks>=60)
	{
		printf("The student got 1st class marks ");
	}
	else if(marks>=50)
	{
		printf("The student got 2nd class marks ");
	}
		else if(marks>=40)
	{
		printf("The student just passed \n\n");
	}
	else
	{
		printf("The student is failed");
	}
	
}
