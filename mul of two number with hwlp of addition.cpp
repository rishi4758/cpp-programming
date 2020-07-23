#include<stdio.h>
main()
{ 
int i,a,b,mul=0;
scanf("%d%d",&a,&b);
if(a>0&&b>0||a>0&&b<0)
{
for(i=1;i<=a;i++)
mul+=b;
}
if(a<0)
{
for(i=-1;i>=a;i--)
mul-=b;}
printf("%d",mul);
}
