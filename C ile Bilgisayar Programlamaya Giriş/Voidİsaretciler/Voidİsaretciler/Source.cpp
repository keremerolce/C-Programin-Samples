#include <stdio.h>

int main()
{
	char karakter='x';
	int tamsayi=37;
	double gercel=7.9;
	void *genelIsaretci;

	genelIsaretci=&karakter;

	printf("Genel Isaretci %c Karakter Degerini Gosteriyor\n",*(char *) genelIsaretci);

	genelIsaretci=&tamsayi;
	printf("Genel Isaretci %d Tamsayi Degerini Gosteriyor \n",*(int *) genelIsaretci);

	genelIsaretci=&gercel;
	printf("Genel Iseretci %lf Gercel Sayi Degerini Gosteriyor \n",*(double *)genelIsaretci);

	return 0;
}