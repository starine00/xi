//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	int a=10000;
//	//����·����д����\\������ֹת��\
//
//	FILE* pf=fopen("C:\\Clanguage\\clianxi\\7_20�ļ�����\\7_20�ļ�����\\test.txt","wb");
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




//fgetc�ַ����뺯��
//fputs�ַ��������
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
//	//д�ļ�
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
//	//���ļ�
//	printf("%c",fgetc(pfread));
//	printf("%c",fgetc(pfread));
//	printf("%c",fgetc(pfread));
//	fclose(pfread);
//	pfread=NULL;
//	system("pause");
//	return 0;
//}

//�Ӽ����϶���
//����Ļ�����
int main()
{
	int ch=fgetc(stdin);
	fputc(ch,stdout);
	system("pause");
	return 0;
	
}