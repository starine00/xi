#include <stdio.h>
#include <stdlib.h>
//
//void print(int *p,int sz)
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d\n",*(p+i));
//	}
//}
//int main()
//{
//	//һ��ָ�봫��
//	int arr[10]={1,2,3,4,5,6,7,8,9,0};
//	int *p=arr;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	print(p,sz);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void test1(int** p)
//{
//	
//}
//
//int main()
//{
//	//int a=10;
//	//int* p=&a;
//	//test1(&a);
//	//test1(p);
//	/*int a=10;
//	int* p=&a;
//	int** pa=&p;
//	test1(pa);
//	test1(&p);*/
//
//	int *ptr;
//	int** pp=&ptr;
//	test1(&ptr);
//	test1(pp);
//	int* arr[10];
//	test1(arr);//ָ������Ҳ���Դ�
//	system("pause");
//	return 0;
//}

//----------------------
//����ָ����ָ�������ָ��
//����ָ����ָ������ָ��
int Add(int x,int y)
{
	int z=0;
	z=x+y;
	return z;
}

int main()
{
	int a=10;
	int b=20;
	int arr[10]={0};
	int ret=Add(a,b);
	printf("%d\n",ret);
	printf("%p\n",&Add);
	printf("%p\n",Add);
	system("pause");
	return 0;
}