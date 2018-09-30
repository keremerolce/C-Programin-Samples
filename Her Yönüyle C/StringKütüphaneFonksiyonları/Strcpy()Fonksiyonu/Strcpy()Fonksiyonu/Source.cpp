#include <stdio.h>
#include <string.h>

int main()
{
	char dizi1[20]="Merhaba";
	char dizi2[20];

	strcpy(dizi2,dizi1);

	printf("Dizi1--> %s\n",dizi1);
	printf("Dizi2--> %s\n",dizi2);

	return 0;
}