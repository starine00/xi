#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int Add(int x,int y)
//{
//	return x+y;
//}

//int main()
//{
//	//ָ������
//	//int* arr[10];
//	//����ָ��
//	//int* (*pa)[10]=&arr;
//	
//	//����ָ��
//	int (*pAdd)(int,int)=&Add;//Ҳ����дAdd
//	/*int sum=(*pAdd)(1,2);
//	printf("%d\n",sum);*/
//	//����ָ�������
//	int (*pArr[5])(int ,int);
//	//ָ����ָ�������ָ��
//	int (*(*ppArr)[5])(int,int)=&pArr;
//	system("pause");
//	return 0;
//}


//ͨ�õ�ð�����򣬲���ֻ����������
void bubble_sort(int arr[],int sz)
{
	int i=0;
	//����
	for(i=0;i<sz-1;i++)
	{
		//һ��ð������
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
}
void qsort(void * base,size_t num,size_t width,int(*cmp)(const void* e1,void* e2));

int cmp_int( void* e1, void* e2)
{
	//�Ƚ���������ֵ��
	return *(int *)e1-*(int *)e2;
}
struct stu
{
	char name[20];
	int age;
};

void test1()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
}
int cmp_float(const void* e1,const void* e2)
{
	if(*(float*)e1==*(float*)e2)
		return 0;
	else if (*(float*)e1>*(float*)e2)
		return 1;
	else
		return -1;
	//�������·�����ǿ������ת��
	/*return (int)*(float*)e1-*(float*)e2;*/
}
void test2()
{
	float f[]={9.0,8.0,7.0,6.0};
	int sz=sizeof(f)/sizeof(f[0]);
	int j=0;
	qsort(f,sz,sizeof(f[0]),cmp_float);
	
	for(j=0;j<sz;j++)
	{
		printf("%f ",f[j]);
	}
}

int cmp_stu_by_age( const void*e1,const void*e2)
{
	return ((struct stu*)e1)->age-((struct stu*)e2)->age;
}
int cmp_stu_by_name( void*e1, void*e2)
{
	//�Ƚ����־��ǱȽ��ַ���
	//�ַ����Ƚϲ�����><=���Ƚϣ�Ҫ��strcmp����

	return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
}
void test3()
{
	struct stu s[3]={{"zhangsan",20},{"lisi",19},{"wangwu",18}};
	int sz=sizeof(s)/sizeof(s[0]);
	qsort(s,sz,sizeof(s[0]),cmp_stu_by_age);//cmp_stu_by_name
	//��һ���������������������Ԫ�ص�ַ
	//�ڶ��������������������Ԫ�ظ���
	//�����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
	//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
	//����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
}

void Swap(char* buf1,char* buf2,int width)
{
	int i=0;
	for(i=0;i<width;i++)
	{
		char tmp=*buf1;
		*buf1=*buf2;
		*buf2=tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void*base,int sz,int width,int (*cmp)(void*e1,void*e2))
{
	int i=0;
	//����
	for(i=0;i<sz-1;i++)
	{
		//ÿһ�˱ȽϵĶ���
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{
			//����Ԫ�رȽ�
			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
			   //����
				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
			}
		}
	}
}
void test4()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	//ʹ��bubble_sort����һ��֪���������ʲô����
	//��Ӧ��֪����αȽϴ����������Ԫ��
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int); 
}
void test5()
{
	struct stu s[3]={{"zhangsan",20},{"lisi",19},{"wangwu",18}};
	int sz=sizeof(s)/sizeof(s[0]);
	bubble_sort(s,sz,sizeof(s[0]),cmp_stu_by_name);
}
int main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	/*int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i=0;*/
	/*qsort(arr,sz,sizeof(arr[0]),cmp_int);*/
	/*bubble_sort(arr,sz);*/
	
	/*for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}*/
	system("pause");
	return 0;
}



////void*ָ��
//int main()
//{
//	int a=10;
//	int *pa=&a;
//
//	char ch ='w';
//	char* pc=&ch;
//
//	void* p=&a;
//	//*p=0;
//	//void*���͵�ָ�� ���Խ����κ����͵ĵ�ַ
//	//void*���͵�ָ�� ���ܽ��н����ò���
//	//void*���͵�ָ�벻�ܽ��мӼ������Ĳ���
//	system("pause");
//	return 0;
//}