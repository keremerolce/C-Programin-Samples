#include <stdio.h>

int main()
{
	printf("char            :%d byte\n",sizeof(char));
	printf("short           :%d byte\n",sizeof(short));
	printf("int             :%d byte\n",sizeof(int));
	printf("long            :%d byte\n",sizeof(long));
	printf("Unsigned char   :%d byte\n",sizeof(unsigned char));
	printf("Unsigned short  :%d byte\n",sizeof(unsigned short));
	printf("Unsigned int    :%d byte\n",sizeof(unsigned int));
	printf("Unsigned Long   :%d byte\n",sizeof(unsigned long));
	printf("Float           :%d byte\n",sizeof(float));
	printf("Double          :%d byte\n",sizeof(double));
	printf("Long Double     :%d byte\n",sizeof(long double));

	return 0;
}