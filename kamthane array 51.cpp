#include<stdio.h>
main()
{
int a[5],i,sum=0,mul=0,t,g;
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
if(a[i]%2==0)
t=sum+a[i];
else
g=mul*a[i];
}
printf("%d",t);
printf("%d",g);}
