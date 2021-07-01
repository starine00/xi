#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int Add(int x,int y)
//{
//	return x+y;
//}

//int main()
//{
//	//指针数组
//	//int* arr[10];
//	//数组指针
//	//int* (*pa)[10]=&arr;
//	
//	//函数指针
//	int (*pAdd)(int,int)=&Add;//也可以写Add
//	/*int sum=(*pAdd)(1,2);
//	printf("%d\n",sum);*/
//	//函数指针的数组
//	int (*pArr[5])(int ,int);
//	//指向函数指针数组的指针
//	int (*(*ppArr)[5])(int,int)=&pArr;
//	system("pause");
//	return 0;
//}


//通用的冒泡排序，不光只用于排整形
void bubble_sort(int arr[],int sz)
{
	int i=0;
	//趟数
	for(i=0;i<sz-1;i++)
	{
		//一趟冒泡排序
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
	//比较两个整形值的
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
	//或者以下方法，强制类型转换
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
	//比较名字就是比较字符串
	//字符串比较不能用><=来比较，要用strcmp函数

	return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
}
void test3()
{
	struct stu s[3]={{"zhangsan",20},{"lisi",19},{"wangwu",18}};
	int sz=sizeof(s)/sizeof(s[0]);
	qsort(s,sz,sizeof(s[0]),cmp_stu_by_age);//cmp_stu_by_name
	//第一个参数：待排序数组的首元素地址
	//第二个参数：待排序数组的元素个数
	//第三个参数：待排序数组的每个元素的大小-单位是字节
	//第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
	//函数指针的两个参数是：待比较的两个元素的地址
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
	//趟数
	for(i=0;i<sz-1;i++)
	{
		//每一趟比较的对数
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{
			//两个元素比较
			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
			   //交换
				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
			}
		}
	}
}
void test4()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	//使用bubble_sort的人一定知道排序的是什么数据
	//就应该知道如何比较待排序数组的元素
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



////void*指针
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
//	//void*类型的指针 可以接受任何类型的地址
//	//void*类型的指针 不能进行解引用操作
//	//void*类型的指针不能进行加减整数的操作
//	system("pause");
//	return 0;
//}