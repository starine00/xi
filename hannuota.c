#include <stdio.h>
#include <stdlib.h>

int facl(int n)
{
	//int a=1;
	//int b=1;
	//int c=1;
	//while(n>2)
	//{
	//	c=a+b;
	//	a=b;
	//	b=c;
	//	n--;
	//}
	//return c;
	if(n<=2)
		return 1;
	else
		return facl(n-1)+facl(n-2);
}

int main()
{
	int n=0;
	int ret=0;
	scanf("%d",&n);
	ret=facl(n);
	printf("%d\n",ret);
	system("pause");
	return 0;

}


//������̨�ף���һ��������Ҳ��һ����һ���������������ܹ��м������
//#include <stdio.h>
//#include <stdlib.h>
//
//int tiao(int n)
//{
//	if(n==0)
//		return 0;	
//	if(n==1)
//		return 1;
//	if(n==2)
//		return 2;
//	if(n>2)
//	{
//		return tiao(n-1)+tiao(n-2);
//	}
//}
//int main()
//{
//	int n=0;
//	int ret=0;
//	scanf("%d",&n);
//	ret =tiao(n);
//	printf("��%d�����\n",ret);
//	system("pause");
//	return 0;
//
//}


//��ŵ��
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////˼·��1.��n-1�������ȷŵ�B
////	2.��A��ʣ�µ�һ�����ƶ���C����
////	3.��n-1����B���ƶ���C��
//
////��������
//void move(char x,char y);
//void hannuo(int n,char one,char two,char three)
//{
//	if(n==1)
//	{
//		move(one,three);
//	}
//	else
//	{
//		hannuo(n-1,one,three,two);//��n-1���������ƶ���B��
//		move(one,three);/*��A��ʣ�µ�һ�����ƶ���C����*/
//		hannuo(n-1,two,one,three);/*��n-1����B���ƶ���C��*/
//	}
//}
//int count=0;
//void move(char x,char y)
//{
//	printf("%c->%c\n",x,y);
//	count++;
//}
//
//
//int main()
//{
//	int n;
//	printf("input your number:");
//	scanf("%d",&n);
//	hannuo(n,'A','B','C');
//	printf("����%d\n",count);
//	system("pause");
//	return 0;
//}