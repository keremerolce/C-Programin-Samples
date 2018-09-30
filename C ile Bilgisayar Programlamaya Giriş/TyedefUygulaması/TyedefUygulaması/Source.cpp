#include <stdio.h>


typedef struct TARIH
{
	int gun,ay,yil;
}dogumGunum;

void goster(dogumGunum x)
{
	printf("Tarih: %02d/%02d/%4d\n",x.gun,x.ay,x.yil);
}

int main(void)
{
	dogumGunum n;
	n.gun=13;
	n.ay=7;
	n.yil=1979;

	goster(n);

	return 0;
}