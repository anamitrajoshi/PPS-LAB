#include<stdio.h>
void sum(int[][2],int[][2]);
void transpose(int[][2],int[][2]);
int main(){
	int a[2][2],b[2][2],i,j;
	printf("enter matrix A");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter matrix B");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	sum(a,b);
	transpose(a,b);
	return 0;
	}
void sum(int a[2][2],int b[2][2])
{
	int i,j,c[2][2];
	printf("the sum is\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%5d",c[i][j]);
		}
		printf("\n");
	}
	return;
	}
void transpose(int a[2][2],int b[2][2])
{
	int i,j,c[2][2],d[2][2];
	printf("\nthe transpose of matrix A is\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[j][i];
			printf("%5d",c[i][j]);
		}
		printf("\n");
		}
	printf("\nthe transpose of matrix B is\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			d[i][j]=b[j][i];
			printf("%5d",d[i][j]);
		}
		printf("\n");
		}
	return;
	}
	
	
	
	
	
			
