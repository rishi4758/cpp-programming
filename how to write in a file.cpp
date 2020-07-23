#include<stdio.h>
#include<conio.h>
#include<process.h>
 int main()
{
	char c;
	FILE *fp;
	fp=fopen("data.txt","w");
	if(fp == NULL)
	{
		printf("file does not exist");
		exit (1);
	}
	printf("write data and to stop press .");
	while(c=='.')
	{
		gets(c);
		fputs(fp,c)
	}
	fclose(fp);
	fp=fopen("data.txt","r");
	while(!feof(fp))
	printf("%c",getc(fp));
}
