
//���Թػ�
//#include <stdio.h>
//#include <stdlib.h>
//#include <string>
//
//int main()
//{
//	char input[20]={0};
//again:
//	//����60��ػ�  shutdown -s -t 60
//	system("shutdown -s -t 60");
//	printf("��ע���ػ�");
//	scanf("%s",&input);
//	if(strcmp(input,"������")==0)
//	{
//		system("shutdown -a");
//	}
//	else{
//		goto again;
//	}
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int menu()
//{
//	printf("**************************");
//	printf("*******1,����Ϸ   0,�˳���Ϸ*****");
//	printf("**************************");
//}
//
//void game()
//{
//	//���������
//	//������
//	int ret=0;
//	int guess=0;
//	ret =rand()%100+1;
//	while(1)
//	{
//	printf("�����֣�");
//	scanf("%d",&guess);
//	if(guess>ret)
//	{
//		printf("�´���\n");
//	}
//	else if(guess<ret)
//	{
//		printf("��С��\n");	
//	}
//	else
//		{
//			printf("�¶���\n");
//	    break;
//		}	
//	}
//}
//int main()
//{
//	int input=0;
//	srand((unsigned int)time(NULL));//ʱ�����Ϊ�������������ʼ��  
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("ѡ�����");
//			break;
//		}
//
//	}while (input);
//	system("pause");
//	return 0;
//}

//�����ֵ
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int arr[]={-1,-13,-5,-25,-7,-8,-9,-10};
//	int i=0;
//	int max=arr[0];//ע�⵱int max=0ʱ ���������Ǹ���ʱ ��������ֵΪ0�����
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	for(i=1;i<sz;i++)
//	{
//		if(arr[i]>max)
//		{
//			max=arr[i];
//		}
//	}
//	printf("max=%d\n",max);
//	system("pause");
//	return 0;
//}



//�������
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int i=0;
//	double sum=0.0;
//	int flag=1;
//	for(i=1;i<=100;i++)
//	{
//		sum+=flag*1.0/i;
//		flag=-flag;
//	}
//	printf("%lf\n",sum);
//	system("pause");
//	return 0;
//}