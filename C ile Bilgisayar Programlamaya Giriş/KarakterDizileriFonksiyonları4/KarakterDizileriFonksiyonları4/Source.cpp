#include <stdio.h>
#include <string.h>

int main()
{
	char dizi[20];
	int uzunlukwhile=0;
	int uzunlukStrlen=0;

	printf("Diziye Karakter giriniz: ");
	fflush(stdout);
	scanf("%s",dizi);

	//strlen kullanarak karakter dizisinin uzunlugu
	uzunlukStrlen=strlen(dizi);

	//while kullanarak karakter dizisinin uzunlugu
	while (dizi[uzunlukwhile]!='\0')
	{
		uzunlukwhile++;
	}

	puts("Dizinin Uzunlugu");
	printf("Strlen Kullanarak =%d\n",uzunlukStrlen);
	printf("While Kullanarak =%d\n",uzunlukwhile);

	return 0;
}