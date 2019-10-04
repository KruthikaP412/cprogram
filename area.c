#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,s,area;
printf("\enter the sides of the triangle a,b,c\n");
scanf("%f%f%f", &a,&b,&c);
s=(a+b+c)/2;
area= sqrt(s*(s-a)*(s-b)*(s-c));
printf("\tarea of the triangle is %f \n",area);
}
