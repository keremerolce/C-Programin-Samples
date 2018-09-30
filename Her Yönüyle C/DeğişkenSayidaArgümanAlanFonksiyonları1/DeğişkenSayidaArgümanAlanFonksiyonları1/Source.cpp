#include <stdio.h>
#include <stdarg.h>

int topla(int parametreSayisi,...);
double ortalamaBul(int parametreSayisi,...);

int main()
{
	int sayi1=5,sayi2=10,sayi3=15;

	printf("Sayi1=%d, Sayi2=%d, Sayi3=%d\n",sayi1,sayi2,sayi3);
	printf("Sayi1+Sayi2=%d\n",topla(2,sayi1,sayi2));
	printf("Sayi1+sayi2+Sayi3=%d\n\n",topla(3,sayi1,sayi2,sayi3));

	printf("Topla(1,2,3,4,5,6,7,8,9,10)=%d\n",topla(10,1,2,3,4,5,6,7,8,9,10));
	printf("Topla(222,333,444,555,666)=%d\n",topla(5,222,333,444,555,666));


	printf("Ortalama(1,2,3,4,5,6,7,8,9,10)=%f\n",ortalamaBul(10,1,2,3,4,5,6,7,8,9,10));
	printf("Ortalama(222,333,444,555,666)=%f\n",ortalamaBul(5,222,333,444,555,666));

	return 0;
}

int topla(int parametreSayisi,...)
{
	va_list parametrePtr;
	va_start(parametrePtr,parametreSayisi);

	int toplam=0;
	int i;
	for (i = 0; i < parametreSayisi; i++)
	{
		toplam+=va_arg(parametrePtr,int);
	}
	va_end(parametrePtr);
	return toplam;
}
double ortalamaBul(int parametreSayisi,...)
{
	va_list parametrePtr;
	va_start(parametrePtr,parametreSayisi);

	int toplam=0;
	int i;
	for (i = 0; i < parametreSayisi; i++)
	{
		toplam+=va_arg(parametrePtr,int);
	}
	va_end(parametrePtr);
	return (double)toplam/parametreSayisi;
}