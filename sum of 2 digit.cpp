#include<stdio.h>
main()
{
	int num,a,sum;
	scanf("%d",&num);
	a=num%10;
	num=num/10;
	sum=num+a;
	printf("%d",sum);
}
