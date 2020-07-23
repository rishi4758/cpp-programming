#include<iostream>
using namespace std;
main()
{int a;
float b;
char c;//here we are storing every type of data in one pointer for that we will do typecastingsyntax-*(*int*)ptr
cin>>a>>b>>c>>endl;
	void *ptr;
	ptr=&a;
	cout<<*(int*)ptr<<endl;
	ptr=&b;
	ptr=&c;
}
	
