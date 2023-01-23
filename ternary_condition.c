#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter 2 numbers");
	scanf("%d %d",&a,&b);
	c=a>b?a:b;
	printf("%d is the greater number",c);
	return;
	}
