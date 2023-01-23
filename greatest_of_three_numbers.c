#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("enter three values");
	scanf("%d %d %d",&a,&b,&c);
	d=a>b?(a>c?a:c):(b>c?b:c);
	printf("the greates of three numbers is %d",d);
	return;
	}
