#include <iostream>
#include <string>
using namespace std;


char koduj(char znak, int klucz) {
	znak = toupper(znak); 
	if (znak + klucz <= 90) return znak + klucz;
	else return znak + klucz - 26;
}


char dekoduj(char znak, int klucz) {
	znak = toupper(znak); 
	if (znak - klucz >= 65) return znak - klucz;
	else return znak - klucz + 26;
}

int main() {
	int k;
	string jawny;
	cout << "podaj wyraz do zaszyfrowania: "; cin >> jawny;
	cout << "podaj klucz szyfrujacy: "; cin >> k;

	
	string szyfrogram = ""; 
	cout << "tekst jawny: " << jawny << endl;

	for (int i = 0; i < jawny.length(); i++) szyfrogram += koduj(jawny[i], k);
	cout << "szyfrogram: " << szyfrogram << endl;


	jawny = ""; /
	for (int i = 0; i < szyfrogram.length(); i++) jawny += dekoduj(szyfrogram[i], k);
	cout << "tekst jawny odszyfrowany: " << jawny << endl;

	return 0;
}