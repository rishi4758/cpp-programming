#include<stdio.h>
main()
{
	int a;
	FILE *tc;
	tc=fopen("trak.txt","w");
	if(tc==NULL)
	{
	printf("kuch ni ae");}
	else
	{
		scanf("%d",&a);
		fprintf(tc,"%d",a);
	}
	fclose(tc);
	tc=fopen("trak.txt","r");
	printf("%d",a);
	fscanf(tc,"%d",a);
	fclose(tc);
	
	
}
