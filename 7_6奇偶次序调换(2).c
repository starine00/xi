#include <stdio.h>
#include <stdlib.h>
//奇数偶数次序调换
//从左边开始找一个偶数
//从右边开始找一个奇数
//把他们交换
void print(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void move(int arr[],int sz)
{
	int left=0;
	int right=sz-1;
	while(left<right)
	{
		while((left<right) && (arr[left]%2==1))//从左边找偶数
		{
			left++;
		}
		while((left<right) && (arr[left]%2==0))//从右边找奇数
		{
			right--;
		}
		if(left<right)
		{
			int tmp=arr[left];
			arr[left]=arr[right];
			arr[right]=tmp;
		}
	}
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	print(arr,sz);
	move(arr,sz);
	system("pause");
	return 0;
}
