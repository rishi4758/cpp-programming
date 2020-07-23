#include <iostream>
#include<fstream>
#include<conio.h>
using namespace std;

void check1()
{
   ifstream out("dt.txt");

    char str[80];

     char a;
     cout<<"enter one char :-    ";
     cin>>a;

    while(!out.eof())
    {
        out.getline(str,80,'\n');

        if(str[0]==a)


      cout<<str<<endl;
    }
    out.close();
}









void check2()
{
 ifstream out("dt.txt");

    char str[80];

     char a,b;
     cout<<"enter two char  :-     ";
     cin>>a>>b;

    while(!out.eof())
    {
        out.getline(str,80,'\n');

        if(str[0]==a && str[1]==b)


      cout<<str<<endl;
    }
    out.close();
}










void check3()
{
    ifstream out("dt.txt");

    char str[80];
          cout<<"enter three char:-   ";
     char a,b,c;
     cin>>a>>b>>c;

    while(!out.eof())
    {
        out.getline(str,80,'\n');

        if(str[0]==a && str[1]==b && str[2]==c)


      cout<<str<<endl;
    }
    out.close();
}

check4()
{
     ifstream out("dt.txt");

    char str[80];
          cout<<"enter three char:-   ";
     char a,b,c,d;
     cin>>a>>b>>c>>d;

    while(!out.eof())
    {
        out.getline(str,80,'\n');

        if(str[0]==a && str[1]==b && str[2]==c && str[3]==d)


      cout<<str<<endl;
    }
    out.close();
    getch();
}



int main()
{
  int input;
  while(1){
         cout<<"\n\n\n\n";
        cout<<"************************welcome****************************\n\n\n";


        cout<<"           *****RAHUL RAJ******\n";

        cout<<"      MENU\n";

  cout<<"              1. for single char\n\n";
  cout<<"              2. for double char\n\n";
  cout<<"              3. for triple char\n\n";
  cout<<"              4. for four char \n\n";
   cout<<"             5. Exit\n";
  cout<<"*******Select your choice***** :- ";
  cin>> input;
  switch ( input ) {
  case 1:
    check1();
    break;
  case 2:
    check2();
    break;
  case 3:
    check3();
    break;

  case 4:
      check4();
      break;

  case 5:return(0);

  default:
    cout<<"wrong input\n";
    break;


  }
  }

}
