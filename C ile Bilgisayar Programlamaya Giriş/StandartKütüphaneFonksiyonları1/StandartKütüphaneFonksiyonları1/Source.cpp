#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,rassalTamsayi;

	printf("Rassal Sayi Uretmeye Baslandi:\n");
	for (i = 0; i <=10; i++)
	{
		rassalTamsayi=rand()%100;
		printf("\%d\t%d\n",i,rassalTamsayi);
	}

	printf("0 ile 100 Arasinda On Adet Rassal Sayi Uretildi");

	return 0;
}