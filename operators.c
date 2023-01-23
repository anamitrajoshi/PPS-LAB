#include<stdio.h>
void main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	printf("the greater result is %d \n",a>b);
	printf("the lesser result is %d \n",a<b);
	printf("the greater or equal result is %d \n",a>=b);
	printf("the lesser or equal result is %d \n",a<=b);
	printf("the equality result is %d \n",a==b);
	printf("the inequality result is %d \n",a!=b);
	printf("the post increment result of %d is %d \n",a,a++);
	printf("the pre increment result is %d \n",a, ++a);
	printf("the post decrement result of %d is %d \n",b,b--);
	printf("the pre decrement result is %d \n",b,--b);
	printf("the bitwise and result is %d \n",a&b);
	printf("the bitwise or result is %d \n",a^b);
	printf("the logical and result is %d \n",a>b&&a==b);
	printf("the logical or result is %d \n",a>b||a==b);
	printf("the sum result is %d \n",a+b);
	printf("the difference result is %d \n",a-b);
	printf("the product result is %d \n",a*b);
	return;
	}
	
