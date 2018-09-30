#include <stdio.h>
#include <math.h>

int main()
{
	double radyan,sinus,kosinus,tanjant,kotanjant;
	double const PI=3.141593;
	double aci=45.0;
	radyan=aci*(PI/180.0);

	sinus=sin(radyan);
	kosinus=cos(radyan);
	kotanjant=1.0/tan(radyan);
	tanjant=tan(radyan);

	printf("45 Derecelik Acinin\n");
	printf("Sinusu       :%lf\n",sinus);
	printf("Kosinusu     :%lf\n",kosinus);
	printf("Tanjantı     :%lf\n",tanjant);
	printf("Kotanjanti   :%lf\n",kotanjant);

	return 0;
}