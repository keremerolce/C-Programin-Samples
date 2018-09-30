#include <stdio.h>

void yerDegistir(int *x,int *y);

int main()
{
	int birinciSayi,�kinciSayi;
	scanf("%d",&birinciSayi);
	scanf("%d",&�kinciSayi);

	printf("Yer Degistirmeden Once: \n");
	printf("Birinci Sayi=%d\n",birinciSayi);
	printf("Ikinci Sayi=%d\n",�kinciSayi);
	printf("\n");

	yerDegistir(&birinciSayi,&�kinciSayi);

	printf("Yer Degistirmeden Sonra:\n");
	printf("Birinci Sayi=%d\n",birinciSayi);
	printf("Ikinci Sayi=%d\n",�kinciSayi);

	return 0;
}


void yerDegistir(int *x,int *y)
{
	int geciciDegisken;
	geciciDegisken=*x;
	*x=*y;
	*y=geciciDegisken;
}