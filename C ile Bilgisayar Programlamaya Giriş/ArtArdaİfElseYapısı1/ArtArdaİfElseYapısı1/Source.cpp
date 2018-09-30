#include <stdio.h>

int main()
{
	int sayi;

	printf("Bir Sayi giriniz:");
	fflush(stdout);
	scanf("%d",sayi);

	if (sayi==0)
	{
		printf("Girdiginiz Sayi 0 dir");
	}
	else
	{
		if (sayi<0)
		{
			printf("Girdiginiz Sayi negatiftir");
		}
		else
		{
			printf("Girdiginiz Sayi pozitiftir");
		}
	}
	return 0;
}