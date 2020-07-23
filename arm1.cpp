#include<stdio.h>
#include<math.h>
main()
{
	int num,a,rem,n=0,ans=0,temp,temp1;
	printf("enter the value of number ");
	scanf("%d",&num);
	temp=num;
	
	
	
	while(num!=0)
	{
		a=num%10;//3,2,1
		num=num/10; //12,1
		n++;
		}
		temp1=temp;
		while(num!=0)
		{
			rem=num%10;
			ans=ans+pow(rem,n);
			num=num/10;
		}
		if(ans==temp1)
		
			printf("\n armstrong number",num);
		else
			printf("%d  not an armstrong",num);
		
		
	
}
