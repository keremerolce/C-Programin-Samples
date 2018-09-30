#include <stdio.h>

#define Satir 3
#define Sutun 5

int main()
{
	int matris[Satir][Sutun]={{1,2,3,4,5},{5,6,7,8,9},{10,11,12,13,14}};

	int i,j;
	int toplam=0;

	for (i = 0; i < Satir; i++)
	{
		for (j = 0; j < Sutun; j++)
		{
			toplam=toplam+matris[i][j];
		}
	}
	printf("Matris Elemanlarinin Toplami: %d",toplam);
	return 0;
}