#include<stdio.h>
main()
{
	int n1,n2;
	n1=20;
	n2=30;
	//if condition is returning o\p as true.. but !
	// not operator will convert it into false condition
	if(!(n1>0 && n2>0 ) )
	printf("\n\n\t Both nubmerz are greater then zero..");
	
	else
	printf("\n\n\t Both the numberz are less than zero..");
}
