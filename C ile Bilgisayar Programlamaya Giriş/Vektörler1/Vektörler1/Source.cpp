#include <stdio.h>

#define UZUNLUK 10

int main()
{
	int i;
	int tamsayilarinDizisi[UZUNLUK];

	for (i = 0; i < UZUNLUK; i++)
	{
		tamsayilarinDizisi[i]=3*i+1;
	}

	printf("%s%13s\n","Indis No","Deger");

	for (i = 0; i < UZUNLUK; i++)
	{
		printf("%d%20d\n",i,tamsayilarinDizisi[i]);
	}

	return 0;
}