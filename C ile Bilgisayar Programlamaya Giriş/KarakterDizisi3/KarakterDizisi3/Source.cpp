#include <stdio.h>

int main()
{
	char karakterDizisi[20];

	printf("KarakterDizisine Deger Giriniz:");
	fflush(stdout);
	scanf("%s",karakterDizisi);
	fflush(stdout);
	printf("Girdiginiz Kararkter Dizisi: ");
	printf(karakterDizisi);

	printf("\n");

	return 0;
}