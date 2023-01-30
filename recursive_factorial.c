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
	if(num<1||num<0)
	return 1;
	else 
	return (num*fact(num-1));
	}
	
	 
	
