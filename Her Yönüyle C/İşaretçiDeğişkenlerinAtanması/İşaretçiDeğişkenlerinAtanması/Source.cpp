#include <stdio.h>
#include <stdlib.h>

int main(int argc,const char * argv[])
{
	//-->Ad�m1<--
	//�ki i�aret�i tan�mlayal�m
	int *ptr1,*ptr2;
	//-->Ad�m2<--
	//Birinci i�aret�i i�in bellekten yer ay�ral�m

	ptr1=(int *)malloc(sizeof(int));

	//Bellekten adreslerinin de�erlerini yazd�ral�m
	printf("ptr1'de tutulan adres-> %p\n",ptr1);
	//printf("ptr2'de tutulan adres-> %p\n",ptr2);

	//-->Ad�m3<--
	/*Ayr�lan bellek adresini ptr2'ye kopyalayal�m b�ylece her ikisi de ayn� adresi g�stersin*/
	ptr2=ptr1;

	//bellek adresinin de�i�kenlerini yazd�ral�m
	printf("ptr1'de tutulan adres -> %p\n",ptr1);
	printf("ptr2'de tutulan adres -> %p\n",ptr2);
	//-->Ad�m4<--
	/*�lk i�aret�iyi kullanarak bellek adresindeki de�eri de�i�tirelim*/
	*ptr1=10;
	/*Bu i�lem sonucu di�er i�aret�inin g�sterdi�i de�er de de�i�ir. ��nk� ikiside ayn� bellek adresini g�steriyor*/
	printf("Ayrilan bellek alanin degeri:%d\n",*ptr2);

	//-->Ad�m5<--
	/*�kinci i�aret�iyi kullanarak bellek adresindeki de�eri de�i�tirelim*/
	*ptr2=20;
	printf("Ayrilan bellek alaninin degeri:%d\n",*ptr1);

	//-->Ad�m6<--
	/*ilk i�aret�iyi kullanarak malloc ile ayr�lan bellek alan�n� bo�altal�m.*/
	free(ptr1);
	/*ptr1 ve ptr2 ayn� alan kulland��� i�in ptr1'i bo�altmam�z yeterli, dolay�s�yla a�a��daki sat�rdaki yorumu kald�r�rsan�z zaten bo�alm�� 
	bir alan� bo�altmaya �al��t���n�z i�in hata al�rs�n�z*/

	//free(ptr2);
	return 0;
}