#include<stdio.h>
main()
{

int a,b,c;
printf("enter the digit whose table u want");
scanf("%d",&b);
a=1;
while(a<=10)
{
c=b*a;
printf("%d * %d=%d\n",b,a,c);

a++;
}

}
