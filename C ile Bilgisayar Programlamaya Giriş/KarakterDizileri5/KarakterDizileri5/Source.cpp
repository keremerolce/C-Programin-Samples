#include <stdio.h>

int main()
{
	int i;
	char dizi[7]={'S','e','l','a','m','!','\0'};

	/*Her bir karakteri Ayr� ayr� alt alta yazma*/
	printf("Dizi Elemanlari:\n");

	for (i = 0; i < 6; i++)
	{
		printf("Dizi[%d] Icerigi: %c\n",i,dizi[i]);
	}

	printf("\n");

	/* 1.Y�ntem: Her Elemani Yanyana Yaz*/

	printf("Butun dizi (1.Yontem):");
	for (i = 0; i < 6; i++)
	{
		printf("%c",dizi[i]);
	}
	/*2. Yontem Butun diziyi yaz*/
	printf("\nButun Dizi (2.Yontem)");
	/*printf("%s"dizi);*/

	return 0;

}