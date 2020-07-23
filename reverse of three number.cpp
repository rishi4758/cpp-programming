#include<stdio.h>
main()
{
	int num,a,b;
	scanf("%d",&num);
	a=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	printf("%d%d%d",a,b,num);
}
