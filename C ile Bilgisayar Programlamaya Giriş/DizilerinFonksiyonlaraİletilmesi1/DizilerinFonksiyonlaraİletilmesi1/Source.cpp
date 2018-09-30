#include <stdio.h>

void diziElemanlariniYaz(float x[],int n);

int main()
{
	float fiyat[5]={9.99,13.00,25.00,12.25,8.75};

	diziElemanlariniYaz(fiyat,5);
	printf("\n");
	return 0;
}

void diziElemanlariniYaz(float x[],int n)
{
	int i;

	printf("Dizinin Elemanlari: ");

	for (i = 0; i < n; i++)
	{
		printf("%6.2f",x[i]);
	}
	return;
}