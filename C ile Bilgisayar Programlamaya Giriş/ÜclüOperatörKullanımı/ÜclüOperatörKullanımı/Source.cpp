#include <stdio.h>

int main()
{
	int x,y;
	printf("Bir Tam Sayi Giriniz:");
	fflush(stdout);
	scanf("%d",&x);

	if(x==0)
	{
		y=1;
	}
	else
	{
		y=0;
	}
	printf("Y'nin if/else Yapisi Kullandiktan Sonraki Degeri: %d\n",y);
	(x==0)?(y==1):(y==0);
	printf("Y'nin Uclu Operator Kullandiktan Sonraki Degeri: %d\n",y);
}