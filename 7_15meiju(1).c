//ö�� 
//ʹ��ö�ٶ�������#define��ԭ��
//1.���Ӵ���Ŀɶ��ԺͿ�ά����
//2.��#define����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ�
//3.��ֹ��������Ⱦ
//4.���ڵ���
//5.ʹ�÷��㣬����һ�ζ���������
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



//���ϣ������壩
//����Ҳ��һ��������Զ������ͣ��������Ͷ���ı���Ҳ����һϵ�еĳ�Ա
//��������Щ��Ա����һ��ռ�
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


//��С���ж�
//#include <stdio.h>
//#include <stdlib.h>
////int check_sys()
////{
////	int a=1;
////	//����1��ʾС��
////	//����0��ʾ���
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
//	//����1��ʾС��
//	//����0��ʾ���
//	return u.c;
//}
//int main()
//{
//	//int a=0x11223344;//44Ϊ���ֽ�  11Ϊ���ֽ�
//	//�͵�ַ----->�ߵ�ַ
//	//����һ�����ݣ������ڴ��е��ֽ�˳��
//	//[][][][][44][33][22][11][][][][]...С�˴洢ģʽ  ���ֽڷŵ��ߵ�ַ��  ���ֽڷ��ڵ͵�ַ��
//	//[][][][][11][22][33][44][][][][]...��˴洢ģʽ
//	int a=1;
//	int ret=check_sys();
//	if(1==ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");		
//	}
//	system("pause");
//	return 0;
//}



//���ϴ�С�ļ���
//���ϵĴ�С����������Ա�Ĵ�С
//������Ա��С����������������������ʱ���Ҫ���뵽����������������
#include <stdio.h>
#include <stdlib.h>

union un
{
	int a;
	char arr[5];//���ܰ���5�� Ӧ�ð���1��  �൱��5��char1
};
int main()
{
	union un u;
	printf("%d\n",sizeof(u));
	system("pause");
	return 0;
}