#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0;
	int count =0;
	for(i=1;i<=100;i++)
	{
		if(i%10==9)
		{
			printf("%d\n",i);
			count+=1;
		}
		if(i/10==9)
		{
			printf("%d\n",i);
			count+=1;
		}
	}
	printf("����%d\n",count);
	system("pause");
	return 0;
}


//�ж�����
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int i=0;
//	int count=0;
//	for(i=100;i<=200;i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϹ���
//		//1,�Գ���
//		 //����2��>i-1����
//		int j=0;
//		for(j=2;j<200;j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//		if(i==j)
//		{
//			count+=1;
//			printf("%d ",i);
//		}
//	}
//	printf("%d ",count);
//	system("pause");
//	return 0;
//}

//�ж�����
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int year=0;
//	int count=0;
//	for(year=1000;year<=2000;year++)
//	{
//		//1,�ܱ�4�������ܱ�100������������
//		//2,�ܱ�400������������
//		if(year%4==0 && year%100!=0)
//		{
//			printf("%d ",year);
//			count+=1;
//		}
//		else if(year%400==0)
//		{
//			printf("%d ",year);	
//			count+=1;
//		}
//	}
//	printf("%d\n",count);
//	system("pause");
//	return 0;
//}



//շת����� �������������Լ��
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int m=0;
//	int n=0;
//	scanf("%d%d",&m,&n);
//	while(m%n)
//	{
//		int r=m%n;
//			m=n;
//			n=r;
//	}
//	printf("���Լ��%d",n);
//	system("pause");
//	return 0;
//}



//��ӡ����1��100֮��3�ı���
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i=0;
//	for(i=0;i<100;i++)
//	{
//		if(i%3==0)
//		{
//			printf("%d ",i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//�Ӵ�С����   ����������
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int a=0;
//	int b=0;
//	int c=0;
//	scanf("%d%d%d",&a,&b,&c);
//	if(a<b)
//	{
//		int tmp=a;
//		a=b;
//		b=tmp;
//	}
//	if(a<c)
//	{
//		int tmp =a;
//		a=c;
//		c=tmp;
//	}
//	if(b<c)
//	{
//		int tmp =b;
//		b=c;
//		c=tmp;
//	}
//	printf("%d %d %d",a,b,c);
//	system("pause");
//	return 0;
//}