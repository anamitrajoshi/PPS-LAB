#include<stdio.h>
void main()
{
	float first_num,second_num;
	printf("enter first number");
	scanf("%f",&first_num);
	printf("enter second number");
	scanf("%f",&second_num);
	printf("the sum is %f\n",first_num+second_num);
	printf("the difference is %f\n",first_num-second_num);
	printf("the product is %f\n",first_num*second_num);
	printf("the quotient is %f\n",first_num/second_num);
	printf("the remainder is %d\n",(int)first_num%(int)second_num);
	return;
	}
	
