#include <stdio.h>
#include <string.h>

int main()
{
	char dogruCevap[]="Ankara";
	char cevap[20];
	printf("T�rkiyeni Baskenti Hangi Ilimizdir=");
	scanf("%s",cevap);

	if (strcmp(cevap,dogruCevap)==0)
	{
		printf("Cevab�n�z Dogrudur.");
	}
	else
	{
		printf("Cevabiniz Yanlis.");
	}

	return 0;
}