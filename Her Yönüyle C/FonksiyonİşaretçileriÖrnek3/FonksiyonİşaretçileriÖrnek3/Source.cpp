#include <stdio.h>
#include <locale.h>
int topla(int,int);
int cikar(int,int);
int carp(int,int);
int modAl(int,int);
int hesapla(int islemPtr(int, int),int ,int);
int main(int argc,const char * argv[])
{
	setlocale(LC_ALL,"tr");
	int sayi1;
	int sayi2;
	printf("Lütfen arada boþluk olacak þekilde 2 sayý giriniz:");
	scanf("%d %d",&sayi1,&sayi2);

	printf("Toplam:%d\n",hesapla(topla,sayi1,sayi2));
	printf("Fark:%d\n",hesapla(cikar,sayi1,sayi2));
	printf("Çarpým:%d\n",hesapla(carp,sayi1,sayi2));
	printf("Mod:%d\n",hesapla(modAl,sayi1,sayi2));
	return 0;
}
int topla(int sayi1,int sayi2)
{
	return sayi1+sayi2;
}
int cikar(int sayi1,int sayi2)
{
	return sayi1-sayi2;
}
int carp(int sayi1,int sayi2)
{
	return sayi1*sayi2;
}
int modAl(int sayi1,int sayi2)
{
	return sayi1%sayi2;
}
int hesapla(int islemPtr(int, int),int sayi1,int sayi2)
{
	int sonuc;
	sonuc = islemPtr(sayi1,sayi2);
	return sonuc;
}