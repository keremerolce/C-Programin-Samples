#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr;
	ptr=(int *)malloc(sizeof(int));
	if (ptr==0)
	{
		printf("Hata-> Bellekten Yer Ayrýlmadý!");
		return 1;
	}
	*ptr=225;
	printf("%d\n",*ptr);
	free(ptr);
	return 0;
}