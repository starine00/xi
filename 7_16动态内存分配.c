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
//	//向内存申请10个整形的空间
//	int *p=(int*)malloc(10*sizeof(int));
//	//int* p=(int*)calloc(10,sizeof(int))a
//	if(p==NULL)
//	{
//		//打印错误原因
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
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
//	//当动态申请的空间不再使用，应该还给操作系统
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
//	int *p=(int *)malloc(20);//用整形指针来维护
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
//	//假设如果申请的20个字节的空间不够
//	//希望我们能有40个字节的空间
//	//这里就要用到realloc来调整动态开辟的内存
//	//
//	//realloc使用注意事项
//	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的内存空间可以追加,则realloc函数会重新
//	//找一块新的内存区域，开辟一块满足需求的空间，并且把原来的数据拷贝回来，
//	//释放旧的空间，最后返回新开辟的内存空间地址
//	//3.得用一个新的变量来接受realloc函数的返回值，
//	int *ptr=(int*)realloc(p,40);//第一个传进去的参数是之前开辟的整形指针，第二个参数是调整之后新的大小
//	if(ptr != NULL)//防止开辟空间失败，返回NULL，失去了原先的p指向的空间	
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



//常见的动态内存空间错误

//1.对NULL指针的解引用操作
//int *P=malloc(40)
//*p=10; malloc开辟空间失败-对NULL指针解引用
//在开辟空间之后要进行是否为NULL的判断
//2.对动态开辟空间的越界访问
//int *p=(int *)malloc(40)//10个int  0-9
//if(p==NULL)
//{
//	return 0;
//}
//int i=0;
//这个地方可能造成越界访问，访问到第11个元素
//for(i=0;i<+10;i++)
//{
//	*(p+i)=i;
//}
//free(p);
//p=NULL:
//访问的空间，不能大于申请开辟的空间大小
//3.对非动态开辟内存使用free
//int a=10;//栈上开辟的空间
//int *p=&a;
//free(p);这是错误的，int a是在栈区，
//4.使用free释放动态开辟内存的一部分
//int *p=(int *)malloc(40)
//if(p==NULL)
//{
//	return 0;
//}
//int i=0;
//for(i=0;i<10;i++)
//{
//	*p++=i;//这样做会让p改变位置，从而无法从头释放开辟的空间
//}
////回收空间
//free(p);
//p=NULL:
//5.对同一块动态内存的多次释放
//int *p=(int *)malloc(40)
//if(p==NULL)
//{
//	return 0;
//}
//...使用
//释放
//free(p);
//p=NULL;注意在后面加上p=NULL这样会避免多次释放
//....
//free(p);
//6.动态开辟空间忘记释放(内存泄漏)
//while(1)
//{
//	malloc(1)//死循环不释放，一直占用内存空间
//}





#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main()
{
	int *p=(int *)realloc(NULL,40);//跟malloc开辟40个字节的空间一样
	//int *p=(int *)malloc(40);
	system("pause");
	return 0;
}