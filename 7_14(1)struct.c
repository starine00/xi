//#include <stdio.h>
//#include <stdlib.h>
////声明一个结构体类型
////声明一个学生类型，是想通过学生类型来创建学生变量（对象）
////描述学生属性：姓名+电话+性别+年龄
//
//struct Stu 
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;//全局结构体变量
//struct Stu s3;//全局结构体变量
//int main()
//{
//	struct Stu s1;//局部结构体变量
//	struct Stu s2;
//	system("pause");
//	return 0;
//}



////匿名结构体变量
//struct
//{
//	int a;
//	char c;
//}s;
////匿名结构体指针
//struct
//{
//	int a;
//	char c;
//}*s;


//结构体的自引用
//#include <stdio.h>
//#include <stdlib.h>
//struct node
//{
//	int data;
//	struct node* next;//自引用方式
//};
//int main()
//{
//
//	system("pause");
//	return 0;
//}

//结构体重命名
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct node
//{
//	int data;
//	struct node* next;//自引用方式
//}node;//将struct node 重命名为node
//int main()
//{
//	struct node n1;
//	node n2;
//
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct T
//{
//	double weight;
//	short age;
//};
//struct stu
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	struct stu s={'c',{55.6,30},20,3.14,"hello"};
//	printf("%c %d %lf %s\n",s.c,s.a,s.d,s.arr);
//	printf("%lf\n",s.st.weight);
//	system("pause");
//	return 0;
//}

//结构体内存对齐
//#include <stdio.h>
//#include <stdlib.h>
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//
//	char c1;
//	char c2;
//	int a;
//};
//struct s3
//{
//	double d;
//	char c;
//	int i;
//};
//struct s4
//{
//	char c;
//	struct s3 s3;//对齐数为8
//	double d;
//};//16	
//int main()
//{
//	//struct S1 s1={0};
//	//printf("%d\n",sizeof(s1));//12
//
//	//struct S2 s2={0};
//	//printf("%d\n",sizeof(s2));//8
//	struct s4 s4;
//	printf("%d\n",sizeof(s4));//32
//	system("pause");
//	return 0;
//}
//结构体内存对齐规则
//1.第一个成员在结构体偏移量为0的地址处
//2.其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处
//对齐数=编辑器默认的一个对齐数与该成员大小的较小值
//vs中默认的值对齐数为8
//3.大对齐数（每个成员都有一个最大对齐数）的整倍数
//4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，
//结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数	）的整数倍


//为什么存在内存对齐
//1.平台原因：不是所有的硬件平台都能访问任意地址上的任意数据，某些硬件平台只能在
//某些地址处取某些特定类型的数据，否则抛出硬件异常
//2.性能原因：数据结构（尤其是栈）应该尽可能在自然边界上对齐，原因在于，为了访问
//未对齐的内存，处理器需要做两次内存访问，而对齐的内存访问仅需要一次访问。


//offsetof()相对于首元素地址的偏移量
//#include <stdio.h>
//#include <stdlib.h>
//#include <stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//
//};
//int main()
//{
//	printf("%d\n",offsetof(struct S,c));
//	printf("%d\n",offsetof(struct S,i));
//	printf("%d\n",offsetof(struct S,d));
//	system("pause");
//	return 0;
//}

//结构体传参
//#include <stdio.h>
//#include <stdlib.h>
//#include <stddef.h>
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void init(struct S*ps)
//{
//	ps->a=100;
//	ps->c='w';
//	ps->d=3,14;
//}
//void print1(struct S tmp)//传值
//{
//	printf("%d %c %lf\n",tmp.a,tmp.c,tmp.d);
//}
//void print2(const struct S*ps)//传址
//{
//	printf("%d %c %lf\n",ps->a,ps->c,ps->d);
//}
//int main()
//{
//	struct S s={0};
//	init(&s);
//	print1(s);
//	print2(&s);
//	//首选传地址，函数传参的时候，参数是需要压栈，会有时间和空间上的系统开销，
//	//如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，会导致性能的下降
//	system("pause");
//	return 0;
//}


//位段 节省空间
//#include <stdio.h>
//#include <stdlib.h>
//#include <stddef.h>
//struct S
//{
//    int a:2;//分配2个比特位
//	int b:5;//分配5个比特位
//	int c:10;//分配10个比特位
//	int d:30;//分配30个比特位，位段后面的数字不能大于32
//	//4个字节32个比特位，用了17个还剩15个，剩下的15个空间浪费掉，所以需要再申请4个字节，即32个比特位
//	//所以占用8个字节，
//};
//int main()
//{
//	struct S s;
//	printf("%d\n",sizeof(s));//8个字节
//	system("pause");
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
struct S
{
	char a:3;
	char b:4;
	char c:5;
	char d:4;

};
int main()
{
	struct S s={0};
	s.a=10;
	s.b=20;
	s.c=3;
	s.d=4;
	printf("%d\n",sizeof(s));
	system("pause");
	return 0;
}