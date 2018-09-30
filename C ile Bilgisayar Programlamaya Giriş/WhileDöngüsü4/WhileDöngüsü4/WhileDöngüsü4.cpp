// WhileDöngüsü4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	long i,sayi,faktoriyel;
	faktoriyel=1;
	i=1;

	printf("Faktoriyeli Hesaplanacak Sayiyi Giriniz:");
	fflush(stdout);
	scanf("%ld",&sayi);

	while (i<=sayi)
	{
		faktoriyel=faktoriyel*i;
		i++;
	}
	printf("%ld!=%ld\n",&sayi,&faktoriyel);
	return 0;
}

