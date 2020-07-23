#include<iostream>
using namespace std;
main()
{
int *ptr;
int a;
cin>>a;
ptr=&a;
cout<<"value of a"<<a<<endl;
cout<<"value of ptr"<<ptr<<endl;
cout<<"address of a"<<&a<<endl;
cout<<"address of ptr"<<&ptr<<endl;
cout<<"derefrencing"<<*ptr<<endl;
*ptr=10;
cout<<*ptr;
}

