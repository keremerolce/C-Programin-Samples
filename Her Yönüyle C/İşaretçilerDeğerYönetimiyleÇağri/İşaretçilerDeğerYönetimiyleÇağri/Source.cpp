#include <stdio.h>

void sifirla(int);

int main()
{
	int sayi=10;
	sifirla(sayi);
	//call by value y�ntemiyle �a�r� yap�ld��� i�in fonksiyon �a�r�s� sonras� sayi de�eri de�i�mez
	printf("Sayi:%d\n",sayi);

	return 0;
}

void sifirla(int arg)
{
	arg=0;
}