#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

struct s
{
	char name[20];
	int age;
};
int main()
{
	//向内存申请10个整形的空间
	int *p=(int*)malloc(10*sizeof(int));
	if(p==NULL)
	{
		//打印错误原因
		printf("%s\n",strerror(errno));
	}
	else
	{
		//正常使用空间
		int i=0;
		for(i=0;i<10;i++)
		{
			*(p+i)=i;

		}
		for(i=0;i<10;i++)
		{
			printf("%d ",*(p+i));
		}
	}
	//当动态申请的空间不再使用，应该还给操作系统
	free(p);
	p=NULL;//
	system("pause");
	return 0;
}