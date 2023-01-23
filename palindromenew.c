#include<stdio.h>
void main()
{
int num,rev,sum,r,n;
sum=0;
rev=0;

printf("enter a number");
scanf("%d",&num);
n = num;
while(n>0){
	r=n%10;
	sum=sum+r;
	rev=(rev*10)+ r;
	printf("rev is %d\n",rev);
	n=n/10;
	}
	
printf("\nthe sum of the digits is %d",sum);

if(num==rev)
	printf("\nit is a palindrome");
else
	printf("\nit is not a palindrome");

return;
}
	
