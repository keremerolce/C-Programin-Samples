#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,birinciZar,ikinciZar,ucuncuZar,dorduncuZar,besinciZar;

	printf("Yathzee Basladi:\n");
	for (i = 0; i < 3; i++)
	{
		birinciZar=(rand()%6)+1;
		ikinciZar=(rand()%6)+1;
		ucuncuZar=(rand()%6)+1;
		dorduncuZar=(rand()%6)+1;
		besinciZar=(rand()%6)+1;

		if (birinciZar==6&&ikinciZar==6&&ucuncuZar==6&&dorduncuZar==6&&besinciZar==6)
		{
			printf("Yatzee||Tebrikler");
			break;
		}
		else
		{
			printf("\%d\t\%d\t\%d\t\%d\t\%d\t\%d\t\n",birinciZar,ikinciZar,ucuncuZar,dorduncuZar,besinciZar);
		}
	}
	if (i==3)
	{
		printf("Malesef Oyun bitti.");
	}
	return 0;
}