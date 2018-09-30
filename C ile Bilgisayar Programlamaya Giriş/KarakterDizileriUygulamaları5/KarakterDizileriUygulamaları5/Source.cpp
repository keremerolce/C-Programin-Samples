#include <stdio.h>
#include <string.h>

int main(void)
{
	char birinciKarakterDizisi[40],ikinciKarkterDizisi[40],geciciEleman;
	int i,uzunluk;


	printf("Karakter Dizisine Giris Yapiniz:");
	fflush(stdout);
	gets(birinciKarakterDizisi);

	strcpy(birinciKarakterDizisi,ikinciKarkterDizisi);

	for (uzunluk = 0; ikinciKarkterDizisi[uzunluk]!='\0' ; uzunluk++);

	for (i = 0; i < uzunluk/2; i++)
	{
		geciciEleman=ikinciKarkterDizisi[uzunluk-i-1];
		ikinciKarkterDizisi[uzunluk-i-1]=ikinciKarkterDizisi[i];
		ikinciKarkterDizisi[i]=geciciEleman;
	}

	if (strcmp(birinciKarakterDizisi,ikinciKarkterDizisi))
	{
		printf("Bu Karakter Dizisi Palindrom degildir");
	}
	else
	{
		printf("Bu Karakter Dizisi Palindromdur");
	}

	return 0;
}