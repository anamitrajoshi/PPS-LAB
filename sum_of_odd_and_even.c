#include<stdio.h>
void main()
{
	int num,sum_o,sum_e;
	num=1;
	sum_o=0;
	sum_e=0;
	while(num<=50)
	{
		if(num%2==0)
			sum_e+=num;
		else
			sum_o+=num;
		num+=1;
		}
	printf("the sum of the odd numbers from 1 to 50 is %d\n",sum_o);
	printf("the sum of the even numbers from 1 to 50 is %d",sum_e);
	return;
	}
