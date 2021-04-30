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
	printf("个数%d\n",count);
	system("pause");
	return 0;
}


//判断素数
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int i=0;
//	int count=0;
//	for(i=100;i<=200;i++)
//	{
//		//判断i是否为素数
//		//素数判断规则
//		//1,试除法
//		 //产生2—>i-1个数
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

//判断闰年
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int year=0;
//	int count=0;
//	for(year=1000;year<=2000;year++)
//	{
//		//1,能被4整除不能被100整除的是闰年
//		//2,能被400整除的是闰年
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



//辗转相除法 求两个数的最大公约数
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
//	printf("最大公约数%d",n);
//	system("pause");
//	return 0;
//}



//打印处于1到100之间3的倍数
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
//从大到小排序   对于三个数
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