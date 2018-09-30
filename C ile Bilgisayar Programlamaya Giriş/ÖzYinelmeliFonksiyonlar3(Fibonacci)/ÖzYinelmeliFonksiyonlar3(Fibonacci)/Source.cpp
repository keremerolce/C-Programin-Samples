#include <stdio.h>
long fibonacci(int n);

int main()
{
	int sayi;
	long sonuc;

	printf("Fibonacci Serisinin Kacinci Elemanini Hesaplamak Istiyorsunuz :");

	fflush(stdout);
	scanf("%d",&sayi);

	sonuc=fibonacci(sayi);

	printf("Fibonacci(%d)=%ld",sayi,sonuc);

	return 0;
}

//Özyinelemeli Fibonacci Serisi Elemani Hesaplama Fonksiyonu 

long fibonacci(int n)
{
	long fib;

	if (n<=1)
	{
		fib=n;
	}
	else
	{
		fib=fibonacci(n-1)+fibonacci(n-2);
	}
	return fib;
}