#include<stdio.h>
void main()
{
	int perc;
	printf("enter your percentage");
	scanf("%d",&perc);
	if(perc>=70&&perc<=100)
		printf("first class with distinction");
	else if(perc>=60&&perc<70)
		printf("first class");
	else if(perc>=50&&perc<60)
		printf("second class");
	else if(perc>=0&&perc<50)
		printf("failed");
	else
		printf("enter an integer between 0 and 100");
	return;
	}
		
