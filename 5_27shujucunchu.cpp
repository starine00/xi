#include <stdio.h>
#include <stdlib.h>

//��һ�ֽⷨ
//int check_sys()
//{
//	int a=1;
//	char* p=(char*)&a;
//	if(*p==1)
//		return 1;
//	else
//		return 0;
//}


//�ڶ������
//int check_sys()
//{
//	int a=1;
//	char* p=(char*)&a;
//	return *p;
//}


//���������
int check_sys()
{
	int a=1;
	return *(char*)&a;
}
int main()
{
	int ret =check_sys();
	if(ret==1)
	{
		printf("С��");
	}
	else
		printf("���");
	system("pause");
	return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main()
//{
//	//int a=20;
//	////00000000 00000000 00000000 00010100 -ԭ��
//	////00000000 00000000 00000000 00010100  -����
//	////00000000 00000000 00000000 0001 0100 -����
//	////ת��Ϊ�����ƴ洢 4λת��Ϊһ��
//	////0x00000014
//	//int b=-10;
//	////10000000 00000000 00000000 00001010 - ԭ��
//	////11111111 11111111 11111111 11110101 -����
//	////11111111 11111111 11111111 1111 0110 -����
//	////0xFF FF FF F6
//	system("pause");
//	return 0;
//}