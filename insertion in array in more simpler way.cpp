#include<stdio.h>
main()
{
	int a[6],n,i;
	for(i=1;i<=5;i++)
	scanf("%d",&a[i]);
	printf("enter where u want to insert the number");
	scanf("%d",&n);
	for(i=6;i>n;i--)
	a[i]=a[i-1];
	printf("element want to insert at n");
	scanf("%d",&a[n]);
	for(i=1;i<=6;i++)
	printf("%d\n",a[i]);
	
	
}
