#include<stdio.h>
main()
{
	int rollno,total;
	int s1,s2,s3,s4,s5;
	float per;
	
	printf("Input Roll number :\n\n\t ");
	scanf("%d",&rollno);
	
	printf("Input s1 : \n\n\t");
	scanf("%d",&s1);
	printf("Input s2 : \n\n\t");
	scanf("%d",&s2);
	printf("Input s3 : \n\n\t");
	scanf("%d",&s3);
	printf("Input s4 : \n\n\t");
	scanf("%d",&s4);
	printf("Input s5 : \n\n\t");
	scanf("%d",&s5);
	
	total=s1+s2+s3+s4+s5;
	per=total/5;
	printf("\n\n\t Roll number : %d",rollno);
	printf("\n\n\t Percentage : %f",per);
	
	if(s1>=40 && s2>=40 && s3>=40 && s3>=40 && s4>=40 && s5>=40)
	{
		if(per>=70)
		printf("\n\n\t Result : A+");
		
		else if(per>=60)
		printf("\n\n\t Result : A");
		
			else if(per>=50)
		printf("\n\n\t Result : B+");		
	}
		else
		printf("\n\n\t Result : FAIL ");					
}
