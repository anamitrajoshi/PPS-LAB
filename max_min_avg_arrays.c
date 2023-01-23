#include<stdio.h>
int main(){
	
	int i,n,max,min,sum;
	printf("enter the length of the array");
	scanf("%d",&n);
	int a[n];
	printf("enter the values of the array");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max)
			max=a[i];
		}
	printf("the max of the array is %d\n",max);
	for(i=0;i<n;i++){
		if(a[i]<min)
			min=a[i];
		}
	printf("the min of the array is %d\n",min);
	sum=0;
	for(i=0;i<n;i++){
		sum+=a[i];
		}
	printf("the average of the elements is %f",(float)sum/n);
	
	return 0;
	}
	
