#include<stdio.h>
#include<math.h>
void main()
{
float p,t,r,emi;
printf("\tenter the value of p\n");
scanf("%f",&p);
printf("\tenter the value of t\n");
scanf("%f",&t);
printf("\tenter the value of r\n");
scanf("%f",&r);
r=r/(100*12);
t=t*12;
emi=p*r*pow(1+r,t)/pow(1+r,t)-1;
printf("rate=%f",r);
printf("time=%f",t);
printf("emi=%f",emi);
}
