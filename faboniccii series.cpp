#include<stdio.h>
main()
{
	int num,a=1,b=1,c=1,i;
    scanf("%d",&num);
	printf("\n0\n");
	for(i=1;i<=num;i++)
{
a=b;
b=c;
c=a+b;

printf("\n%d\n",a);
}
	}
