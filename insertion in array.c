#include<stdio.h>
main()
{
	int a[15],n,p,s,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("elements want to delete");
	scanf("%d%d",&p,&s);
	p--;
	for(i=n;i!=p;i--)
	a[i]=a[i-1];
	a[i]=s;
	for(i=0;i<n;i++)
	printf("%d\t\t%d\n",a[i],&a[i]);
	
}
