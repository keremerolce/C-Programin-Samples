#include <Windows.h>
#include <stdio.h>

int main()
{
	
	LARGE_INTEGER t1;
	for (int i = 0; i < 5; i++)
	{

	
	QueryPerformanceCounter(&t1);
	int a=t1.QuadPart;
	int x=(int)(a*a*a);
	x=x%123;
	while((x<64)||(x>90&&x<97))//olu�an say� asc�� kodlara g�re harflere tekab�l eden de�erler aras�nda olmas� i�in d�nd� olu�turuyoruz
        {
                QueryPerformanceCounter(&t1);
	            a=t1.QuadPart;
                x=(int)(a*a*a)%123;
				
        }
	printf("You time: %d \n",x);
	printf("\nKarakter: %c \n",(char)x);
	}
	return 0;
}
