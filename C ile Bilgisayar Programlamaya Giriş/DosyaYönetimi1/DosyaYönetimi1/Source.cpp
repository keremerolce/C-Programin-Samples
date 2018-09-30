#include <stdlib.h>
#include <stdio.h>

int main()
{
	FILE *Dosya;
	const int n=2;
	char isim[10];
	int ogrenciNumarasi,dersNotu,i=0;
	Dosya=fopen("Ogrenci.txt","w");

	if (Dosya==NULL)
	{
		puts("Ogrenci.txt Dosyasi Acilmadi!\n");
		exit(1);
	}

	puts("2 Ogrenciye Ait Bilgileri Giriniz:");

	while (i++<n)
	{
		printf("%d. Ogrencinin Numarasini Giriniz    :",i);
		fflush(stdout);
		scanf("%d",&ogrenciNumarasi);

		printf("%d. Ogrencinin Ismini Giriniz    :",i);
		fflush(stdout);
		scanf("%s",isim);

		printf("%d. Ogrencinin Ders Notunu Giriniz    :",i);
		fflush(stdout);
		scanf("%d",&dersNotu);

		printf("\n\n");

		fprintf(Dosya,"%10d %10s %10d\n",ogrenciNumarasi,isim,dersNotu);
	}
	fclose(Dosya);
	puts("Bilgiler Kaydoldu");

	return 0;
}