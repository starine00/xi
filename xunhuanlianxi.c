#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i=0;
	char password[20]={0};
	for(i=0;i<3;i++)
	{
		printf("请输入密码");
		scanf("%s",password);
		if(strcmp(password, "123456") == 0)       //strcmp用来比较两个字符串是否相同  如果第一个字
												//符串小于第二个字符串就会输出一个小于0的数，否则输出一个大于0的数
		{
			printf("登陆成功");
			break;
		}
		else
		{
			printf("输入错误请重新输入");
		}
	}
	if(i==3)
		printf("输入密码失败，退出程序");
	system("pause");
	return 0;
}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <Windows.h>
//
////演示多个字符从两端移动，向中间汇聚
//int main()
//{
//	char arr1[]="welcome to world!";
//	char arr2[]="#################";
//	int left=0;
//    //int right=sizeof(arr1)/sizeof(arr1[0])-2;
//	int right=strlen(arr1)-1;
//
//	while(left<=right)//相交时退出循环
//	{
//	arr2[left]=arr1[left];
//	arr2[right]=arr1[right];
//	printf("%s\n",arr2);
//	Sleep(1000);//等待一秒
//	system("cls");//清空屏幕
//	left++;
//	right--;
//	}
//	printf("%s\n",arr2);
//	system("pause");//system执行系统命令
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//二分查找法
//int main()
//{
//	int arr[]={1,2,3,4,6,6,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);//计算元素个数
//	int k=6;
//	int left=0;//左下标
//	int right=sz-1;//右下标
//	while(left<=right)
//	{
//		int mid=(left+right)/2;
//		if(arr[mid]<k)
//		{
//			left=mid+1;//当查找的下标小于要查找的数值时，左边下标加一，右下标不变
//		}
//		else if(arr[mid]>k)
//		{
//			right=mid-1;//当查找的下标大于要查找的数值时，左下标不变，右下标减一
//		}
//		else
//		{
//			printf("找到了,下标是%d",mid);
//			break;
//		}
//		}
//	if(left>right)
//	{
//		printf("找不到\n");
//}
//	system("pause");
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//在一个有序的数组中查找某个数字
//int main()
//{
//	int i=0;
//	int k=7;
//	int arr[]={1,2,3,4,5,6,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<sz;i++)
//	{
//		if(arr[i]==k)
//		{
//			printf("下标是%d\n",i);
//			break;
//		}
//	}
//	if(i==sz)
//	{
//		printf("找不到\n");
//	}
//	system("pause");
//	return 0;
//
//}