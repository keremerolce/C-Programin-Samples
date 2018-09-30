#include <stdio.h>
#include <stdlib.h>

int main(int argc,const char * argv[])
{
	//-->Adým1<--
	//Ýki iþaretçi tanýmlayalým
	int *ptr1,*ptr2;
	//-->Adým2<--
	//Birinci iþaretçi için bellekten yer ayýralým

	ptr1=(int *)malloc(sizeof(int));

	//Bellekten adreslerinin deðerlerini yazdýralým
	printf("ptr1'de tutulan adres-> %p\n",ptr1);
	//printf("ptr2'de tutulan adres-> %p\n",ptr2);

	//-->Adým3<--
	/*Ayrýlan bellek adresini ptr2'ye kopyalayalým böylece her ikisi de ayný adresi göstersin*/
	ptr2=ptr1;

	//bellek adresinin deðiþkenlerini yazdýralým
	printf("ptr1'de tutulan adres -> %p\n",ptr1);
	printf("ptr2'de tutulan adres -> %p\n",ptr2);
	//-->Adým4<--
	/*Ýlk iþaretçiyi kullanarak bellek adresindeki deðeri deðiþtirelim*/
	*ptr1=10;
	/*Bu iþlem sonucu diðer iþaretçinin gösterdiði deðer de deðiþir. Çünkü ikiside ayný bellek adresini gösteriyor*/
	printf("Ayrilan bellek alanin degeri:%d\n",*ptr2);

	//-->Adým5<--
	/*Ýkinci iþaretçiyi kullanarak bellek adresindeki deðeri deðiþtirelim*/
	*ptr2=20;
	printf("Ayrilan bellek alaninin degeri:%d\n",*ptr1);

	//-->Adým6<--
	/*ilk iþaretçiyi kullanarak malloc ile ayrýlan bellek alanýný boþaltalým.*/
	free(ptr1);
	/*ptr1 ve ptr2 ayný alan kullandýðý için ptr1'i boþaltmamýz yeterli, dolayýsýyla aþaðýdaki satýrdaki yorumu kaldýrýrsanýz zaten boþalmýþ 
	bir alaný boþaltmaya çalýþtýðýnýz için hata alýrsýnýz*/

	//free(ptr2);
	return 0;
}