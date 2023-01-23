#include<stdio.h>
void main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	printf("%d\n",(a>b)||(a<b));
	printf("%d\n",(a>=b)&&(a==b));
	printf("%d",(a<=b)^(a!=b));
	return;
	}
	
