/*swapping*/ 
#include<stdio.h>
void main()
{
int a,b,temp;
printf("enter the value of a & b\n");
scanf("%d%d",&a,&b);
printf("before swapping\n");
printf("a=%d b=%d\n",a,b);
temp=a;
a=b;
b=temp;
printf("after swapping\n");
printf("a=%d b=%d \n",a,b);
}
