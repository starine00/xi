//strtok
//str -- Ҫ���ֽ��һ��С�ַ������ַ�����
//sep -- �����ָ����� C �ַ�����
//char strtok(char* str,char* sep)
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	
//	/*char arr[]="zqf@bitdu.tech";*/
//	char arr[]="192.168.19.110";
//	char* p=".";
//	char* ret=0;
//	char buf[1024]={0};
//	strcpy(buf,arr);
//	ret=NULL;
//	for(ret=strtok(buf,p);ret!=NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n",ret);
//	}
//	//ret=strtok(buf,p);
//	//printf("%s\n",ret);
//
//	//ret=strtok(NULL,p);
//	//printf("%s\n",ret);
//
//	//ret=strtok(NULL,p);
//	//printf("%s\n",ret);
//
//	system("pause");
//	return 0;
//}


//strerror
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>//��һ��ȫ�ֵĴ��������
////��C���ԵĿ⺯����ִ�й����з����˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��error��
//int main()
//{
//	//������ ������Ϣ
//	//0--  NO errr
//	//1--  Operation not permitted
//	//2--  no such file or directory
//
//	/*char* str=strerror(errno);
//	printf("%s\n",str);*/
//	FILE* pf=fopen("test.txt","r");//���ļ�  �򿪵�ǰ�ļ�·���µ�test.txt�ļ�
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		printf("chenggong");
//	}
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//int main()
//{
//	//char ch='2';
//	///*int ret=islower(ch);*///�Ƿ���Сд��ĸ
//	//int ret=isdigit(ch);//�ж��Ƿ��������ַ�
//	//printf("%d\n",ret);
//
//	/*char ch=tolower('Q');*///��д��ĸתΪСд
//	//char ch=toupper('q');//Сдת��д
//	//putchar(ch);
//	int i=0;
//	char arr[]="I Am A Student";
//	while(arr[i])
//	{
//		if(isupper(arr[i]))
//		{
//			arr[i]=tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n",arr);
//	system("pause");
//	return 0;
//}



//memcpy�ڴ濽��
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	//int arr1[10]={1,2,3,4,5};
//	//int arr2[10]={0};
//	struct S arr3[]={{"����",18},{"����",20}};
//	struct S arr4[]={0};
//	memcpy(arr4,arr3,sizeof(arr3));
//	//memcpy(arr2,arr1,sizeof(arr1));
//	/*printf("%d\n",arr2);*/
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//void* my_memcpy(void* dest,const void* src,size_t num)
//{
//	void* ret=dest;
//	assert(dest);
//	assert(src);
//	while(num--)
//	{
//	*(char*)dest=*(char*)src;
//	//((char*)dest)++;
//	//((char*)src)++;
//	++(char*)dest;
//	++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[10]={1,2,3,4,5};
//	int arr2[10]={0};
//	/*struct S arr3[]={{"����",18},{"����",20}};
//	struct S arr4[]={0};
//	my_memcpy(arr4,arr3,sizeof(arr3));*/
//	my_memcpy(arr2,arr1,sizeof(arr1));
//	system("pause");
//	return 0;
//}


//memmove�ص�����,�����ڴ��ص����
//memcpyֻҪ�������ص����ڴ濽��������
//menmove �����ڴ��ص�����Ŀ���
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//void* my_memmove(void* dest,void* src,size_t num)
//{
//	void* ret=dest;
//	assert(dest);
//	assert(src);
//	if(dest<src)
//	{
//		//��ǰ��󿽱�
//		while(num--)
//		{
//			*(char*)dest=*(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//�Ӻ���ǰ����
//		while(num--)
//		{
//			*((char*)dest+num)=*((char*)src+num);
//		}
//	}
//	return 0;
//	
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int i=0;
//	my_memmove(arr+2,arr,20);//��ǰ���Ų��
//	//my_memmove(arr,arr+2,20);//�Ӻ���ǰŲ��
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	system("pause");
//	return 0;
//}

//memcmp�Ƚ�
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//int main()
//{
//	//01 00 00 00 02 00 00 00 03 00 00 00....
//	//01 00 00 00 02 00 00 00 05 00 00 00...
//	//�Ƚϵ���ǰ9���ֽ�  �������-1��arr2��
//	int arr1[]={1,2,3,4,5,6,7};
//	int arr2[]={1,2,5,4,5,6};
//	int ret=memcmp(arr1,arr2,9);//�����8Ϊ�Ƚϵ��ֽ������������е�ǰ����Ԫ�أ�һ��Ԫ���ĸ��ֽ�
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}


//memset�ڴ�����
int main()
{
	char arr[10]="";
	memset(arr,'#',10);//10Ϊ�޸�10���ֽ�


	int arr[10]={0};
	memset(arr,1,10);
	//�޸�10���ֽ�
	//01 01 01 01 01 01 01 01 01 01 00 00 00 00 00 ....4��һλ
	system("pause");
	return 0;
}