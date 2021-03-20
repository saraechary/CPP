// //zad8
// #include <iostream>
// using namespace std;

// int main() {
//     // cout << "Love Sara" << endl;

//     int a,b,c;
//     cout << "Podaj pierwszą liczbe: ";
//     cin >> a;
//     cout << "Podaj druga liczbe: ";
//     cin >> b;
//     cout << "Podaj nr operacji, którą chcesz przeprowadzić (1 - dodawanie, 2 - odejmowanie, 3 - mnożenie, 4 - dzielenie, 5 - reszta z dzielenia):";
//     cin >> c;

//     switch (c) {
//     case 1: 
//         cout << a+b;
//         break;

//     case 2: 
//     cout << a-b;
//         break;
    
//     case 3: 
//         cout << a*b;
//         break;

//     case 4: 
//         if (b==0) {
//             cout << "nie mozna dzielic przez zero!";
//         }
//         else 
//             cout << a/b;
//         break;

//     case 5: 
//         cout << a%b;
//         break;
    
//     default:
//         cout << "nie wybrano zadnego z podanych dzialan";
//         break;
//     }

// }

//zad9
// #include <iostream>
// using namespace std;

// int main () {
//     int a;
//     cout << "podaj liczbe naturalna: ";
//     cin >> a;
//     // int suma = 0;
//     // for (int i = 7; i <= a ; i +=7 ) {
//     //     suma = suma + i;
    
//     // }
//     // cout << suma;

//     int j = 0;
//     for (int i = 11; i <= a ; i +=11 ) {
//         j++;
//     }
//     cout << j;        
// }

//zad10
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main () {

//     int a;
//     int j = 0;
//     int suma = 0;
//     // double srednia = 0;
//     while (a != 0) {
//         cout << "Podaj liczbe calkowita: ";
//         cin >> a;
//         suma = suma + a;
//         j++;
        // if ( a==0) {
        //     cout << "Zero na starcie" << endl;
        // }
//     }
//     // srednia = (double)suma/(j-1) ;

//     if (isnan((double)suma/(j-1))) {
//         cout << "zero na starcie";
//     }
//     else {
//         cout << suma << endl;
//         cout << (double)suma/(j-1);
//     }

// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main () {
//     int a;
//     int j = 0;
//     int suma =0;
//     //Pętla na podawanie
//     while (a != 0) {
//         cout << "Podaj liczbe calkowita: ";
//         cin >> a;
//         suma = suma + a;
//         j++;
//     }
//     // Jeśli jest zero na starcie to zwraca Ci NaN (not a number) - więc warunek na to leci
//     if (isnan((double)suma/(j-1))){
//         cout << "Zero na starcie" << endl;
//     }else{
//         cout << suma << endl;
//         cout << (double)suma/(j-1);
//     }
// }

//zad11
// #include <iostream>
// using namespace std;

// int main () {
//     int a;
//     cout << "Podaj liczbe naturalna: ";
//     cin >> a;
//     int i = 0;

//     while (a != 0) {
//         a=a/10;
//         i++;
//     }
//     cout << i;
// }


//zad12
// #include <iostream>
// using namespace std;

// int main () {
//     int a, b;
//     cout << "Podaj początek przedziału: ";
//     cin >> a;
//     cout << "Podaj koniec przedziału: ";
//     cin >> b;
//     int i, j;

//     cout << "Liczby podzielne przez 4 z przedziału <" << a << ", " << b << ">:";
//     for (i=a; i<=b ; i++) {
//         // if (i%4 != 0){
//         //     continue;
//         // }
//         // else {
//         //     cout << i <<", ";
//         //     j++;

//         if (i%4 == 0) {
//             cout << i << " ";
//             j++;
//         }
//     }
//     // cout << endl << j;
//     cout << "\nLiczb podzielnych przez 4 zawartych w przedziale <" << a << ", " << b << "> jest: " << j;
// }

//zad13
// #include <iostream>
// using namespace std;

// int main () {
//     int a;
//     cout << "Podaj liczbe: ";
//     cin >> a;
//     cout << "znalezione liczby\n";
//     for (int i =1; i<=a ; i++) {
        
//         if (i%13 == 0) {
//             cout <<" ta liczba to "<< i <<" i roznica wynosi "<< a-i << endl;
//         }
//         if (i%23 == 0) {
//             cout << i << " to liczba podzielna przez 23\n";
//         }
//         if (i%59 == 0) {
//             cout <<  " znaleziono liczbe podzielna przez 59 " << i << " Koniec programu";
//             break;
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// int main () {
//     int a;
//     cout << "Podaj liczbe: ";
//     cin >> a;
//     int wynik = 1;

//     // if (a ==0) {
//     //     cout << "0! = 1";
//     // }
//     // else {
//         for (int i = 1 ; i<=a ; i++) {
//             wynik = i*wynik;
//         }
//     // }
//     cout << wynik;
// }

//zad15

#include <iostream>
#include <cmath>
using namespace std;

int main() {
        double a, b;
        cout << "Podaj argument funkcji cos (w stopniach): ";
        cin >> a;
        cout << "Podaj liczbę wyrazów w rozwinięciu Taylora: ";
        cin >> b;
        double suma =0;
        

        double kat = a*M_PI/180;

        //wersja latwiejsza
        // for (int i=0; i<=b-1 ; i++ ) {
        //         suma = suma + pow(-1, i)*pow(kat, 2*i)/tgamma(2*i+1);
        // }

        //wersja trudniejsza
        int mnoznik = 1; //do silni
        double potega = 1, silnia = 1 ;
        for (int i =0 ; i<=b-1 ; i++) {

                if (i%2 == 0) {
                        suma += potega/silnia;
                }
                else {
                        suma -= potega/silnia;
                }

                potega = potega*kat*kat;
                silnia = silnia*(mnoznik++)*(mnoznik++);
        }

        double wynik = cos(kat);
        cout <<"Wartość funkcji cos(x) obliczona przy użyciu funkcji bibliotecznej: " << wynik << endl;
        cout << "Wartość funkcji cos(x) obliczona z wykorzystaniem rozwinięcia Taylora: " << suma;

}
/*
//zad16
#include <iostream>
#include <cmath>
using namespace std;

int main() {
        int liczba;
        int ile = 0, dzielnik = 2; // ile mówi nam ile razy dana liczba jest dzielnikiem podanej przez użytkownika liczby
// dzielnik - zmienna przechowująca kolejne dzielniki do sprawdzania
        cout << "Podaj liczbę: ";
        cin >> liczba;
        cout << "Rozkład: " << liczba << " = ";

        while (liczba >= 1) {
// Jeśli liczba dzieli się przez aktualny dzielnik, to ją przez niego dzielimy

                if (liczba%dzielnik == 0) {
                        liczba = liczba/dzielnik;
                        ile++;
                }

// Jeśli nie, to o ile dokonaliśmy już jakiegoś dzielenia przez aktualny dzielnik, wypisujemy to na ekranie.
                else {
                        if (ile != 0 && liczba != 1) {
                                cout << dzielnik << "^" << ile << " + ";
                        }

// Ładne wypisywanie, jeśli kończymy już nasz program (nie ma na końcu znaku +)
                        else if (ile != 0 && liczba == 1) {
                                cout << dzielnik << "^" << ile;
                        }

// Zwiększamy nasz dzielnik i zerujemy zmienną ile
                        dzielnik++;
                        ile = 0;

// Jeśli doszliśmy już do momentu gdy nasza liczba = 1, to kończymy działanie programu.
                        if (liczba == 1) {
                                break;
                        }
                }
        }
}

*/