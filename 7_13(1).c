//strtok
//str -- 要被分解成一组小字符串的字符串。
//sep -- 包含分隔符的 C 字符串。
//char strtok(char* str,char* sep)
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	
//	/*char arr[]="zqf@bitdu.tech";*/
//	char arr[]="192.168.19.110";
//	char* p=".";
//	char* ret=0;
//	char buf[1024]={0};
//	strcpy(buf,arr);
//	ret=NULL;
//	for(ret=strtok(buf,p);ret!=NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n",ret);
//	}
//	//ret=strtok(buf,p);
//	//printf("%s\n",ret);
//
//	//ret=strtok(NULL,p);
//	//printf("%s\n",ret);
//
//	//ret=strtok(NULL,p);
//	//printf("%s\n",ret);
//
//	system("pause");
//	return 0;
//}


//strerror
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>//是一个全局的错误码变量
////当C语言的库函数在执行过程中发生了错误，就会把对应的错误码，赋值到error中
//int main()
//{
//	//错误码 错误信息
//	//0--  NO errr
//	//1--  Operation not permitted
//	//2--  no such file or directory
//
//	/*char* str=strerror(errno);
//	printf("%s\n",str);*/
//	FILE* pf=fopen("test.txt","r");//打开文件  打开当前文件路径下的test.txt文件
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		printf("chenggong");
//	}
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//int main()
//{
//	//char ch='2';
//	///*int ret=islower(ch);*///是否是小写字母
//	//int ret=isdigit(ch);//判断是否是数字字符
//	//printf("%d\n",ret);
//
//	/*char ch=tolower('Q');*///大写字母转为小写
//	//char ch=toupper('q');//小写转大写
//	//putchar(ch);
//	int i=0;
//	char arr[]="I Am A Student";
//	while(arr[i])
//	{
//		if(isupper(arr[i]))
//		{
//			arr[i]=tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n",arr);
//	system("pause");
//	return 0;
//}



//memcpy内存拷贝
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	//int arr1[10]={1,2,3,4,5};
//	//int arr2[10]={0};
//	struct S arr3[]={{"张三",18},{"李四",20}};
//	struct S arr4[]={0};
//	memcpy(arr4,arr3,sizeof(arr3));
//	//memcpy(arr2,arr1,sizeof(arr1));
//	/*printf("%d\n",arr2);*/
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//void* my_memcpy(void* dest,const void* src,size_t num)
//{
//	void* ret=dest;
//	assert(dest);
//	assert(src);
//	while(num--)
//	{
//	*(char*)dest=*(char*)src;
//	//((char*)dest)++;
//	//((char*)src)++;
//	++(char*)dest;
//	++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[10]={1,2,3,4,5};
//	int arr2[10]={0};
//	/*struct S arr3[]={{"张三",18},{"李四",20}};
//	struct S arr4[]={0};
//	my_memcpy(arr4,arr3,sizeof(arr3));*/
//	my_memcpy(arr2,arr1,sizeof(arr1));
//	system("pause");
//	return 0;
//}


//memmove重叠拷贝,处理内存重叠情况
//memcpy只要处理，不重叠的内存拷贝就行了
//menmove 处理内存重叠情况的拷贝
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//void* my_memmove(void* dest,void* src,size_t num)
//{
//	void* ret=dest;
//	assert(dest);
//	assert(src);
//	if(dest<src)
//	{
//		//从前向后拷贝
//		while(num--)
//		{
//			*(char*)dest=*(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//从后向前拷贝
//		while(num--)
//		{
//			*((char*)dest+num)=*((char*)src+num);
//		}
//	}
//	return 0;
//	
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int i=0;
//	my_memmove(arr+2,arr,20);//从前向后挪动
//	//my_memmove(arr,arr+2,20);//从后向前挪动
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	system("pause");
//	return 0;
//}

//memcmp比较
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//int main()
//{
//	//01 00 00 00 02 00 00 00 03 00 00 00....
//	//01 00 00 00 02 00 00 00 05 00 00 00...
//	//比较的是前9个字节  所以输出-1，arr2大
//	int arr1[]={1,2,3,4,5,6,7};
//	int arr2[]={1,2,5,4,5,6};
//	int ret=memcmp(arr1,arr2,9);//后面的8为比较的字节数，即数组中的前两个元素，一个元素四个字节
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}


//memset内存设置
int main()
{
	char arr[10]="";
	memset(arr,'#',10);//10为修改10个字节


	int arr[10]={0};
	memset(arr,1,10);
	//修改10个字节
	//01 01 01 01 01 01 01 01 01 01 00 00 00 00 00 ....4个一位
	system("pause");
	return 0;
}