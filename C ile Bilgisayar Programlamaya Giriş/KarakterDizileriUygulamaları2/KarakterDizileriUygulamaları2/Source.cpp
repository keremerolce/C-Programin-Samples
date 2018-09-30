#include <stdio.h>

int main()
{
	char karakterDizisi[20];
	int i,harfSayisi=0;
	printf("Bir Karakter Dizisi Giriniz:");
	fflush(stdout);
	gets(karakterDizisi);

	for (i = 0; karakterDizisi[i]; i++)
	{
		if (karakterDizisi[i]=='a')
		{
			harfSayisi++;
		}
	}
	printf("Karakter Dizisindeki 'a ' Harf Sayisi = %d",harfSayisi);

	return 0;
}