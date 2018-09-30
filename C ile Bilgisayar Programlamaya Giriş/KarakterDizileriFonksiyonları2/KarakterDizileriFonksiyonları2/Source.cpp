#include <stdio.h>
#include <string.h>

int main()
{
	char dizi1[]=" ornek";
	char dizi2[15],dizi3[15];
	int i;
	//strcpy kullanarak koyalamak
	strcpy(dizi2,dizi1);
	//strcpy kullanmadan kopyalamak
	for (i = 0; i<15; i++)
	{
		dizi3[i]=dizi1[i];
	}
//	dizi3[i]='\0';
	printf("Birinici Dizi: %s\n",dizi1);
	printf("Ikinci Dizi: %s\n",dizi2);
	printf("Ucuncu Dizi:%s\n",dizi3);

	return 0;
}