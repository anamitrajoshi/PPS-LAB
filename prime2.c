#include<stdio.h>
void main()
{
int n,i,j,count;
printf("enter the number till list of prime numbers is required");
scanf("%d",&n);
for(i=2;i<=n;i++){
	count=0;
	if(i==2)
	{
	printf("%d\t",i);
	}
	else{
	for(j=2;j<n;j++){
		if(i%j==0){
			count++;
			}}
	if(count==1)
		printf("%d\t",i);
	}	}
return;
}
