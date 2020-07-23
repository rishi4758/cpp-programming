#include<stdio.h>
main()
{
	int  num;
	float a,b,c;
	printf("enter number of days");
	scanf("%d",&num);
	a=num/365;
	b=num/30;
	c=num/7;
	printf("year:%f\nmonths:%f\nweek:%f",a,b,c);}
