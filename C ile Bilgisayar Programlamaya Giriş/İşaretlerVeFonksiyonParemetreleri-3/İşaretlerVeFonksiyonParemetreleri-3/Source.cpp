#include <stdio.h>

void yerDegistir(int *x,int *y);

int main(void)
{
	int dizi[3]={31,35,39};

	printf("Yer Degistirmeden Once:\n");
	printf("%d\t%d\t%d\n",*dizi,*(dizi+1),*(dizi+2));
	yerDegistir(dizi,(dizi+2));

	printf("Yer Degistirmeden Sonra:\n");
	printf("%d\t%d\t%d\n",*dizi,*(dizi+1),*(dizi+2));
	yerDegistir(&dizi[0],&dizi[2]);

	printf("Ikinci Yer Degistirmeden Sonra:\n");
	printf("%d\t%d\t%d\n",*dizi,*(dizi+1),*(dizi+2));

	return 0;
}

void yerDegistir(int *x,int *y)
{
	int geciciDegisken;
	geciciDegisken=*x;
	*x=*y;
	*y=geciciDegisken;
}