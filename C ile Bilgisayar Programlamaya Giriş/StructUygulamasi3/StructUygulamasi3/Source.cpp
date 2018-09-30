#include <stdio.h>

struct MEYVE
{
	float agirlik;
	float fiyat;
};


int main()
{
	struct MEYVE elma;
	struct MEYVE muz;
	struct MEYVE *muzIsaretci;
	float muzTutar,elmaTutar;

	muzIsaretci=&muz;

	//muz MEYVE Türünde Bir Iþaretçidir
	muzIsaretci->agirlik=2.50;
	muzIsaretci->fiyat=3.50;
	muzTutar=muzIsaretci->fiyat*muzIsaretci->agirlik;

	//Elma Meyve Türünde Bir Deðiþkendir
	elma.agirlik=2.00;
	elma.fiyat=1.75;
	elmaTutar=elma.fiyat*elma.agirlik;

	printf("Meyva     Agirlik      Birim     Fiyati   Tutar(TL)\n");
	printf("-----     -------      -----     ------   --------\n");
	printf("Muz      %7.2f     %7.2f    %7.2f   %7.2f\n",muzIsaretci->agirlik,muzIsaretci->fiyat,muzTutar);
	printf("Elma     %7.2f     %7.2f    %7.2f   %7.2f\n",elma.agirlik,elma.fiyat,elmaTutar);

	return 0;


}