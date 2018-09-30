#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,birinciZar,ikinciZar;

	printf("Zarlar Atilmaya Baslandi:\n");

	for (i = 0; i <=10; i++)
	{
		birinciZar=(rand()%6)+1;
		ikinciZar=(rand()%6)+1;
		printf("\%d\t\%d\n",birinciZar,ikinciZar);
	}

	printf("Iký Zar On defa Atildi.");
	return 0;
}