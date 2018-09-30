#include <stdio.h>

#define satir 2
#define sutun 4

int main()
{
	int matris[satir][sutun]={{1,3,5,7},{2,4,6,8}};

	int i,j;

	printf("Iki Boyutlu Dizi:\n");
	for (i = 0; i < satir; i++)
	{
		for (j = 0; j < sutun; j++)
		{
			printf("%4d",matris[i][j]);
		}
		printf("\n");
	}

	return 0;
}