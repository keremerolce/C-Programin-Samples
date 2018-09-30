#include <stdio.h>
#include <math.h>

int main()
{
	double sayi=100.0;
	double dogalTabanLog,onTabaninLog;

	dogalTabanLog=log(sayi);
	onTabaninLog=log10(sayi);

	printf("Log(10)      =%lf\n",dogalTabanLog);
	printf("Log10(10)      =%lf\n",onTabaninLog);

	return 0;
}