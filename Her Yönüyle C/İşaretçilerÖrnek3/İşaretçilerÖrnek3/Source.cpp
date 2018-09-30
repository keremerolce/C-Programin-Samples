#include <stdio.h>

int main()
{
	int dizi[10]={1,2,3,4,5,6,7,8,9,10};
	//ptr ve ptr2'de ayný deðer bulunur.
	int *ptr=&dizi[0];
	int *ptr2=dizi;

	int i;

	printf("Dizinin 1.  Elemani:%d\n",dizi[0]);
	printf("Dizinin 1.  Elemani:%d\n",*ptr);
	printf("Dizinin 1.  Elemani:%d\n",*ptr2);
	printf("------------------------\n");
	printf("Dizinin 4.  Elemani:%d\n",dizi[4]);
	printf("Dizinin 4.  Elemani:%d\n",*(ptr+4));
	printf("Dizinin 4.  Elemani:%d\n",*(ptr2+4));
	printf("------------------------\n");
	printf("Dizinin 8.  Elemani:%d\n",dizi[8]);
	printf("Dizinin 8.  Elemani:%d\n",*(ptr+8));
	printf("Dizinin 8.  Elemani:%d\n",*(ptr2+8));
    printf("------------------------\n");

	//Dizinin tüm elemanlarýný ve adreslerini ptr isimli iþaretçi yardýmýyla yazdýralým
	for (i = 0; i < 10; i++)
	{
		printf("Dizi[%d]-> adresi:%p,degeri:%d\n",i,ptr+i,*(ptr+i));
	}

	return 0;
}