#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//enumration t�r�ndeki sabitler
//oyun durumu temsil etmektedir

enum durum {Devam,Kazand�,Kaybetti};

int zarAT(void);

int main(void)
{
	int toplam;//at�lan zarlar�n toplam�
	int puanlarim;//kazan�lan puanlar

	enum durum oyundurumu;

	srand(time(NULL));

	toplam=zarAT();
	
	switch (toplam)
	{
		//ilk zar at���nda kazanma
	case 7:
	case 11:
		oyundurumu=Kazand�;
		break;
		//ilk zar at���nda kaybetme
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
		toplam=zarAT(); //zarlar� yeniden at

		if (toplam==puanlarim)
		{
			oyundurumu=Kazand�;
		}
		else
		{
			if (toplam==7)
			{
				oyundurumu=Kaybetti;
			}
		}
	}
	//kazand� kaybetti mesaj�n� g�ster

	if (oyundurumu==Kazand�)
	{
		printf("Oyuncu Kazand�");
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

	//at�lan zarlar� g�ster

	printf("Atilan Zarlar %d+%d=%d\n",zar1,zar2,zarToplam);

	return zarToplam;
}