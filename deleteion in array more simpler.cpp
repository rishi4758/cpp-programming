#include<stdio.h>
main()
{
	int i,n,a[5];
	for(i=1;i<=5;i++)
	scanf("%d",&a[i]);
	printf("element wants to delete");
	scanf("%d",&n);
	for(i=1;i<=5;i++)
	if(i>=n)
	a[i]=a[i+1];
	for(i=1;i<=4;i++)
	printf("%d",a[i]);
}
