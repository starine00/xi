#include <stdio.h>
#include <stdlib.h>

 int main()
 {
	 int ch =0;
	 int ret =0;
	 char password[20]={0};
	 printf("���������룺>");
	 scanf("%s",password);
	 //��������ʣ��һ����\n��
	 //��ȡһ�¡�\n��
	 while((ch=getchar())!='\n')
	 {
		;
	 }//�ڴ˴�ִ��ѭ����֪����ȡ��\nֹͣѭ����ʼ��һ��
	 printf("��ȷ�ϣ�Y/N��:>");
	 ret = getchar();	
	 if(ret =='Y')
	 {
		printf("ȷ�ϳɹ�\n");
	 }
	 else
	 {
		printf("����ȷ��\n");
	 }
	 system("pause");
	 return 0;
 }
	// int ch = 0;
	// //ctrl+Z ������ֹgetchar��������
	// while((ch=getchar())!=EOF)
	// {
	//	putchar(ch);
	// }

	// system("pause");
	// return 0;
 //}



	// int i=1;
	// while(i<=10)
	// {
	//	 if (i==5)
	//		 continue;//��ִֹ�к���Ĵ��룬���ж��´������Ƿ�����ִ���´�ѭ��
	//	 printf("%d\n",i);
	//	 i++;
	// }

	// system("pause");
	// return 0;
 //}




 //int a=11;
	// int b=10;
	// int* q=&b;
	// int* p=&a;
	// printf("%d\n",a);//���a�ĵ�ַ
	// printf("%d\n",b);//���b�ĵ�ַ
	// printf("%d\n",a);//���a��ֵ
	// *p=*p+1;//ָ����ָλ�õ���Ŀ���
	// printf("%d\n",*p);//ת��Ϊ10����