//#include <stdio.h>
//#include <stdlib.h>
////����һ���ṹ������
////����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������������
////����ѧ�����ԣ�����+�绰+�Ա�+����
//
//struct Stu 
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;//ȫ�ֽṹ�����
//struct Stu s3;//ȫ�ֽṹ�����
//int main()
//{
//	struct Stu s1;//�ֲ��ṹ�����
//	struct Stu s2;
//	system("pause");
//	return 0;
//}



////�����ṹ�����
//struct
//{
//	int a;
//	char c;
//}s;
////�����ṹ��ָ��
//struct
//{
//	int a;
//	char c;
//}*s;


//�ṹ���������
//#include <stdio.h>
//#include <stdlib.h>
//struct node
//{
//	int data;
//	struct node* next;//�����÷�ʽ
//};
//int main()
//{
//
//	system("pause");
//	return 0;
//}

//�ṹ��������
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct node
//{
//	int data;
//	struct node* next;//�����÷�ʽ
//}node;//��struct node ������Ϊnode
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

//�ṹ���ڴ����
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
//	struct s3 s3;//������Ϊ8
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
//�ṹ���ڴ�������
//1.��һ����Ա�ڽṹ��ƫ����Ϊ0�ĵ�ַ��
//2.������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ��
//������=�༭��Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ
//vs��Ĭ�ϵ�ֵ������Ϊ8
//3.���������ÿ����Ա����һ��������������������
//4.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ�����������������������
//�ṹ��������С��������������������Ƕ�׽ṹ��Ķ�����	����������


//Ϊʲô�����ڴ����
//1.ƽ̨ԭ�򣺲������е�Ӳ��ƽ̨���ܷ��������ַ�ϵ��������ݣ�ĳЩӲ��ƽֻ̨����
//ĳЩ��ַ��ȡĳЩ�ض����͵����ݣ������׳�Ӳ���쳣
//2.����ԭ�����ݽṹ��������ջ��Ӧ�þ���������Ȼ�߽��϶��룬ԭ�����ڣ�Ϊ�˷���
//δ������ڴ棬��������Ҫ�������ڴ���ʣ���������ڴ���ʽ���Ҫһ�η��ʡ�


//offsetof()�������Ԫ�ص�ַ��ƫ����
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

//�ṹ�崫��
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
//void print1(struct S tmp)//��ֵ
//{
//	printf("%d %c %lf\n",tmp.a,tmp.c,tmp.d);
//}
//void print2(const struct S*ps)//��ַ
//{
//	printf("%d %c %lf\n",ps->a,ps->c,ps->d);
//}
//int main()
//{
//	struct S s={0};
//	init(&s);
//	print1(s);
//	print2(&s);
//	//��ѡ����ַ���������ε�ʱ�򣬲�������Ҫѹջ������ʱ��Ϳռ��ϵ�ϵͳ������
//	//�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ󣬻ᵼ�����ܵ��½�
//	system("pause");
//	return 0;
//}


//λ�� ��ʡ�ռ�
//#include <stdio.h>
//#include <stdlib.h>
//#include <stddef.h>
//struct S
//{
//    int a:2;//����2������λ
//	int b:5;//����5������λ
//	int c:10;//����10������λ
//	int d:30;//����30������λ��λ�κ�������ֲ��ܴ���32
//	//4���ֽ�32������λ������17����ʣ15����ʣ�µ�15���ռ��˷ѵ���������Ҫ������4���ֽڣ���32������λ
//	//����ռ��8���ֽڣ�
//};
//int main()
//{
//	struct S s;
//	printf("%d\n",sizeof(s));//8���ֽ�
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