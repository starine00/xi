#include <stdio.h>
#include <stdlib.h>

void add(int* p)
{
	(*p)++;
}

int main()
{
	int num=0;
	add(&num);
	printf("%d\n",num);
	add(&num);
	printf("%d\n",num);
	add(&num);
	printf("%d\n",num);
	system("pause");
	return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//
//
////�ú�����ʵ�ֶ��ֲ���
//int binary_search(int arr[],int k,int sz)
//{
//	int left=0;
//	int right=sz-1;
//
//	while(left<=right)
//	{
//		int mid=(left+right)/2;//�м�Ԫ�ص��±�
//		if(arr[mid]<k)
//		{
//			left=mid+1;
//		}
//		else if(arr[mid]>k)
//		{
//			right=mid-1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	//���ַ�����һ����
//	int arr[]={1,2,3,4,5,6,7,8};
//	int k=8;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int ret=binary_search(arr,k,sz);
//	if(ret == -1)
//	{
//		printf("�Ҳ���ָ������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n",ret);
//	}
//	system("pause");
//	return 0;
//}


//�ú������ж��ǲ�������
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int is_leap_year(int y)
//{
//	if((y%4 == 0&& y%100!=0) || (y%400==0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year=0;
//	for(year=1000;year<=2000;year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		if( 1== is_leap_year(year))
//		{
//			printf("%d ",year);
//		}
//	}
//	system("pause");
//	return 0;
//}





//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////����������1��������������0
//int is_prime(int n)
//{
//	int j=0;
//	for(j=2;j<n;j++)
//	{
//		if(n%j == 0)
//			return 0;
//	}
//	return 1;
//	
//}
//
//int main()
//{
//	int i=0;
//	for(i=100;i<=200;i++)
//	{
//		//�ж�һ�����ǲ�������
//		if(is_prime(i)==1)
//			printf("%d\n",i);
//	}
//	system("pause");
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////��ʵ�δ����βε�ʱ��
////�β�ʵ������ʵ�ε�һ����ʱ����
////���βε��޸Ĳ���Ӱ��ʵ��
//void swap(int* pa,int* pb)
//{
//	int tmp=0;
//	tmp=*pa;
//	*pa=*pb;
//	*pb=tmp;
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	//int* pa=&a;
//	//int* pb=&b;
//	swap(&a,&b);//������ֵҪ����ַ
//	printf("a=%d b=%d\n",a,b);
//	system("pause");
//	return 0;
//}


//�滻�����е�ǰ5���ַ�Ϊ*
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char arr[]="hello world";
//	memset(arr,'*',5);
//	printf("%s\n",arr);
//	system("pause");
//	return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//
//	char arr1[]="bit";
//	char arr2[20]="##########";//����������\0��Ϊ�ַ����Ľ�����־  ���Բ���ӡ���������
//	strcpy(arr2,arr1);
//	printf("%s\n",arr2);
//	printf("%s\n",arr2);
//	system("pause");
//	return 0;
//}