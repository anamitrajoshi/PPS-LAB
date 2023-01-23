#include<stdio.h>
void main()
{
	int a,flag,i;
	flag=0;
	printf("enter a number");
	scanf("%d",&a);
	for(i=2;i<a/2;i++)
	{
		if(a%i==0)
			{flag=1;
			break;}
			}
	if(flag==1)
		printf("not prime");
	else
		printf("prime");
	return;
}
