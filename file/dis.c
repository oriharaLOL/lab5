#include<stdio.h>
#include<math.h>

void dis(float a,float b,float c)
{
float D,x1,x2;
    D = b*b-4*a;
    if(D<0)
	{printf("no roots");}
    if(D>0)
    {
	x1 = (-b + sqrt(D))/(2*a);
	x2 = (-b - sqrt(D))/(2*a);
    }
}
