//枚举 
//使用枚举而不是用#define的原因
//1.增加代码的可读性和可维护性
//2.和#define定义的标识符比较枚举有类型检查，更加严谨
//3.防止了命名污染
//4.便于调试
//5.使用方便，可以一次定义多个常量
//#include <stdio.h>
//#include <stdlib.h>
//enum sex
//{
//	male=2,
//	female=4,
//	secret=8,
//};
//enum color
//{
//	red,
//	green,
//	blue,
//};
//int main()
//{
//	enum sex s=male;
//	/*s=female;
//	enum color c =blue;
//	int color=red;
//	printf("%d\n",color);
//	printf("%d %d %d\n",red,green,blue);*/
//	printf("%d %d %d",male,female,secret);
//	printf("%d\n",sizeof(s));
//	system("pause");
//	return 0;
//}



//联合（共用体）
//联合也是一种特殊的自定义类型，这种类型定义的变量也包含一系列的成员
//特征是这些成员公用一块空间
//#include <stdio.h>
//#include <stdlib.h>
//union un
//{
//	char c;
//	int i;
//
//};
//int main()
//{
//	union un u;
//	printf("%d\n",sizeof(u));
//	printf("%p\n",&(u));
//	printf("%p\n",&(u.c));
//	printf("%p\n",&(u.i));
//	system("pause");
//	return 0;
//}


//大小端判断
//#include <stdio.h>
//#include <stdlib.h>
////int check_sys()
////{
////	int a=1;
////	//返回1表示小端
////	//返回0表示大端
////	return *(char*)&a;
////}
//int check_sys()
//{
//	union un
//	{
//		char c;
//		int i;
//	}u;
//	u.i=1;
//	//返回1表示小端
//	//返回0表示大端
//	return u.c;
//}
//int main()
//{
//	//int a=0x11223344;//44为低字节  11为高字节
//	//低地址----->高地址
//	//讨论一个数据，放在内存中的字节顺序
//	//[][][][][44][33][22][11][][][][]...小端存储模式  高字节放到高地址处  低字节放在低地址处
//	//[][][][][11][22][33][44][][][][]...大端存储模式
//	int a=1;
//	int ret=check_sys();
//	if(1==ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");		
//	}
//	system("pause");
//	return 0;
//}



//联合大小的计算
//联合的大小至少是最大成员的大小
//当最大成员大小不是最大对齐数的整数倍的时候就要对齐到最大对齐数的整数倍
#include <stdio.h>
#include <stdlib.h>

union un
{
	int a;
	char arr[5];//不能按照5算 应该按照1算  相当于5个char1
};
int main()
{
	union un u;
	printf("%d\n",sizeof(u));
	system("pause");
	return 0;
}