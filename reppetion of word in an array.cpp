#include<stdio.h>
main()
{
	int c,i;
	char a[15],r;
	gets(a);
	r=getchar();
	for(i=1;i<=15;i++)
	{
	if(a[i]==r)
	c++;}
	printf("the char %c occur %d times in %s string",r,c,a[15]);
}
	
