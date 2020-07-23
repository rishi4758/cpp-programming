#include<stdio.h>
#include<string.h>
main()
{
	char a[50],*b;
	gets(a);
	b=strdup(a);
	printf("%s\n%s",a,b);}
