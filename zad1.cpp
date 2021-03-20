#include <iostream>
using namespace std;

/*
int main() {
    cout << "Dzień dobry!\n\tTo jest pierwsze zdanie.\nA oto kolejna linia ze znakami specjalnymi:\n\tZnak \\ to tzw. backslash, nazywany potocznie ”wtyłciach”.";

}
// char a = 's';
int main() {
    // 
    // cout << "Moj char to " << a << endl;
    // a = 'z';
    // cout << "Moj nowy char to " << a;

}*/

// Sprawdź czy poniższe kody się kompilują, jeśli nie to uzupełnij je w taki sposób, aby się
// kompilowały. Nie usuwaj nic z podanych w przykładach fragmentów kodów:

// #include <iostream>
// using namespace std;
// int main() {
//     int a = 4; // brakowało ;
//     cout << a;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int liczba = 7;
//     cout << liczba << endl;
//     {
//         int liczba = 11;
//         cout << liczba << endl;
//         // brakuje jednego }
//     }
// cout << liczba;
//}

// #include <iostream>
// using namespace std;
// int main() {
//     // brakuje okreslenia zmennej
//     int liczba = 1;
//     cout << "Moja liczba wynosi: " << liczba;
// }

//zad 5
// #include <iostream>
// using namespace std;

// int main() {
//     // double a;
//     // cout << "podaj liczbe w kilometrach: ";
//     // cin >> a;
//     // cout << "twoje liczba w milach to: " <<  a/1.609;

//     double a, b;
//     cout << "podaj mase: ";
//     cin >> a;
//     cout << "podaj wzrost: ";
//     cin >> b;
//     cout << "twoje bmi wynosi: " << a/((b/100)*(b/100));
// }

// zad 6
// #include <iostream>
// using namespace std;

// int main() {
//     double a, b;
//     cout << "Podaj pierwszy wyraz ciagu geo ";
//     cin >> a;
//     cout << "Podaj iloraz ciagu geo ";
//     cin >> b;
//     cout << "pierwsze wyrazy ciagu to " << a << ", " << a*b << ", " << a*b*b;
// }

//zad 8
// int main() {
//      double a, b;
//     cout << "Podaj wspolczynniki a: ";
//     cin >> a;
//     cout << "Podaj wspolczynniki b: ";
//     cin >> b;
//     cout << "twoja postac prostej to y=" << a << "x + " << b << "\n";
//     cout << "miejsce zerowe to " << -b/a;
// }

//zad 9

// #include <iostream>
// using namespace std;
// #include <cmath>

// int main() {
//     double a, b, c, d;
//     cout << "Podaj bok 1: ";
//     cin >> a;
//     cout << "Podaj bok 2: ";
//     cin >> b;
//     cout << "Podaj kat: ";
//     cin >> c;
//     // d = sqrt(a*a + b*b - 2*a*b*cos(c*3.14/180));
//     d = sqrt(a*a + b*b - 2*a*b*cos(c*M_PI/180));
//     cout << "3 bok ma dlugosc: " << d;
// }

// zad 10
// #include <iostream>
// using namespace std;

// int main() {
//     double x, y;
//     cout << "Podaj x wspolrzedna punktu A: ";
//     cin >> x;
//     cout << "Podaj y wspolrzedna punktu A: ";
//     cin >> y;
//     cout << "twoj punkt A to (" << x <<","<< y << ")\n";

//     double xx, yy;
//     cout << "Podaj x wspolrzedna punktu B: ";
//     cin >> xx;
//     cout << "Podaj y wspolrzedna punktu A: ";
//     cin >> yy;
//     cout << "twoj punkt B to (" << xx <<","<< yy << ")\n";

//     double a, b;
//     a = (yy-y)/(xx-x);
//     b = y - a*x;
//     cout << "ich wspolna prosta to y= " << a << "x + " << b << "\n";
// }
// zad 11
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x,y,a,b,c;
    cout <<"podaj x";
    cin >> x;
    cout <<"podaj y";
    cin >> y;

    a = log10(x+2);
    b = 3*sin(y/2) + sqrt(2*x);
    c = (3*x -y*y)*(3*x -y*y)*(3*x -y*y);

    cout << "wynik to: " << (a*b)/c;
}
