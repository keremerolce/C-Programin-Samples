#include <stdio.h>
#include <math.h>

double kuvvetHesapla(double t,int u);

int main()
{
	int us;
	double taban,sonuc;

	printf("Tabani Giriniz: ");
	fflush(stdout);
	scanf("%lf",&taban);

	printf("Ussu Giriniz: ");
	fflush(stdout);
	scanf("%d",&us);

	sonuc=kuvvetHesapla(taban,us);

	printf("(%lf)^%d = %lf\n",taban,us,sonuc);

	return 0;
}

double kuvvetHesapla(double t, int u)
{
	double son;

	if (u==0)
	{
		son=1;
	}
	else
	{
		son=t*kuvvetHesapla(t,u-1);
	}
	return son;
}