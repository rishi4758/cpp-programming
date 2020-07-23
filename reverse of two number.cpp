#include<stdio.h>
main()
{
	int num,rem1,rem2,t,s;
	printf("enter  3 digit num");
scanf("%d",&num);
rem1=num%10;
rem2=num/10;
t=rem2%10;
s=rem2/10;
printf("%d%d%d",rem1,t,s);


}
