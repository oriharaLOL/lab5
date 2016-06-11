#include<stdio.h>
#include<math.h>
#include"dis.h"
int main()
{
int a,b,c,x1,x2;
printf("input a,b,c:");
scanf("%d%d%d",&a ,&b ,&c);
dis(a, b, c, x1, x2);
printf("x1 = %d,x2 = %d",x1,x2);
return 0;
}