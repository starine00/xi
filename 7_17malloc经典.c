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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getmemory(char* *p)
{
	*p=(char*)malloc(100);
}
void Test(void)
{
	char* str=NULL;
	getmemory(&str);
	strcpy(str,"hello world");
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
	strcpy(str,"hello world");
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


//�Ƿ�����	
//����ջ�ռ�ĵ�ַ������
//����һ�����ֵ
//#include <stdio.h>
//#include <stdlib.h>
//char* getmemory(void)
//{
//	char p[]="hello world";
//	return p;
//}
//void test(void)
//{
//	char* str=NULL;
//	str=getmemory();
//	printf(str);
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void getmemory(char **p,int num)
//{
//	*p=(char*)malloc(num);//û����free�����ڴ�й©
//}
//void test(void)
//{
//	char *str=NULL;
//	getmemory(&str,100);
//	strcpy(str,"hello");
//	printf(str);//�����ͷŶ�̬���ٵĿռ䣬�����ڴ�й©
//	//free(str);
//	//str=NULL;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}




#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test(void)
{
	char *str=(char*)malloc(100);
	strcpy(str,"hello");
	free(str);//�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL,Ӧ����Ϊ��ָ��
	//str=NULL;
	if(str!=NULL)
	{
		strcpy(str,"hello");
		printf(str);
	}
}
int main()
{
	test();
	system("pause");
	return 0;
}