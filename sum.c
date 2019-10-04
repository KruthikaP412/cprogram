/*sum and avg of 5 sub*/
#include<stdio.h>
void main()
{
int a,b,c,d,e,sum,avg;
printf("\tenter value of a\n");
scanf("%d",&a);
printf("\tenter value of b\n");
scanf("%d",&b);
printf("\tenter value of c\n");
scanf("%d",&c);
printf("\tenter value of d\n");
scanf("%d",&d);
printf("\tenter value of e\n");
scanf("%d",&e);
sum=a+b+c+d+e;
avg=sum/5;
printf("\tsum=%d",sum);
printf("\tavg=%d",avg);
}
