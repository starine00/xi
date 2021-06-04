#include <stdio.h>
#include <stdlib.h>

//第一种解法
//int check_sys()
//{
//	int a=1;
//	char* p=(char*)&a;
//	if(*p==1)
//		return 1;
//	else
//		return 0;
//}


//第二种情况
//int check_sys()
//{
//	int a=1;
//	char* p=(char*)&a;
//	return *p;
//}


//第三种情况
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
		printf("小端");
	}
	else
		printf("大端");
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
//	////00000000 00000000 00000000 00010100 -原码
//	////00000000 00000000 00000000 00010100  -反码
//	////00000000 00000000 00000000 0001 0100 -补码
//	////转化为二进制存储 4位转换为一个
//	////0x00000014
//	//int b=-10;
//	////10000000 00000000 00000000 00001010 - 原码
//	////11111111 11111111 11111111 11110101 -反码
//	////11111111 11111111 11111111 1111 0110 -补码
//	////0xFF FF FF F6
//	system("pause");
//	return 0;
//}