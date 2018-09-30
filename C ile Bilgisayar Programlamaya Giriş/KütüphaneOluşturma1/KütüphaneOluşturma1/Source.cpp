#include <stdio.h>
#include "Kare.h"

int main()
{
	int KareKenarUzunlugu,kareCevresi,kareAlaný;

	printf("Karenin Kenar Uzunlugunu Giriniz: ");
	fflush(stdout);
	scanf("%d",&KareKenarUzunlugu);

	kareCevresi=kareCevresiHesapla(KareKenarUzunlugu);
	kareAlaný=kareAlanýHesapla(KareKenarUzunlugu);

	printf("Kenar Uzunlugu %d Olan Karenin Cevresi : %d\n",KareKenarUzunlugu,kareCevresi);
	printf("Kenar Uzunlugu %d Olan Karenin Alaný :%d\n",KareKenarUzunlugu,kareAlaný);

	return 0;
}