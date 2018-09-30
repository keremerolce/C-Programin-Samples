#include <stdio.h>
#include <stdarg.h>
#include <locale.h>
void myPrintf(char *format,...);

int main()
{
	setlocale(LC_ALL,"tr");
	int tamsayi=5;
	float ondalikSayi=3.14;
	char *kitapIsmi="Her Y�n�yle";

	myPrintf("TamSayi=%d\n",tamsayi);
	myPrintf("OndalikSayi=%f\n",ondalikSayi);
	myPrintf("Kitap �smi=%s\n",kitapIsmi);
	myPrintf("Tamsayi=%d,Ondalik Sayi=%f,Kitap Ismi=%s\n",tamsayi,ondalikSayi,kitapIsmi);
	return 0;
}
void myPrintf(char* bicimlendirilecekMetin,...)
{
	int tamsayiParametre;
	double ondalikSayiParametre;
	char* metinParametre;
	va_list parametreler;
	va_start(parametreler, bicimlendirilecekMetin);
	char *ptr=bicimlendirilecekMetin;
	while(*ptr!='\0')
	{
		//%varsa bicim niteleyici gelmi�tir
		if (*ptr=='%')
		{
			//%i�aretinden sonraki karakteri incele
			switch (*++ptr)
			{
				//eger d ise,va_arg ile tam sayi oku
			case 'd':
				tamsayiParametre=va_arg(parametreler,int);
				printf("%d",tamsayiParametre);
				break;
				//eger s ise, va_arg ile karakter dizisi oku yazd�r
			case 's':
				metinParametre=va_arg(parametreler,char *);
				printf("%s",metinParametre);
				break;
				//e�er f ise,va_arg ile float de�er oku ve yazd�r
			case 'f':
				ondalikSayiParametre=va_arg(parametreler, double);
				printf("%f",ondalikSayiParametre);
				break;
			default:
				putchar(*ptr);
				break;
			}
		}
		else
		{
			//eger karakter % de�ilse direk yazdir
			putchar(*ptr);
		}
		//sonraki karakter gec
		ptr++;
	}
	va_end(parametreler);
}