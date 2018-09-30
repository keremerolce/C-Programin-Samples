#include <stdio.h>
int main()
{
	int sayi;
	printf("Bir sayi degeri giriniz:");
	fflush(stdout);
	scanf("%d",&sayi);
	if (sayi%2==0)
	{
		printf("sayi cift\n");
	}
	else
	{
		printf("sayi tek\n");
	}
	return 0;
}