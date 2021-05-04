#include <stdio.h>
#include <stdlib.h>

void add(int* p)
{
	(*p)++;
}

int main()
{
	int num=0;
	add(&num);
	printf("%d\n",num);
	add(&num);
	printf("%d\n",num);
	add(&num);
	printf("%d\n",num);
	system("pause");
	return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//
//
////用函数来实现二分查找
//int binary_search(int arr[],int k,int sz)
//{
//	int left=0;
//	int right=sz-1;
//
//	while(left<=right)
//	{
//		int mid=(left+right)/2;//中间元素的下标
//		if(arr[mid]<k)
//		{
//			left=mid+1;
//		}
//		else if(arr[mid]>k)
//		{
//			right=mid-1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	//二分法查找一个数
//	int arr[]={1,2,3,4,5,6,7,8};
//	int k=8;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int ret=binary_search(arr,k,sz);
//	if(ret == -1)
//	{
//		printf("找不到指定数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n",ret);
//	}
//	system("pause");
//	return 0;
//}


//用函数来判断是不是闰年
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int is_leap_year(int y)
//{
//	if((y%4 == 0&& y%100!=0) || (y%400==0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year=0;
//	for(year=1000;year<=2000;year++)
//	{
//		//判断year是否为闰年
//		if( 1== is_leap_year(year))
//		{
//			printf("%d ",year);
//		}
//	}
//	system("pause");
//	return 0;
//}





//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////是素数返回1，不是素数返回0
//int is_prime(int n)
//{
//	int j=0;
//	for(j=2;j<n;j++)
//	{
//		if(n%j == 0)
//			return 0;
//	}
//	return 1;
//	
//}
//
//int main()
//{
//	int i=0;
//	for(i=100;i<=200;i++)
//	{
//		//判断一个数是不是素数
//		if(is_prime(i)==1)
//			printf("%d\n",i);
//	}
//	system("pause");
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////当实参传给形参的时候，
////形参实际上是实参的一份临时拷贝
////对形参的修改不会影响实参
//void swap(int* pa,int* pb)
//{
//	int tmp=0;
//	tmp=*pa;
//	*pa=*pb;
//	*pb=tmp;
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	//int* pa=&a;
//	//int* pb=&b;
//	swap(&a,&b);//交换数值要传地址
//	printf("a=%d b=%d\n",a,b);
//	system("pause");
//	return 0;
//}


//替换数组中的前5个字符为*
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char arr[]="hello world";
//	memset(arr,'*',5);
//	printf("%s\n",arr);
//	system("pause");
//	return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//
//	char arr1[]="bit";
//	char arr2[20]="##########";//拷贝过来的\0作为字符串的结束标志  所以不打印后面的内容
//	strcpy(arr2,arr1);
//	printf("%s\n",arr2);
//	printf("%s\n",arr2);
//	system("pause");
//	return 0;
//}