
//电脑关机
//#include <stdio.h>
//#include <stdlib.h>
//#include <string>
//
//int main()
//{
//	char input[20]={0};
//again:
//	//设置60秒关机  shutdown -s -t 60
//	system("shutdown -s -t 60");
//	printf("请注意会关机");
//	scanf("%s",&input);
//	if(strcmp(input,"我是猪")==0)
//	{
//		system("shutdown -a");
//	}
//	else{
//		goto again;
//	}
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int menu()
//{
//	printf("**************************");
//	printf("*******1,打游戏   0,退出游戏*****");
//	printf("**************************");
//}
//
//void game()
//{
//	//生成随机数
//	//猜数字
//	int ret=0;
//	int guess=0;
//	ret =rand()%100+1;
//	while(1)
//	{
//	printf("猜数字：");
//	scanf("%d",&guess);
//	if(guess>ret)
//	{
//		printf("猜大了\n");
//	}
//	else if(guess<ret)
//	{
//		printf("猜小了\n");	
//	}
//	else
//		{
//			printf("猜对了\n");
//	    break;
//		}	
//	}
//}
//int main()
//{
//	int input=0;
//	srand((unsigned int)time(NULL));//时间戳作为随机数的生成起始点  
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("选择结束");
//			break;
//		}
//
//	}while (input);
//	system("pause");
//	return 0;
//}

//找最大值
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int arr[]={-1,-13,-5,-25,-7,-8,-9,-10};
//	int i=0;
//	int max=arr[0];//注意当int max=0时 当数组中是负数时 会出现最大值为0的情况
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	for(i=1;i<sz;i++)
//	{
//		if(arr[i]>max)
//		{
//			max=arr[i];
//		}
//	}
//	printf("max=%d\n",max);
//	system("pause");
//	return 0;
//}



//分数求和
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int i=0;
//	double sum=0.0;
//	int flag=1;
//	for(i=1;i<=100;i++)
//	{
//		sum+=flag*1.0/i;
//		flag=-flag;
//	}
//	printf("%lf\n",sum);
//	system("pause");
//	return 0;
//}