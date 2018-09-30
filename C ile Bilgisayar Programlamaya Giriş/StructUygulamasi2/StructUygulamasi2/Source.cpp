#include <stdio.h>

struct Tarih
{
	int gun,ay,yil;

};
void goster(struct Tarih x)
{
	printf("Tarih: %02d/%02d/%4d\n",x.gun,x.ay,x.yil);
}

int main()
{
	//TARIH TÜRÜNDE N DEÐÝÞKENÝ TANIMLANIYOR

	struct Tarih n;
	n.gun=29;
	n.ay=9;
	n.yil=2013;

	goster(n);

	return 0;
}