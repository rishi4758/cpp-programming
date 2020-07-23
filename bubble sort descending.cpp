#include<stdio.h>
main()
{
	int a[]={1,2,3,4,5},i,j;
	for(i=0;i<4;i++)
		for(j=0;j<=4;j++);

		if(a[j]<a[j+1])
	{
		int c;
	c=a[j];
	a[j]=a[j+1];
	a[j+1]=c;
	printf("%d",a[j]);
	
}}

