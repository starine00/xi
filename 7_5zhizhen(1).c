//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void reverse(char* str)
//{
//	int len=strlen(str);
//	char* left=str;
//	char* right=str+len-1;
//	while(left<right)
//	{
//		char tmp=*left;
//		*left=*right;
//		*right=tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256]={0};
//	scanf("%s",arr);
//	//逆序函数
//	reverse(arr);
//	//gets(arr);
//	printf("%s\n",arr);
//	system("pause");
//	return 0;
//}

//计算求和如
//2+22+222+2222求和
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a=0;
//	int n=0;
//	int sum=0;
//	int i=0;
//	int ret=0;
//	scanf("%d%d",&a,&n);
//	for(i=0;i<n;i++)
//	{
//		ret=ret*10+a;
//		sum+=ret;
//	}
//	printf("%d\n",sum);
//	system("pause");
//	return 0;
//}

//打印水仙花数
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i=100;
	for (i=100;i<999;i++)
	{
		////判断i是否是水仙花数(字幂数)
		////1.计算i的位数的n次方
		//int n=0;
		//while(i/10)
		//{
		//	n++;
		//	i/=10;
		//}
		////2.计算i的每一位的n次方之和sum
		////3.计算i==sum
		int a=i/100;
		int b=i/10%10;
		int c=i%10;
		if(i==(a*a*a+b*b*b+c*c*c))
			printf("%d ",i);
	}
	system("pause");
	return 0;
}


//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int hun, ten, ind, n;
//    printf("result is:");
//    for( n=100; n<1000; n++ )  /*整数的取值范围*/
//    {
//        hun = n / 100;
//        ten = (n-hun*100) / 10;
//        ind = n % 10;
//        if(n == hun*hun*hun + ten*ten*ten + ind*ind*ind)  /*各位上的立方和是否与原数n相等*/
//            printf("%d  ", n);
//    }
//    printf("\n");
//    system("pause");
//    return 0;
//}