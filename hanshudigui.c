//��������ʱ���������ַ����ĳ���
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int my_strlen(char* str) strָ���ǵ�һ��Ԫ�صĵ�ַ
//{
//	int count =0;//��Ҫ������ʱ����count
//	while(*str!='\0')//�����ò���  
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//my_strlen("bit")
//1+my_strlen("it")
//1+1+my_strlen("t")
//1+1+1+my_strlen("")
//1+1+1+0
//���ַ������ô�����ʱ���� strָ���ǵ�һ��Ԫ�صĵ�ַ
int my_strlen(char* str)
{
	if(*str!='\0')//�ж��Ƿ�ΪΪ\0   Ȼ��������µݹ�
		return 1+my_strlen(str+1);//����˵str+1�ǵڶ���Ԫ�صĵ�ַ
	else
		return 0;
}
int main()
{
	char arr[]="bit";
	/*int len=strlen(arr);*/
	int len=my_strlen(arr);//���鴫�Σ����Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
	printf("%d\n",len);
	system("pause");
	return 0;
}





//#include <stdio.h>
//#include <stdlib.h>
//������1234   ��ӡΪ1 2 3 4
//void print(int n)
//{
//	if(n>9)
//	{
//		print(n/10);
//	}
//	printf("%d ",n%10);
//}
//
//int main()
//{
//	unsigned int num=0;
//	printf("����һ����");
//	scanf("%d",&num);//������ֻ����%dһ��Ĳ����ж��������
//	print(num);
//	system("pause");
//	return 0;
//}


////����ͷ�ļ���add.cģ��
//#include <stdio.h>
//#include <stdlib.h>
//#include "add.h"
////extern int add(int,int);
//int main()
//{	
//	int a=10;
//	int b=20;
//	int sum=0;
//	sum = add(a,b);
//	printf("%d\n",sum);
//	system("pause");
//	return 0;
//}





//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{	
//	printf("%d",printf("%d",printf("%d",43)));//��ӡ4321
//	printf("%d",printf("%d",43));
//	system("pause");
//	return 0;
//}