#include<stdio.h>
main()
{
	  int static a=4;
	{
		  int a=9;
		printf("%d\n",a);
		
	 } 
	printf("%d",a);
}
