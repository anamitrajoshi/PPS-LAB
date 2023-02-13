#include<stdio.h>
int linear_search(int[],int,int);
int main(){
	int length,key,i;
	printf("enter the length of the array");
	scanf("%d",&length);
	int a[length];
	printf("enter the elements of the array in ascending order");
	for(i=0;i<length;i++){
		scanf("%d",&a[i]);
		}
	printf("enter the element that you want to find");
	scanf("%d",&key);
	int res=linear_search(a,length,key);
	if(res==-1){
		printf("element not found");
		}
	else{
		printf("the given element was found at the position %d",res);
		}
	return 0;
	}
int linear_search(int a[],int length,int key){
	int i;
	for(i=0;i<length;i++){
		if(key==a[i]){
			return i+1;
			}}
	return -1;
	}
