#include <stdio.h>
int main()
{
	int sayi;
	printf("sayi giriniz");
	fflush(stdout);
	scanf("%d",sayi);


	if (((sayi+1)%2)==0)
	{
		printf("girdiginiz sayi tek bir sayidir");
	}
	else
	{
		printf("girdiginiz sayi cift sayidir");
	}
	return 0;
}