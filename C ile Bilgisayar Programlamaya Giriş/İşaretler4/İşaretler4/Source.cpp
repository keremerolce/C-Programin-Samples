#include <stdio.h>

int main()
{
	char *karakterIsaretcisi,karakter='x';
	int *tamsayiIsaretcisi,tamsayi=19;
	double *gercelIsaretcisi,gercel=21.5;
	
	karakterIsaretcisi=&karakter;
	tamsayiIsaretcisi=&tamsayi;
	gercelIsaretcisi=&gercel;
	printf("Onceki Adresler:\n");
	printf("Karakter Isaretcisi=%p\n",karakterIsaretcisi);
	printf("Tamsayi Isaretcisi=%p\n",tamsayiIsaretcisi);
	printf("Gercel Isaretcisi=%p\n",gercelIsaretcisi);

	karakterIsaretcisi++;
	tamsayiIsaretcisi++;
	gercelIsaretcisi=gercelIsaretcisi+10;


	printf("Sonraki Adresler:\n");
	printf("Karakter Isaretcisi=%p\n",karakterIsaretcisi);
	printf("Tamsayi Isaretcisi=%p\n",tamsayiIsaretcisi);
	printf("Gercel Isaretcisi=%p\n",gercelIsaretcisi);

	return 0;
}