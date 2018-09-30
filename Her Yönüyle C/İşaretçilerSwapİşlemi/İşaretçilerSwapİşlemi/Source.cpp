#include <stdio.h>
void degistir(int *arg1,int *arg2)
{
	int gecici=*arg1;
	*arg1=*arg2;
	*arg2=gecici;
}
int main()
{
	int sayi1=10;
	int sayi2=15;

	printf("Sayi1=%d, Sayi2=%d\n",sayi1,sayi2);

	degistir(&sayi1,&sayi2);
	printf("Sayi1=%d, Sayi2=%d\n",sayi1,sayi2);
	return 0;
}