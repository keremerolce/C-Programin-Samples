#include <stdio.h>

void yazdir(int i)
{
	printf("%d\n",i);
	return;
}

int main()
{
	int sayi;
	scanf("%d",&sayi);
	yazdir(sayi);
	return 0;
}