#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i;
	srand(time(NULL));

	printf("Zarlar Atilmaya Baslandi: \n");
	for (i = 1; i <=10; i++)
	{
		printf("%10d",1+(rand()%6));
		if (i%5==0)
		{
			printf("\n");
		}
	}
	printf("Zar 10 Kez Atýldý");

	return 0;
}