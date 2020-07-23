#include<stdio.h>
main()
{
	int *p,*t,a,b;
	scanf("%d%d",&a,&b);
	p=&a;
	t=&b;
	printf("address of a:%d\naddress of b:%d\na:%d\nb:%d",p,t,*p,*t);
}
