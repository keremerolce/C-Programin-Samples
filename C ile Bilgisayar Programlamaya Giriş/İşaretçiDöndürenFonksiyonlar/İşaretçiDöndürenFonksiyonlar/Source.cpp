#include <stdio.h>
double* enbuyukAdresiBul(double dizi[],int n);

int main()
{
	double birDizi[6]={1.5,3.7,7.9,3.4,0.9,-1.5};
	double *isaretci;
	int i;

	printf("Indis\tEleman\t         Adresi\n");
	for (i = 0; i < 6; i++)
	{
		printf("%d\t%lf\t%p\n",i,birDizi[i],&birDizi[i]);
	}

	isaretci=enbuyukAdresiBul(birDizi,6);

	printf("Dizideki En Buyuk Deger     :%lf\n",*isaretci);
	printf("Dizideki En Buyuk Degerin saklandigi adres     :%p\n",isaretci);

	return 0;
}

double* enbuyukAdresiBul(double dizi[],int n)
{
	double enBuyukDeger=dizi[0];
	double *enBuyukDegerinAdresi=&dizi[0];
	int i;

	for (i = 0; i < n; i++)
	{
		if (dizi[i]<enBuyukDeger)
		{
			enBuyukDeger=dizi[i];
			enBuyukDegerinAdresi=&dizi[i];
		}
	}
	return enBuyukDegerinAdresi;
}