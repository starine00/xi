//ð������
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bobble_sort(int arr[],int sz)
{
	int flag=1;//������һ������Ĳ�������
	//ȷ��ð�����������
	int i=0;
	for(i=0;i<sz-1;i++)
	{
		 int j=0;
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag=0;//���˵�������ȫ����
			}
		}
		if(flag==1)
			break;
	}
}
int main()
{
	int arr[]={9,7,9,4,6,2,3,2,1,0};
	int n=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	bobble_sort(arr,sz);//ð������ĺ���
	for(n=0;n<sz;n++)
	{
		printf("%d ",arr[n]);
	}
	system("pause");
	return 0;
}