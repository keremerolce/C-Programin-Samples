#include <stdio.h>

void cikis(void)
{
	printf("Programi kullandiginiz icin tesekkür ederiz\n");
}
void menu1(void)
{
	printf("1.Menuyu Sectiniz\n");
}
void menu2(void)
{
	printf("2.Menuyu Sectiniz\n");
}
void menu3(void)
{
	printf("3.Menuyu Sectiniz\n");
}
void menu4(void)
{
	printf("4.Menuyu Sectiniz\n");
}

int main()
{
	int secenek=1;

	printf("Bu Program Menulere Erismenizi Saglar\n");
	printf("Programdan Cikmak Istediginizde 0 Degerini Giriniz\n");
	while (secenek!=0)
	{
		printf("1 ile 4 arasinda Menu Secenegi Giriniz:");
		fflush(stdout);
		scanf("%d",&secenek);

		switch (secenek)
		{
		case 0:
			cikis();
			break;
		case 1:
			menu1();
			break;
		case 2:
			menu2();
			break;
		case 3:
			menu3();
			break;
		case 4:
			menu4();
			break;
		default:
			printf("Yanlis Secenek Girdiniz\n");
			break;
		}
	}
	return 0;
}