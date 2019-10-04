#include<stdio.h>
int main()
{
int sal,ser,doj,yr;
printf("enter salary");
scanf("%d",&sal);
printf("enter service");
scanf("%d",&yr);
printf("enter date of joining");
scanf("%d",&doj);
ser=yr-doj;
if(ser>3)
	printf("sal+bonus:%d",sal+3000);
else
	printf("salary:%d\n",sal);
return 0;
}
