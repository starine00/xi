#include <stdio.h>
#include <stdlib.h>

#define MEM_B(x) (*((byte *)(x)))//�õ�ָ����ַ�ϵ�һ���ֽڻ�����
#define MEM_W(x) (*((word *)(x)))

#define MAX(x,y) (((x)>(y))?(x):(y))//�����ֵ����Сֵ
#define MIN(x,y) (((x)<(y))?(x):(y))

#define FPOS(type,field)\ ((dword)&((type*)0)->field)//�õ�һ��field�ڽṹ��(struct)�е�ƫ����
#define FSIZ(type,field) sizeof(((type *)0)->filed)//�õ�һ���ṹ����field��ռ�õ��ֽ���

#define RND8(x) ((((x)+7)/8)*8)//����һ����x�����ӽ�8�ı���
#define upcase(c) (((c)>='a'&&(c)<='z'?((c)-0x20):(c))//��һ���ַ�ת��Ϊ��д

#define decchk(c) ((c)>='0'&&(c)<='9')//�ж��ַ��ǲ���10���Ƶ�����
//�ж��ַ��ǲ���16��������
#define HEXCHK(c)(((c)>='0'&&(c)<='9')||((c)>='A'&&(c)<='F')||((c)>='a'&&(c)<='f'))

#define INC_SAT(va1)(va1=((va1)+1)>(va1))?(va1)+1:(va1))//��ֹ�����һ������

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