#include<stdio.h>
main()
{
	int i,k,a;
	for(i=1;i<=35;i++)
{
	k=0;
	for(a=1;a<=i;a++)
	{
		if(i%a==0)
		
		k=k+1;
		}
		if(k==2)
		printf("\n%d",i);
	}}
