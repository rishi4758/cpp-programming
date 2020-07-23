#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	printf("enter i,j");
	scanf("%d\n%d",&i,&j);
	i=i+j;
	j=i-j;
	i=i-j;
	printf("i:%d\nj:%d",i,j);
	getch();
}
