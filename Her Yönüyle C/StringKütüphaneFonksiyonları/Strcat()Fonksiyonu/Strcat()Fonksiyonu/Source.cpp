#include <stdio.h>
#include <string.h>

int main()
{
	char dizi1[20]="merhaba ";
	char dizi2[20];

	printf("Ýsminizi Giriniz:");
	gets(dizi2);

	strcat(dizi1,dizi2);

	printf("%s\n\n",dizi1);

	return 0;
}