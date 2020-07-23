#include<stdio.h>
#include<string.h>
main()
{
char a[50],b,*c;
gets(a);
b=getchar();
c=strchr(a,b);
if(c)
printf("%c found in string",b);
else
 printf("not found");}
