#include <stdio.h>
void birinciFonksiyon(int x);
void ikinciFonksiyon(int *x);

int mani()
{
	int sayi=13;
	int *sayipointer;
	sayipointer=&sayi;

	printf("Sayýnýn Degeri:\n");
	printf("Fonksiyonlarý Cagirilmadan Once    :%d\n",sayi);

	birinciFonksiyon(sayi);
	printf("Birinci Fonksiyon Cagirildikten Sonra : %d\n",sayi);

	ikinciFonksiyon(sayipointer);
	printf("Ikinci Fonksiyon Cagirildiktan Sonra : %d\n",sayi);

	return 0;
}

void birinciFonksiyon(int x)
{
	x=43;
	printf("Birinci Fonksiyon Icerisinde : %d\n",x);
}

void ikinciFonksiyon(int *x)
{
	*x=73;
	printf("Ikinci Fonksiyon Icerisinde : %p\n",*x);
}