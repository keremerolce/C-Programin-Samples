#include <stdio.h>

int main()
{
	int birinciSayi,�kinciSayi;
	printf("Birinci sayinin degeri giriniz");
	scanf("%d",&birinciSayi);
	printf("�kinci sayinin degeri giriniz");
	scanf("%d",&�kinciSayi);

	if (birinciSayi<�kinciSayi)
	{
		printf("birinci sayi kucuk");
	}
	else
	{
		printf("ikinci sayi kucuk");
	}
	return 0;
}