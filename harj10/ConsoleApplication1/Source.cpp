/*	Työn nimi: Harjoitus 10
	Tekijän nimi: Mikael Schildt
	Työn kuvaus:
	Tee ohjelma, joka laskee syötetyistä kokonaisluvuista sekä positiivisten
	että negatiivisten kokonaislukujen osuuden. Lukujen syöttä lopetetaan
	syöttämällä luku 0.

	Tulostus:
	Syötit kokonaislukuja seuraavasti:
	----------------------------------
	Negatiiviset 7 kpl 70.00%
	Positiiviset 3 kpl 30.00%
	Yhteensä 10 kpl 100.00%

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