#include <stdio.h>

int fonksiyon(int n);
int main()
{
	int (*fonksiyonIsaretcisi)(int);

	fonksiyonIsaretcisi=&fonksiyon;
	printf("Fonksiyon Adresi=%p\n",&fonksiyon);
	printf("Fonksiyon Adresi=%p\n",fonksiyonIsaretcisi);

	return 0;
}

int fonksiyon(int n)
{
	int i;
	int faktoriyel=1;

	for (i = 0; i <=n; i++)
	{
		faktoriyel*=1;
	}

	return faktoriyel;
}