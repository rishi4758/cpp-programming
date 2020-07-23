#include<stdio.h>
main()
{
	char s[45];
	FILE *u;
	u=fopen("terw.txt","w");
	scanf("%s",s);
	fprintf(u,"%s",s);
	fclose(u);
	u=fopen("terw.txt","r");
	printf("%s",s);
	fscanf(u,"%s",s);
	fclose(u);
	
}
