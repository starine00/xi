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
//			if(arr[x][y]>k)//如果右上角的元素大于要查找的元素，去掉一列，因为在一列中右上角的元素是最小的了
//		{
//			y--;
//		}
//		else if(arr[x][y]<k)//如果要查找的元素大于右上角的元素，去掉一行，因为在一行中右上角的已经时最大的元素了
//		{
//			x++;
//		}
//		else 
//		{
//			printf("下标是%d %d\n",x,y);
//			return 1;
//		}
//	}
//	return 0;//找不到
//}

int findnum(int arr[3][3],int k,int* px,int* py	)
{
	int x=0;
	int y=*py-1;
	while(x<=*px-1 && y>=0)
	{
			if(arr[x][y]>k)//如果右上角的元素大于要查找的元素，去掉一列，因为在一列中右上角的元素是最小的了
		{
			y--;
		}
		else if(arr[x][y]<k)//如果要查找的元素大于右上角的元素，去掉一行，因为在一行中右上角的已经时最大的元素了
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
	return 0;//找不到
}
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int k=7;
	int x=3;
	int y=3;
	int ret=0;
	ret=findnum(arr,7,&x,&y);//返回型参数
	if(ret==1)
	{
		printf("找到了\n");
		printf("下标是%d %d\n",x,y);
	}
	else
		printf("找不到\n");
	system("pause");
	return 0;
}