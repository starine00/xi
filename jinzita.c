#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0;
	int count=0;
	for(i=100;i<=200;i++)
	{
		int j=0;
		for(j=2;j<200;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(i==j)
		{
			count+=1;
			printf("%d ",i);
		}
	}
	printf("%d",count);
	system("pause");
	return 0;
}




//��ȡһ������������λ�����е�ż��λ������λ
//#include <stdio.h>
//#include <stdlib.h>
//
//void print(int m)
//{
//	int i=0;
//	printf("����λ\n");
//	for(i=30;i>=0;i-=2)
//	{
//		printf("%d ",(m>>i)&1);
//	}
//	printf("\n");
//	printf("ż��λ\n");
//	for(i=31;i>=1;i-=2)
//	{
//		printf("%d ",(m>>i)&1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int m=0;
//	scanf("%d",&m);
//	print(m);
//	system("pause");
//	return 0;
//}