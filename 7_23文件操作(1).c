//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	char buf[1024]={0};
//	FILE* pf=fopen("test.txt","w");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fputs("hello\n",pf);
//	fputs("world\n",pf);
//	fclose(pf);
//	pf=NULL;
//	system("pause");
//	return 0;
//}


//int main()
//{
//	//�Ӽ����϶�ȡһ���ı���Ϣ
//	char buf[1024]={0};
//	fgets(buf,1024,stdin);//�ӱ�׼�����ȡ
//	fputs(buf,stdout);
//	//�ȼ���
//	/*gets(buf);
//	puts(buf);*/
//	system("pause");
//	return 0;
//}


//�и�ʽ������д��ȥ
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s={0};
//	//FILE* pf=fopen("test.txt","r");
//	//if(pf==NULL);
//	//{
//	//	return 0;
//	//}
//	////��ʽ������ʽд�ļ�
//	////fprintf(pf,"%d %f %s",s.n,s.score,s.arr);
//	////��ʽ������������
//	//fscanf(pf,"%d %f %s",&(s.n),&(s.score),&(s.arr));
//	//printf("%d %f %s",s.n,s.score,s.arr);
//	//fclose(pf);
//	//pf=NULL;
//
//
//	fscanf(stdin,"%d %f %s",&(s.n),&(s.score),&(s.arr));
//	fprintf(stdout,"%d %f %s",&(s.n),&(s.score),&(s.arr));
//	system("pause");
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct S
{
	int n;
	float b;
	char c[10];
};
int main()
{
	struct S s={100,3.14f,"bit"};
	struct S tmp={0};
	char buf[1024]={0};
	//�Ѹ�ʽ��������ת�����ַ����洢��buf��
	sprintf(buf,"%d %f %s",s.n,s.b,s.c);
	/*printf("%s\n",buf);*/
	sscanf(buf,"%d %f %s",&(s.n),&(s.b),&(s.c));
	printf("%d %f %s\n",tmp.n,tmp.b,tmp.c);
	system("pause");
	return 0;
}
