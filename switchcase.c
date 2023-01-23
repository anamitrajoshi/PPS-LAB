#include<stdio.h>
void main()
{
	int choice;
	float a,b;
	printf("enter 2 numbers");
	scanf("%f %f",&a,&b);
	printf("enter your choice of number if\n 1=sum\n 2=difference\n 3=product\n 4=quotient\n 5=remainder");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("the sum is %f",a+b);
		break;
		case 2:printf("the difference is %f",a-b);
		break;
		case 3:printf("the product is %f",a*b);
		break;
		case 4:printf("the quotient is %f",a/b);
		break;
		case 5:printf("the remainder is %d",(int)a%(int)b);
		break;
		default: printf("enter a number betwwen 1 and 5");
		break;
		}
	return;
	}
	
