#include<stdio.h>
#include<math.h>
main()
{
	int a,n=0,num,ans=0,r,rem;
	printf("enter the value of num ");
	scanf("%d",&num);
	a=num;
	while(a!=0)
	{
		a=a/10; 
		n++;
		}
		while(a!=0)
		{
			rem=a%10;
			ans=ans+pow(rem,n);
			a=a/10;
		}
		if(ans==num)
		{
			printf("this is armstrong number");
		}
			else
			printf("ghnta ne hai armstrong");
		
}
