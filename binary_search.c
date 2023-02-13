#include<stdio.h>
int binary_search(int[],int,int);
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
	int res=binary_search(a,length,key);
	if(res==-1){
		printf("element not found");
		}
	else{
		printf("the given element was found at the position %d",res);
		}
	return 0;
	}
int binary_search(int a[],int length,int key){
	int high=length-1,low=0,mid;
	while(high>=low){
		mid=(high+low)/2;
		if(key==a[mid])
			return mid+1;
		else if(key<a[mid]){
			high=mid-1;
			}
		else
			low=mid+1;
			}
	return -1;
	}
