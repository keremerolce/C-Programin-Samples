#include <stdio.h>

int main()
{
	int birinciSayi,ÝkinciSayi;
	printf("Birinci sayinin degeri giriniz");
	scanf("%d",&birinciSayi);
	printf("Ýkinci sayinin degeri giriniz");
	scanf("%d",&ÝkinciSayi);

	if (birinciSayi<ÝkinciSayi)
	{
		printf("birinci sayi kucuk");
	}
	else
	{
		printf("ikinci sayi kucuk");
	}
	return 0;
}