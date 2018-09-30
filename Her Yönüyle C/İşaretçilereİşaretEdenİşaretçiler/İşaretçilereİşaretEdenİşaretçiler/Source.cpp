#include <stdio.h>
int main()
{
	int sayi,deger1,deger2,deger3;
	int *ptr=NULL;
	int **ptrToptr=NULL;
	
	sayi=5;
	ptr=&sayi;
	ptrToptr=&ptr;

	deger1=sayi;
	deger2=*ptr;
	deger3=**ptrToptr;

	printf("deger1:%d\n",deger1);
	printf("deger2:%d\n",deger2);
	printf("deger3:%d\n",deger3);

	return 0;
}