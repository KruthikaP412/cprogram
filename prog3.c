#include<stdio.h>
void main()
{
int n,y,m,w,d;
printf("\tenter the number\n");
scanf("%d",&n);
y=n/365;
m=(n%365)/30;
w=((n%365)%30)/7;
d=(((n%365)%30)%7);
printf("\t years %d\n\t months %d\n\t weeks%d\n\t days%d\n\t",y,m,w,d);
} 
