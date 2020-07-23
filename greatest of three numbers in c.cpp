#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	printf("a:%d",a);
	else if(b>a&&b>c)
	printf("b:%d",b);
	else
	printf("c:%d",c);
}
