#include<stdio.h>
main()
{
float hours,min,sec;
printf("enter hours");
scanf("%f",&hours);
min=hours*60;
sec=hours*3600;
printf("min:%f\nsec:%f",min,sec);
}
