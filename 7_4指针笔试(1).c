//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int aa[2][5]={1,2,3,4,5,6,7,8,9,10};
//	int *ptr1=(int *)(&aa+1);
//	int *ptr2=(int *)(*(aa+1));
//	printf("%d\n",*(*(aa)+1));
//	printf("%d,%d",*(ptr1-1),*(ptr2-1));
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char* a[]={"work","at","alibaba"};//a里面实则存储的是w、a、a的地址，字符串的首字符的地址
//	char* *pa=a;
//	pa++;
//	printf("%s\n",*pa);
//	system("pause");
//	return 0;
//}



#include <stdio.h>
#include <stdlib.h>
int main()
{
	char* c[]={ "ENTER","NEW","POINT","FIRST" };
	char* *cp={c + 3,c + 2,c + 1,c};
	char** *cpp=cp;
	printf("%s\n",**++cpp);
	printf("%s\n",*--*++cpp+3);//ER  +3为在解引用后的一个字符串中的往后数
	printf("%s\n",*cpp[-2]+3);//ST  *cpp[-2]+3等价于*(*(	2))+3
	printf("%s\n",cpp[-1][-1]+1);//cpp[-1][-1]+1等价于 *(*(cpp-1)-1)+1
	//要注意cpp在计算输出的过程中在不断地变化  
	system("pause");
	return 0;
}