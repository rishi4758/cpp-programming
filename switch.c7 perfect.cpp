#include<stdio.h>
 main()
{
	int a,b,choice,sum,sub,mul,div;
	printf("enter choice 1 for addition");
	printf("\n enter choice  2 for subtraction");
	printf("\nenter choice  3 for multiplication");
	printf ("\n enter choice 4 for dividing");
	printf("\n enter choice");
	scanf("%d%d%d",&choice,&a,&b);
	
	
	
	
	switch(choice)
{


	case 1:
	sum=a+b;
	printf("%d",sum);
	break;
	
	case 2:
	sub=a-b;
	printf("%d",sub);
	break;

	case 3:
	mul=a*b;
	printf("%d",mul);
	break;

	case 4:	
	div=a/b;
	printf("%d",div);
	break;
	default:
   printf(" statement");
}
}
