#include <stdio.h>

int main()
{
	int birinciSayi,ÝkinciSayi;

	printf("Birinci Sayinin Degerini Giriniz:");
	fflush(stdout);
	scanf("%d",&birinciSayi);

	printf("Ýkinci Sayinin Degerini Giriniz:");
	fflush(stdout);
	scanf("%d",&ÝkinciSayi);

	if (birinciSayi==ÝkinciSayi)
	{
		printf("Sayilar Birbirine Esit");
	}
	else
	{
		if (birinciSayi<ÝkinciSayi)
		{
			printf("Birinci Sayi Kucuk");
		}
		else
		{
			printf("Ýkinci Sayi Kucuk");
		}
	}
}
