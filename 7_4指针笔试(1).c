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
//	char* a[]={"work","at","alibaba"};//a����ʵ��洢����w��a��a�ĵ�ַ���ַ��������ַ��ĵ�ַ
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
	printf("%s\n",*--*++cpp+3);//ER  +3Ϊ�ڽ����ú��һ���ַ����е�������
	printf("%s\n",*cpp[-2]+3);//ST  *cpp[-2]+3�ȼ���*(*(	2))+3
	printf("%s\n",cpp[-1][-1]+1);//cpp[-1][-1]+1�ȼ��� *(*(cpp-1)-1)+1
	//Ҫע��cpp�ڼ�������Ĺ������ڲ��ϵر仯  
	system("pause");
	return 0;
}