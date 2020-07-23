#include<iostream>
#include<fstream>
#include<conio.h>
main()
{
ifstream devil("abc.txt");
ofstream out("lsd.txt");
char ch;
while(!devil.eof())
{devil.get(ch);
out<<ch;}
devil.close();}

