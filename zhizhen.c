#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
	char name[20];
	short age;
	char hao[15];
	char sex[5];
};//struct Ҫ�������Ϸֺţ�
int main()
{
	//���ýṹ������-����һ�������͵Ľṹ�����
	//��ӡ�ṹ����Ϣ
	struct student zhang={"zhnag",21,"1880910T02552","nan"};
	strcpy(zhang.name,"wang");//�����������������ƣ�Ҫ��ı�Ļ�Ҫ��strcpy-string copy- �⺯����string.h
	strcpy(zhang.hao,"1880910T02566");
	zhang.age=18;//���ڱ������޸Ŀ���ֱ���޸�
	struct student* p=&zhang;//ȡ�����zhang�ĵ�ַ
	//.Ϊ�ṹ��Ա���ʲ�����
	printf("%s\n",(*p).name);//��ָ���еĵ�ַ��ʾ
	//->������
	printf("%s\n",p->name);//Ҳ������ָ����ô��ʾ
	printf("%s\n",zhang.name);//���������ʽ
	printf("%d\n",zhang.age);
	printf("%s\n",zhang.hao);

 	system("pause");
	return 0;
}