//��ӡ����ͼ��
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i=0;
//	int line=0;
//	scanf("%d",&line);
//	for(i=0;i<line;i++)//��ӡ�ϰ벿��
//	{
//		int j=0;
//		for(j=0;j<line-1-i;j++)//��ӡ�ո�
//		{
//			printf(" ");
//		}
//		for(j=0;j<2*i+1;j++)//��ӡ*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	for(i=0;i<line-1;i++)//��ӡ�°벿��
//	{
//		
//		int j=0;
//		for(j=0;j<=i;j++)//��ӡ�ո�
//		{
//			printf(" ");
//		}
//		for(j=0;j<2*(line-i-1)-1;j++)//��ӡ*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//�ڶ��ַ���
//#include<stdio.h>
//#include <stdlib.h>
//int  main(){
//	int n;
//	while(scanf("%d",&n)!=EOF)
//	{
//	int i,j ;
//	  for(i=0;i<n+1;i++)
//	  {	
//	  	for(j=0;j<n-i;j++)
//	  	printf(" ");
//	  	for(j=0;j<=i;j++)
//	  	printf("* ");
//	  	printf("\n");
//	  }
//	 for(i=0;i<n;i++)
//	 {
//	 	for(j=0;j<i+1;j++)
//	  	printf(" "); 	
//	  	for(j=0;j<=n-i-1;j++)
//	  	printf("* ");
//	  	printf("\n");	
//	 }	
//}	
//	system("pause");
//	return 0;
//}



//����ˮ����
//1ƿˮ1��Ǯ��������ƿ��һƿ��29��Ǯ�ȶ���ƿ
#include<stdio.h>
#include <stdlib.h>
int  main()
{
	int total=0;
	int empty=0;

	int money=0;
	scanf("%d",&money);
	total=money;//���������ˮ
	empty=money;
	while(empty>=2)//����������ˮ
	{
		total+=empty/2;
		empty=empty/2+empty%2;
	}	
	printf("total =%d\n",total);
	system("pause");
	return 0;
}