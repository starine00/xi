#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=1;
	int ret=1;
	int n=0;
	int sum=0;
	scanf("%d",&n);
	while(i<=n)
	{
		ret=ret*i;
		sum=sum+ret;
		i++;
	}
	printf("阶乘为%d\n",ret);
	printf("阶乘和为%d\n",sum);
	system("pause");
	return 0;
}




	//int main()
	//{
	//	int i=0;
		//int ret=1;
	//int n=0;
	//int sum=0;
	//for(i=1;i<=n;i++)//累计求阶乘
	//{
	//	ret=ret*i;
	//	sum=sum+ret;
	//}
	/*printf("阶乘为%d\n",ret);
	printf("阶乘和为%d\n",sum);
	system("pause");
	return 0;
}*/




//{
//	int i=0;
//	    //初始化 //判断 //调整
//	for (i=1;i<10;i++)
//	{
//		printf("%d\n",i);
//	}
//	system("pause");
//	return 0;
//}
//	int ch=0;
//	while((ch = getchar())!=EOF)
//	{
//		if(ch<'0'||ch>'9')
//				continue;
//			putchar(ch);
//	}
//
//	system("pause");
//	return 0;
//}