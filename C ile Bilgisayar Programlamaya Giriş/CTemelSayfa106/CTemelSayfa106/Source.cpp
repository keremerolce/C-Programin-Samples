#include <stdlib.h>
#include <stdio.h>

int main()
{
	int birincisayi,ikincisayi;
	printf("birinci sayinin degerini giriniz:");
	fflush(stdout);
	scanf("%d",&birincisayi);
	

	printf("�kinci sayinin degerini giriniz:");
	fflush(stdout);
	scanf("%d",&ikincisayi);


	if (birincisayi<ikincisayi)
	{
		printf("birinci sayi k�c�k");
	}
	else
	{
		printf("ikinci sayi k�c�k");
	}
	return 0;
}