//��ʾһ�����������к��м���1//

//��һ���㷨
#include <stdio.h>
#include <stdlib.h>

int yishu(int n)
{
	int count=0;
	int i=0;
	for(i=0;i<32;i++)
	{
		if(((n>>i)&1)==1)
		{
			count++;
		}
	}
	return count;
}


int count=0;
int main()
{
	int i=0;
	scanf("%d",&i);
	count=yishu(i);
	printf("%d",count);
	system("pause");
	return 0;
}

//�ڶ����㷨
//#include <stdio.h>
//#include <stdlib.h>
//
//int yishu(int n)
//{
//	int count=0;
//	while(n)
//	{
//		n=n&(n-1);
//		count++;
//	}
//	return count;
//}
//int count=0;
//int main()
//{
//	int i=0;
//	scanf("%d",&i);
//	count=yishu(i);
//	printf("%d",count);
//	system("pause");
//	return 0;
//}

//�������㷨
//#include <stdio.h>
//#include <stdlib.h>
// 
//int count_bit_num(unsigned int n)
//{
//	int count=0;
//	while(n)
//	{
//		if(n%2==1)
//		{
//			count++;
//		}
//		n=n/2;
//	}
//	return count;
//	 
//}
//int main()
//{
//	int a=-1;
//	//дһ��������a�Ķ����Ʊ�ʾ���м���1
//	int count=count_bit_num(a);
//	printf("%d\n",count);
//	system("pause");
//	return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//int i;
//int main()
//{
//	int a,b,c;
//	a=5;
//	c=++a;
//	b=++c,c++,++a,a++;
//	b+=a++ +c;
//	printf("%d%d%d",a,b,c);
//	system("pause");
//	return 0;
//}


//%x��ʾ16�������
//����һ���������飬��ɶ�����Ĳ���
//1.ʵ��init()��ʼ������Ϊȫ0
//	2.ʵ��print()��ӡ�����ÿһ��Ԫ��
//	3.ʵ��reverse()����Ԫ�ص�����
//#include <stdio.h>
//#include <stdlib.h>
//
//void init(int arr[],int sz)
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		arr[i]=i+1;
//	}
//}
//void print(int arr[],int sz)
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[],int sz)
//{
//	int left=0;
//	int right=sz-1;
//	while(left<=right)
//	{
//	int tmp=arr[left];
//	arr[left]=arr[right];
//	arr[right]=tmp;
//	left++;
//	right--;
//	}
//}
//
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	init(arr,sz);//�������ʼ��Ϊ0
//	print(arr,sz);//��ӡ
//	reverse(arr,sz);
//	print(arr,sz);//��ӡ
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#define N_VALUES 5
//
//
//int main()
//{
//	float values[N_VALUES];
//	float *vp;
//	for(vp=&values[N_VALUES];vp>&values[0];)
//{
//	*--vp=0;
//}
//	system("pause");
//	return 0;
//}



//���������ַ����ĳ���
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int my_strlen(char* str)
//{
//	char* start=str;
//	char* end=str;
//	while(*end !='\0')
//	{
//		end++;
//	}
//	return end-start;
//}
//int main()
//{	
//	char arr[]="bit";
//	int len=my_strlen(arr);
//	printf("%d\n",len);
//	system("pause");
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int arr[10]={0};
//	int* p=arr;//������-��Ԫ�صĵ�ַ
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		*(p+i)=1;
//	}
//	system("pause");
//	return 0;
//}