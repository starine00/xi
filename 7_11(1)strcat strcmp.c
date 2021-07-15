//strcat用法
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//char* my_strcat(char* dest,const char* src)
//{
//	char *ret=dest;
//	assert(dest!=NULL);
//	assert(src);
//	while(*dest!='\0')//找到目的字符串‘\0’
//	{
//		dest++;
//	}
//	while(*dest++=*src++)//追加
//	{
//		;
//	}
//	return ret;
//	 
//}
//int main()
//{
//	char arr1[30]="hello\0xxxxxxxxxx";//使用strcat要注意追加目的地足够大
//	char arr2[]="world";
//	my_strcat(arr1,arr2);
//	printf("%s\n",arr1);
//	system("pause");
//	return 0;
//}





//strcmp用法
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int my_strcmp(const char* str1,const char* str2)
{
	assert(str1&&str2);
	//比较
	while(*str1==*str2)
	{
		if(*str1=='\0')
		{
			return 0;//相等
		}
		str1++;
		str2++;
	}
	return (*str1-*str2);//如果说返回的不是-1或者1就这么写
	/*if(*str1>*str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}*/
}
int main()
{
	char* p1="abcd";
	char* p2="abc";
	int ret=my_strcmp(p1,p2);
	printf("%d\n",ret);
	system("pause");
	return 0;
}
