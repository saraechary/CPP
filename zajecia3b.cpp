#include <iostream>
using namespace std;

//TABLICE - ciag obiegtow tego samego typu, zajmujacych ciagly obszar w pamieci 

// int main(){
//     int tab[5];
//     //def tablicy - stworzenie 5-elementowej tablicy o nazwie tab ktorej elementy sa typu int
//     //tablica na poczatku wypelniona "śmieciami" (lokalna), globalna - zera

//     // w przypadku tak tworzonej tablic, jej rozmiar musi byc wartoscia, ktora jest juz znana w trakcie kompilacji (nie moze byc tam zmiennej)!

//     cout << tab[0] << endl; //wypisujemy pierwszy elem tablicy, numerujemy od 0
//     // w przypadku cpp kompilator nir zabroni nam wspisac czegos do tab[5]- mimo ze nie jest to elem nalezacy do naszej tablicy

//     // mozna zainicjalizowac tablice w taki sposob aby byla od razu samymi zerami
//     int tablica[6] {};
//     cout << tablica[4] << endl;

//     //inna inicjalizacja dobra do niewielkich tablic
//     int a[5] = {1, 2, 4, 5, 66};
//     //jesli tak podajemy to mozmey pominac rozmiar tablicy, kompilator sam go odczyta
//     cout << a[4];
// }

// int main() {
//     //wypelnianie za pomoca petli
//     //wypelnianie 10 pierszych liczb podzielnych przez 2

//     int a[10];

//     for (int i = 0; i<10 ; i++) { //warto zaczynac od zera i robic mniejszosc
//         a[i] = 2 + 2*i;
//     }

//     for (int i = 0 ; i<10 ; i++){
//         cout << a[i] << " ";
//     }
    
// }

//zad: funkcja ktora jako arg ptzyjmuje tablice, liczbe arg, mnoznik. bedzie mnozyla kazdy elem tablicy prez podany mnoznik

// void mnozenie(int tab[], int rozmiar, int mnoznik){
    
//     for (int i = 0 ; i < rozmiar; i++){
//         tab[i] = tab[i]*mnoznik;
//     } 
// }

// int main() {
//     int rozmiar = 10;
//     int tab[rozmiar];
//     int mnoznik;

//     for (int i = 0; i<rozmiar ; i++) {
//         tab[i] = i;
//     }

//     cout << "Pierwotna tablica " << endl;
//     for (int i = 0 ; i< 10 ; i++) {
//         cout << tab[i] << " ";
//     }

//     cout << "\npodaj mnoznik ";
//     cin >> mnoznik;

//     mnozenie (tab, rozmiar, mnoznik);

//     cout << "tablica po przemnozeniu \n";
//     for (int i = 0 ; i< 10 ; i++) {
//         cout << tab[i] << " ";
//         //zmieniona juz cala tablica
//     }
//     //przesylajac tablice do funkcji dzialamy na oryginale
//     //kazdy elem tablicy to elem typu int, jego normalnie podac rowniez jako arg jakiejs funkcji i wtedy jego oryginal sie nie zmieni

// }


//Tablice dwuwymiarowe - tablica tablic, 2d - tabelka komurek z l.wierszy i kolumn


// int main() {
//     int a[6][3] = {}; //6 wierszy, 3 kolumny 
//     // wypelnianie - tablica mnozenia 10x10

//     int tab[10][10] = {};
//     for (int i = 0 ; i<10 ; i++ ) {
//         for (int j = 0; j<10; j++ ) {
//             tab[i][j] = (i+1)*(j+1); 
//         }
//     }

//     cout << "tablica po \n";
//     for (int i = 0 ; i< 10 ; i++) {
//         for (int j = 0; j<10; j++ ) {
//             cout << tab[i][j] << "\t";
//         }
//         cout << endl;
//     }
// }

//STRING - tekst ktory wypisujemy na ekran to c-string

// int main(){
//     cout << "witaj\n";

//     string wit;
//     wit = "witaj";
//     cout << wit << endl;

//     string imie;
//     cout <<"podaj imie ";
//     cin >> imie;

//     if (imie == "szymon") {
//         cout << "jestes prowadzacym kursu\n";
//     } 
//     else {
//         cout <<"jestes uczestnikiem" ; 
//     }

//     // stringi mzona laczyc operatorem +
//     cout << imie + " pisze kod.";

//     //stringi mozna porownymac < > - kolejnosc alfabetyczna

//     //mozna zmieniac liczby na ciag znakow - funkcja to_string(liczba)
//     int liczba = 1234;
//     cout << "zamiana " + to_string(liczba) + " string";
//     //zamiana liczby na tekst

// }

// int main() {
//     // string - to tablica znakow char

//     string imie = "szymon";
//     cout << imie [3] << endl;

//     //zad: zamien wszystkie litery A na S

//     string str = "Akwamaryna";
//     cout << "Przed zmiana " + str << endl;

//     for (int i = 0; i < 10; i++) {
//         if (str[i] == 'a' || str[i] == 'A' ) {
//             str[i] = 's';
//         }
    
//     }
//     cout << "Po zmianie " + str;
// }

// int main () {
//     // dynamiczne tablice - jej rozmiar moze byc zmienna, jej wartosc ustalana dopiero w trakcie dzialania programu

//     int rozmiar;
//     cout <<"podaj rozmiar ";
//     cin >> rozmiar;

//     int *tab = new int[rozmiar];

//     for (int j = 0; j<rozmiar; j++ ) {
//             tab[j] = j; 
//             cout << tab[j] << " ";
//         }
// }

// zad akwamaryna one more time - uzyt podaje swije imie a my tworzyny imie, zastepujemy a s

int main() {
    int dlugosc;
    string imie;

    cout << "podaj imie ";
    cin >> imie;

    // sprawdza dlugosc stringa, metoda length() - zwraca dlugosc stringa na ktorego dziala
    //imie.lenght()
    //metoda to funkcja powizana z konkretna klasa 

    dlugosc = imie.length();

    // tworzymy nowa tab dymanicznie
    char *tabl = new char[dlugosc];

    for (int i = 0; i < dlugosc; i++ ) {
        if (imie[i] == 'a' || imie[i] == 'A' ) {
            tabl[i] = 's'; 
        }
        else {
            tabl[i] = imie[i];
        }
    }
    cout << "podane imie po zmianie " << tabl;

}