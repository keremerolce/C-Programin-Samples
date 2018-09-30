#include <stdio.h>

#define NOTSAYISI 10

void kullanicidanNotlariOku(int *,int);
double ortalamaBul(int *,int);

int main()
{
	int notlar[NOTSAYISI];
	int *p=notlar;
	//int *=&notlar[0];
	kullanicidanNotlariOku(p,NOTSAYISI);
	double ortalama=ortalamaBul(p,NOTSAYISI);

	printf("Girdiginiz degerlerin ortalamasi: %2f\n",ortalama);

	return 0;
}
void kullanicidanNotlariOku(int *p,int sayi)
{
	int i;
	for (i = 0; i < sayi; i++)
	{
		printf("%2d. sayiyi giriniz:",i+1);
		scanf("%d",p+i);
	}
}

double ortalamaBul(int *p,int sayi)
{
	int i;
	double toplam=0;
	for (i = 0; i < sayi; i++)
	{
		toplam+=*(p+i);
	}
	return (double)toplam/(double)sayi;
}