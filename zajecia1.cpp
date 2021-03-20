/*

// kompilator ma zaimportować biblioteke o nazwie iostream, służy do wyświetlania rzeczy i wprowadzania danych
#include <iostream>

// wykorzytujemy tzw przestrzen std - standardowa biblioteka
// jesli nie bylo by to używane to komenda wygladała by tak std::cout <<
using namespace std;

// main - głowna funkcja programu, kazdy program musi ja zawierac, od niej kompilator zaczyna wykonywac program
int main() {

    cout << "Dzien dobry";
    // kazda instrukcje konczymy srednikiem
}

/* komenatrz 
wielolinikowy
*/

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "hej\n";
//     cout << "hej2";

//     // przejcie do nowej lini:
//     // \n - znak scecjalny
//     // endl

//     cout << "hej";
//     cout << endl;
//     cout << "hej2";

//     cout << "hej" << endl << "hej2";
// }

// #include <iostream>
// using namespace std;

// int main() {
// // sposob definiowania zmienych:
// // int - liczba calkowita, tylko raz
// // short - liczba calkowita,  mniejsza od int
// // long 
// int a;
// short b;
// long c;

// // double, float - liczby zmiennoprzecinkowe, liczby rzeczywiste
// double d;
// float e;

// // char - pojedyńczy znak, litera/cyfra/kropka
// char f;

// // string - ciag znakow
// string g;

// //bool - true/false (kazda niezerowa wartosc/0)
// bool h;

// // "= przypisanie wartosci
// a = 15;
// b = 3;
// c = 876;
// d = 6.66; //kropka!
// f = 'd'; // wartosc char w apostrofie
// g = "hejjj";
// h = true; //to samo miało byly wynik np 5 

// cout << a << endl << b << endl << d << endl << f << endl << h;
// }

// #include <iostream>
// using namespace std;

// int main() {
// // inicjalizacja zmiennej - nadanie wartosci juz przy tworzeniu
// int a = 4;
// cout << a << endl;
// // zienne moga byc modyfikowanie w trakcie działania programu
// a = 3;
// cout << a << endl;

// // stała - CONST, nie da sie zmieniec 
// const int stala = 11;
// // stala = 32, komputer wyrzuci bład

// }

/*
#include <iostream>
using namespace std;

// zmienna globalna - zmienna zdefiniowana poza wszelkimi innymi funkcjami, poza mainem
    int poza_main = 11;

int main() {
    // blok kodu - ograniczony fragment {}
    // zmienne lokalne - zmienna w bloku, ograniczona tylko do bloku

    {
        // nowy blok
        // tylko w nim sie wypisze
        int a = 6;
        cout << a << endl;

    }
    // cout << a << endl; nie uda sie, zmienna w innym bloku

    // przesłanianie nazw,  mozna uzywac te same nazwy ale musza byc w innych blokach
    int a = 66;
    cout << a << endl;

}


#include <iostream>
using namespace std;

int main() {
    // cin - wczytywanie danych przez uzytkownika
    // zmienna bez przypisanej wartosci bedzie miec przypadkowa wartosc (zmienna lokalna) lub zero (z. globalna)

    int liczba;
    cout << "Wpisz liczbe\n";
    cin >> liczba;
    cout << "Wpisana liczba to:" << liczba;

}



#include <iostream>
using namespace std;

int main() {
    int a = 13;
    int b = 5;
    int c;

// podstawowe operatory:
// % reszta z dzielenia (modulo)
// = przypisanie wartosci (nie równości!)

    c = a/b;
    cout << c << endl;
    // gdy mamy int, wszystko po przecinku zostanie uciete

    // rzutowanie - jawne zmienianie typu danej zmiennej -> (nowy typ zmiennej)zmienna
    double d;
    d = (double)a/b;
    cout << d << endl;

}  


#include <iostream>
using namespace std;

int main() {
    // int a = 8;
    // a = a + 8;
    // a +=8;

    // // zwiekszanie/zmniejszanie o 1: inkrementacja/dekrementacja
    // a++;
    // a--;

    // szybszy sposob deniniowania zmiennych jednego typu:
    int a, b;
    bool m;
    // <= mniejszy lub równy, == równość, != różność

    a = 4;
    b = 9;

    m = (a < b );
    cout << m;
    
    // suma logiczna ||
    // iloczyn locziczny &&

}    



#include <iostream>
using namespace std;

int main() {
    // zad: uzytkownik wprowadza wspolczynniki prostej y = ax+b , oraz wspołrzedne punktu (x,y) przez ktora ma przechodzić prosta prostopadła

    double a, b;
    cout << "Podaj wspolczynniki a: ";
    cin >> a;
    cout << "Podaj wspolczynniki b: ";
    cin >> b;
    cout << "twoja postac prostej to y=" << a << "x + " << b << "\n";

    double x, y;
    cout << "Podaj x wspolrzedna: ";
    cin >> x;
    cout << "Podaj y wspolrzedna: ";
    cin >> y;
    cout << "twoj punkt to (" << x <<","<< y << ")\n";

    // to co szukamy, prosta prostopadła
    double aa, bb;
    aa = -1/a;
    bb = y - aa*x;

    cout << "twoja postac szukanej prostej to y=" << aa << "x + " << bb << "\n";

}
*/

#include <iostream>
using namespace std;

#include <cmath>

int main() {
    double a;
    cout << "podaj liczbe: ";
    cin >> a;
    cout << "pierwiastek z niej to " << sqrt(a); 

}
