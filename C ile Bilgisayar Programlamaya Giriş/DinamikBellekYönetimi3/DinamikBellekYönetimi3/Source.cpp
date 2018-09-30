#include <stdio.h>
#include <stdlib.h>

char *altKarakterDizisiBul(char *kDizi,int bas,int son);

int main()
{
	int i;
	char *karakterDizisi,*parca;
	karakterDizisi="deneme";

	for (i = 0; i < karakterDizisi[i]; i++)
	{
		parca=altKarakterDizisiBul(karakterDizisi,0,i);
		puts(parca);
	}

	return 0;
}

char *altKarakterDizisiBul(char *kDizi,int bas,int son)
{
	int i,n;
	int j=0;
	char *alt;

	n=son-bas;
	alt=(char *) malloc(n*sizeof(char));
	for (i = 0; i <=son; i++)
	{
		alt[j]=kDizi[i];
		j++;
	}

	alt[n+1]='\0';

	return alt;
}