#include <stdio.h>
#include <time.h>
#include "Zar.h"

int main()
{
	int i,birinciZar,ikinciZar;

	srand(time(NULL));

	printf("Zarlar Atilmaya Baslandi: \n");
	printf("Birinci Zar\tIkinci Zar\n");

	for (i = 1; i <=10; i++)
	{
		birinciZar=zarAt(6);
		ikinciZar=zarAt(6);
		printf("%11d\t%10d\n",birinciZar,ikinciZar);
	}


	printf("On Kere Zar Atildi.");
	return 0;
}