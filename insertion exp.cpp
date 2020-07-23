#include<stdio.h>
main()
{
	int i,a[5],c,e;
	for(i=0;i<5;i++)
scanf("%d\n",&a[i]);
scanf("%d\n",&c);
scanf("%d\n",&e);
c--;
for(i=4;i>=c;i--)
a[i+1]=a[i];
a[c]=e;
for(i=0;i<=5;i++)
printf("%d\n",a[i]);
}
