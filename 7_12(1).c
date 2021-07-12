//strncpy
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//char* my_strncpy(char* dest,const char* src,int k)
//{
//
//	char* start=dest;
//	while(k&&(*dest++=*src++))
//	{
//		k--;
//	}
//	if(k)
//	{
//		while(--k)
//		{
//			*dest++='\0';
//		}
//		return start;
//	}
//}
//int main()
//{
//
//	char arr1[30]="ab\0xxxxxxxxx";
//	char arr2[]="klmno";
//	my_strncpy(arr1,arr2,3);
//	printf("%s\n",arr1);
//	system("pause");
//	return 0;
//}

//strncmp字符串比较
//int strncmp(const char* s1,const char* s2,int count)
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	const char *p1="abcdef";
//	const char *p2="acbdefg";
//	int ret=strncmp(p1,p2,1);
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}


//strstr查找一个子字符串
//char* ststr(const char* s1,const char* s2)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
char* my_strstr(const char* p1, const char* p2)
{
	char* s1=NULL;
	char* s2=NULL;
	char* cur=(char*)p1;
	assert(p1!=NULL);
	assert(p2!=NULL);
	
	if(*p2=='\0');
	{
		return ((char*)p1);
	}
	while(*cur)
	{
		s1=cur;
		s2=(char *)p2;
		while((*s1!='\0')&&(*s2!='\0')&&(*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if(*s2=='\0')
		{
			return cur;//找到子串
		}
		if(*s1=='\0')
		{
			return NULL;
		}
		cur++;
	}
	return NULL;//找不到子串
}
int main()
{
	char* p1="abcdefg";
	char* p2="def";
	char* ret=my_strstr(p1,p2);
	if(ret==NULL)
	{
		printf("子串不存在\n");
	}
	else
	{
		printf("%s\n",ret);
	}
	system("pause");
	return 0;
}