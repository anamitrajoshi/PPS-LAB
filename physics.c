#include<stdio.h>
#include<math.h>
void main()
{
	float u,i,a,t,s;
	u=0;
	a=9.8;
	t=0;
	s=3;
	for(i=1;i<=10;i++,s+=3)
	{
		t=u+sqrt(u*u+2*a*s);
		printf("the time taken by the ball to reach floor %f is %f\n",i,t);
		}
	return;
	}
	
