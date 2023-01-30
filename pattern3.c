#include<stdio.h>
void main(){
	int i,j,n,num=1;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%5d",num);
			num++;
			}
		printf("\n");
		}
	return;
	}
