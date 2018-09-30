#include <stdio.h>

int main()
{
	//çeþitli tiplerde 3 adet deðiþken tanýmlayalým

	int tamsayi=15;
	double ondaliksayi=20.2;
	char karakter='c';

	//her bir tip için iþaretçi tanýmlayalým

	int *intptr;
	double *doubleptr;
	char *charptr;

	//iþaretçilere deðiþkenlerin adresini atayalým

	intptr=&tamsayi;
	doubleptr=&ondaliksayi;
	charptr=&karakter;

	//atama iþlemi sonrasý iþaretçilerde tutulan adresleri ekrana yazdýralým
	printf("int isaretcisinin degeri: %p\n",intptr);
	printf("double isaretcisinin degeri: %p\n",doubleptr);
	printf("char isaretcisinin degeri: %p\n",charptr);
	printf("-----------------------------------------\n");


	//iþaretçilerini arttýrarak ne kadar arttýðýný görelim
	intptr++;
	doubleptr++;
	charptr++;

	//Arttýrmadan sonra deðiþmelere bakalým
	printf("int isaretcisinin degeri: %p\n",intptr);
	printf("double isaretcisinin degeri: %p\n",doubleptr);
	printf("char isaretcisinin degeri: %p\n",charptr);


	return 0;
}