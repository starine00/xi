#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void qsort(void * base,size_t num,size_t width,int(*cmp)(const void* e1,void* e2));
int cmp_int(const void* e1,const void* e2)
{
	return (*(int*)e1-*(int*)e2);
}
//void bubble_sort(int arr[],int sz)
//{
//	int i=0;
//	//趟数
//	for(i=0;i<sz-1;i++)
//	{
//		//一趟冒泡排序
//		int j=0;
//		for(j=0;j<sz-1-i;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=tmp;
//			}
//		}
//	}
//}
int main()
{
	int arr[]={11, 99, 33 , 69, 77, 88, 55, 11, 33, 36,39, 66, 44, 22};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
	//bubble_sort(arr,sz);
		for(i=0;i<sz;i++)
	{
		printf("%d\n",arr[i]);
	}

	system("pause");
	return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//int values[] = { 88, 56, 100, 2, 25 };
//int cmpfunc (const void * a, const void * b)
//{
//   return ( *(int*)a - *(int*)b );
//}
//int main()
//{
//   int n;
//  /* printf("排序之前的列表：\n");
//   for( n = 0 ; n < 5; n++ ) {
//      printf("%d ", values[n]);
//   }*/
//   qsort(values, 5, sizeof(int), cmpfunc);
//   printf("\n排序之后的列表：\n");
//   for( n = 0 ; n < 5; n++ ) {
//      printf("%d ", values[n]);
//   }
//  system("pause");
//  return(0);
//}