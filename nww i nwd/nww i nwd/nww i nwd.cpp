#include<iostream>



using namespace std;



int main() {
system("chcp 1250>nul");
int liczba1, liczba2, dzielna, dzielnik, n = 2, nwd = 1, dzielnikPoczotkowy;
cout << "Podaj liczbę 1:";
cin >> liczba1;
cout << "Podaj liczbę 2:";
cin >> liczba2;



if (liczba1 > liczba2) {
dzielna = liczba1;
dzielnik = liczba2;
}
else {
dzielna = liczba2;
dzielnik = liczba1;
}
dzielnikPoczotkowy = dzielnik;



do {
if (dzielna % n == 0 && dzielnik % n == 0) {
nwd *= n;
dzielna /= n;
dzielnik /= n;
}
else if (dzielna % n != 0 || dzielnik % n != 0 && n <= dzielnik) {
n++;
}
else {
cout << "nwd: " << nwd << endl;
cout << "nww: " << nwd * dzielna * dzielnik << endl;
}
} while (nwd <= dzielnikPoczotkowy);
}
