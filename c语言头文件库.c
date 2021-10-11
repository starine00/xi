#include <stdio.h>
#include <stdlib.h>

#define MEM_B(x) (*((byte *)(x)))//得到指定地址上的一个字节或者字
#define MEM_W(x) (*((word *)(x)))

#define MAX(x,y) (((x)>(y))?(x):(y))//求最大值和最小值
#define MIN(x,y) (((x)<(y))?(x):(y))

#define FPOS(type,field)\ ((dword)&((type*)0)->field)//得到一个field在结构体(struct)中的偏移量
#define FSIZ(type,field) sizeof(((type *)0)->filed)//得到一个结构体中field所占用的字节数

#define RND8(x) ((((x)+7)/8)*8)//返回一个比x大的最接近8的倍数
#define upcase(c) (((c)>='a'&&(c)<='z'?((c)-0x20):(c))//将一个字符转换为大写

#define decchk(c) ((c)>='0'&&(c)<='9')//判断字符是不是10进制的数字
//判断字符是不是16进制数字
#define HEXCHK(c)(((c)>='0'&&(c)<='9')||((c)>='A'&&(c)<='F')||((c)>='a'&&(c)<='f'))

#define INC_SAT(va1)(va1=((va1)+1)>(va1))?(va1)+1:(va1))//防止溢出的一个方法

#define ARR_SIZE(a) (sizeof((a))/sizeof((a[0])))

#define ADD(a,b) (a+b)

int main()
{
	int i=0;
	i=RND8(5);
	printf("%d\n",i);
	system("pause");
	return 0;
}