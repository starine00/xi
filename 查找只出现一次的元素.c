#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
	//1^1^2^2^3^3^4^4^5^5^6
	//5^5=0
	//0^5=5
	//1^1^5=0
	//^������㽻����
	int arr[]={1,2,3,4,5,6,1,2,3,4,5};
	int i = 0;
	int sz=sizeof(arr) / sizeof(arr[0]);//��������ĸ���
	for (i=0;i < sz;i++)
	{
		int count = 0;//������
		int j=0;
		for (j=0;j < sz;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if (count==1)
		{
			printf("%d\n",arr[i]);
			break;
		}
		}
	system("pause");
	return 0;
}
