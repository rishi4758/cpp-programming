#include<stdio.h>
#include<string.h>
main()
{
	char a[50],b[50];
	gets (a);
	strcpy(b,a);
	printf("%s\n%s",a,b);
}
