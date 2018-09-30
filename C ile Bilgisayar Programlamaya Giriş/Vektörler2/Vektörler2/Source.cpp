#include <stdio.h>

#define UZUNLUK 10

void kabarcikSiralamasYap(int *dizi);

int main()
{
	int i;
	int Dizi[UZUNLUK]={90,-160,270,125,685,800,743,315,347,823};


	printf("Dizi Baslangic Durumu    :");
	for (int i = 0; i < UZUNLUK; i++)
	{
		printf("%4d",Dizi[i]);
	}

	kabarcikSiralamasYap(Dizi);

	printf("\nDizi Siralama Durumu     :");

	for (i = 0; i < UZUNLUK; i++)
	{
		printf("%4d",Dizi[i]);
	}
	printf("\n\n");



	return 0;
}


void kabarcikSiralamasYap(int *dizi){
	int i,j,geciciEleman;
	for ( i = 0; i < UZUNLUK-1; i++)
	{
		for ( j = 0; j< UZUNLUK-1; j++)
		{
			if (dizi[j]>dizi[j+1])
			{
				geciciEleman=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=geciciEleman;
			}
		}
	}
}