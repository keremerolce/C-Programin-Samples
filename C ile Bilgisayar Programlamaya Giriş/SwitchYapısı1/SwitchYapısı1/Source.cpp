#include <stdio.h>

int main()
{
	int secenek;

	printf("1 Ýle 5 Arasýnda Bir Secenek Giriniz:");
	fflush(stdout);
	scanf("%d",&secenek);
	switch (secenek)
	{
		case 1:
		printf("Birinci Secenegi Sectiniz.");
		break;
		case 2:
		printf("Ýkinci Secenegi Sectiniz.");
		break;
		case 3:
		printf("Ucuncu Secenegi Sectiniz.");
		break;
		case 4:
		printf("Dorduncu Secenegi Sectiniz.");
		break;
		case 5:
		printf("Besinci Secenegi Sectiniz.");
		break;
	default:
		printf("Yanlýs Bir Secenek Sectiniz.");
		break;
	}
}