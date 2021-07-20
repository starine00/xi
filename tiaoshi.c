#include <stdio.h>
#include <stdlib.h>
 
typedef struct stu
{
	char name[20];
	short age;
	char tele[20];
	char sex[5];
}stu;

void print1(stu ps)
{
	printf("%s\n",ps.name);
	printf("%s\n",ps.tele);
	printf("%d\n",ps.age);
	printf("%s\n",ps.sex);
}

void print2(stu* ps)
{
	printf("%s\n",ps->sex);
	printf("%d\n",ps->age);
	printf("%s\n",ps->name);
	printf("%s\n",ps->tele);
}

int main()
{
	stu s={"³ÂöÎÏè",20,"15598777896","Å®"};
	print1(s);
	print2(&s);
	system("pause");
	return 0;
 }
