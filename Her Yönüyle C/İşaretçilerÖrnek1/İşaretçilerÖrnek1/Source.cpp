#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"tr");
	//bir tam sayi tan�mlayal�m
	int sayi=15;
	//say� de�i�keninin de�erini yazd�ral�m
	printf("Say� De�i�keninin De�eri: %d\n",sayi);

	printf("Say� De�i�keninin Bellek Adrsi: %p\n",&sayi);

	int *p=NULL;

	printf("p i�aret�isinin tan�mlama esnas�ndaki de�eri :%p\n",p);
	//i�aret�iye say� de�i�keninin bellek adresini kopyalayal�m
	p=&sayi;
	//art�k p de�i�keni de say�n�n bellek adresini tutmakt�r
	printf("p i�aret�isinin yeni de�eri :%p\n",p);

	printf("p de�i�keninin tuttu�u bellek adresindeki yeni de�er:%d\n",*p);

	return 0;
}