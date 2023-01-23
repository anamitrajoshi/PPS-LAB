#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,root1,root2;
printf("enter the coefficient of x^2");
scanf("%d",&a);
printf("enter the coefficient of x");
scanf("%d",&b);
printf("enter the constant");
scanf("%d",&c);
if((b*b)-(4*a*c)>=0){
	printf("the roots are purely real");
	root1=(-b+(sqrt((b*b)-(4*a*c))))/(2*a);
	root2=(-b-(sqrt((b*b)-(4*a*c))))/2*a;
printf("the roots of %dx^2+%dx+%d are %d and %d",a,b,c,root1,root2);}

else
	printf("the roots are imaginary and -b/2a is %f",(float)(-b/(2*a)));
return;
}
