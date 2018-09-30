#include <stdio.h>
#include <stdlib.h>

int main()
{
	int **matris;
	int satir,kolon;
	int s,k;
	int i;

	printf("Matrisin Satir Sayisi Giriniz: ");
	fflush(stdout);
	scanf("%d",&satir);

	printf("Matrisin Sutun Sayisi Giriniz: ");
	fflush(stdout);
	scanf("%d",&kolon);

	matris=(int **) calloc(satir,sizeof(int));

	for (i = 0; i < satir; i++)
	{
		matris[i]=(int *)calloc(kolon,sizeof(int));
	}

	for ( s = 0; s < satir; s++)
	{
		for (k = 0; k < kolon; k++)
		{
			printf("Matrisin matris[%d][%d] Elemanini Giriniz= ",s,k);
			fflush(stdout);
			scanf("%d",&matris[s][k]);
		}
	}

	printf("\nGirilen Matris:\n");
	for (s = 0; s < satir; s++)
	{
		for (k = 0; k < kolon; k++)
		{
			printf("%4d",matris[s][k]);
		}
		printf("\n");
	}
	for (i = 0; i < satir; i++)
	{
		free((void *) matris[i]);
	}

	free((void *)matris);
	
	return (0);
}