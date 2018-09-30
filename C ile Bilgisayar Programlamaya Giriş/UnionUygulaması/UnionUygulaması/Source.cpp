#include <stdio.h>

union PAYLAS
{
	int x;
	int y;
}z;

int main()
{
	int *xAdres,*yAdres;

	z.x=11;
	xAdres=&z.x;
	printf("x =%d y=%d\n",z.x,z.y);

	z.y=22;
	yAdres=&z.y;
	printf("y =%d y=%d\n",z.x,z.y);

	printf("xAdres= %p  yAdres= %p\n",xAdres,yAdres);

	return 0;
}