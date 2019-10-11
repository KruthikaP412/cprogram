#include<stdio.h>
int main()
{
int a,b,ch;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
printf("1.add\n2.sub\n3.mul\n4.div\n5.rem\n");
printf("enter your choice");
scanf("%d", &ch);
switch(ch)
{
case 1:
printf("%d",a+b);
break;
case 2:
printf("%d",a-b);
break;
case 3:
printf("%d",a*b);
break;
case 4:
printf("%d",a/b);
break;
case 5:
printf("%d",a%b);
break;
default:
printf("invalid choice");
}
return 0;
}
