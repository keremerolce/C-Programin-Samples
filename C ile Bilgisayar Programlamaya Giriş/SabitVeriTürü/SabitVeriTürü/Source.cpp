#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//enumration türündeki sabitler
//oyun durumu temsil etmektedir

enum durum {Devam,Kazandý,Kaybetti};

int zarAT(void);

int main(void)
{
	int toplam;//atýlan zarlarýn toplamý
	int puanlarim;//kazanýlan puanlar

	enum durum oyundurumu;

	srand(time(NULL));

	toplam=zarAT();
	
	switch (toplam)
	{
		//ilk zar atýþýnda kazanma
	case 7:
	case 11:
		oyundurumu=Kazandý;
		break;
		//ilk zar atýþýnda kaybetme
	case 2:
	case 3:
	case 12:
		oyundurumu = Kaybetti;
		break;
	default:
		oyundurumu=Devam;
		puanlarim=toplam;
		printf("Puan=%d\n",puanlarim);
		break;
	}
	while (oyundurumu==Devam)
	{
		toplam=zarAT(); //zarlarý yeniden at

		if (toplam==puanlarim)
		{
			oyundurumu=Kazandý;
		}
		else
		{
			if (toplam==7)
			{
				oyundurumu=Kaybetti;
			}
		}
	}
	//kazandý kaybetti mesajýný göster

	if (oyundurumu==Kazandý)
	{
		printf("Oyuncu Kazandý");
	}
	else
	{
		printf("Oyuncu Kaybetti");
	}

	return 0;
}

int zarAT(void)
{
	int zar1;
	int zar2;
	int zarToplam;

	zar1=1+(rand()%6);
	zar2=1+(rand()%6);
	zarToplam=zar1+zar2;

	//atýlan zarlarý göster

	printf("Atilan Zarlar %d+%d=%d\n",zar1,zar2,zarToplam);

	return zarToplam;
}