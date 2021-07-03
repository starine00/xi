#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //1.sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小
	//2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
	//3.除此之外所有的数组名都表示首元素的地址



	//p里面只会存储a的字符地址  p是地址只有4个字节 
	//char* p="abcdef";
	//printf("%d\n",sizeof(p));//4  p是指针变量  计算指针变量的大小
	//printf("%d\n",sizeof(p+1));//4/8  p+1得到的是字符b的地址  地址的大小就是4/8个字节
	//printf("%d\n",sizeof(*p));//1  字符串的第一个字符
	//printf("%d\n",sizeof(p[0]));//1  int arr[10]  arr[0]等价于*(arr+0)  p[0]==*(p+0)=='a'
	//printf("%d\n",sizeof(&p));//4/8   取地址为4  拿到的是p的地址
	//printf("%d\n",sizeof(&p+1));//4/8   
	//printf("%d\n",sizeof(&p[0]+1));//4/8  第二个元素的地址大小



	//char* p="abcdef";
	//printf("%d\n",strlen(p));//6  传进去a的地址往后数  
	//printf("%d\n",strlen(p+1));//5  从b往后数  
	////printf("%d\n",strlen(*p));//error  应该接收地址  但解引用以后传进去的是a 所以error
	////printf("%d\n",strlen(p[0]));//error  
	//printf("%d\n",strlen(&p));//随机值   因为是从指针p往后数  而不是从abcdef
	//printf("%d\n",strlen(&p+1));//随机值		
	//printf("%d\n",strlen(&p[0]+1));//5  第二个元素 从b往后查

	//二维数组
	int a[3][4]={0};
	printf("%p\n",&a[0][0]);//对以下a[0]+1作比较
	printf("%p\n",a[0]+1);//对以下a[0]+1作比较
	printf("%p\n",a+1);
	printf("%d\n",sizeof(a));//3*4*4=48 数组总大小
	printf("%d\n",sizeof(a[0][0]));//4 一个整形元素的大小
	printf("%d\n",sizeof(a[0]));//16 a[0]相当于第一行作为一维数组的数组名，
	//sizeof(arr[0])把数组名单独放在sizeof()内，计算的是第一行的大小
	printf("%d\n",sizeof(a[0]+1));//4 这是第一行第二个元素的地址，而不是第二行的地址,
//a[0]是第一行的数组名，数组名此时是首元素的地址，a[0]其实是第一行第一个元素的地址，所以a[0]+1是第一行第二个元素的地址，大小是4/8个字节 
	printf("%d\n",sizeof(*(a[0]+1)));//4  第一行第二个元素的大小
	printf("%d\n",sizeof(a+1));//4  a是二维数组的数组名，没有sizeof(数组名)，也没有&(数组名),所以a是首元素地址
	//而二维数组的首元素是他的第一行（把二维数组看成一维数组）a就是第一行的地址
	printf("%d\n",sizeof(*(a+1)));//16 对第二行解引用 等价于计算sizeof(a[1])	
	printf("%d\n",sizeof(&a[0]+1));//4  第二行的地址 &是取地址 *解引用
	printf("%d\n",sizeof(*(&a[0]+1)));//16  计算第二行的大小
	printf("%d\n",sizeof(*a));//16  对第一行解引用  a在二维数组中表示第一行
	printf("%d\n",sizeof(a[3]));//16 虽然没有第四行 但是还是会按照一行来计算




	system("pause");
	return 0;
}