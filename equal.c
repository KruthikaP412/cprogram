/*check if the triangle is valid or not*/
#include<stdio.h>
int main()
{
int a,b,c,sum;
printf("enter three sides of the triangle:");
scanf("%d%d%d",&a,&b,&c);
if (sum==180)
printf("triangle is valid");
else
printf("invalid sides entered,hence triangle is invalid");
return(0);
}
