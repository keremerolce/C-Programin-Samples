#include <stdio.h>

#define N 2

int main()
{
	int A[N][N],B[N][N],C[N][N];

	int i,j,k,toplam;

	printf("A Matrisinin Elemanlarini Giriniz: \n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("A[%d][%d] Elemanlarini Giriniz: ",i,j);
			fflush(stdout);
			scanf("%d",&A[i][j]);
		}
	}
	printf("B Matrisinin Elemanlarini Giriniz: \n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("B[%d][%d] Elemanlarini Giriniz: ",i,j);
			fflush(stdout);
			scanf("%d",&B[i][j]);
		}
	}


	printf("A ve B Matrislerinin Carpimi:\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			for (toplam = 0,k=0; k < N;k++)
			{
				toplam+=A[i][k]+B[k][j];
			}
			C[i][j]=toplam;
			printf("%4d",C[i][j]);
		}
		printf("\n");
	}

	return 0;
}