#include <stdio.h>

int main()
{
	char karakterDizisi[20];

	printf("Karakter Dizisine Deger Giriniz:");
	fflush(stdout);
	scanf("%s",karakterDizisi);
	fflush(stdout);
	printf("Girdiginiz Karakter Dizisi");
	printf("%s\n",karakterDizisi);

	return 0;
}