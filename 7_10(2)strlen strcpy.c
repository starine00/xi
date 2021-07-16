//strlen用法
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
////1.计数器方法
////2.递归
////3.指针减指针
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

//不创建临时变量用递归统计字符串的长度
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



//strcpy字符串拷贝用法
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
char *my_strcpy(char* dest,const char* src)
{
	char* ret=dest;
	assert(dest!=NULL);
	assert(src!=NULL);
	
	//while(*src!='\0')//while循环可以写为这种while(*dest++=*src++){;}
	//{
	//	*dest=*src;
	//	dest++;
	//	src++;
	//}
	//*dest=*src;
	while(*dest++=*src++)//拷贝src指向的字符串到dest指向的空间，包含‘\0’
	{
		;
	}
	return ret;//返回目的空间的起始地址
}
int main()
{
	char arr1[]="abcdef";
	char arr2[]="bit";
	my_strcpy(arr1,arr2);
	//strcpy(arr1,arr2);//把arr2拷贝到arr1中
	printf("%s\n",arr1);
	system("pause");
	return 0;
}
