#include<stdio.h>
void main()
{
	int num,multiplier,product,num1;
	num1=1;
	printf("enter a number");
	scanf("%d",&num);
	printf("enter the multiplier");
	scanf("%d",&multiplier);
	while(num1<=multiplier)
	{
		product=num1*num;
		printf("%dx%d=%d \n",num,num1,product);
		num1+=1;
		}
	return;
	}
