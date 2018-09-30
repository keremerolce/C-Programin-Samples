#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double *kareKokHesapla(double *dizi,int boyut);

int main()
{
	int i;
	double birinciDizi[5]={1.0,4.0,9.0,16.0,25.0};
	double *karekokDizi;
	printf("Dizinin Ilk Durumu  :");

	for (i = 0; i < 5; i++)
	{
		printf("%lf",birinciDizi[i]);
	}

	printf("\n");

	karekokDizi=kareKokHesapla(birinciDizi,5);

	printf("Elemanlarin Karekokunun Hesapladigi Dizi   :");

	for (i = 0; i < 5; i++)
	{
		printf("%lf",karekokDizi[i]);
	}
	printf("\n");
}
double *kareKokHesapla(double *dizi,int boyut)
{
	int i;
	static double *kDizi;
	kDizi=(double *) calloc(boyut,sizeof(double));

	if (kDizi==NULL)
	{
		return NULL;
	}
	for (i = 0; i < boyut; i++)
	{
		kDizi[i]=sqrt(dizi[i]);
	}
	return kDizi;
}