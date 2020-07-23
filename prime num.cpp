#include<stdio.h>
main()
{
	int a,n=0;
	for(a=19;a<=251;a++)
	{
	if(a%2!=0&&a%3!=0&&a%5!=0)
	{
	printf("\n%d\n",a); 
	n++;}}
	printf("%d",n);
	}
