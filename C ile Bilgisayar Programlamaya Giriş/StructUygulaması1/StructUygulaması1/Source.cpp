#include <stdio.h>


/* Kayýt Yapýsý*/
struct KAYIT
{
	char isim[10];
	long numara;
	int sinif;
};

int main()
{
	struct KAYIT ogrenci;
	printf("Ogrenci Numarasi  :");
	fflush(stdout);
	scanf("%ld",&ogrenci.numara);

	printf("Ogrenci Ismi      :");
	fflush(stdout);
	scanf("%s",&ogrenci.isim);

	printf("Ogrenci Sinifi    :");
	fflush(stdout);
	scanf("%d",&ogrenci.sinif);

	printf("\n\nGirdiginiz Bilgileri:");
	printf("\nNo       :%d",ogrenci.numara);
	printf("\nAdi      :%d",ogrenci.isim);
	printf("\nSinifi   :%d\n",ogrenci.sinif);

	return 0;

}