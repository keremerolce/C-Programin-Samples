#include <stdio.h>
#include <string.h>
char *strcev(char *dizi);

int main()
{
	char karakterDizisi[50];

	printf("Bir Karakter Dizisi Giriniz:");
	fflush(stdout);
	scanf("%s",karakterDizisi);

	printf("Karakter Dizisi: %s\n",karakterDizisi);
	printf("Karakter Dizisinin Tersi: %s\n",strcev(karakterDizisi));

	return 0;
}

char *strcev( char *dizi)
{
	int i,uzunluk;
	char gecici;
	uzunluk=strlen(dizi);

	for (i = 0; i < uzunluk/2; i++)
	{
		gecici=dizi[i];
		dizi[i]=dizi[uzunluk-i-1];
		dizi[uzunluk-i-1]=gecici;
	}

	return dizi;
}