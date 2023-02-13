#include<stdio.h>
void bubble_sort(int[],int);
int main(){
	int i,length;
	printf("enter the length of the array");
	scanf("%d",&length);
	int a[length];
	printf("enter the elements of the array");
	for(i=0;i<length;i++){
		scanf("%d",&a[i]);
		}
	bubble_sort(a,length);
	return 0;
	}
void bubble_sort(int a[],int length){
	int i,j,temp;
	for(i=0;i<length-1;i++){
		for(j=0;j<length-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;}}}
	printf("the arranged array elements are");
	for(i=0;i<length;i++){
		printf("%5d",a[i]);
		}
	return;
	}
