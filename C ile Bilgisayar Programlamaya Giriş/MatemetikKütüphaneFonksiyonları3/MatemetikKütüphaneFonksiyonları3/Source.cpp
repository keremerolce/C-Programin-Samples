#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,c,delta,x1,x2;

	printf("a Degerini Giriniz: ");
	fflush(stdout);
	scanf("%lf",&a);

	printf("b Degerini Giriniz: ");
	fflush(stdout);
	scanf("%lf",&b);

	printf("c Degerini Giriniz: ");
	fflush(stdout);
	scanf("%lf",&c);

	delta=(pow(b,2))-(4*a*c);

	if (delta>0)
	{
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("Fonksiyonun Birinci Koku: %lf\n",x1);
		printf("Fonksiyonun Ýkinci Koku: %lf\n",x2);
	}
	else if (delta==0)
	{
		x1=-b/(2*a);
		x2=x1;
		printf("Fonksiyonun Birinci Koku: %lf\n",x1);
		printf("Fonksiyonun Ýkinci Koku: %lf\n",x2);
	}
	else
	{
		printf("Fonksiyonun Gercel Koku Yoktur.");
	}
	return 0;
}