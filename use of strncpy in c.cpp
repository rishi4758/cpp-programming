#include<stdio.h>
#include<string.h>
main()
{
	char a[23],b[25];
	
	int n;
	gets(a);
	gets(b);
	scanf("%d",&n);
	strncpy(b,a,n);
	printf("%s\n%s",a,b);
}
