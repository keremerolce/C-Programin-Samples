#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *dosya;

	char isim[10];
	int dersNotu,ogrenciNumarasi,enYuksekNot,enDusukNot,n,toplam;
	float ortalama;

	if ((dosya=fopen("Ogrenci.txt","r"))==NULL)
	{
		puts("Ogrenci.txt Dosyasi Acilamadi!\n");
		exit(1);
	}

	enYuksekNot=-1000;
	enDusukNot=1000;
	toplam=0;
	n=0;

	while (n<2)
	{
		fscanf(dosya,"%d %s %d",&ogrenciNumarasi,isim,&dersNotu);

		//En B�y�k ve En K���K Ders Notunu Bul

		if (dersNotu>enYuksekNot)
		{
			enYuksekNot=dersNotu;

		}
		if (dersNotu<enDusukNot)
		{
			enDusukNot=dersNotu;
		}

		//ders Notu 0 dan farkl� m�?
		if (dersNotu!=0)
		{
			n++;
		}
		//dersNotlar�n Toplam�
		toplam+=dersNotu;
	}
	//Dosyay� Kapat
	fclose(dosya);
	//0 dan farkl� dersNotlar�n Ortalamas�
	ortalama=(float) toplam/n;

	printf("En Yuksek Ders Notu= %2d\n",enYuksekNot);
	printf("En Dusuk Ders Notu = %2d\n",enDusukNot);

	printf("Ortalama           =%.2f\n",ortalama);

	return 0;
}