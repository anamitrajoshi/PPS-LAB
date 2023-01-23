#include<stdio.h>
void main()
{
int m,n,i,j,count;
printf("enter m");
scanf("%d",&m);
printf("enter n",&n);
scanf("%d",&n);
for(i=m;i<=n;i++){
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

