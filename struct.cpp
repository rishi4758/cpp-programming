#include<stdio.h>
struct pata
{
	char name[10];
	char vill[10];
	 char teh[10];
	 int member;
};
main()
{
	pata g;
	scanf("%s%s%s%d",&g.name,&g.vill,&g.teh,&g.member);
		printf("%s\n%s\n%s\n%d",g.name,g.vill,g.teh,g.member);
	
}
