//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char ch='W';
//	char* p=&ch;
//	const char* p2="abcdef";
//	//指针数组-数组-存放指针的数组
//	
//	//int *p3;整形指针-指向整形的指针
//	//char* p4;字符指针-指向字符的
//	int arr2[5];//数组
//	int (*pa)[5]=&arr2;//取出数组的地址，pa就是一个数组指针
//	system("pause");
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
void test(int arr[3][5])
{}
void test1(int arr[][5])
{}
//void test2(int *arr)error
//{}
//void test2(int arr[3][])//行可以省略，列不可以省略
//{}
//void test3(int* arr)error
//{}
//void test4(int **arr)error
//{}
void test5(int (*arr)[5])
{}
int main()
{
	int arr[3][5]={0};
	test(arr);//二维数组传参
	test1(arr);
	//test2(arr);
	//test3(arr);
	//test4(arr);
	test5(arr);
	system("pause");
	return 0;
}