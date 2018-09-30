#include <stdio.h>
#define I 2
#define J 4
#define K 3

int main()
{
	int a[I][K]={{1,3,5},{19,17,15}};

	int B[K][J]={{2,4,6,8},{20,18,16,14},{32,34,36,38}};

	int c[I][J];

	int i,j,k,toplam;

	printf("Matrislerin Carpimi:\n");
	
	for (i = 0; i < I; i++)
	{
		for (j = 0; j < J; j++)
		{
			for (toplam = 0,k=0; k < K; k++)
			{
				toplam+=a[i][k]*B[k][j];
			}
			c[i][j]=toplam;
			printf("%4d",c[i][j]);
		}
		printf("\n");
	}
}