#include <stdlib.h>
#include <stdio.h>

int main()
{
	int birincisayi,ikincisayi;
	printf("birinci sayinin degerini giriniz:");
	fflush(stdout);
	scanf("%d",&birincisayi);
	

	printf("Ýkinci sayinin degerini giriniz:");
	fflush(stdout);
	scanf("%d",&ikincisayi);


	if (birincisayi<ikincisayi)
	{
		printf("birinci sayi kücük");
	}
	else
	{
		printf("ikinci sayi kücük");
	}
	return 0;
}