#include <stdio.h>

#define Satir 2
#define Sutun 5

int main()
{
	int A[Satir][Sutun]={{1,3,5,7,9},{11,13,15,17,19}};

	int B[Satir][Sutun]={{2,4,6,8,10},{12,14,16,18,20}};

	int C[Satir][Sutun];

	int i,j;

	printf("Matrislerin Toplami:\n");
	for (i = 0; i < Satir; i++)
	{
		for (j = 0; j < Sutun; j++)
		{
			C[i][j]=A[i][j]+B[i][j];
			printf("%4d",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}