#include <stdio.h>
int main()
{
	 int i;
	 char *gunler[7]={"Pazartesi","Sali","Carsamba","Persembe","Cuma","Cumartesi","Pazar"};

	 printf("Haftanın Gunleri:\n");
	 for (i = 0; i < 7; i++)
	 {
		 printf("%d. %s\n",i+1,gunler[i]);
	 }
	 return 0;
}