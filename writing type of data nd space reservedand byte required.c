#include<stdio.h>
main()
{
	int a[10];
	float b[12];
	char c[14];
	printf("data type\t\tbytes reserved\t\tspace required\n");
	printf("=============================================\n");
	printf("int\t\t     %d\t\t     %d\n",sizeof(int),sizeof(a));
    printf("float\t\t    %d\t\t     %d\n",sizeof(float),sizeof(b));
    printf("char\t\t   %d\t\t    %d\n",sizeof(char),sizeof(c));
}
