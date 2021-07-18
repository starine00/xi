////柔性数组
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//struct S
//{
//	int n;
//	int arr[];//未知大小的-柔性数组成员-数组大小是可以调整的
//};
//int main()
//{
//	int i=0;
//	struct S s;
//	//printf("%d\n",sizeof(s));//4 柔性数组不计算大小
//	struct S* ps=malloc(sizeof(struct S )+5*sizeof(int));
//	struct S* ptr=realloc(ps,44);
//	ps->n=100;
//	for(i=0;i<5;i++)
//	{
//		ps->arr[i]=i;
//	}
//	if(ptr != NULL)
//	{
//		ps=ptr;
//	}
//	for(i=5;i<10;i++)
//	{
//		ps->arr[i]=i;
//	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",ps->arr[i]);
//	}
//	free(ps);
//	ps=NULL;
//	system("pause");
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct S
{
	int n;
	int* arr;
};
int main()
{
	int i=0;
	struct S s;
	struct S* ps=(struct S*)malloc(sizeof(struct S ));
	ps->arr=(int *)malloc(5*sizeof(int));
	for(i=0;i<5;i++)
	{
		ps->arr[i]=i;
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",ps->arr[i]);
	}
	int* ptr=realloc(ps->arr,10*sizeof(int));//调整大小
	if(ptr != NULL)
	{
		ps->arr = ptr;
	}
	for(i=5;i<10;i++)
	{
		ps->arr[i]=i;
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",ps->arr[i]);
	}
	free(ps->arr);
	free(ps);
	ps=NULL;
	system("pause");
	return 0;
}