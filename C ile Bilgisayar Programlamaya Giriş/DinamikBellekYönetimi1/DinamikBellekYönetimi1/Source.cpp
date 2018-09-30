#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i;
	float *dizi,toplam,ortalama;
	while (1)
	{
		printf("Dizinin Eleman Sayýsýný Giriniz:");
		fflush(stdout);
		scanf("%d",&n);

		if (n<=0)
		{
			break;
		}
		dizi=(float *)malloc(sizeof(float) * n);

		if (dizi==NULL)
		{
			puts("yetersiz bellek alani");
			exit(1);
		}
		for (toplam=0.0,i = 0; i < n; i++)
		{
			printf("%d. Eleman:",i+1);
			fflush(stdout);
			scanf("%f",&dizi[i]);
			toplam=+dizi[i];
		}
		ortalama=toplam/n;

		printf("Dizinin Elemanlarinin Toplaminin Ortalamasi = %f\n",ortalama);

		free(dizi);
	}
	return 0;
}