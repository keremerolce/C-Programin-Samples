#include <stdio.h>
#include <stdlib.h>

int main()
{
	int frekansBir=0;
	int frekans›ki=0;
	int frekansUc=0;
	int frekansDort=0;
	int frekansBes=0;
	int frekansAlti=0;

	int zar,ZarAt;

	for (ZarAt = 1; ZarAt <=6000; ZarAt++)
	{
		zar=1+rand()%6;
		switch (zar)
		{
		case 1:
			frekansBir++;
			break;
			case 2:
				frekans›ki++;
			break;
			case 3:
				frekansUc++;
			break;
			case 4:
			frekansDort++;
			break;
			case 5:
				frekansBes++;
			break;
			case 6:
				frekansAlti++;
				break;
		default:
			break;
		}
	}

	printf("%s%13s\n","zar","Tekrar");
	printf("1%13d\n",frekansBir);
	printf("1%13d\n",frekans›ki);
	printf("1%13d\n",frekansUc);
	printf("1%13d\n",frekansDort);
	printf("1%13d\n",frekansBes);
	printf("1%13d\n",frekansAlti);
}