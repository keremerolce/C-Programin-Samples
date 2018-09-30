#include <stdio.h>

int main(void)
{
	char karakterDizisi[40],geciciEleman;
	int i,uzunluk;

	printf("Karakter Dizisine Giris Yapiniz: ");
	fflush(stdout);
	gets(karakterDizisi);

	for (uzunluk = 0; karakterDizisi[uzunluk]!='\0';uzunluk ++);

	for (i = 0; i < uzunluk/2; i++)
	{
		geciciEleman=karakterDizisi[uzunluk-i-1];
		karakterDizisi[uzunluk-i-1]=karakterDizisi[i];
		karakterDizisi[i]=geciciEleman;
	}

	printf("Karakter Dizisinin Tersi: %s\n",karakterDizisi);

	return 0;
}