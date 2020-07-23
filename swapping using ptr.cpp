//pointer use in class
#include<iostream>
using namespace std;
class swap
{
	int a,b,c;
	int *ptr1,*ptr2;
	sw()
	{
		cin>>a>>b;
	ptr1=&a;
	ptr2=&b;
	c=*ptr1;
	*ptr1=*ptr2;
	*ptr2=c;
	cout<<*ptr1<<*ptr2;
	}};
	main()
	{
		swap s;
		s.sw();
	}
	
