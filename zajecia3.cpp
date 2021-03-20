#include <iostream>
#include <cmath>

using namespace std;

// // funkcja - podprogram ktory jako reultat zwraca jakas wartosc 

// //podnoszenie do kwadratu
// int kwadrat(int liczba); //deklaracja funkcji

// // deklaracja funkcji - inforujemy kompilator o istnieniu takiej funkcji
// // funkcja nosi nazwe kwadrat i zwraca wartosc typu int
// //wyrazenie w nawiasie to argument funkcji - w naszym przypadku to wyrazenie typu int

// // definicja funkcji -  w {} znajduje sie cialo funkcji czyli jej tresc
// //funkcji nie trzeba deklarowac jesli przed jej wywolaniem ja definijemy

// //definicja funkcji kwadrat
// int kwadrat(int liczba) {
//     int wynik;
//     wynik =  liczba*liczba;

//     return wynik; //zwraca to co return
//     //return oznacza ze funk konczy swoje dzialanie i wraca do miejsca wywolania i wart zwrocona bedzie wart zmniennej wynik

// }

// int main() {
//     int a,b;
//     cout << "podaj liczbe: ";
//     cin >> a;

//     b = kwadrat(a);
//     //wywolanie funkcji, piszemy jej nazwe z nawiasem w ktorym podajedmy argument, w naszym przypadku jest to liczba podana przez uzytkownika
//     // cout <<  "wynik: " << b;
//     cout <<  "wynik: " << kwadrat(a);
//     // cout <<  "wynik: " << wynik; //nie uda sie bo zmienna jest zdefiniowana w innym bloku i main nie ma do niej dostepu

// }

// int kwadrat(int liczba);
// int kwadrat(int liczba) {


//     // liczba = 11; //modyfikuje wartosc liczby wewnatrz funkcji
//     // return liczba*liczba; 

//     int wynik;
//     wynik =  liczba*liczba;
//     liczba = 11; // tutaj dobrze zwroci bo zwraca wynik a 11 jest zmieniane po fakcie

//         cout << "wartosc zmiennej liczba w srodku funkcji kwadrat " << liczba; //lokalnosc zmiennych


//     return wynik;
// }

// int main() {
//     int a = 6;
//     cout << kwadrat(a); // zwroci 121;

//     int liczba = 6;
//     cout << "wartosc zmiennej liczba" << liczba; //przyslanianie nazw
// }

//deklaracje roznych funkcji

// int kwadrat(int liczba);
// double szescian (double liczba);
// char pierwsza_litera(string name);
// //void - oznacza ze funkcja nie zwraca zadnej wartosci
// void funkcja(int liczba1, double liczba2);
// //argumentow moze byc wiecje niz jeden, moga byc roznych typow

// //funkcja moze nie przyjmowac zadnych wartosci np main()
// int funkcja_2();
// int funkcjaNrTrzy(void);

// //mozna zagniezdzac funkcje w sobie

//pierw 4 stopnia
// double pierwiastek_4 (double liczba);

// int main() {

//     double a;
//     cout << "podaj liczbe: ";
//     cin >> a;
//     cout << pierwiastek_4(a);
// }
// double pierwiastek_4 (double liczba) {
//         double wynik;
//         wynik = sqrt(sqrt(liczba));
//         // arg funkcji moze byc inna funkcja
//         return wynik;
// } 
// // samo cialo/definicja moze byc po main jesli tylko wczesniej byla zdefiniowana

//ZMIENNE STATYCZNE - zmienna ktora nie "ginie' po zakonczeniu danego bloku kodu
//tworzy sie za pomoca slowa static

int licz() {
    // int licznik = 1; //1.
    static int licznik = 1; //2.
    //taki zapis sprawia ze zmienna licznik jest zmienna lokalna tzw automatyczna 
    // ginie po zakonczeniu danego bloku w ktorym zostala utworzona

    cout << "Ta funkcja zostala wywolana " << licznik << " razy.\n";
    licznik++; 
}

int main( ) {
    for (int i = 0; i < 10; i++) {
        licz(); //1. jest caly czas tylko "1 raz"
    }
}