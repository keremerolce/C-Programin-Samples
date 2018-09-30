#include <stdio.h>

int main()
{
	int *tamsayiIsaretcisi, tamsayi=19;

	tamsayiIsaretcisi=&tamsayi;

	printf("&tamsayi           =%p\n",&tamsayi);
	printf("tamsayiIsaretcisi  =%p\n",tamsayiIsaretcisi);

	printf("\n");

	printf("tamsayi            =%d\n",tamsayi);
	printf("tamsayiIsaretcisi  =%d\n",*tamsayiIsaretcisi);

	printf("\n");

	*tamsayiIsaretcisi=21;
	printf("tamsayi             =%d\n",tamsayi);
	printf("*tamsayiIsaretcisi  =%d\n",*tamsayiIsaretcisi);

	return 0;
}