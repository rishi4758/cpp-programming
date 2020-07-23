#include<stdio.h>
int main()
{
	char a[101],b[101];
	int i,j=0;
	printf("enter the text below\n");
	gets(a);
	for(i=0;i<101;i++)
	{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='O'||a[i]||a[i]=='I',a[i]=='U')
	continue;
	else
{
		b[j]=a[i];
	j++;
	}
}
printf("%s",b[j]);

}
