#include <stdio.h>

int main()
{
	//�e�itli tiplerde 3 adet de�i�ken tan�mlayal�m

	int tamsayi=15;
	double ondaliksayi=20.2;
	char karakter='c';

	//her bir tip i�in i�aret�i tan�mlayal�m

	int *intptr;
	double *doubleptr;
	char *charptr;

	//i�aret�ilere de�i�kenlerin adresini atayal�m

	intptr=&tamsayi;
	doubleptr=&ondaliksayi;
	charptr=&karakter;

	//atama i�lemi sonras� i�aret�ilerde tutulan adresleri ekrana yazd�ral�m
	printf("int isaretcisinin degeri: %p\n",intptr);
	printf("double isaretcisinin degeri: %p\n",doubleptr);
	printf("char isaretcisinin degeri: %p\n",charptr);
	printf("-----------------------------------------\n");


	//i�aret�ilerini artt�rarak ne kadar artt���n� g�relim
	intptr++;
	doubleptr++;
	charptr++;

	//Artt�rmadan sonra de�i�melere bakal�m
	printf("int isaretcisinin degeri: %p\n",intptr);
	printf("double isaretcisinin degeri: %p\n",doubleptr);
	printf("char isaretcisinin degeri: %p\n",charptr);


	return 0;
}