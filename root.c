/*quadratic equation*/
#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,r1,r2;
printf("enter the value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
r1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
r2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
printf("\troot of quadratic equation is %d,%d\n",r1,r2);
}
