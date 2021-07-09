//第一种方法
////左旋转字符
////ABCD左旋一个字符为BCDA
////ABCD左旋两个为CDAB
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//// #include <assert.h>
//void left_move(char* arr,int k)
//{
//	//assert(arr !=NULL);指针会存在一个解引用的操作，进行assert断言防止出现字符为0的操作
//	int i=0;
//	int len=strlen(arr);
//	for(i=0;i<k;i++)
//	{
//		char tmp=*arr;//左旋转一个字符
//		int j=0;
//		for(j=0;j<len-1;j++)
//		{
//			*(arr+j)=*(arr+j+1);//后面的往前挪
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
//	reverse(arr,arr+k-1);//逆序左边
//	reverse(arr+k,arr+len-1);//逆序右边
//	reverse(arr,arr+len-1);//逆序整个
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
	//1.在str字符串中追加一个str1字符串
	//strcat(s1,s1);对于strcat来说不能自己在自己后面追加  可以strcat(s1,s2)因为它是通过\0来判断是否追加停止的，这样它会改掉s1的\0变成s2
//的首字符，当寻找到s2的\0时停止，如果自己给自己追加，会当改掉s1后面的\0时会因为找不到\0而无法停止
	//自己在自己后面追加内容的时候，需要使用strncat,后面多加入一个参数，为s1的长度
	strncat(s1,s1,6);
	//2.判断str2指向的字符串是否是str1指向的字符串的子串
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
