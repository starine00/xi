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
//	strcpy(str,"hello world");//hello world ��������NULLָ���У��������
//	printf(str);
//	
//}
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}
//���ϴ�����������
//1.���д�����ֳ������
//2.p��getmemory�������βΣ�ֻ�ں����ڲ���Ч����getmemory��������֮��
//��̬�����ڴ���δ�ͷţ������޷��ҵ������Ի�����ڴ�й©

//��ȷ����1
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
//	strcpy(str,"hello world");//hello world ��������NULLָ���У��������
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

//����2
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
	strcpy(str,"hello world");//hello world ��������NULLָ���У��������
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