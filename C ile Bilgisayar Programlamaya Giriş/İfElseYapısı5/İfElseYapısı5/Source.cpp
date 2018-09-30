#include <stdio.h>

int main()
{
	float bolum,bolen,bolmesonuc;
	printf("-------------------------------Hosgeldiniz-----------------------------------\n\n\n\n");
	printf("Bolmek istediginiz sayiyi giriniz:");
	fflush(stdout);
	scanf("%f",&bolum);
	printf("bolen sayiyi giriniz");
	fflush(stdout);
	scanf("%f",&bolen);
	if (bolen==0)
	{
		printf("Sifira bolme hatasý");
	}
	else
	{
		bolmesonuc=bolum/bolen;
		printf("Bolme sonucu=%f",bolmesonuc);
	}
	return 0;
}