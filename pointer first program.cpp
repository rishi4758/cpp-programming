#include<stdio.h>
main()
{
	int *b,*c;
	int e=4,f=3,g,h,j,i;
	b=&e;
	c=&f;
	printf("%d\n%d\n",*b,*c);
	g=*b+*c;
	printf("sum of %d and %d is %d\n",*b,*c,g);
	h=*b-*c;
	printf("subtraction of %d and %d is %d\n",*b,*c,h);
	i=(*b)/(*c);
	printf("dividation of %d and %d is %d\n",*b,*c,i);
	j=(*b)*(*c);
		printf("multiplicationof %d and %d is %d\n",*b,*c,j);
		if(*b>*c)
		printf("tyrue");
		else
		printf("false");
	
	
	
}
