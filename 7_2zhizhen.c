#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	////数组名是首元素地址
	////以下这两种情况例外
	////1.sizeof(数组名)-数组名表示整个数组
	////2.&数组名-数组名表示整个数组

	////一维数组
	//int a[]={1,2,3,4};
	//printf("%d\n",sizeof(a));//16  sizeof(数组名)-计算的是数组的总大小-单位是字节 16
	//printf("%d\n",sizeof(a+0));//4/8  首元素地址大小
	//printf("%d\n",sizeof(*a));//4 数组名表示首元素的地址  *a是计算首元素的大小
	//printf("%d\n",sizeof(a+1));//4  a+1相当于跳过了一个元素  第二个元素
	//printf("%d\n",sizeof(a[1]));//4 第二个元素大小
	//printf("%d\n",sizeof(&a));//4 &a取出的是数组的地址，但是数组的地址也是地址，地址就是4/8个
	//printf("%d\n",sizeof(*&a));//16  相当于sizeof(a)  &a数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小单位是字节
	//printf("%d\n",sizeof(&a+1));//4/8  &a和&a+1跳过了一个数组  a和a+1是跳过一个元素   &a是数组的地址，&a+1虽然地址跳过整个数组，但还是地址，所以是4/8个字节
	//printf("%d\n",sizeof(&a[0]));//4/8  第一个元素的地址
	//printf("%d\n",sizeof(&a[0]+1));//4/8  第二个元素的地址


	////字符数组
	//char arr[]={'a','b','c','d','e','f'};
	//printf("%d\n",sizeof(arr));//6  sizeof计算的是数组的大小
	//printf("%d\n",sizeof(arr+0));//4/8  arr是首元素的地址 arr+0还是首元素的地址，地址大小还是4个字节
	//printf("%d\n",sizeof(*arr));//1   arr是首元素的地址，*arr就是首元素，首元素是字符大小一个字节
	//printf("%d\n",sizeof(arr[1]));//1
	//printf("%d\n",sizeof(&arr));//4/8  &arr虽然是数组地址，但还是地址，地址大小4/8个字节
	//printf("%d\n",sizeof(&arr+1));//4/8 &arr+1表示地址，跳过整个数组后的地址，地址大小是4/8个字节
	//printf("%d\n",sizeof(&arr[0]+1));//4/8 第二个元素的地址


	//char arr[]={'a','b','c','d','e','f'};
	//printf("%d\n",strlen(arr));//随机值 strlen 是找\0
	//printf("%d\n",strlen(arr+0));//随机值  跟strlen(arr)一样
	////printf("%d\n",strlen(*arr));//error  解引用首元素的地址 首元素的值为97 从97开始不见得能访问 所以错误
    //printf("%d\n",strlen(arr[1]));//error 跟以上原因一样98
	//printf("%d\n",strlen(&arr));//  随机值
	//printf("%d\n",strlen(&arr+1));//随机值-1 跳过了一个arr数组
	//printf("%d\n",strlen(&arr[0]+1));//随机值-1




	//char arr[]="abcdef";
	//printf("%d\n",sizeof(arr));//7 因为后面跟有\0   sizeof(arr)计算的是数组的大小
	//printf("%d\n",sizeof(arr+0));//4/8  计算的是地址的大小 arr+0是首元素的地址
	//printf("%d\n",sizeof(*arr));//1   计算的是*arr是首元素 sizeof（*arr）计算的是首元素的大小
	//printf("%d\n",sizeof(arr[1]));//1   arr[1]计算的是第二个元素的大小
	//printf("%d\n",sizeof(&arr));//4/8  &arr虽然是数组的地址但也是地址所以是4/8个字节
	//printf("%d\n",sizeof(&arr+1));//4/8  &arr+1是跳过整个数组后的地址，也是地址
	//printf("%d\n",sizeof(&arr[0]+1));//4/8 &arr[0]+1 第二个元素的地址


	//strlen是给一个地址往后数，接收一个地址 传过来的都当作地址使用
	char arr[]="abcdef";
	printf("%d\n",strlen(arr));//6  字符串用strlen不计算\0
	printf("%d\n",strlen(arr+0));//6这个跟上面一样  +0也是从开头开始查
	//printf("%d\n",strlen(*arr));//error   接收一个地址 传过来的都当作地址使用  传过去a当作地址使用  为97   报错  非法地址访问
	//printf("%d\n",strlen(arr[1]));//error  传98
	printf("%d\n",strlen(&arr));//6 &arr - 数组的地址-数组指针char(*p)[7]=&arr;
	printf("%d\n",strlen(&arr+1));//随机值
	printf("%d\n",strlen(&arr[0]+1));//5 过去第一个字符往后数  一共5个


	system("pause");
	return 0;
}