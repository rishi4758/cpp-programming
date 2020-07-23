#include<iostream>
using namespace std;
main()
{
int arr[]={4,5,6,7,8};
int a,i;
cin>>a;
for(i=0;i<5;i++)
{	
	if(arr[i]==a)
	{
		cout<<i;
		break;

	}
	else
	continue;
}
	
}
