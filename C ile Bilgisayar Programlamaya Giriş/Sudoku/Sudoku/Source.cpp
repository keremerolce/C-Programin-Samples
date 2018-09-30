#include <stdio.h>
#define uzunluk 9

int satirkontrole(int sudo[uzunluk][uzunluk]);
int sutunkontrole(int sudo[uzunluk][uzunluk]);
int hucrekontrole(int sudo[uzunluk][uzunluk]);

int main()
{
	int sudosu[uzunluk][uzunluk]={{9,4,1,3,2,6,7,5,8},{6,3,7,1,5,8,2,4,9},{8,2,5,4,9,7,6,1,3},{2,6,8,7,1,4,3,9,5},{1,7,4,5,3,9,8,6,2},{3,5,9,6,8,2,4,7,1},{4,1,3,2,6,5,9,8,7},{5,9,6,8,7,3,1,2,4},{7,8,2,9,4,1,5,3,6}};

	int i,j,satirdogrumu,sutundogrumu,hucredogrumu,dogru;

	printf("Sudoku Oyunu Baslasin:\n");
	satirdogrumu=satirkontrole(sudosu);
	sutundogrumu=sutunkontrole(sudosu);
	hucredogrumu=hucrekontrole(sudosu);

	if (satirdogrumu==1&&sutundogrumu==1&&hucredogrumu==1)
	{
		dogru=1;
	}
	else
	{
		dogru=0;
	}
	for (i = 0; i < uzunluk; i++)
	{
		for (j = 0; j < uzunluk; j++)
		{
			printf("%d\t",sudosu[i][j]);
		}
		printf("\n");
	}
	if (dogru==1)
	{
		printf("Oyunun Cozumu Dogru.");
	}
	else
	{
		printf("Oyunun Cozumu Yanlis");
	}
	return 0;
}

int satirkontrole(int sudo[uzunluk][uzunluk])
{
	int i,j,k,kontroldegeri,dogrulukdurumu;
	for (i = 0; i < uzunluk; i++)
	{
		for (j = 0; j < uzunluk; j++)
		{
			kontroldegeri=sudo[i][j];
			for (k = 0; k < uzunluk; k++)
			{
				if (kontroldegeri==sudo[i][k]&& k!=j)
				{
					dogrulukdurumu=0;
				}
				else
				{
					dogrulukdurumu=1;
				}
			}
		}
	}
	return dogrulukdurumu;
}


int sutunkontrole(int sudo[uzunluk][uzunluk])
{
	int i,j,k,kontroldegeri ,dogrulukdurumu;

	for (i = 0; i < uzunluk; i++)
	{
		for (j = 0; j < uzunluk; j++)
		{
			kontroldegeri=sudo[i][j];
			for (k = 0; k < uzunluk; k++)
			{
				if (kontroldegeri==sudo[k][j]&&i!=k)
				{
					dogrulukdurumu=0;
				}
				else
				{
					dogrulukdurumu=1;
				}
			}
		}
	}
	return dogrulukdurumu;
}

int hucrekontrole(int sudo[uzunluk][uzunluk])
{
	int i,j,k,l,kontroldegeri,dogrulukdurumu,satirhücre,sutunhücre;

	for (i = 0; i < uzunluk; i++)
	{
		for (j = 0; j < uzunluk; j++)
		{
			kontroldegeri=sudo[i][j];
			satirhücre=i/3;
			sutunhücre=j/3;
			for (k = (satirhücre*3); k < ((satirhücre*3)+3); k++)
			{
				for (l = (sutunhücre*3); l <((sutunhücre*3)+3) ; l++)
				{
					if (kontroldegeri==sudo[k][l]&&i!=k&&j!=l)
					{
						dogrulukdurumu=0;
					}
					else
					{
						dogrulukdurumu=1;
					}
				}
			}
		}
	}

	return dogrulukdurumu;
}