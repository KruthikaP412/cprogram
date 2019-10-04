#include<stdio.h>
int main()
{
int cp,sp,pro,loss;
printf("enter cost price and selling price:");
scanf("%d%d",&cp,&sp);
if(cp>sp)
printf("loss incurred %d",cp-sp);
else 
printf("profit incurred %d",sp-cp);
return(0);
}
