/*
//zad1

#include <iostream>
using namespace std;

int main() {

    int a, b;
    cout << "Podaj wiek pierwszej osoby: ";
    cin >> a;
    cout << "Podaj wiek drugiej osoby: ";
    cin >> b;

    if (a>b) {
        cout << "Osoba pierwsza jest starsza od drugiej o " << a-b << " lat. ";
        if (a>100) {
            cout << "Zyczymy 200 lat!";
        }
    }
    else {
        cout << "Osoba druga jest starsza od pierwszej o " << b-a << " lat. ";
        if (b>100) {
            cout << "Zyczymy 200 lat!";
        }
    }
}
*/
//zad2

// #include <iostream>
// using namespace std;

// int main(){
//     string  a = "kot";
//     string b;

//     cout << "Podaj haslo: ";
//     cin >> b;

//     if (a != b) {
//         for (int i= 1; i <=2 ; i++) {
//             cout << "Niepoprawne haslo! Masz jeszcze " << 3-i << " proby. Podaj haslo: ";
//             cin >> b;
//             if (a == b) {
//                 cout << "Podales dobre haslo";
//                 break;
//             }
//         while (i == 2) {
//             cout << "Trzykrotnie podałes niepoprawne haslo! Odmowa dostepu.";
//             break;
//         }
//         }
//     }
//     else {
//         cout << "Podales dobre haslo";
//         }
// }

/*
//zad3

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "podaj bok 1: ";
    cin >> a;
    cout << "podaj bok 2: ";
    cin >> b;
    cout << "podaj bok 3: ";
    cin >> c;

    if (a+b>c && a+c>b && b+c>a) {
        cout << "Da sie storzyc trojkat. ";
        if (c>=a && c>=b) {
            if (c*c == a*a + b*b) {
                cout << "Trojkat ten jest prostokatny";
            }
        }
        else if (b>=a && b>=c) {
            if (b*b == a*a + c*c) {
                cout << "Trojkat ten jest prostokatny";
            }
        }
        else {
            if (a*a == b*b + c*c) {
                cout << "Trojkat ten jest prostokatny";
            }
    }
        // if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
        //     cout << " Ten trojkat jest prostokatny.";
        // }
    }

    else {
        cout << "nie da sie storzyc trojkata z tych bokow. ";}
        
}


//zad4
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "podaj liczbe dwucyfrowa: ";
    cin >> a;

    if (a<10 || a>99) {
        cout << "To nie jest liczba dwucyfrowa";
    }

    else {
        if ((a/10)%2 == 1 && (a%10)%2 == 1 || a/10 + a%10 == 7 ) {
            cout << "Obie cyfry podanej liczby są nieparzyste lub ich suma wynosi 7.";

        }
        else 
            cout << "nie obie cyfry podanej liczby są nieparzyste lub ich suma nie wynosi 7.";

    }   
}



//zad5
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    cout << "podaj liczbe: ";
    cin >> a;

    if (a%3 == 0 && a%4 == 0) {
        cout << "Podana liczba jest podzielna przez 12";
    }
    else {
        if (a%3 == 0 && a%4 != 0) {
            cout << "Podana liczba jest niepodzielna przez 12 (jest podzielna przez 3, ale nie jest podzielna przez 4).\n";
            cout << "reszta z dzielenia tej liczby przez 4 to " << a%4;

        }
        else if (a%3 != 0 && a%4 == 0) {
            cout << "Podana liczba jest niepodzielna przez 12 (jest podzielna przez 4, ale nie jest podzielna przez 3).\n";
            cout << "reszta z dzielenia tej liczby przez 3 to " << a%3;

        }
        else {
            cout << "Podana liczba jest niepodzielna przez 12 (nie jest podzielna przez 4 i nie jest podzielna przez 3).\n";
            cout << "pierwiastek z niej wynosi " << sqrt(a);
        }

    }
}


//zad6
#include <iostream>
using namespace std;

int main() {

    double a, b;
    cout << "0 - 29%%: ocena niedostateczna,\n30 - 49%%: ocena dopuszczająca,\n";
    //         // 50 - 69%: ocena dostateczna,\n
    //         // 70 - 89%: ocena dobra,\n
    //         // 90 - 98%: ocena bardzo dobra,\n
    //         // 99 - 100%: ocena celująca.\n"

    cout << "Podaj maksymalną liczbę punktów do uzyskania: ";
    cin >> a;
    cout << "Podaj liczbę punktów uzyskaną przez ucznia: ";
    cin >> b;

    if (0<b*100/a<29) {
        cout << "ocena niedostateczna";

    }
    else if (30<=b*100/a<=49) {
        cout << "ocena dopuszczajaca";
    }
}

// #include <iostream>
// using namespace std;
// int main() {
// int max, punkty;
// double proc; // zmienna, w której przechowywany będzie wynik procentowy
// cout << "Podaj maksymalną liczbę punktów do uzyskania: ";
// cin >> max;
// cout << "Podaj liczbę punktów uzyskaną przez ucznia: ";
// cin >> punkty;

// proc = 100*(double)punkty/max;
// if (proc >= 99) {
// cout << "Uczeń otrzymał ocenę celującą.";
// }
// else if (proc >= 90) {
// cout << "Uczeń otrzymał ocenę bardzo dobrą.";
// }
// else if (proc >= 70) {
// cout << "Uczeń otrzymał ocenę dobrą.";
// }
// else if (proc >= 50) {
// cout << "Uczeń otrzymał ocenę dostateczną.";
// }
// else if (proc >= 30) {
// cout << "Uczeń otrzymał ocenę dopuszczającą.";
// }
// else {
// cout << "Uczeń otrzymał ocenę niedostateczną.";
// }
// }



//zad7
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;

    cout <<"Podaj współczynnik a: ";
    cin >> a;
    cout <<"Podaj współczynnik b: ";
    cin >> b;
    cout <<"Podaj współczynnik c: ";
    cin >> c;

    cout << "Rozwiązywane równanie: " << a << "x^2 + " << b << "x + " << c << endl;

    int delta = b*b -4*a*c;

    if (a != 0) {
        if (delta>0) {
            cout << "Równanie ma dwa rzeczywiste rozwiązania: x1 = " << (-b -sqrt(delta))/2*a << ", x2 = "<< (-b +sqrt(delta))/2*a;

        }
        else if (delta == 0) {
            cout << "Jedno podwojne msc zerowe, x0 = " << -b/2*a;
        }
        else {
            cout << "brak rozwiazan";
        }

    } 
    else {
         cout << "Jedno msc zerowe, x0 = " << -c/b;

    }
}

*/

