#include<stdio.h>
 int main()
{
	int num, a,b,c,sum;
	printf("enter num");
	scanf("%d,&num");
	a=num%10;
	num=num/10;
	b=num%10;
	c=num/10;
	sum=a+b+c;
	printf("%d",sum);
}
