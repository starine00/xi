#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n=1;
	int m=2;
	switch(n)
	{
	case 1:
		m++;
	case 2 :
		n++;
	case 3:
		switch(n)
		{
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("%d %d\n",n,m);
	system("pause");
	return 0;
}
	/*int day=0;
	int n=1;
	scanf("%d",&day);
	switch(day)
	{
	case 1:
		if(n==1)
			printf("hehe\n");
			break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	default:
		printf("�������");
		break;
	}
	system("pause");
	return 0;
}*/
	/*int a;
	scanf("%d",&a);
	if(a%2==1)
		printf("%d������",a);
	else
		printf("%d��ż��",a);*/

	/*int a=1;
	while (a<100)
	{
		if(a%2==1)
		printf("%d ",a);
			a++;*/
	//int a=1;
	//while(a<100)
	//{
	//	printf("%d ",a);
	//	a+=2;
	//}
//	system("pause");
//	return 0;
//}
	/*int a=0;
	int b=2;
	if(a==1)
	
		if(b==2)
			printf("hehe\n");
	
		else
			printf("haha\n");

	system("pause");
	return 0;*/
//}
//	int age=10;
//	if (age<18)
//	{
//		printf("δ����\n");
//	}
//	else if(age>=18 && age<28)//����дΪ18<=age<28  ����д����ͬ��һ�����ִ��
//		{
//			printf("����\n");
//	}
//	else if(age>=28 && age<50) ���治�ܸ��ֺ�
//	{
//		printf("׳��\n");
//	}
//	else
//	{
//	printf("����");
//	}
//	system("pause");
//	return 0;
//}