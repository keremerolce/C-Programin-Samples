#include <stdio.h>
#include <string.h>

int main()
{
	char sifre[8];
	int sonuc,denemeSayisi=3;
	while (denemeSayisi-->0)
	{
		printf("Sifre Giriniz: ");
		fflush(stdout);
		gets(sifre);
		sonuc=strcmp(sifre,"armut");

		if (sonuc==0)
		{
			puts("Dogru Sifre Girdiniz");
			break;
		}
		else
		{
			puts("Yanlis Sifre Girdiniz");
		}
	}
	return 0;
}