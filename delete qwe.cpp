#include<stdio.h>
main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10,11,12},c;
	int b[]={31,28,31,20,31,30,31,31,30,31,30,31};
	printf("enter number from 1 to 12");
	scanf("%d",c);
	switch(c)
{
		case 1:
		printf("%d month has %d days",a[0],b[0]);
	break;
	case 2:
			printf("%d month has %d days",a[1],b[1]);
}}
