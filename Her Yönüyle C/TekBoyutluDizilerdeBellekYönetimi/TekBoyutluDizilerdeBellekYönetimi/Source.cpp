#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"tr");
	int sayi;
	int toplam=0;

	//kullanýcýdan kaç adet sayý girileceðini soralým
	printf("Kaç adet sayi gireceksiniz:   ");
	scanf("%d",&sayi);
	/*Kullanýcadan girdiði sayý kadar int tutacak bellek alaný oluþturalým*/
	int *sayiDizisi=(int *) malloc(sizeof(int) * sayi);

	int i;
	for (int i = 0; i < sayi; i++)
	{
		printf("%2d. elemaný giriniz:  ",i);
		//aþaðýdaki iki satýrda iþ yapar
		scanf("%d",sayiDizisi+i);
		//scanf("%d",sayiDizisi[i]);
	}
	/*sayiDizisinin ortalamasýný bulmak için bu sefer dizi notasyonu kullanalým*/

	for (int i = 0; i < sayi; i++)
	{
		toplam+=sayiDizisi[i];
	}
	float ortalama=(float)toplam/(float)sayi;
	printf("Girdiginiz dizinin ortalamasi:%2f\n",ortalama);

	/*Programý tamamlamadan önce oluþturduðumuz bellek alanýný boþaltalým*/
	free(sayiDizisi);

	return 0;
}