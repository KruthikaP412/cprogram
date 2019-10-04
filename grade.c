#include<stdio.h>
int main()
{
int a,b,c,d,e,sum,avg;
printf("enter marks of sub1(total100):");
scanf("%d",&a);
printf("enter marks of sub2(total100):");
scanf("%d",&b);
printf("enter marks of sub3(total100):");
scanf("%d",&c);
printf("enter marks of sub4(total100):");
scanf("%d",&d);
printf("enter marks of sub5(total100):");
scanf("%d",&e);
sum=a+b+c+d+e;
avg=sum/5;
printf("sum of the marks obtained=%d",sum);
printf("avg of the marks obtained=%d",avg);
if(avg>=90)
    printf("grade:s");
else if(avg>=80)
    printf("grade:a");
else if(avg>=70)
    printf("grade:b");
else if(avg>=60)
    printf("grade:c");
else
     printf("fail!:");
return 0;
}
