//strlen�÷�
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
////1.����������
////2.�ݹ�
////3.ָ���ָ��
//int my_strlen(char* str)
//{
//	int count=0;
//	assert(str!=NULL);
//	while(*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len=my_strlen("abcdef");
//	printf("%d\n",len);
//	system("pause");
//	return 0;
//}

//��������ʱ�����õݹ�ͳ���ַ����ĳ���
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int my_strlen(char *str)
//{
//	if(*str!='\0')
//	{
//		return 1+my_strlen(str+1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[30]="abcdef";
//	int ret=0;
//	ret=my_strlen(arr);
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}



//strcpy�ַ��������÷�
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
char *my_strcpy(char* dest,const char* src)
{
	char* ret=dest;
	assert(dest!=NULL);
	assert(src!=NULL);
	
	//while(*src!='\0')//whileѭ������дΪ����while(*dest++=*src++){;}
	//{
	//	*dest=*src;
	//	dest++;
	//	src++;
	//}
	//*dest=*src;
	while(*dest++=*src++)//����srcָ����ַ�����destָ��Ŀռ䣬������\0��
	{
		;
	}
	return ret;//����Ŀ�Ŀռ����ʼ��ַ
}
int main()
{
	char arr1[]="abcdef";
	char arr2[]="bit";
	my_strcpy(arr1,arr2);
	//strcpy(arr1,arr2);//��arr2������arr1��
	printf("%s\n",arr1);
	system("pause");
	return 0;
}