#include <stdio.h>
#include <string.h>

int main()
{
	char dogruCevap[]="Ankara";
	char cevap[20];
	printf("Türkiyeni Baskenti Hangi Ilimizdir=");
	scanf("%s",cevap);

	if (strcmp(cevap,dogruCevap)==0)
	{
		printf("Cevabýnýz Dogrudur.");
	}
	else
	{
		printf("Cevabiniz Yanlis.");
	}

	return 0;
}