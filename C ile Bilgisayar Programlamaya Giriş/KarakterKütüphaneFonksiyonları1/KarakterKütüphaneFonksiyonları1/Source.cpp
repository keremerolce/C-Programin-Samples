#include <stdio.h>
#include <ctype.h>

int main()
{
	int i,SayiMi;
	char asciikodu,kucukHarf;

	for (int i = 32; i < 127; i++)
	{
		asciikodu=toascii(i);
		kucukHarf=tolower(asciikodu);
		SayiMi=isdigit(asciikodu);
		printf("%d\t%c\t%c\t%d\n",i,asciikodu,kucukHarf,SayiMi);
	}
	return 0;
}