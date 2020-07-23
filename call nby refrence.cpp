#include<stdio.h>
int sum(int *x,int *y);
main()
{
	int a,b,z;
	z=sum(&a,&b);
	printf("%d",z);
	
}
sum(int *x,int *y)
{
	int c,a,b;
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
