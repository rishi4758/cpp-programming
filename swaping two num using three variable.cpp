#include<stdio.h>
main()
{
	int i,j,k;
	printf("enter i,j");
	scanf("%d%d",&i,&j);
	k=i;
	i=j;
	j=k;
	printf("%d%d",i,j);
}
