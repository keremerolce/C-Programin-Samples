#include <stdio.h>

#define Satir 2
#define Sutun 4
int main()
{
	int matris[Satir][Sutun]={{1,3,5,7},{2,4,6,8}};
	int i,j;
	printf("Dizinin Elemanlarini Giriniz:\n");
	for (i = 0; i < Satir; i++)
	{
		for (j = 0; j < Sutun; j++)
		{
			printf("matris[%d][%d] Elemanlarini Giriniz:",i,j);
			fflush(stdout);
			scanf("%d",&matris[i][j]);
		}
	}

	printf("Klavyeden Girilen Dizi:\n");
	for (i = 0; i < Satir; i++)
	{
		for (j = 0; j < Sutun; j++)
		{
			printf("%4d",matris[i][j]);
		}
		printf("\n");
	}
}