#include <stdio.h>
#include <math.h>

int kareninAlan�n�Hesapla(int k);

int main()
{
	int kareAlan;
	double kenar;
	printf("Karenin Kenar Uzunlugu Giriniz: ");
	fflush(stdout);
	scanf("%d",kenar);
	

	kareAlan=kareninAlan�n�Hesapla(kenar);
	printf("Karenin Alan�=%d",kareAlan);
	return 0;
}

int kareninAlan�n�Hesapla(double k)
{
	int alan;

	alan=pow(k,2);
	return alan;
}