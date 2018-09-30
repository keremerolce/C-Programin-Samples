#include <stdio.h>
#include <stdlib.h>

void diziYazdýr(int * dizi, int elemansayi);

int main()
{
	int *sayiDizisi;
	int sayi;
	/*Kullanýcýya kaç adet sayý gireceðini soralým*/
	printf("Eleman Sayisi Kac adet olacak:");
	scanf("%d",&sayi);

	/*Kullanýcýnýn girdiði sayý kadar int tutacak bellek alanýný calloc ile oluþturalým*/
	sayiDizisi=(int *) calloc(sayi,sizeof(int));
	

	//calloc sonrasý dizi içeriðini yazdýðýmýzda tüm elemanlarýn sýnýflandýðýný görürüz
	printf("\n------------------------------\n");
	printf("Calloc sonucu olusan dizinin elamanlari\n");
	printf("--------------------------------\n");
	diziYazdýr(sayiDizisi,sayi);

	//dizi elemanlarýna 5 deðerini atayalým
	printf("\n------------------------------\n");
	printf("Dizi elemanlarina 5 degerini atayalim \n");
	printf("--------------------------------\n");

	int i;
	for (i = 0; i < sayi; i++)
	{
		sayiDizisi[i]=5;	
	}
	diziYazdýr(sayiDizisi,sayi);

	/*Dizinin boyutunu ralloc ile dinamik olarak arttýralým ve yazdýralým.Ýlk 5 elemanýn deðerinin deðiþmediðini görebilirsiniz*/

	sayi=10;
	realloc(sayiDizisi,sayi * sizeof(int));
	printf("\n------------------------------\n");
	printf("realloc sonucu olusan dizinin elemanlari \n");
	printf("--------------------------------\n");
	diziYazdýr(sayiDizisi,sayi);

	free(sayiDizisi);

	return 0;
}
void diziYazdýr(int * dizi,int elemanSayisi)
{
	int i;
	for (i = 0; i < elemanSayisi; i++)
	{
		printf("Dizi[%d]=%d\n",i,dizi[i]);
	}
}