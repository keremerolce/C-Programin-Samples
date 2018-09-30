#include <iostream>

using namespace std;

int main()
{
	int sayi[10];
	for (int i = 0; i < 10; i++)
	{
		cout<<i+1<<". degeri giriniz:";
		cin>>sayi[i];
	}
	return 0;
}