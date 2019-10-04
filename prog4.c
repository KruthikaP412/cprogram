#include<stdio.h>
void main()
int n,y,m,w,d;
printf("enter the nub");
scanf("%d",&n);
y=n/365;
m=(n%365)/30;
w=((n%365)%30)/7;
d=(((n%365)%30)%7);
printf("years %d",y,m,w,d);
}


