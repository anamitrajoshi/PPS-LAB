#include<stdio.h>
int largest(int[],int);
int smallest(int[],int);
int sum(int[],int);
void switchcase(int, int[], int);
int main(){
	int length,i,operation;
	printf("enter the length of the array");
	scanf("%d",&length);
	int a[length];
	printf("enter the elements of the array");
	for(i=0;i<length;i++){
		scanf("%d",&a[i]);
		}
	printf("enter respective number for operation required if\n1=largest\n2=smallest\n3=sum or average");
	scanf("%d",&operation);
	switchcase(operation,a,length);
	return 0;
	}
	
void switchcase(int operation, int a[],int length){
	switch(operation){
		case 1: printf("the largest number is");
			int large=largest(a,length);
			printf(" %d",large);
			break;
		case 2: printf("the smallest number is");
			int small=smallest(a,length);
			printf(" %d",small);
			break;
		case 3: printf("the sum of the numbers is");
			int avg=sum(a,length);
			printf(" %d\n",avg);
			printf("the average of the numbers is %f\n",(float)avg/length);
			break;
		default: printf("enter a valid value");
			return;
			}}
	
int largest(int a[],int length){
	int max=a[0],i;
	for(i=0;i<length;i++){
		if(a[i]>max)
			max=a[i];
			}
	return max;
	}
int smallest(int a[],int length){
	int min=a[0],i;
	for(i=0;i<length;i++){
		if(a[i]<min)
			min=a[i];
			}
	return min;
	}
int sum(int a[],int length){
	int sum=0,i;
	for(i=0;i<length;i++){
		sum=sum+a[i];
		}
	return sum;
	}
