#include <stdio.h>

void sifirla(int);

int main()
{
	int sayi=10;
	sifirla(sayi);
	//call by value yöntemiyle çaðrý yapýldýðý için fonksiyon çaðrýsý sonrasý sayi deðeri deðiþmez
	printf("Sayi:%d\n",sayi);

	return 0;
}

void sifirla(int arg)
{
	arg=0;
}