#include<stdio.h>
int hcf(int,int);
int main(){
	int a,b;
	printf("enter two numbers such that the first number is greater than the second number");
	scanf("%d %d",&a,&b);
	res=hcf(a,b);
	printf("the hcf of the two numbers is %d",res);
	return 0;
	}
int hcf(int a,int b){
	
