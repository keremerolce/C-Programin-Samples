#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *oku,*yaz;

	//Dosya Adlarýný Tanýmla
	char *kaynekDosya="Kelvin.txt";
	char *hedefDosya="derece.txt";
	float K,D;
	int i=0,n=10;

	if ((oku=fopen(kaynekDosya,"r"))==NULL)
	{
		printf("%s Dosyasi Acilmadi. \n",kaynekDosya);
		exit(1);
	}

	if ((yaz=fopen(hedefDosya,"w"))==NULL)
	{
		printf("%s Dosyasý Acilmadi. \n",hedefDosya);
	}

	for (i = 0; i < n; i++)
	{
		// 'kelvin.sck'dan Verileri Oku

		fscanf(oku,"%f",&K);
		//Dönüþüm Denklemi
		D=K-273.0;

		// 'derece.sck'ya Verileri Yaz
		fprintf(yaz,"%8.2f\n",D);
	}

	//Dosyalarý Kapat

	fclose(oku);
	fclose(yaz);

	printf("%s>%s\n",kaynekDosya,hedefDosya);
	puts("Cevirme Islemi Tamamlama");

	return 0;
}