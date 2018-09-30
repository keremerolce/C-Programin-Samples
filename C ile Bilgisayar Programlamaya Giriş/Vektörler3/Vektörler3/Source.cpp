#include <stdio.h>

#define UZUNLUK 10

void kokteylsiralamayap(int *);

int main()
{
	int i,dizi[UZUNLUK];

	printf("Dizi Elemanlarini Giriniz:\n");
	fflush(stdout);

	for (i = 0; i < UZUNLUK; i++)
	{
		scanf("%d",&dizi[i]);
	}

	printf("Dizi Baslangic Durumu    :");
	fflush(stdout);

	for (i = 0; i < UZUNLUK; i++)
	{
		printf("%4d",dizi[i]);
	}
	kokteylsiralamayap(dizi);



	printf("\nDizi Siralama Durumu    :");

	for (i = 0; i < UZUNLUK; i++)
	{
		printf("%4d",dizi[i]);
	}


	return 0;
}

void kokteylsiralamayap(int *dizi){
	int i,durum,geciciEleman;

	do
	{
		durum=0;
		for (i = 0; i < UZUNLUK-1; i++)
		{
			if (dizi[i-1]>dizi[i])
			{
				geciciEleman=dizi[i-1];
				dizi[i-1]=dizi[i];
				dizi[i]=geciciEleman;
				durum=1;
			}
		}
		for (i = 0; i < UZUNLUK; i++)
		{
			if (dizi[i-1]>dizi[i])
			{
				geciciEleman=dizi[i-1];
				dizi[i-1]=dizi[i];
				dizi[i]=geciciEleman;
				durum=1;
			}
		}
	} while (durum);


}





