#include <stdio.h>

int main()
{
	int *tamsayiIsaretcisi,tamsayi=19;
	tamsayiIsaretcisi=&tamsayi;

	printf("Tamsayi  : Icerik=%d\n",tamsayi);
	printf("Tamsayi  : Adres=%p\n",&tamsayi);

	printf("Tamsayi Isaretcisi :  Icerik=%p\n",tamsayiIsaretcisi);
	printf("Tamsayi Isaretcisi :  Adres=%p\n",&tamsayiIsaretcisi);

	return 0;
}