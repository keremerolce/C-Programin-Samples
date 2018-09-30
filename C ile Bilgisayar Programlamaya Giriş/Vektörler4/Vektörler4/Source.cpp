#include <stdio.h>

#define uzunluk 10

int ikiliaramayap(int *liste,int bul);

int main()
{
	int pozisyon,ara;
	int dizi[uzunluk]={2,4,6,8,10,12,14,16,18,20};

	printf(" Dizide Aratacaginiz Sayi Degerini Giriniz: ");
	fflush(stdout);
	scanf("%d",&ara);

	pozisyon=ikiliaramayap(dizi,ara);

	if (pozisyon==-1)
	{
		printf("Aranan Eleman Dizide Bulunamamistir.");
	}
	else
	{
		printf(" Aranan Eleman Dizinin %d. Indisinde Bulunmustur.",pozisyon);
	}

	return 0;
}
int ikiliaramayap(int *liste,int bul)
{
	int i;
	int baslangýc=0;
	int bitis=uzunluk;
	
	while (baslangýc<=bitis)
	{
		i=(baslangýc+bitis)/2;

		if (liste[i]==bul)
		{
			return i;
		}
		else if(liste[i]>bul)
		{
			bitis=i-1;
		}
		else
		{
			baslangýc=i+1;
		}
	}

	return -1;
	
}
