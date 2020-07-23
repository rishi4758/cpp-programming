#include <stdio.h>
main()
{
	int i,add=0,sum=0;
	for(i=1;i<=10;i++)
	{if(i%2==0)
	{sum+=i;}
	else
	add+=i;
	}
	printf("%d/t%d",sum,add);
	}


