#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i;
	double rassalSayi;

	srand(time(NULL));

	for (i = 1; i < 10; i++)
	{
		rassalSayi=(double) rand()/RAND_MAX;
		printf("[0,1] Aralýginda %d. Rassal Sayi      :%lf\n",i,rassalSayi);
	}

	return 0;
}