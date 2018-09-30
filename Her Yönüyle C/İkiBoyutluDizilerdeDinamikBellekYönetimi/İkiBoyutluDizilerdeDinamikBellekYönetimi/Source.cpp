#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//fonksiyon prototipleri

void matrisYazdir(int **,int , int);
void transpozYazdir(int **, int , int);

int main()
{
	setlocale(LC_ALL,"tr");
	int **matris;
	int satirSayisi,sutunSayisi;

	printf("Oluþturacaðiniz matrisin satir sayisini giriniz:");
	scanf("%d",&satirSayisi);

	printf("Oluþturacaðiniz matrisin sütun sayisini giriniz");
	scanf("%d",&sutunSayisi);
	/*Bir matrisi satir sayýsý kadar tek boyutlu diziymiþ gibi düþünebiliriz örneðin 3x4 lük bir matris için 3 adet satýr baþý vardýr ve bunlarýn
	her biri ilgili satýr dizisine iþaret etmelidir. Diziye iþaret eden iþaretçiler iki boyutludur dolayýsýyla int** ifadesi buradan gelir.Aþaðýda
	satýr baþlarýný tutacak dizi için yer ayrýlmýþtýr*/

	matris=(int **)malloc(sizeof(int *) * satirSayisi);

	/*Yukarýda satýr baþlarý için yer ayýrmýþtýk burada ise her bir satýr baþý için sutunSayisi kadar yer ayýrmamýz gerekli ki matrisin her bir
	elemanýný depolayacak kadar bellek alanýmýz olsun. Her bir satýr için sütun sayýsý kadar yer ayýralým.*/
	int i,j;
	for ( i = 0; i < satirSayisi; i++)
	{
		matris[i]=(int *) malloc(sizeof(int) * sutunSayisi);
	}

	printf("-----------------------------------\n");
	printf("Matris için Elemanlarý giriniz:\n");
	printf("-----------------------------------\n");

	for ( i = 0; i < satirSayisi; i++)
	{
		for ( j = 0; j < sutunSayisi; j++)
		{
			printf("Matris [%d][%d] = ",i,j);
			scanf("%d",&matris[i][j]);
		}
	}
	/*matrisYazdir fonksiyonunu kullanarak matrisimizin deðerlerini konsola yazdýralým*/
	printf("-----------------------------------\n");
	printf("Girdiðiniz matris: \n");
	printf("-----------------------------------\n");
	matrisYazdir(matris,satirSayisi,sutunSayisi);



	printf("-----------------------------------\n");
	printf("Girdiðiniz matrisin transpozu: \n");
	printf("-----------------------------------\n");
	transpozYazdir(matris,satirSayisi,sutunSayisi);


	for (i = 0; i < satirSayisi; i++)
	{
		free(matris[i]);
	}



	return 0;
}


void matrisYazdir(int ** matris, int satir,int sutun)
{

	int i,j;
	for (i = 0; i < satir; i++)
	{
		for ( j = 0; j < sutun; j++)
		{
			printf("%5d",matris[i][j]);
		}
		printf("\n");
	}
}

void transpozYazdir(int **matris,int satir,int sutun)
{
	int i,j;
	for (i = 0; i < sutun; i++)
	{
		for ( j = 0; j < satir; j++)
		{
			printf("%5d",matris[j][i]);
		}
		printf("\n");
	}
}