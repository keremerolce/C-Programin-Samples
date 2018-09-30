#include <stdio.h>
#include <string.h>

int main()
{
	char mesaj[20]="Merhaba";
	char isim[10];

	printf("Adinizi Giriniz: ");
	fflush(stdout);
	scanf("%s",isim);

	//isim Dizisini mesaj'a Ekle

	strcat(mesaj,isim);

	printf("%s\n",mesaj);

	return 0;
}