#include<stdio.h>
main()
{
	int a[4],c,d,i;
	printf("enter the 4 number u want to enter");
	for(i=0;i<4;i++)
	scanf("\n%d",&a[i]);
	printf("enter the place where u wnt to insert number and what number u want to enter");
	scanf("%d\n%d",&c,&d);
	c--;
	for(i=3;i>=c;i--)
	a[i+1]=a[i];
	a[c]=d;
	for(i=0;i<=4;i++)
	printf("%d\n",a[i]);
	
	
	
	
}
