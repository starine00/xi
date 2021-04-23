#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
	char name[20];
	short age;
	char hao[15];
	char sex[5];
};//struct 要在最后加上分号；
int main()
{
	//利用结构体类型-创建一个该类型的结构体变量
	//打印结构体信息
	struct student zhang={"zhnag",21,"1880910T02552","nan"};
	strcpy(zhang.name,"wang");//对于数组命名的名称，要想改变的话要用strcpy-string copy- 库函数是string.h
	strcpy(zhang.hao,"1880910T02566");
	zhang.age=18;//对于变量的修改可以直接修改
	struct student* p=&zhang;//取出存放zhang的地址
	//.为结构成员访问操作符
	printf("%s\n",(*p).name);//用指针中的地址表示
	//->操作符
	printf("%s\n",p->name);//也可以用指针这么表示
	printf("%s\n",zhang.name);//正常输出形式
	printf("%d\n",zhang.age);
	printf("%s\n",zhang.hao);

 	system("pause");
	return 0;
}