#include<iostream>
using namespace std;
main()
{
int a,b,c;
cin>>a>>b;
int *ptr1,*ptr2;
ptr1=&a;
ptr2=&b;
c=*ptr1+*ptr2;
cout<<c;
}
