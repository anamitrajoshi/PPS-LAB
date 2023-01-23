#include<stdio.h>
void main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if (num>=0){
		printf("the number is positive\n");
		if(num%2==0)
			printf("the number is even");
		else
			printf("the number is odd");}
	else{
		printf("the number is negative\n");
		if(num%2==0)
			printf("the number is even");
		else
			printf("the number is odd");}
	return;
	}
