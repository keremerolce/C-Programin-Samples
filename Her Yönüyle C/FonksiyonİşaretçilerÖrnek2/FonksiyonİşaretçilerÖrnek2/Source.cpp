#include <stdio.h>
int faktoriyelHesapla(int);

int main()
{
	int sayi=0;
	/*int parametresi alan ve int döndüren fonkPtr isimli bir fonksiyon iþaretçisi tanýmlayalým*/
	int (*fontPtr)(int);
	/*iþaretçinin dönüþ tipi ve parametreleri fonksiyonumuzla uyumlu olmalýdýr. iþaretçiye
	fonksiyonun adresini kopyalayalým.Bu iþlem sonrasý artýk fonksiyonumuzu fonkPtr iþaretçisi
	aracýlýðýyla çaðrýlabilir durumda oluruz
	*/
	fontPtr=faktoriyelHesapla;
	printf("Faktoriyel bulunacak sayiyi giriniz:");
	scanf("%d",&sayi);
	/*Fonksiyonu iþaretçi aracýlýðýyla çaðýralým:
	aþaðýdaki ifade fonkPtr aracýlýðýyla faktoriyelHesapla fonksiyonuna çaðrý yapar*/
	int faktoriyel=(* fontPtr)(sayi);
	//Bulunan sonucu yazalým

	printf("%d\n",faktoriyel);
	return 0;
}
int faktoriyelHesapla(int sayi)
{
	//sýrf ve sýfýrdan büyük sayýlarýn faktoriyeli aþaðýdaki gibi hesaplanýr
	int sonuc=1;
	if (sayi<1)
	{
		return sonuc;
	}
	for (int i = sayi; i >=1 ; i--)
	{
		sonuc=sonuc*i;
	}
	return sonuc;
}