#include<stdio.h>
main()
{
	int a;
	FILE *u;
	u=fopen("terw.txt","w");
	scanf("%d",&a);
	fprintf(u,"%d",a);
	fclose(u);
	u=fopen("terw.txt","r");
	printf("%d",a);
	fscanf(u,"%d",&a);
	fclose(u);
	
}
