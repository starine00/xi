//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//struct s
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int *p=(int*)malloc(10*sizeof(int));
//	//int* p=(int*)calloc(10,sizeof(int))a
//	if(p==NULL)
//	{
//		//��ӡ����ԭ��
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i=0;
//		for(i=0;i<10;i++)
//		{
//			*(p+i)=i;
//
//		}
//		for(i=0;i<10;i++)
//		{
//			printf("%d ",*(p+i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ�ã�Ӧ�û�������ϵͳ
//	free(p);
//	p=NULL;//
//	system("pause");
//	return 0;
//}



////realloc
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	int *p=(int *)malloc(20);//������ָ����ά��
//	if(p==NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//	
//		int i=0;
//		for(i=0;i<5;i++)
//		{
//			*(p+i)=i;
//			/*printf("%d ",*(p+i));*/
//		}
//	}
//	//������������20���ֽڵĿռ䲻��
//	//ϣ����������40���ֽڵĿռ�
//	//�����Ҫ�õ�realloc��������̬���ٵ��ڴ�
//	//
//	//reallocʹ��ע������
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷��,��realloc����������
//	//��һ���µ��ڴ����򣬿���һ����������Ŀռ䣬���Ұ�ԭ�������ݿ���������
//	//�ͷžɵĿռ䣬��󷵻��¿��ٵ��ڴ�ռ��ַ
//	//3.����һ���µı���������realloc�����ķ���ֵ��
//	int *ptr=(int*)realloc(p,40);//��һ������ȥ�Ĳ�����֮ǰ���ٵ�����ָ�룬�ڶ��������ǵ���֮���µĴ�С
//	if(ptr != NULL)//��ֹ���ٿռ�ʧ�ܣ�����NULL��ʧȥ��ԭ�ȵ�pָ��Ŀռ�	
//	{
//		p=ptr;
//		int i=0;
//		for(i=5;i<10;i++)
//		{
//			*(p+i)=i;
//		}
//		for(i=0;i<10;i++)
//		{
//			printf("%d ",*(p+i));
//		}
//	}
//	free(p);
//	p=NULL;
//	system("pause");
//	return 0;
//}



//�����Ķ�̬�ڴ�ռ����

//1.��NULLָ��Ľ����ò���
//int *P=malloc(40)
//*p=10; malloc���ٿռ�ʧ��-��NULLָ�������
//�ڿ��ٿռ�֮��Ҫ�����Ƿ�ΪNULL���ж�
//2.�Զ�̬���ٿռ��Խ�����
//int *p=(int *)malloc(40)//10��int  0-9
//if(p==NULL)
//{
//	return 0;
//}
//int i=0;
//����ط��������Խ����ʣ����ʵ���11��Ԫ��
//for(i=0;i<+10;i++)
//{
//	*(p+i)=i;
//}
//free(p);
//p=NULL:
//���ʵĿռ䣬���ܴ������뿪�ٵĿռ��С
//3.�ԷǶ�̬�����ڴ�ʹ��free
//int a=10;//ջ�Ͽ��ٵĿռ�
//int *p=&a;
//free(p);���Ǵ���ģ�int a����ջ����
//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
//int *p=(int *)malloc(40)
//if(p==NULL)
//{
//	return 0;
//}
//int i=0;
//for(i=0;i<10;i++)
//{
//	*p++=i;//����������p�ı�λ�ã��Ӷ��޷���ͷ�ͷſ��ٵĿռ�
//}
////���տռ�
//free(p);
//p=NULL:
//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//int *p=(int *)malloc(40)
//if(p==NULL)
//{
//	return 0;
//}
//...ʹ��
//�ͷ�
//free(p);
//p=NULL;ע���ں������p=NULL������������ͷ�
//....
//free(p);
//6.��̬���ٿռ������ͷ�(�ڴ�й©)
//while(1)
//{
//	malloc(1)//��ѭ�����ͷţ�һֱռ���ڴ�ռ�
//}





#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main()
{
	int *p=(int *)realloc(NULL,40);//��malloc����40���ֽڵĿռ�һ��
	//int *p=(int *)malloc(40);
	system("pause");
	return 0;
}