#include<stdio.h>
int main()
{
    float marks;
    scanf("%f",&marks);
    if(marks>90)
    {
    	printf("grade a");
    	break;
	}
	else if(marks>80)
	{
		printf("grade b");
		break;
	}
	else if(marks>60)
	{
		printf("grade c");
		break;
	}
    if(marks<33);
	{
		printf("\n fail");
	}
	return 0;
}
