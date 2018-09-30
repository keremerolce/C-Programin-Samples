#include <stdio.h>

int main()
{
	float odevnotu,arasinavnotu,yariyilsonusinavnotu,dersnotu;
	printf("Odev Notunuzu Giriniz:");
	fflush(stdout);
	scanf("%f",&odevnotu);

	printf("Ara Sinav Notunu Giriniz:");
	fflush(stdout);
	scanf("%f",&arasinavnotu);

	printf("Yariyil sonu Sinav Notunu giriniz:");
	fflush(stdout);
	scanf("%f",&yariyilsonusinavnotu);

	dersnotu=((odevnotu*0.2)+(arasinavnotu*0.20)+(yariyilsonusinavnotu*0.6));

	if (dersnotu>=60)
	{
		printf("Dersten basari ile gectiniz\n");
	}
	else
	{
		printf("Derse daha cok calisman lazim\n");
	}
	return 0;
}