//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char* getmemory(char *p)
//{
//	p=(char*)malloc(100);
//}
//void Test(void)
//{
//	char* str=NULL;
//	getmemory(str);
//	strcpy(str,"hello world");//hello world 拷贝不到NULL指针中，程序崩溃
//	printf(str);
//	
//}
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}
//以上代码两处错误
//1.运行代码出现程序崩溃
//2.p是getmemory函数的形参，只在函数内部有效，等getmemory函数返回之后
//动态开辟内存尚未释放，并且无法找到，所以会造成内存泄漏

//正确代码1
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char* getmemory(char* *p)
//{
//	*p=(char*)malloc(100);
//}
//void Test(void)
//{
//	char* str=NULL;
//	getmemory(&str);
//	strcpy(str,"hello world");//hello world 拷贝不到NULL指针中，程序崩溃
//	printf(str);
//	free(str);
//	str=NULL;
//}
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}

//改正2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getmemory(char *p)
{
	p=(char *)malloc(100);
	return p;
}
void Test(void)
{
	char* str=NULL;
	str=getmemory(str);
	strcpy(str,"hello world");//hello world 拷贝不到NULL指针中，程序崩溃
	printf(str);
	free(str);
	str=NULL;
}
int main()
{
	Test();
	system("pause");
	return 0;
}