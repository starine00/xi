#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	////����������Ԫ�ص�ַ
	////�����������������
	////1.sizeof(������)-��������ʾ��������
	////2.&������-��������ʾ��������

	////һά����
	//int a[]={1,2,3,4};
	//printf("%d\n",sizeof(a));//16  sizeof(������)-�������������ܴ�С-��λ���ֽ� 16
	//printf("%d\n",sizeof(a+0));//4/8  ��Ԫ�ص�ַ��С
	//printf("%d\n",sizeof(*a));//4 ��������ʾ��Ԫ�صĵ�ַ  *a�Ǽ�����Ԫ�صĴ�С
	//printf("%d\n",sizeof(a+1));//4  a+1�൱��������һ��Ԫ��  �ڶ���Ԫ��
	//printf("%d\n",sizeof(a[1]));//4 �ڶ���Ԫ�ش�С
	//printf("%d\n",sizeof(&a));//4 &aȡ����������ĵ�ַ����������ĵ�ַҲ�ǵ�ַ����ַ����4/8��
	//printf("%d\n",sizeof(*&a));//16  �൱��sizeof(a)  &a����ĵ�ַ������ĵ�ַ�����÷��ʵ����飬sizeof����ľ�������Ĵ�С��λ���ֽ�
	//printf("%d\n",sizeof(&a+1));//4/8  &a��&a+1������һ������  a��a+1������һ��Ԫ��   &a������ĵ�ַ��&a+1��Ȼ��ַ�����������飬�����ǵ�ַ��������4/8���ֽ�
	//printf("%d\n",sizeof(&a[0]));//4/8  ��һ��Ԫ�صĵ�ַ
	//printf("%d\n",sizeof(&a[0]+1));//4/8  �ڶ���Ԫ�صĵ�ַ


	////�ַ�����
	//char arr[]={'a','b','c','d','e','f'};
	//printf("%d\n",sizeof(arr));//6  sizeof�����������Ĵ�С
	//printf("%d\n",sizeof(arr+0));//4/8  arr����Ԫ�صĵ�ַ arr+0������Ԫ�صĵ�ַ����ַ��С����4���ֽ�
	//printf("%d\n",sizeof(*arr));//1   arr����Ԫ�صĵ�ַ��*arr������Ԫ�أ���Ԫ�����ַ���Сһ���ֽ�
	//printf("%d\n",sizeof(arr[1]));//1
	//printf("%d\n",sizeof(&arr));//4/8  &arr��Ȼ�������ַ�������ǵ�ַ����ַ��С4/8���ֽ�
	//printf("%d\n",sizeof(&arr+1));//4/8 &arr+1��ʾ��ַ���������������ĵ�ַ����ַ��С��4/8���ֽ�
	//printf("%d\n",sizeof(&arr[0]+1));//4/8 �ڶ���Ԫ�صĵ�ַ


	//char arr[]={'a','b','c','d','e','f'};
	//printf("%d\n",strlen(arr));//���ֵ strlen ����\0
	//printf("%d\n",strlen(arr+0));//���ֵ  ��strlen(arr)һ��
	////printf("%d\n",strlen(*arr));//error  ��������Ԫ�صĵ�ַ ��Ԫ�ص�ֵΪ97 ��97��ʼ�������ܷ��� ���Դ���
    //printf("%d\n",strlen(arr[1]));//error ������ԭ��һ��98
	//printf("%d\n",strlen(&arr));//  ���ֵ
	//printf("%d\n",strlen(&arr+1));//���ֵ-1 ������һ��arr����
	//printf("%d\n",strlen(&arr[0]+1));//���ֵ-1




	//char arr[]="abcdef";
	//printf("%d\n",sizeof(arr));//7 ��Ϊ�������\0   sizeof(arr)�����������Ĵ�С
	//printf("%d\n",sizeof(arr+0));//4/8  ������ǵ�ַ�Ĵ�С arr+0����Ԫ�صĵ�ַ
	//printf("%d\n",sizeof(*arr));//1   �������*arr����Ԫ�� sizeof��*arr�����������Ԫ�صĴ�С
	//printf("%d\n",sizeof(arr[1]));//1   arr[1]������ǵڶ���Ԫ�صĴ�С
	//printf("%d\n",sizeof(&arr));//4/8  &arr��Ȼ������ĵ�ַ��Ҳ�ǵ�ַ������4/8���ֽ�
	//printf("%d\n",sizeof(&arr+1));//4/8  &arr+1���������������ĵ�ַ��Ҳ�ǵ�ַ
	//printf("%d\n",sizeof(&arr[0]+1));//4/8 &arr[0]+1 �ڶ���Ԫ�صĵ�ַ


	//strlen�Ǹ�һ����ַ������������һ����ַ �������Ķ�������ַʹ��
	char arr[]="abcdef";
	printf("%d\n",strlen(arr));//6  �ַ�����strlen������\0
	printf("%d\n",strlen(arr+0));//6���������һ��  +0Ҳ�Ǵӿ�ͷ��ʼ��
	//printf("%d\n",strlen(*arr));//error   ����һ����ַ �������Ķ�������ַʹ��  ����ȥa������ַʹ��  Ϊ97   ����  �Ƿ���ַ����
	//printf("%d\n",strlen(arr[1]));//error  ��98
	printf("%d\n",strlen(&arr));//6 &arr - ����ĵ�ַ-����ָ��char(*p)[7]=&arr;
	printf("%d\n",strlen(&arr+1));//���ֵ
	printf("%d\n",strlen(&arr[0]+1));//5 ��ȥ��һ���ַ�������  һ��5��


	system("pause");
	return 0;
}