#include<stdio.h>
#include<math.h>
void main()
{
float x1,x2,y1,y2,d;
printf("\tenter the value of x1\n");
scanf("%f",&x1);
printf("\tenter the value of x2\n");
scanf("%f",&x2);
printf("\tenter the value of y1\n");
scanf("%f",&y1);
printf("\tenter the value of y2\n");
scanf("%f",&y2);
d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
printf("d=%f",d);
}
