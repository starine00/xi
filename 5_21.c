////�������������ѭ��.��Ϊջ��ʹ������ʹ�øߵ�ַ�Ŀռ䣬
////Ȼ��ʹ�õ͵�ַ�Ŀռ䣬�����������±�����ӵ�ַ���ɵ͵��ߵģ�
////��arr����Խ���ʱ����ȫ�п�������i�����ڸı�����Ԫ�ص�ʱ��
////sԽ��ı���ȫ�п��ܸı�iֵ 
////#include <stdio.h>
////#include <stdlib.h>
////int main()
////{
////	int i=0;
////	int arr[10]={1,2,3,4,5,6,7,8,9,10};
////	for(i=0;i<=11;i++)
////	{
////		printf("hehe\n");
////		arr[i]=0;
////	}
////	system("pause");
////	return 0;
////}



//һ
//void my_strcpy(char *dest,char *src)
//{
//	while(*src != '\0')
//	{
//		*dest=*src;
//		src++;
//		dest++;
//	}
//	*dest=*src;
//}

//��
//void my_strcpy(char *dest,char *src)
//{
//	while(*src != '\0')
//	{
//		*dest++=*src++;
//	}
//	*dest=*src;
//}

//��
//void my_strcpy(char *dest,char *src)
//{
//	while(*dest++=*src++)
//	{
//		;
//	}
//}

//��
#include <assert.h>
#define NULL 0
void my_strcpy(char *dest,char *src)
{
	assert(*dest != NULL);
	assert(*src != NULL);
	while(*dest++=*src++)
	{
		;
	}
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char arr1[]="############";
	char arr2[]="bit";
	my_strcpy(arr1,arr2);
	printf("%s\n",arr1);
	system("pause");
	return 0;
}