#include <stdio.h>
#include <stdlib.h>

int facl(int n)
{
	//int a=1;
	//int b=1;
	//int c=1;
	//while(n>2)
	//{
	//	c=a+b;
	//	a=b;
	//	b=c;
	//	n--;
	//}
	//return c;
	if(n<=2)
		return 1;
	else
		return facl(n-1)+facl(n-2);
}

int main()
{
	int n=0;
	int ret=0;
	scanf("%d",&n);
	ret=facl(n);
	printf("%d\n",ret);
	system("pause");
	return 0;

}


//青蛙跳台阶，能一次跳两个也能一次跳一个，给定阶数，能够有几种情况
//#include <stdio.h>
//#include <stdlib.h>
//
//int tiao(int n)
//{
//	if(n==0)
//		return 0;	
//	if(n==1)
//		return 1;
//	if(n==2)
//		return 2;
//	if(n>2)
//	{
//		return tiao(n-1)+tiao(n-2);
//	}
//}
//int main()
//{
//	int n=0;
//	int ret=0;
//	scanf("%d",&n);
//	ret =tiao(n);
//	printf("有%d种情况\n",ret);
//	system("pause");
//	return 0;
//
//}


//汉诺塔
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////思路：1.将n-1个盘子先放到B
////	2.将A上剩下的一个盘移动到C盘上
////	3.将n-1个从B上移动到C上
//
////函数声明
//void move(char x,char y);
//void hannuo(int n,char one,char two,char three)
//{
//	if(n==1)
//	{
//		move(one,three);
//	}
//	else
//	{
//		hannuo(n-1,one,three,two);//将n-1个盘子先移动到B上
//		move(one,three);/*将A上剩下的一个盘移动到C盘上*/
//		hannuo(n-1,two,one,three);/*将n-1个从B上移动到C上*/
//	}
//}
//int count=0;
//void move(char x,char y)
//{
//	printf("%c->%c\n",x,y);
//	count++;
//}
//
//
//int main()
//{
//	int n;
//	printf("input your number:");
//	scanf("%d",&n);
//	hannuo(n,'A','B','C');
//	printf("次数%d\n",count);
//	system("pause");
//	return 0;
//}