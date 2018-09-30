#include <stdio.h>
#include <stdlib.h>

int main()
{
	float bolum, bolen,bolmesonuc;
	printf("Bolmek istediginniz sayiyi giriniz:");
	fflush(stdout);
	scanf("%f",&bolum);

	printf("Bolen sayiyi giriniz:");
	fflush(stdout);
	scanf("%f",&bolen);

	if (bolen!=0)
	{
		bolmesonuc=bolum/bolen;
		printf("Bölme Sonucu=%f",bolmesonuc);
	}
	else
	{
		printf("Sifira Bolme Hatasi");
		exit(EXIT_FAILURE);
	}
}