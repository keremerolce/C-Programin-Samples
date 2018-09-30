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

	printf("Olu�turaca�iniz matrisin satir sayisini giriniz:");
	scanf("%d",&satirSayisi);

	printf("Olu�turaca�iniz matrisin s�tun sayisini giriniz");
	scanf("%d",&sutunSayisi);
	/*Bir matrisi satir say�s� kadar tek boyutlu diziymi� gibi d���nebiliriz �rne�in 3x4 l�k bir matris i�in 3 adet sat�r ba�� vard�r ve bunlar�n
	her biri ilgili sat�r dizisine i�aret etmelidir. Diziye i�aret eden i�aret�iler iki boyutludur dolay�s�yla int** ifadesi buradan gelir.A�a��da
	sat�r ba�lar�n� tutacak dizi i�in yer ayr�lm��t�r*/

	matris=(int **)malloc(sizeof(int *) * satirSayisi);

	/*Yukar�da sat�r ba�lar� i�in yer ay�rm��t�k burada ise her bir sat�r ba�� i�in sutunSayisi kadar yer ay�rmam�z gerekli ki matrisin her bir
	eleman�n� depolayacak kadar bellek alan�m�z olsun. Her bir sat�r i�in s�tun say�s� kadar yer ay�ral�m.*/
	int i,j;
	for ( i = 0; i < satirSayisi; i++)
	{
		matris[i]=(int *) malloc(sizeof(int) * sutunSayisi);
	}

	printf("-----------------------------------\n");
	printf("Matris i�in Elemanlar� giriniz:\n");
	printf("-----------------------------------\n");

	for ( i = 0; i < satirSayisi; i++)
	{
		for ( j = 0; j < sutunSayisi; j++)
		{
			printf("Matris [%d][%d] = ",i,j);
			scanf("%d",&matris[i][j]);
		}
	}
	/*matrisYazdir fonksiyonunu kullanarak matrisimizin de�erlerini konsola yazd�ral�m*/
	printf("-----------------------------------\n");
	printf("Girdi�iniz matris: \n");
	printf("-----------------------------------\n");
	matrisYazdir(matris,satirSayisi,sutunSayisi);



	printf("-----------------------------------\n");
	printf("Girdi�iniz matrisin transpozu: \n");
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