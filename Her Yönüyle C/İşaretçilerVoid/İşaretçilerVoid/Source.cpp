#include <stdio.h>

int main()
{
	void *ptr;
	char myChar='C';
	int myInt=234;
	float myFloat=14587.65;

	/*Genel amaçlý iþaretçiye char tipinde deðiþkenin adresini atayalým*/
	ptr=&myChar;
	printf("myChar Degiskeninin Degeri:%c\n",*((char *)ptr));
	/*Genel amaçlý iþaretçiye int tipinden deðiþkenin adresini atayalým*/
	ptr=&myInt;
	printf("myChar Degiskeninin Degeri:%d\n",*((int *)ptr));
	/*Genel amaçlý iþaretçiye float tipinden deðiþkenin adresini atayalým*/
	ptr=&myFloat;
	printf("myChar Degiskeninin Degeri:%f\n",*((float *)ptr));

	return 0;
}