#include<stdio.h>
main()
{
	int i,a=0;
	for(i=1987;i<=2017;i++)
	{
		if(i%4==0)
	{
			printf("%d\n",i);
	a++;}
	}
	printf("total number of leap year are %d",a);
}
