#include <stdio.h>
int main()
{
	char karakterDizisi[20];

	puts("Karakter Dizisine Deger Giriniz");
	fflush(stdout);
	gets(karakterDizisi);

	puts("Girdiginiz Karakter Dizisi:");
	puts(karakterDizisi);

	return 0;

}