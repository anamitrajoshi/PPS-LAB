#include<stdio.h>
void main()
{
	int f0,f1,num,sum,i;
	f0=0;
	f1=1;
	printf("enter number");
	scanf("%d",&num);
	printf("%5d",f0);
	for(i=1;i<=num;i++)
	{
		sum=f0+f1;
		printf("%5d",sum);
		f0=f1;
		f1=sum;
		}
	return;
	}
		
		
