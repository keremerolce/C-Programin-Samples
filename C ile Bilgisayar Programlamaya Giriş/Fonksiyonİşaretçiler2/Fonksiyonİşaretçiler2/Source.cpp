#include <stdio.h>

double f(double);
double turev(double(*fonksiyon)(double x),double x);

int mani()
{
	double x=3.5;

	printf("Fonksiyon x=%lf'deki Degeri=%lf\n",x,f(x));

	printf("Fonksiyon x=%lf'deki Turevi=%lf\n",x,turev(f,x));

	return 0;
}

//Türevi Hesaplancak Fonksiyon
double f(double x)
{
	return x*x*x-2*x+5;
}
double turev(double(*fonksiyon)(double x),double x)
{
	double h=1.0e-3;

	return(fonksiyon(x+h)-fonksiyon(x-h)/(2*h));
}