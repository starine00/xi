//不创建临时变量，求字符串的长度
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int my_strlen(char* str) str指的是第一个元素的地址
//{
//	int count =0;//需要创建临时变量count
//	while(*str!='\0')//解引用操作  
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//my_strlen("bit")
//1+my_strlen("it")
//1+1+my_strlen("t")
//1+1+1+my_strlen("")
//1+1+1+0
//这种方法不用创建临时变量 str指的是第一个元素的地址
int my_strlen(char* str)
{
	if(*str!='\0')//判断是否为为\0   然后进行以下递归
		return 1+my_strlen(str+1);//所以说str+1是第二个元素的地址
	else
		return 0;
}
int main()
{
	char arr[]="bit";
	/*int len=strlen(arr);*/
	int len=my_strlen(arr);//数组传参，传的不是整个数组，而是第一个元素的地址
	printf("%d\n",len);
	system("pause");
	return 0;
}





//#include <stdio.h>
//#include <stdlib.h>
//把所给1234   打印为1 2 3 4
//void print(int n)
//{
//	if(n>9)
//	{
//		print(n/10);
//	}
//	printf("%d ",n%10);
//}
//
//int main()
//{
//	unsigned int num=0;
//	printf("输入一个数");
//	scanf("%d",&num);//引号里只能有%d一类的不能有多余的文字
//	print(num);
//	system("pause");
//	return 0;
//}


////调用头文件和add.c模块
//#include <stdio.h>
//#include <stdlib.h>
//#include "add.h"
////extern int add(int,int);
//int main()
//{	
//	int a=10;
//	int b=20;
//	int sum=0;
//	sum = add(a,b);
//	printf("%d\n",sum);
//	system("pause");
//	return 0;
//}





//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{	
//	printf("%d",printf("%d",printf("%d",43)));//打印4321
//	printf("%d",printf("%d",43));
//	system("pause");
//	return 0;
//}