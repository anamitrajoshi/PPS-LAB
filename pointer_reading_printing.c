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
	ptr=a;
	printf("\nthe values of the array using pointers are\n");
	for(i=0;i<n;i++)
	{
		printf("%5d",*ptr);
		ptr+=1;
		}
	return;
	}
	
