//打印菱形图案
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i=0;
//	int line=0;
//	scanf("%d",&line);
//	for(i=0;i<line;i++)//打印上半部分
//	{
//		int j=0;
//		for(j=0;j<line-1-i;j++)//打印空格
//		{
//			printf(" ");
//		}
//		for(j=0;j<2*i+1;j++)//打印*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	for(i=0;i<line-1;i++)//打印下半部分
//	{
//		
//		int j=0;
//		for(j=0;j<=i;j++)//打印空格
//		{
//			printf(" ");
//		}
//		for(j=0;j<2*(line-i-1)-1;j++)//打印*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//第二种方法
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



//喝汽水问题
//1瓶水1块钱，两个空瓶换一瓶，29块钱喝多少瓶
#include<stdio.h>
#include <stdlib.h>
int  main()
{
	int total=0;
	int empty=0;

	int money=0;
	scanf("%d",&money);
	total=money;//买回来的汽水
	empty=money;
	while(empty>=2)//换回来的汽水
	{
		total+=empty/2;
		empty=empty/2+empty%2;
	}	
	printf("total =%d\n",total);
	system("pause");
	return 0;
}