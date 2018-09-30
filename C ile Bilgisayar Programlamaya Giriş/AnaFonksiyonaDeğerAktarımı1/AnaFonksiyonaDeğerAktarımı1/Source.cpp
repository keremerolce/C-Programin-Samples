#include <stdio.h>
#include <stdlib.h>

int main(int argsay, char *argvek[])
{
	int toplam;

	if (argsay<3)
	{
		printf("Eksik parametre !\n");
		exit(1);
	}
	if (argsay<3)
	{
		printf("Cok fazla parametre !\n");
		exit(1);
	}

	toplam=atoi(argvek[1]+atoi(argvek[2]));

	printf("Toplamlari %d\n",toplam);

	return 0;
}