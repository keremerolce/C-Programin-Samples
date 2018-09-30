#include <stdio.h>


int main()
{
	int birinciSayi,ikinciSayi;
	scanf("%d",&birinciSayi);
	scanf("%d",&ikinciSayi);

	if (birinciSayi<ikinciSayi)
	{
		printf("birinci sayi kucuktur");
	}
	else
	{
		printf("ikinci sayi kucuktur");
	}
	return 0;
}