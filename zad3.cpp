#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

// // zad1
// int szescian(int a, int b);
// int szescian(int a, int b) {
//     int wynik;
//     wynik = a*a*a + b*b*b;
//     return wynik;
// }

// int main() {
//     int a, b;
//     cout << "podaj podaj liczbe 1: ";
//     cin >> a;
//     cout << "podaj podaj liczbe 2: ";
//     cin >> b;

//     cout << szescian(a, b);
// }

// //zad2
// double modul (double a);
// double modul (double a) {
//     int wynik;
//     if (a>=0) {
//         return a;
//     }
//     else {
//         return -1*a;
//     }
// }
// int main() {
//     double a, b;
//     // cout << "podaj podaj liczbe 1: ";
//     // cin >> a;
//     a = 3;
//     b = -3;

//     cout << modul(a) << "  " << modul(b);
// }

//zad3
// int potega(double a, int b);
// int potega(double a, int b) {
//     int wynik = 1;
//     // for (int i = 0 ; i < b ; i++) 
//     for (int i = 1 ; i <= b ; i++) {
//         wynik = wynik*a;
//     }

//     return wynik;
// }
// int main() {
//     // double a = 2;
//     // int b = 3; // nie potrzebeeeee

//     cout << potega(2, 3);
// }

//zad4
// bool pierwsze(int a);
// bool pierwsze(int a) { 
//     if (a<2)
//         return 0;
    
//     for (int i = 2; i <= sqrt(a) ; i++ ) {
//         if (a%i == 0) {
//             return false; // = 0
//         }
//     }
//     return true;
// }

// int main() {
//     cout << pierwsze(11) << endl; 
//     cout << pierwsze(12);
// }

// //zad5
// void srednia(double a, double b, int c);
// void srednia(double a, double b, int c) {
//     double wynik;
//     switch (c) {
//     case 1:
//         wynik = sqrt((a*a +b*b)/2);
//         cout << "sred kwad " << a << " i " << b << " to " << wynik;
//         break;
//     case 2:
//         wynik = (a +b)/2;
//         cout << "sred artme " << a << " i " << b << " to " << wynik;
//         break;
//     case 3:
//         wynik = sqrt(a*b);
//         cout << "sred geo " << a << " i " << b << " to " << wynik;
//         break;
//     case 4:
//         wynik = 2/ (1/a +1/b);
//         cout << "sred harm " << a << " i " << b << " to " << wynik;
//         break;
//     default:
//     cout << " zla opcja, sorry";
//         break;
//     }
// }
// int main() {
//     srednia(3.6, 8.4, 3); // nie trzeba cout!
// }

// zad6
// int nwd (int a, int b);
// int nwd (int a, int b) {
//     int wynik;
//     if (a >b) {
//         while ( a != 0) {
//         wynik = a%b;
//         a = b;
//         b = wynik;
//         }
//     }
//     else {
//         while ( b != 0) {
//         wynik = b%a;
//         b = a;
//         a = wynik;
//         }

//     }
//     return wynik;

//     // nie dziala dla garicznego zera :( )

//     // while (a != 0 && b != 0) {
//     //     if (a > b) {
//     //         a = a%b;
//     //         b = b;
//     //     }
//     //     else {
//     //         a = a;
//     //         b = b%a;
//     //     }
//     // }

//     // if (a != 0) {
//     //     return a;
//     // }
//     // else {
//     //     return b;
//     // }

// }

// int main() {
//     cout << nwd(0, 18);
// }

// zad 7
int wielokrotnosc(int a, int b);
int dodaj(int a, int b);
int wielokrotnosc(int a, int b) {

    int suma = a;

    while ( suma<=b ) {
        // cout << "pierwsza wart sumy: \n";
        cout << suma ;
        // cout << " wart po dodaniu\n";
        // cout << dodaj(suma, a);
        suma = dodaj(suma, a);

    }
}
int dodaj(int a, int b){
    // static int licz = 1;
    // cout  << " funkcja dodaj() zostala wywolana " << licz << "razy.\n" ;
    // licz++;
    // return a+b; 

    static int licz = 0;
    licz++;
    // cout  << " funkcja dodaj() zostala wywolana " << licz << "razy.\n" ;
    
    return a+b; 
}

int main() {
    cout << wielokrotnosc(14,88);
}