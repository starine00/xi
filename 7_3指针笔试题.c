//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a[5]={1,2,3,4,5};
//	int *ptr=(int *)(&a+1);
//	printf("%d,%d\n",*(a+1),*(ptr-1));
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//struct test 
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p��ֵΪ0x100000 ���±��ʽ��ֵ�ֱ��Ƕ��٣�
////��֪���ṹ��test���͵ı�����С��20���ֽ�
//int main()
//{
//	p=(struct test*)0x100000;
//	printf("%p\n",p+0x1);//������һ���ṹ������ Ϊ20���ֽ� ת��Ϊ16���� Ϊ14
//	printf("%p\n",(unsigned long)p+0x1);//1048576+1 0x00100001
//	printf("%p\n",(unsigned int*)p+0x1);//0x00100004
//	system("pause");
//	return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a[4]={1,2,3,4};
//	int *ptr1=(int *)(&a+1);
//	int *ptr2=(int *)((int)a+1);//�ڶ���Ԫ�ص�16���� 0x2000000
//	printf("%x,%x",ptr1[-1],*ptr2);
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a[3][2]={(0,1),(2,3),(4,5)};//�������涺�ű��ʽ��ѡ������һ����
//	//��˵3��2�е���ʵ����ֻ�����������ֱ���1��3��5��λ��Ϊa[0][0],a[0][1],a[1][0],�����
//	//����û�г�ʼ��
//	int *p;
//	p=a[0];
//	printf("%d",p[0]);
//	system("pause");
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[5][5];
	int(*p)[4];//p[4][2]�ȼ���*(*(p+4)+2)
	p=a;
	printf("%p,%d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);
	//ָ���ָ�������������Ԫ��֮�����ĸ���  ����Ϊ-4
	//-4��ԭ�룬���룬����Ϊ
	//10000000000000000000000000000100
	//11111111111111111111111111111011
	//11111111111111111111111111111100
	//4��1����Ϊһ��16���Ƶ�f  ����-4����ĵ�ַΪfffffffc
	system("pause");
	return 0;
}