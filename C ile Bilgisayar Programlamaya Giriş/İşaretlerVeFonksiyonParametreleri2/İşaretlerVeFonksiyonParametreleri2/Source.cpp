#include <stdio.h>

void yerDegistir(int *x,int *y);

int main()
{
	int birinciSayi,İkinciSayi;
	scanf("%d",&birinciSayi);
	scanf("%d",&İkinciSayi);

	printf("Yer Degistirmeden Once: \n");
	printf("Birinci Sayi=%d\n",birinciSayi);
	printf("Ikinci Sayi=%d\n",İkinciSayi);
	printf("\n");

	yerDegistir(&birinciSayi,&İkinciSayi);

	printf("Yer Degistirmeden Sonra:\n");
	printf("Birinci Sayi=%d\n",birinciSayi);
	printf("Ikinci Sayi=%d\n",İkinciSayi);

	return 0;
}


void yerDegistir(int *x,int *y)
{
	int geciciDegisken;
	geciciDegisken=*x;
	*x=*y;
	*y=geciciDegisken;
}