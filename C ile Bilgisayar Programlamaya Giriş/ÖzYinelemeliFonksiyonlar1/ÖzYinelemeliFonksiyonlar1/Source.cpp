#include <stdio.h>

//Fonksiyon Prototip

int faktoriyelHesapla(int n);

int main()
{
	int sayi,faktoriyel;

	printf("Faktoriyeli Hesaplanacak Sayiyi Giriniz: ");
	fflush(stdout);
	scanf("%d",&sayi);

	faktoriyel=faktoriyelHesapla(sayi);

	printf("%d!=%d",sayi,faktoriyel);

	return 0;
}

//faktoriyel Hesabý Yapan Özyinelemeli Fonksiyon

int faktoriyelHesapla( int n)
{
	int faktor;

	if (n<=1)
	{
		faktor=1;
	}
	else
	{
		faktor=n*faktoriyelHesapla(n-1);
	}

	return faktor;
}