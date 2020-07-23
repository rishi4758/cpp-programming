//program on sum of all even integers
#include<stdio.h>
main()
{
	int num,sum=0,i;
	printf ("enter num");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
	
if(i=i%2==0)
{
sum=sum+i;
printf("%d sum of n even number",sum);
}
}
	
}
