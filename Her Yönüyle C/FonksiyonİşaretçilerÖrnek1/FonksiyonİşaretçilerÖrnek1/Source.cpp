#include <stdio.h>

int faktoriyel(int);

int main()
{
	int sayi=0;
	//Faktoriyel fonksiyonunun adresini yazdýralým
	printf("FaktoriyelHesapla fonksiyonunun adresi %p\n",faktoriyel);
	//fonksiyonu çaðýralým
	printf("Faktoriyeli bulunacak sayiyi yaziniz:");
	scanf("%d",&sayi);
	int fak=faktoriyel(sayi);

	printf("%d\n",fak);
}
int faktoriyel(int sayi){
	int sonuc=1;
	if (sayi<0)
	{
		return sonuc;
	}
	for (int i = sayi; i >=1; i--)
	{
		sonuc=sonuc*i;
	}
	return sonuc;
}