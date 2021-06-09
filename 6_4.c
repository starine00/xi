//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	//char a=-1;
//	//signed char b=-1;
//	//unsigned char c=-1;
//	//printf("a=%d,b=%d,c=%d",a,b,c);
//	char a= -128;
//	printf("%u\n",a);
//	system("pause");
//	return 0;	
//}


//按照补码的形式进行运算，最后格式化为有符号的整数
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i=-20;
//	unsigned int j=-10;
//	printf("%d\n",i+j);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <Windows.h>
//int main()
//{
	/*unsigned int i;
	for(i=9;i>=0;i--)
	{
		printf("%u\n",i);
		Sleep(100);
	}*/
	/*char a[1000];
	int i;
	for(i=0;i<1000;i++)
	{
		a[i]=-1-i;
	}
	printf("%d",strlen(a));*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n=9;
	float *pfloat=(float *)&n;
	printf("n的值%d\n",n);
	printf("%f\n",*pfloat);
	*pfloat=9.0;
	printf("%d\n",n);
	printf("%f\n",*pfloat);
	system("pause");
	return 0;

}


