#include <stdio.h>

int main()
{
	int sayi=100;
	int *referans;
	referans=&sayi;
	int sayi2=*referans;
	*referans=150;
	printf("Sayi degiskeninin degeri:%d\n",sayi);
	printf("Sayi2 degiskeninin degeri:%d\n",sayi2);
	return 0;
}