#include<stdio.h>
void main()
{
int quan,ppu,d,te;
printf("\tenter the quantity\n");
scanf("%d",&quan);
printf("\tenter the ppu\n");
scanf("%d",&ppu);
te=quan*(ppu);
if(te>1500)
     {
      d=(te*20)/100;
      te=te-d;
      printf("\tenter expensive %d",te);
      }
else
{
printf("\tenter te %d",te);
}
}
