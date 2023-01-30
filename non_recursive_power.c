#include<stdio.h>
int power(int,int);
int main(){
	int x,n;
	printf("enter a number");
	scanf("%d",&x);
	printf("enter its power");
	scanf("%d",&n);
	int res=power(x,n);
	printf("the value of %d^%d is %d",x,n,res);
	return 0;
	}
int power(int x,int n)
{
	int power=1,i;
	for(i=1;i<=n;i++)
	{
		power=power*x;
		}
		return power;
		}
		
