#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,n=0,num,ans=0,r,rem,temp,temp1;
	printf("enter the value of num ");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		num=num/10; 
		n++;
		}
		temp1=temp;
		while(temp!=0)
		{
			rem=temp%10;//3,5,1
			ans=ans+pow(rem,n);
			temp=temp/10;
		}
		if(ans==temp1)	
			printf("this is armstrong number");
			else
			printf("ghnta ne hai armstrong");
		
} 
