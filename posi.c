#include<stdio.h>
void main()
{
int a;
printf("enter a nub");
scanf("%d",&a);
if(a!=0)
{
if(a<0)
printf("enter value is negative");
else if(a>0)
printf("enter value is positive");
}
else
printf("enter value is zero");
}
