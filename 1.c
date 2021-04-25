#include <stdio.h>
#include <stdlib.h>

 int main()
 {
	 int ch =0;
	 int ret =0;
	 char password[20]={0};
	 printf("请输入密码：>");
	 scanf("%s",password);
	 //缓冲区还剩余一个‘\n’
	 //读取一下‘\n’
	 while((ch=getchar())!='\n')
	 {
		;
	 }//在此处执行循环，知道读取到\n停止循环开始下一步
	 printf("请确认（Y/N）:>");
	 ret = getchar();	
	 if(ret =='Y')
	 {
		printf("确认成功\n");
	 }
	 else
	 {
		printf("放弃确认\n");
	 }
	 system("pause");
	 return 0;
 }
	// int ch = 0;
	// //ctrl+Z 可以终止getchar（）运行
	// while((ch=getchar())!=EOF)
	// {
	//	putchar(ch);
	// }

	// system("pause");
	// return 0;
 //}



	// int i=1;
	// while(i<=10)
	// {
	//	 if (i==5)
	//		 continue;//终止执行后面的代码，来判断下次条件是否满足执行下次循环
	//	 printf("%d\n",i);
	//	 i++;
	// }

	// system("pause");
	// return 0;
 //}




 //int a=11;
	// int b=10;
	// int* q=&b;
	// int* p=&a;
	// printf("%d\n",a);//输出a的地址
	// printf("%d\n",b);//输出b的地址
	// printf("%d\n",a);//输出a的值
	// *p=*p+1;//指针所指位置的数目相加
	// printf("%d\n",*p);//转化为10进制