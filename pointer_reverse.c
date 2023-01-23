#include<stdio.h>
void main(){
	int i,n,*ptr;
	printf("enter length of the array");
	scanf("%d",&n);
	int a[n];
	printf("enter the values of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		}
		ptr=&a[n-1];
	
	printf("\nthe reverse values of the array using pointers are\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%5d",*ptr);
		ptr-=1;
		
		}
	return;
	}
	
