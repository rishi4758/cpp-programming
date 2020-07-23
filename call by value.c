#include<stdio.h>
int sum(int,int);
main()
{
	int a,b,z;
	z=sum(a,b);
	printf("%d",z);
}
sum(int x,int y)
{
	int t;
	scanf("%d%d",&x,&y);
	t=x+y;
	return t;
}
	

