#include <stdio.h>
#include <string.h>
int strunz(char *);

int main()
{
	char karakterDizisi[50];
	int uzunluk1,uzunluk2;
	printf("Bir Karakter Dizisi Giriniz: ");
	fflush(stdout);
	gets(karakterDizisi);

	uzunluk1=strunz(karakterDizisi);
	uzunluk2=strunz(karakterDizisi);

	printf("strunz ile uzunluk : %d\n",uzunluk1);
	printf("strunz ile uzunluk : %d\n",uzunluk2);

	return 0;
}

//karakter dizisinin uzunluðunu hesaplayan fonksiyon

int strunz(char *str)
{
	int uzunluk=0;

	while (str[uzunluk])
	{
		uzunluk++;
	}

	return uzunluk;
}