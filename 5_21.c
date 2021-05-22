////这个代码会造成死循环.因为栈区使用是先使用高地址的空间，
////然后使用低地址的空间，而数组随着下标的增加地址是由低到高的，
////当arr往后越界的时候完全有可能遇到i，而在改变数组元素的时候，
////s越界改变完全有可能改变i值 
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



//一
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

//二
//void my_strcpy(char *dest,char *src)
//{
//	while(*src != '\0')
//	{
//		*dest++=*src++;
//	}
//	*dest=*src;
//}

//三
//void my_strcpy(char *dest,char *src)
//{
//	while(*dest++=*src++)
//	{
//		;
//	}
//}

//四
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