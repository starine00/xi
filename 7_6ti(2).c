#include <stdio.h>
#include <stdlib.h>
//����ż���������
//����߿�ʼ��һ��ż��
//���ұ߿�ʼ��һ������
//�����ǽ���
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
		while((left<right) && (arr[left]%2==1))//�������ż��
		{
			left++;
		}
		while((left<right) && (arr[left]%2==0))//���ұ�������
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