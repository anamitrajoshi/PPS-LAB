#include<stdio.h>
int main(){
	int a[5],i,*ptr,sum=0;
	printf("enter the values of the array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		}
	ptr=a;
	for(i=0;i<5;i++)
	{
		sum=sum+ptr[i];
		}
	printf("the sum is %d",sum);
	return 0;
	}
	
	
