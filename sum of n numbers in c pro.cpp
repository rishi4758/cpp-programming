#include<stdio.h>
main()
{
	int i,num,a,n=0,temp,temp1,c,sum=0;
	scanf("%d",&num);
	temp=num;
	while(a!=0)
	{
	a=num/10;
	n++;}
	temp1=temp;
	for(i=1;i<=n;i++)
	{c=temp1%10;
	temp1=temp1/10;
	sum=sum+c;}
	printf("%d",sum);}
