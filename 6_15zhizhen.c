//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char ch='W';
//	char* p=&ch;
//	const char* p2="abcdef";
//	//ָ������-����-���ָ�������
//	
//	//int *p3;����ָ��-ָ�����ε�ָ��
//	//char* p4;�ַ�ָ��-ָ���ַ���
//	int arr2[5];//����
//	int (*pa)[5]=&arr2;//ȡ������ĵ�ַ��pa����һ������ָ��
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
//void test2(int arr[3][])//�п���ʡ�ԣ��в�����ʡ��
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
	test(arr);//��ά���鴫��
	test1(arr);
	//test2(arr);
	//test3(arr);
	//test4(arr);
	test5(arr);
	system("pause");
	return 0;
}