#include<stdio.h>
int main(){
int num,i,flag;
flag=0;
printf("enter a number");
scanf("%d",&num);
if(num==2)
printf("prime");
else{
for(i=2;i<num/2;i++)
{
	if(num%i==0){
	flag=1;
	break;}
	}
if(flag==1)
printf("not prime");
else
printf("prime");}
return 0;
}
