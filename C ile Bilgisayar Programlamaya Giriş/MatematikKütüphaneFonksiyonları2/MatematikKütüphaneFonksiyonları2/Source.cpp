#include <stdio.h>
#include <math.h>

int kareninAlanınıHesapla(int k);

int main()
{
	int kareAlan;
	double kenar;
	printf("Karenin Kenar Uzunlugu Giriniz: ");
	fflush(stdout);
	scanf("%d",kenar);
	

	kareAlan=kareninAlanınıHesapla(kenar);
	printf("Karenin Alanı=%d",kareAlan);
	return 0;
}

int kareninAlanınıHesapla(double k)
{
	int alan;

	alan=pow(k,2);
	return alan;
}