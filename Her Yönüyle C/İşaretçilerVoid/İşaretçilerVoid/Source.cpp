#include <stdio.h>

int main()
{
	void *ptr;
	char myChar='C';
	int myInt=234;
	float myFloat=14587.65;

	/*Genel ama�l� i�aret�iye char tipinde de�i�kenin adresini atayal�m*/
	ptr=&myChar;
	printf("myChar Degiskeninin Degeri:%c\n",*((char *)ptr));
	/*Genel ama�l� i�aret�iye int tipinden de�i�kenin adresini atayal�m*/
	ptr=&myInt;
	printf("myChar Degiskeninin Degeri:%d\n",*((int *)ptr));
	/*Genel ama�l� i�aret�iye float tipinden de�i�kenin adresini atayal�m*/
	ptr=&myFloat;
	printf("myChar Degiskeninin Degeri:%f\n",*((float *)ptr));

	return 0;
}