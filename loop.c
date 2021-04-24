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
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	default:
		printf("输入错误");
		break;
	}
	system("pause");
	return 0;
}*/
	/*int a;
	scanf("%d",&a);
	if(a%2==1)
		printf("%d是奇数",a);
	else
		printf("%d是偶数",a);*/

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
//		printf("未成年\n");
//	}
//	else if(age>=18 && age<28)//不能写为18<=age<28  这样写会连同下一条语句执行
//		{
//			printf("成年\n");
//	}
//	else if(age>=28 && age<50) 后面不能跟分号
//	{
//		printf("壮年\n");
//	}
//	else
//	{
//	printf("老年");
//	}
//	system("pause");
//	return 0;
//}