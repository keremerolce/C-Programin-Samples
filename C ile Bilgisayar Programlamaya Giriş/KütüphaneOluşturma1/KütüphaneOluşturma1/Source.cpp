#include <stdio.h>
#include "Kare.h"

int main()
{
	int KareKenarUzunlugu,kareCevresi,kareAlan�;

	printf("Karenin Kenar Uzunlugunu Giriniz: ");
	fflush(stdout);
	scanf("%d",&KareKenarUzunlugu);

	kareCevresi=kareCevresiHesapla(KareKenarUzunlugu);
	kareAlan�=kareAlan�Hesapla(KareKenarUzunlugu);

	printf("Kenar Uzunlugu %d Olan Karenin Cevresi : %d\n",KareKenarUzunlugu,kareCevresi);
	printf("Kenar Uzunlugu %d Olan Karenin Alan� :%d\n",KareKenarUzunlugu,kareAlan�);

	return 0;
}