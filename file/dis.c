#include<stdio.h>
#include<math.h>
#include"diskr.h"

void dis(int a,int b,int c)
{
int x1,x2,D;
    D = (b*b)-(4*a*c);
    if(D<0)
	{printf("no roots");}
    if(D>=0)
    {
	x1 = (-b + sqrt(D))/(2*a);
	x2 = (-b - sqrt(D))/(2*a);
    }
printf("x1 = %d, x2 = %d",x1,x2);
}
