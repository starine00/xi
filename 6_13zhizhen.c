//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//
//	//int *p=NULL;//p是整形指针-指向整形地址-可以存放整形地址
//	//char* pc=NULL;//pc是字符指针-指向字符地址-可以存放字符的地址
//					//数组指针-指向数组的指针-可以存放数组的地址
//	//int arr[10]={0};
//	//arr-首元素的地址
//	//&arr[0]-首元素的地址
//	//&arr-数组的地址
//	//int arr[10]={1,2,3,4,5,6,7,8,9,0};
//	//int (*p)[10]=&arr;//数组的地址要存起来
//	//上面的p就是数组指针。
//	int arr[10]={1,2,3,4,5,6,7,8,9,0};
//	int* p=arr;
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		printf("%d\n",*(p+i));
//	}
//	//int (*pa)[10]=&arr;
//	//int i=0;
//	//for(i=0;i<10;i++)
//	//{
//	//	/*printf("%d\n",(*pa)[i]);*/
//	//	printf("%d\n",*((*pa)+i));
//	//}
//	system("pause");
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//void printf1(int arr[3][5],int x,int y)
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void printf2(int (*p)[5],int x,int y)
//{
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//		int j=0;
//		for(j=0;j<5;j++)
//		{
//			printf("%d ",*(*(p+i)+j));
//		}
//		printf("\n");
//	}
//	
//}
//int main()
//{
//	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//	printf1(arr,3,5);
//	printf2(arr,3,5);
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,0};
//	int i=0;
//	int* p=arr;
//	for(i=0;i<10;i++)
//	{
//	printf("%d ",arr[i]);
//	printf("%d ",*(p+i));
//	printf("%d ",*(arr+i));
//	printf("%d ",p[i]);
//	}
//	
//	system("pause");
//	return 0;
//}


int arr[5];//arr是一个5个元素的整型数组
int *parr1[10];//parr1是一个数组，数组又是个元素，每个元素的类型是int* parr1是指针数组
int (*parr2)[10];//parr2是一个指针，该指针指向一个数组，数组有10个元素	，每个元素的类型是int，parr2是数组指针
int (*parr3[10])[5]; //parr3是一个数组 该数组有10个元素 每个元素是一个数组指针 该数组指针指向的数组有5个元素，每个元素是int