//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	/*char arr1[]="abcdef";
//	char arr2[]="abcdef";
//	const char* p1="abcdef";
//	const char* p2="abcdef";
//	if(p1==p2)
//	{
//		printf("hehe\n");
//	}
//	else
//		printf("haha\n");*/
//	/*if(arr1==arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//		printf("haha\n");*/
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a=10;
//	int b=20;
//	int c=30;
//	int d=40;
//	int* arr[4]={&a,&b,&c,&d};
//	int i=0;
//	for(i=0;i<4;i++)
//	{
//		printf("%d\n",*(arr[i]));
//	}
//	system("pause");
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr1[]={2,3,4,5,6,7};
	int arr2[]={3,4,5,6,7,8};
	int arr3[]={4,5,6,7,8,9};
	int* parr[]={arr1,arr2,arr3};
	int i=0;
	for(i=0;i<3;i++)
	{
		int j=0;
		for(j=0;j<5;j++)
		{
			printf("%d\n",*(parr[i]+j));
		}
		printf("\n");
	}
	system("pause");
	return 0;

}