#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i=0;
	char password[20]={0};
	for(i=0;i<3;i++)
	{
		printf("����������");
		scanf("%s",password);
		if(strcmp(password, "123456") == 0)       //strcmp�����Ƚ������ַ����Ƿ���ͬ  �����һ����
												//����С�ڵڶ����ַ����ͻ����һ��С��0�������������һ������0����
		{
			printf("��½�ɹ�");
			break;
		}
		else
		{
			printf("�����������������");
		}
	}
	if(i==3)
		printf("��������ʧ�ܣ��˳�����");
	system("pause");
	return 0;
}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <Windows.h>
//
////��ʾ����ַ��������ƶ������м���
//int main()
//{
//	char arr1[]="welcome to world!";
//	char arr2[]="#################";
//	int left=0;
//    //int right=sizeof(arr1)/sizeof(arr1[0])-2;
//	int right=strlen(arr1)-1;
//
//	while(left<=right)//�ཻʱ�˳�ѭ��
//	{
//	arr2[left]=arr1[left];
//	arr2[right]=arr1[right];
//	printf("%s\n",arr2);
//	Sleep(1000);//�ȴ�һ��
//	system("cls");//�����Ļ
//	left++;
//	right--;
//	}
//	printf("%s\n",arr2);
//	system("pause");//systemִ��ϵͳ����
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//���ֲ��ҷ�
//int main()
//{
//	int arr[]={1,2,3,4,6,6,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);//����Ԫ�ظ���
//	int k=6;
//	int left=0;//���±�
//	int right=sz-1;//���±�
//	while(left<=right)
//	{
//		int mid=(left+right)/2;
//		if(arr[mid]<k)
//		{
//			left=mid+1;//�����ҵ��±�С��Ҫ���ҵ���ֵʱ������±��һ�����±겻��
//		}
//		else if(arr[mid]>k)
//		{
//			right=mid-1;//�����ҵ��±����Ҫ���ҵ���ֵʱ�����±겻�䣬���±��һ
//		}
//		else
//		{
//			printf("�ҵ���,�±���%d",mid);
//			break;
//		}
//		}
//	if(left>right)
//	{
//		printf("�Ҳ���\n");
//}
//	system("pause");
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//��һ������������в���ĳ������
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
//			printf("�±���%d\n",i);
//			break;
//		}
//	}
//	if(i==sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	system("pause");
//	return 0;
//
//}