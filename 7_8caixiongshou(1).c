////猜凶手
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int killer=0;
//	for(killer='a';killer<='d';killer++)
//	{
//		if((killer != 'a')+(killer == 'c')+(killer=='d')+(killer!='d')==3)
//		{
//			printf("kiler=%c\n",killer);
//		}
//	}
//	system("pause");
//	return 0;
//}



#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	for (a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			for(c=1;c<=5;c++)
			{
				for(d=1;d<=5;d++)
				{
					for(e=1;e<=5;e++)
					{
						if(((b==2) +(a==3)==1)&&
							((b==2)+(e==4)==1)&&
							((c==1)+(d==2)==1)&&
							((c==5)+(d==3)==1)&&
							((e==4)+(a==1)==1))
						{
							if(a*b*c*d*e==120)
								printf("a=%d b=%d c=%d d=%d e=%d\n",a,b,c,d,e);
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}


char str1[]="hello";
char str2[]="hello";//这两个是不相等的  因为存储地址不同

char *str3="hello";
char *str4="hello";//这两个是相同的

//int fun(int a,int b)//这个叫做函数声明
//int (*fun)(int a,int b)//这个叫做函数指针
