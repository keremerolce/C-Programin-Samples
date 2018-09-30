#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"tr");
	int sayi;
	int toplam=0;

	//kullan�c�dan ka� adet say� girilece�ini soral�m
	printf("Ka� adet sayi gireceksiniz:   ");
	scanf("%d",&sayi);
	/*Kullan�cadan girdi�i say� kadar int tutacak bellek alan� olu�tural�m*/
	int *sayiDizisi=(int *) malloc(sizeof(int) * sayi);

	int i;
	for (int i = 0; i < sayi; i++)
	{
		printf("%2d. eleman� giriniz:  ",i);
		//a�a��daki iki sat�rda i� yapar
		scanf("%d",sayiDizisi+i);
		//scanf("%d",sayiDizisi[i]);
	}
	/*sayiDizisinin ortalamas�n� bulmak i�in bu sefer dizi notasyonu kullanal�m*/

	for (int i = 0; i < sayi; i++)
	{
		toplam+=sayiDizisi[i];
	}
	float ortalama=(float)toplam/(float)sayi;
	printf("Girdiginiz dizinin ortalamasi:%2f\n",ortalama);

	/*Program� tamamlamadan �nce olu�turdu�umuz bellek alan�n� bo�altal�m*/
	free(sayiDizisi);

	return 0;
}