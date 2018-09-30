#include <stdio.h>
#include <stdlib.h>

void diziYazd�r(int * dizi, int elemansayi);

int main()
{
	int *sayiDizisi;
	int sayi;
	/*Kullan�c�ya ka� adet say� girece�ini soral�m*/
	printf("Eleman Sayisi Kac adet olacak:");
	scanf("%d",&sayi);

	/*Kullan�c�n�n girdi�i say� kadar int tutacak bellek alan�n� calloc ile olu�tural�m*/
	sayiDizisi=(int *) calloc(sayi,sizeof(int));
	

	//calloc sonras� dizi i�eri�ini yazd���m�zda t�m elemanlar�n s�n�fland���n� g�r�r�z
	printf("\n------------------------------\n");
	printf("Calloc sonucu olusan dizinin elamanlari\n");
	printf("--------------------------------\n");
	diziYazd�r(sayiDizisi,sayi);

	//dizi elemanlar�na 5 de�erini atayal�m
	printf("\n------------------------------\n");
	printf("Dizi elemanlarina 5 degerini atayalim \n");
	printf("--------------------------------\n");

	int i;
	for (i = 0; i < sayi; i++)
	{
		sayiDizisi[i]=5;	
	}
	diziYazd�r(sayiDizisi,sayi);

	/*Dizinin boyutunu ralloc ile dinamik olarak artt�ral�m ve yazd�ral�m.�lk 5 eleman�n de�erinin de�i�medi�ini g�rebilirsiniz*/

	sayi=10;
	realloc(sayiDizisi,sayi * sizeof(int));
	printf("\n------------------------------\n");
	printf("realloc sonucu olusan dizinin elemanlari \n");
	printf("--------------------------------\n");
	diziYazd�r(sayiDizisi,sayi);

	free(sayiDizisi);

	return 0;
}
void diziYazd�r(int * dizi,int elemanSayisi)
{
	int i;
	for (i = 0; i < elemanSayisi; i++)
	{
		printf("Dizi[%d]=%d\n",i,dizi[i]);
	}
}