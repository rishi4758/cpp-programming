#include<iostream>
#include<fstream>
using namespace std;
class sum
{
public:
int a,b;
add()
{
cin>>a>>b;
}
disp()
{
    cout<<a<<b;
}
};
main()
{
sum q;
q.add();
q.disp();
ofstream out("abc.txt");
out.write(&q,sizeof(q));
out.close();
}

