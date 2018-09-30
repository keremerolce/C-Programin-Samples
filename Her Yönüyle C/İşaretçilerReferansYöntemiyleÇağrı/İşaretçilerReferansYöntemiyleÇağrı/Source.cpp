#include <stdio.h>

void sifirla(int * arg)
{
	*arg=0;
}

int main()
{
	int sayi=10;
	sifirla(&sayi);

	printf("Sayi:%d\n");

	return 0;
}