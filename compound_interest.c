#include<stdio.h>
void main()
{
	int i;
	float p,t,r;
	printf("enter principle amount");
	scanf("%f",&p);
	printf("enter time period");
	scanf("%f",&t);
	printf("enter rate of interest");
	scanf("%f",&r);
	for(i=1;i<=t;i++)
	{
		p=((r/100)*p)+p;
		}
	printf("total amount is %f",p);
	return;
	}
	
	
