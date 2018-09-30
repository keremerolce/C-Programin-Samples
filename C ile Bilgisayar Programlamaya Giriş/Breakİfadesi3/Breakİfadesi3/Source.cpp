#include <stdio.h>


int main()
{
	int a,b,c,sayi,kuplerintoplami;
	int i=0;
	for (a = 0; a <=9; a++)
	{
		
		for (b = 0; b <=9; b++)
		{
			for (c = 0; c < 10; c++)
			{
				sayi=100*a+10*b+c;
				kuplerintoplami=(a*a*a)+(b*b*b)+(c*c*c);
				if (sayi==kuplerintoplami)
				{
					i++;
					printf("Ilk Amstrong Sayisi=%d\n",sayi);
				}
				else
				{
					kuplerintoplami=0;
					sayi=0;
				}
				if (i==1)
				{
					break;
				}
			}
			if (i==1)
			{

			}
		}
		if (i==1)
		{
			break;
		}
	}
	return 0;
}