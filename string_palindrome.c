#include<stdio.h>
int main(){
	char p[20];
	int i,j,length=1,flag=0;
	printf("enter the string");
	scanf("%s",&p);
	for(i=0;p[i]!='\0';i++)
	{
	length=i;
	}
	char q[length];
	for(i=0;i<=length;i++)
	{
		q[i]=p[length-i];
		}
	printf("the reverse is %s\n",q);
	for(i=0;i<=length;i++)
	{
		if(q[i]!=p[i])
		flag=1;
	}
	if(flag==0)
	printf("the given string is a palindrome");
	else
	printf("not a palindrome");
	return 0;
	}
	
