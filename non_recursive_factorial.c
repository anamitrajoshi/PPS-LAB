#include<stdio.h>
int fact(int);
int main(){
	int num;
	printf("enter a number");
	scanf("%d",&num);
	int res=fact(num);
	printf("the factorial of the given number is %d",res);
	return 0;
	}
int fact(int num){
	int i,fact=1;
	for(i=num;i>=1;i--)
	{
		fact=fact*i;
	}
	return fact;
	}
