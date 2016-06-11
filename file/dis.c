#include<stdio.h>
#include<math.h>
#include"dis.h"

int dis(int a,int b,int c,int x1,int x2)
{int D;
    D = (b*b)-(4*a*c);
    if(D<0)
	{printf("no roots");}
    if(D>=0)
    {
	x1 = (-b + sqrt(D))/(2*a);
	x2 = (-b - sqrt(D))/(2*a);
    }
return x1,x2;
}
