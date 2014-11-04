/*	Ty�n nimi: Harjoitus 10
	Tekij�n nimi: Mikael Schildt
	Ty�n kuvaus:
	Tee ohjelma, joka laskee sy�tetyist� kokonaisluvuista sek� positiivisten
	ett� negatiivisten kokonaislukujen osuuden. Lukujen sy�tt� lopetetaan
	sy�tt�m�ll� luku 0.

	Tulostus:
	Sy�tit kokonaislukuja seuraavasti:
	----------------------------------
	Negatiiviset 7 kpl 70.00%
	Positiiviset 3 kpl 30.00%
	Yhteens� 10 kpl 100.00%

*/

#include <iostream>
using namespace std;

int main()
{
	int numero;
	int posi;
	int nega;
	int yht;
	numero = 1;
	posi = 0;
	nega = 0;
	float npros;
	float ppros;

	while (numero != 0)
	{
		cout << "Anna kokonaisluku \n";
		cin >> numero;

		if (numero > 0)
			posi++;
		else if (numero < 0)
			nega++;

	}
	
	yht = nega + posi;
	npros = nega / yht * 100;
	ppros = posi / yht * 100;

	cout << "Syotit kokonaislukuja seuraavasti: \n";
	cout << "----------------------------------\n";
	cout << "Negatiiviset " << nega << " kpl " << npros << "%\n";
	cout << "Positiiviset " << posi << " kpl " << ppros << "%\n";
	cout << "Yhteensa " << yht << " kpl 100.00%" << endl;
}