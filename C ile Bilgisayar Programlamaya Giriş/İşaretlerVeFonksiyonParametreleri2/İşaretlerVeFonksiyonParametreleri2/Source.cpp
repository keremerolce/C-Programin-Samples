#include <stdio.h>

void yerDegistir(int *x,int *y);

int main()
{
	int birinciSayi,ÝkinciSayi;
	scanf("%d",&birinciSayi);
	scanf("%d",&ÝkinciSayi);

	printf("Yer Degistirmeden Once: \n");
	printf("Birinci Sayi=%d\n",birinciSayi);
	printf("Ikinci Sayi=%d\n",ÝkinciSayi);
	printf("\n");

	yerDegistir(&birinciSayi,&ÝkinciSayi);

	printf("Yer Degistirmeden Sonra:\n");
	printf("Birinci Sayi=%d\n",birinciSayi);
	printf("Ikinci Sayi=%d\n",ÝkinciSayi);

	return 0;
}


void yerDegistir(int *x,int *y)
{
	int geciciDegisken;
	geciciDegisken=*x;
	*x=*y;
	*y=geciciDegisken;
}