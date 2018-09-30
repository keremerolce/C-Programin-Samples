#include <stdio.h>
#include <locale.h>

//Fonksiyon Prototipleri

int bolunebiliyorMu(int,int);
int obebBul(int,int);
int okekBul(int,int);

int main()
{
	setlocale(LC_ALL, "Turkish"); 
	int sayi1,sayi2;
	printf("Birinci Sayiyi Giriniz:");
	scanf("%d",&sayi1);

	printf("Ýkinci Sayiyi Giriniz");
	scanf("%d",&sayi2);

	int obeb=obebBul(sayi1,sayi2);
	int okek=okekBul(sayi1,sayi2);

	printf("Obeb(%d,%d) = %d\n",sayi1,sayi2,obeb);
	printf("Okek(%d,%d) = %d\n",sayi1,sayi2,okek);

	return 0;
}
int bolunebiliyorMu(int bolunen,int bolen)
{
	if (bolunen%bolen==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int obebBul(int sayi1,int sayi2)
{
	int kucukSayi=sayi1;
	if (sayi2<kucukSayi)
	{
		kucukSayi=sayi2;
	}
	int i;

	for (i = kucukSayi; i > 0; i--)
	{
		if (bolunebiliyorMu(sayi1,i)==1&&bolunebiliyorMu(sayi2,i)==1)
		{
			return i;
		}
	}

	return 0;
}

int okekBul(int sayi1,int sayi2)
{
	int buyukSayi=sayi1;
	int kucukSayi=sayi2;

	if (sayi2<buyukSayi)
	{
		buyukSayi=sayi2;
		kucukSayi=sayi1;
	}

	if (bolunebiliyorMu(buyukSayi,kucukSayi))
	{
		return buyukSayi;
	}

	int i;
	for (i = buyukSayi*2;; i+=buyukSayi)
	{
		if (bolunebiliyorMu(i,sayi1)==1&&bolunebiliyorMu(i,sayi2)==1)
		{
			return i;
		}
	}

	return 0;
}