
//Çó1£¡+2+3£¡+4£¡+.....+n!
#include <stdio.h>
#include <stdlib.h>
 int main()
 {
	int n=0;
	int i=0;
	int ret=0;
	int sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int j=0;
		int z=1;
		for(j=1;j<=i;j++)
		{
			z *= j;
		}
		sum+=z;
	}
	printf("%d\n",sum);
	 system("pause");
	 return 0;
 }