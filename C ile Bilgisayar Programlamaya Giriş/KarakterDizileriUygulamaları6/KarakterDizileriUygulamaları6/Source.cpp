#include <stdio.h>
#include <string.h>
#define uzunluk 5

int main()
{
	char isim[uzunluk][8]={"Semra","Mustafa","Ceyhun","Asli","Leyla"};
	char gecici[8];
	int i,j,k;
	puts("Isimleri Siralamadan Once: ");
	for (i = 0; i < uzunluk; i++)
	{
		printf("%s\n",isim[i]);
	}
	for (k = 0; k < uzunluk-1; k++)
	{
		for (j = 0; j < uzunluk-1; j++)
		{
			if (strcmp(isim[j],isim[j+1])>0)
			{
				strcpy(gecici,isim[j]);
				strcpy(isim[j],isim[j+1]);
				strcpy(isim[j+1],gecici);
			}
		}
	}

	puts("\n Isýmler Siralandiktan Sonra :");
	for (i = 0; i < uzunluk; i++)
	{
		printf("%s\n",isim[i]);
	}

	return 0;
}