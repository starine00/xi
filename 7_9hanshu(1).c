//��һ�ַ���
////����ת�ַ�
////ABCD����һ���ַ�ΪBCDA
////ABCD��������ΪCDAB
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//// #include <assert.h>
//void left_move(char* arr,int k)
//{
//	//assert(arr !=NULL);ָ������һ�������õĲ���������assert���Է�ֹ�����ַ�Ϊ0�Ĳ���
//	int i=0;
//	int len=strlen(arr);
//	for(i=0;i<k;i++)
//	{
//		char tmp=*arr;//����תһ���ַ�
//		int j=0;
//		for(j=0;j<len-1;j++)
//		{
//			*(arr+j)=*(arr+j+1);//�������ǰŲ
//		}
//		*(arr+len-1)=tmp;
//	}
//}
//int main()
//{
//	char arr[]="abcdef";
//	left_move(arr,2);
//	printf("%s\n",arr);
//
//	system("pause");
//	return 0;
//}

//2.
//abcdef
//bafedc
//cdefab
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//void reverse(char *left,char* right)
//{
//	while(left<right)
//	{
//	char tmp=*left;
//	*left=*right;
//	*right=tmp;
//	left++;
//	right--;
//	}
//}
//void left_move(char* arr,int k)
//{
//	
//	int len=strlen(arr);
//	assert(k<=len);
//	reverse(arr,arr+k-1);//�������
//	reverse(arr+k,arr+len-1);//�����ұ�
//	reverse(arr,arr+len-1);//��������
//}
//int is_left_move(char* s1,char* s2)
//{
//	int len=strlen(s1);
//	int i=0;
//	int ret=0;
//	for(i=0;i<len;i++)
//	{
//		left_move(s1,1);
//		ret= strcmp(s1,s2);
//		if(ret==0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[]="abcdef";
//	char arr2[]="cdefab";
//	int ret=is_left_move(arr1,arr2);
//	if(ret==1)
//		printf("yes\n");
//	else
//		printf("no\n");
//	/*left_move(arr,2);*/
//	//printf("%s\n",arr);
//	system("pause");
//	return 0;
//}



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int is_left_move(char *s1,char *s2)
{
	char * ret=0;
	int len1=strlen(s1);
	int len2=strlen(s2);
	if(len1!=len2)
	{
		return 0;
	}
	//1.��str�ַ�����׷��һ��str1�ַ���
	//strcat(s1,s1);����strcat��˵�����Լ����Լ�����׷��  ����strcat(s1,s2)��Ϊ����ͨ��\0���ж��Ƿ�׷��ֹͣ�ģ���������ĵ�s1��\0���s2
//�����ַ�����Ѱ�ҵ�s2��\0ʱֹͣ������Լ����Լ�׷�ӣ��ᵱ�ĵ�s1�����\0ʱ����Ϊ�Ҳ���\0���޷�ֹͣ
	//�Լ����Լ�����׷�����ݵ�ʱ����Ҫʹ��strncat,��������һ��������Ϊs1�ĳ���
	strncat(s1,s1,6);
	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
	ret=strstr(s1,s2);
	if(ret==NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	char arr1[]="abcdef";
	char arr2[]="cdefab";
	int ret=is_left_move(arr1,arr2);
	if(ret==1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	system("pause");
	return 0;
}
