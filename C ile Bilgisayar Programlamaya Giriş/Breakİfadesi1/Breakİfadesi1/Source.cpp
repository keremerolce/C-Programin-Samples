#include <stdio.h>

int main()
{
	int i;
	char karakter;

	for (i = 0; i < 3; i++)
	{
		printf("%d\n\n",i);
		printf("Aranan Karakteri Giriniz:");
	//	fflush(stdout);
		scanf("%c",&karakter);
		if (karakter=='b')
		{
			break;
		}
		printf("Yanlis Karakter Giriniz\n");
	}
	if (i==3)
	{
		printf("Do�ru karakter Degerini 3 Denemede  Bulamad�n�z.");
	}
	else
	{
		printf("Dogru karakter girilmistir.");
	}
}