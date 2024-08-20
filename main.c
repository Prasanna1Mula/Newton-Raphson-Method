#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c,i=1;
float x0,x1,f0,f1;
printf("Enter the values of a,b,c,x0");
scanf("%d%d%d%f",&a,&b,&c,&x0);
printf("\n---------\n");
printf("\n ITERATIONS \tx0 \tx1 \txf(x0) \txf(x1)");
printf("\n ---------- \n");

while(i>0)
{
f0=((a*x0*x0)+(b*x0)+c);
f1=((2*a*x0)+b);
x1=x0-(f0/(f1));
printf("\n %d\t %f\t %f\t %f\t %f\t \n", i,x0,x1,f0,f1);
if(x0==x1)
break;
else
x0=x1;
i++;
}
printf("Approximate value= %f\t",x0);
return 0;
}

