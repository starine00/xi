#include <stdio.h>
#include <stdlib.h>
//1 2 3
//4 5 6
//7 8 9	
//int findnum(int arr[3][3],int k,int row,int col)
//{
//	int x=0;
//	int y=col-1;
//	while(x<=row-1 && y>=0)
//	{
//			if(arr[x][y]>k)//������Ͻǵ�Ԫ�ش���Ҫ���ҵ�Ԫ�أ�ȥ��һ�У���Ϊ��һ�������Ͻǵ�Ԫ������С����
//		{
//			y--;
//		}
//		else if(arr[x][y]<k)//���Ҫ���ҵ�Ԫ�ش������Ͻǵ�Ԫ�أ�ȥ��һ�У���Ϊ��һ�������Ͻǵ��Ѿ�ʱ����Ԫ����
//		{
//			x++;
//		}
//		else 
//		{
//			printf("�±���%d %d\n",x,y);
//			return 1;
//		}
//	}
//	return 0;//�Ҳ���
//}

int findnum(int arr[3][3],int k,int* px,int* py	)
{
	int x=0;
	int y=*py-1;
	while(x<=*px-1 && y>=0)
	{
			if(arr[x][y]>k)//������Ͻǵ�Ԫ�ش���Ҫ���ҵ�Ԫ�أ�ȥ��һ�У���Ϊ��һ�������Ͻǵ�Ԫ������С����
		{
			y--;
		}
		else if(arr[x][y]<k)//���Ҫ���ҵ�Ԫ�ش������Ͻǵ�Ԫ�أ�ȥ��һ�У���Ϊ��һ�������Ͻǵ��Ѿ�ʱ����Ԫ����
		{
			x++;
		}
		else 
		{
			*px=x;
			*py=y;
			return 1;
		}
	}
	return 0;//�Ҳ���
}
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int k=7;
	int x=3;
	int y=3;
	int ret=0;
	ret=findnum(arr,7,&x,&y);//�����Ͳ���
	if(ret==1)
	{
		printf("�ҵ���\n");
		printf("�±���%d %d\n",x,y);
	}
	else
		printf("�Ҳ���\n");
	system("pause");
	return 0;
}