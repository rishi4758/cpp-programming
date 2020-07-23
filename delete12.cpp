#include <stdio.h>
main()
{
	char a[5]={'A','B','C','D','\0'};
	int i;
	for(i=0;i<5;i++)
	printf("%c\t\t%d\n",a[i],&a[i]);
}
