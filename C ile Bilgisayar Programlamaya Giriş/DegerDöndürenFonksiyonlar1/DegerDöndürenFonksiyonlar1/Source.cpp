#include <stdio.h>

char karaktergir()
{
	char i;
	scanf("%c",&i);
	return i;
}
void kodla()
{
	char tamam=0;
	char karakter;
	while (!tamam)
	{
		karakter=karaktergir();
		if (karakter=='$')
		{
			tamam=1;
			continue;
		}
		printf("%c",(karakter+1));
	}
}
int main()
{
	printf("Kodlanmasini Istediginiz Karakterlerini Giriniz\n");
	printf("Kodlamayi Bitirmek icin $ Karakterini Giriniz\n");
	fflush(stdout);
	kodla();
	return 0;
}