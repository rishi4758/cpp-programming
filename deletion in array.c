#include<stdio.h>
main()
{
	int a[20],i,c,n,p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	printf("%d\t\t%d\n",a[i],&a[i]);
	scanf("%d",&c);
	c--;
	for(i=0;i<=n;i++)
{
		if(i>=p)
	a[i]=a[i+1];
}
for(i=0;i<=n;i++)
{
if(a[i]!=0)
printf("%d\t\t%d\n",a[i],&a[i]);
}
	
	
}
