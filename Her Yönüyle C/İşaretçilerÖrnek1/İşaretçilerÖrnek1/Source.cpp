#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"tr");
	//bir tam sayi tanýmlayalým
	int sayi=15;
	//sayý deðiþkeninin deðerini yazdýralým
	printf("Sayý Deðiþkeninin Deðeri: %d\n",sayi);

	printf("Sayý Deðiþkeninin Bellek Adrsi: %p\n",&sayi);

	int *p=NULL;

	printf("p iþaretçisinin tanýmlama esnasýndaki deðeri :%p\n",p);
	//iþaretçiye sayý deðiþkeninin bellek adresini kopyalayalým
	p=&sayi;
	//artýk p deðiþkeni de sayýnýn bellek adresini tutmaktýr
	printf("p iþaretçisinin yeni deðeri :%p\n",p);

	printf("p deðiþkeninin tuttuðu bellek adresindeki yeni deðer:%d\n",*p);

	return 0;
}