#include <stdio.h>

int main()
{
	int birinciSayi,�kinciSayi;

	printf("Birinci Sayinin Degerini Giriniz:");
	fflush(stdout);
	scanf("%d",&birinciSayi);

	printf("�kinci Sayinin Degerini Giriniz:");
	fflush(stdout);
	scanf("%d",&�kinciSayi);

	if (birinciSayi==�kinciSayi)
	{
		printf("Sayilar Birbirine Esit");
	}
	else
	{
		if (birinciSayi<�kinciSayi)
		{
			printf("Birinci Sayi Kucuk");
		}
		else
		{
			printf("�kinci Sayi Kucuk");
		}
	}
}
