//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a[5]={1,2,3,4,5};
//	int *ptr=(int *)(&a+1);
//	printf("%d,%d\n",*(a+1),*(ptr-1));
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//struct test 
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p的值为0x100000 如下表达式的值分别是多少？
////已知，结构体test类型的变量大小是20个字节
//int main()
//{
//	p=(struct test*)0x100000;
//	printf("%p\n",p+0x1);//跳过了一个结构体数组 为20个字节 转换为16进制 为14
//	printf("%p\n",(unsigned long)p+0x1);//1048576+1 0x00100001
//	printf("%p\n",(unsigned int*)p+0x1);//0x00100004
//	system("pause");
//	return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a[4]={1,2,3,4};
//	int *ptr1=(int *)(&a+1);
//	int *ptr2=(int *)((int)a+1);//第二个元素的16进制 0x2000000
//	printf("%x,%x",ptr1[-1],*ptr2);
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a[3][2]={(0,1),(2,3),(4,5)};//括号里面逗号表达式，选择最大的一个数
//	//虽说3行2列但其实其中只存了三个数分别是1，3，5，位置为a[0][0],a[0][1],a[1][0],后面的
//	//三个没有初始化
//	int *p;
//	p=a[0];
//	printf("%d",p[0]);
//	system("pause");
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[5][5];
	int(*p)[4];//p[4][2]等价于*(*(p+4)+2)
	p=a;
	printf("%p,%d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);
	//指针减指针输出的是两个元素之间相差的个数  本题为-4
	//-4的原码，反码，补码为
	//10000000000000000000000000000100
	//11111111111111111111111111111011
	//11111111111111111111111111111100
	//4个1换算为一个16进制的f  所以-4输出的地址为fffffffc
	system("pause");
	return 0;
}