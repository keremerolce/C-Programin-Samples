#include <stdio.h>

double ortalamaHesapla(double dizi[],int n);

int main()
{
	double birDizi[5]={1.7,2.9,4.1,6.7,8.9},ortalama;

	ortalama=ortalamaHesapla(birDizi,5);

	printf("Dizinin Elemanlarinin Toplaminin Ortalamasi = %21f\n",ortalama);

	return 0;
}

double ortalamaHesapla(double dizi[], int n)
{
	double *isaretci,toplam=0.0;

	int i;

	isaretci=dizi;   //isaretci=&dizi[0

	for (i = 0; i < n; i++)
	{
		toplam+=*(isaretci+i);
	}
	return (toplam/n);
}