#include <stdio.h>
main()
{
	int a[10],c,sum=0,i,avg,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("%d",avg);
}
