//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	int a=10000;
//	//绝对路径的写法用\\这样防止转义\
//
//	FILE* pf=fopen("C:\\Clanguage\\clianxi\\7_20文件操作\\7_20文件操作\\test.txt","wb");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//fwrite(&a,4,1,pf);
//	fclose(pf);
//	pf=NULL;
//	system("pause");
//	return 0;
//}




//fgetc字符输入函数
//fputs字符输出函数
//#include <stdio.h>
//#include <stdlib.h>
//#include <Error.h>
//#include <string.h>
//int main()
//{
//	FILE* pfwrite=fopen("test1.txt","w");
//	if(pfwrite==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('b',pfwrite);
//	fputc('i',pfwrite);
//	fputc('t',pfwrite);
//	fclose(pfwrite);
//	pfwrite=NULL;
//	system("pause");
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>
#include <Error.h>
#include <string.h>
//int main()
//{
//	FILE* pfread=fopen("test1.txt","r");
//	if(pfread==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//读文件
//	printf("%c",fgetc(pfread));
//	printf("%c",fgetc(pfread));
//	printf("%c",fgetc(pfread));
//	fclose(pfread);
//	pfread=NULL;
//	system("pause");
//	return 0;
//}

//从键盘上读入
//从屏幕上输出
int main()
{
	int ch=fgetc(stdin);
	fputc(ch,stdout);
	system("pause");
	return 0;
	
}