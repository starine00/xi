//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//
//	//int *p=NULL;//p������ָ��-ָ�����ε�ַ-���Դ�����ε�ַ
//	//char* pc=NULL;//pc���ַ�ָ��-ָ���ַ���ַ-���Դ���ַ��ĵ�ַ
//					//����ָ��-ָ�������ָ��-���Դ������ĵ�ַ
//	//int arr[10]={0};
//	//arr-��Ԫ�صĵ�ַ
//	//&arr[0]-��Ԫ�صĵ�ַ
//	//&arr-����ĵ�ַ
//	//int arr[10]={1,2,3,4,5,6,7,8,9,0};
//	//int (*p)[10]=&arr;//����ĵ�ַҪ������
//	//�����p��������ָ�롣
//	int arr[10]={1,2,3,4,5,6,7,8,9,0};
//	int* p=arr;
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		printf("%d\n",*(p+i));
//	}
//	//int (*pa)[10]=&arr;
//	//int i=0;
//	//for(i=0;i<10;i++)
//	//{
//	//	/*printf("%d\n",(*pa)[i]);*/
//	//	printf("%d\n",*((*pa)+i));
//	//}
//	system("pause");
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//void printf1(int arr[3][5],int x,int y)
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void printf2(int (*p)[5],int x,int y)
//{
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//		int j=0;
//		for(j=0;j<5;j++)
//		{
//			printf("%d ",*(*(p+i)+j));
//		}
//		printf("\n");
//	}
//	
//}
//int main()
//{
//	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//	printf1(arr,3,5);
//	printf2(arr,3,5);
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,0};
//	int i=0;
//	int* p=arr;
//	for(i=0;i<10;i++)
//	{
//	printf("%d ",arr[i]);
//	printf("%d ",*(p+i));
//	printf("%d ",*(arr+i));
//	printf("%d ",p[i]);
//	}
//	
//	system("pause");
//	return 0;
//}


int arr[5];//arr��һ��5��Ԫ�ص���������
int *parr1[10];//parr1��һ�����飬�������Ǹ�Ԫ�أ�ÿ��Ԫ�ص�������int* parr1��ָ������
int (*parr2)[10];//parr2��һ��ָ�룬��ָ��ָ��һ�����飬������10��Ԫ��	��ÿ��Ԫ�ص�������int��parr2������ָ��
int (*parr3[10])[5]; //parr3��һ������ ��������10��Ԫ�� ÿ��Ԫ����һ������ָ�� ������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int