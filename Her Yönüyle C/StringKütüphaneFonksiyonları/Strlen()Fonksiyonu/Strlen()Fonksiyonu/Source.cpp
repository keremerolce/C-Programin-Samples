#include <stdio.h>
#include <string.h>

int main()
{
	char kullaniciAdi[20];
	unsigned long karakterSayisi=0;

	printf("Lutfen Kullanici Adinizi Giriniz:");
	gets(kullaniciAdi);

	karakterSayisi=strlen(kullaniciAdi);

	if (karakterSayisi<6)
	{
		printf("Kullanici Adi en az 6 karakter olmasi lazim.");
	}
	else
	{
		printf("Kullanici Adiniz Gecerli");
	}

	return 0;
}