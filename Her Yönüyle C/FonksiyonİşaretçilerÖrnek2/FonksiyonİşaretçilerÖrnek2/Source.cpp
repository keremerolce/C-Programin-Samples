#include <stdio.h>
int faktoriyelHesapla(int);

int main()
{
	int sayi=0;
	/*int parametresi alan ve int d�nd�ren fonkPtr isimli bir fonksiyon i�aret�isi tan�mlayal�m*/
	int (*fontPtr)(int);
	/*i�aret�inin d�n�� tipi ve parametreleri fonksiyonumuzla uyumlu olmal�d�r. i�aret�iye
	fonksiyonun adresini kopyalayal�m.Bu i�lem sonras� art�k fonksiyonumuzu fonkPtr i�aret�isi
	arac�l���yla �a�r�labilir durumda oluruz
	*/
	fontPtr=faktoriyelHesapla;
	printf("Faktoriyel bulunacak sayiyi giriniz:");
	scanf("%d",&sayi);
	/*Fonksiyonu i�aret�i arac�l���yla �a��ral�m:
	a�a��daki ifade fonkPtr arac�l���yla faktoriyelHesapla fonksiyonuna �a�r� yapar*/
	int faktoriyel=(* fontPtr)(sayi);
	//Bulunan sonucu yazal�m

	printf("%d\n",faktoriyel);
	return 0;
}
int faktoriyelHesapla(int sayi)
{
	//s�rf ve s�f�rdan b�y�k say�lar�n faktoriyeli a�a��daki gibi hesaplan�r
	int sonuc=1;
	if (sayi<1)
	{
		return sonuc;
	}
	for (int i = sayi; i >=1 ; i--)
	{
		sonuc=sonuc*i;
	}
	return sonuc;
}