#include <iostream>
#include <cmath>
using namespace std;

// //zad3
// class Okrag {
//     public:
//         double x;
//         double y;
//         double r;
    
//     Okrag(double x, double y, double r);

//     void rownanie();
//     void pokaz();
//     double pole();
//     int wzaj_polozenie(Okrag a);
//     // void wpisz(double x, double y, double r);
// };

//     Okrag::Okrag(double a, double b, double c){
//         x = a;
//         y = b;
//         r = c;
//     }

//     void Okrag::rownanie(){
//         cout << "Rownanie okregu: (x-" << x << ")^2 + (y-" << y <<")^2 = " << r*r << endl;
//     }

//     void Okrag::pokaz(){
//         cout << "Wspolrzedne srodka okregu: (" << x << "," << y << "), promien: " << r << endl;

//     }

//     double Okrag::pole(){
//         return M_PI*r*r;

//     }

// double odleglosc (double a, double b, double c, double d);

//     int Okrag::wzaj_polozenie(Okrag a){

//         double odl = odleglosc(x,y,a.x, a.y);
//         if (r == a.r && x ==a.x && y == a.y) {
//             cout << "nieskonczenie wiele\n";
//         }
//         else if (r + a.r< odl || abs(r-a.r)> odl) {
//             return 0;
//         }
//         else if (r + a.r== odl || abs(r-a.r) == odl) {
//             return 1;
//         }
//         else if (r + a.r > odl || abs(r-a.r) < odl ) {
//             return 2;
//         }


//     }

    
//     double odleglosc (double a, double b, double c, double d){
//         return sqrt((a-c)*(a-c) + (b-d)*(b-d));
//     }

// int main() {
//     Okrag o1(0, 0, 3);
//     Okrag o2(2, 4, 4);
//     Okrag o3(0, -6.5, 3.5);

//     o1.pokaz();
//     o1.rownanie();
//     o2.pokaz();    
//     o2.rownanie();
//     o3.pokaz();
//     o3.rownanie();
//     cout << "pola: \n";
//     cout << o1.pole() << endl;
//     cout << o2.pole()<< endl;
//     cout << o3.pole()<< endl;

//     cout << "Liczba punktów przecięcia okręgów 1 i 2: " << o1.wzaj_polozenie(o2) << endl;
//     cout << "Liczba punktów przecięcia okręgów 2 i 3: " << o2.wzaj_polozenie(o3) << endl;
//     cout << "Liczba punktów przecięcia okręgów 1 i 3: " << o1.wzaj_polozenie(o3) << endl;    


// }

//zad4

class Wektor{
    public: 
        double a;
        double b;
        double c;

    double dlugosc();
    void pomnoz(int d);
    Wektor suma (Wektor s);
    double ilocz_skalarny (Wektor s); 
    Wektor ilocz_wektorowy (Wektor s); 
    void wypisz();

    Wektor(double a, double b, double c);
    Wektor(double a, double b);
    Wektor(double a);
    Wektor();

};

Wektor::Wektor(double x, double y, double z){
    a = x;
    b = y;
    c = z;
}
Wektor::Wektor(double x, double y){
    a = x;
    b = y;
    c = 0;
}
Wektor::Wektor(double x){
    a = x;
    b = 0;
    c = 0;
}
Wektor::Wektor(){
    a = 1;
    b = 0;
    c = 0;
}

double Wektor::dlugosc(){
    return sqrt(a*a + b*b + c*c);
}

void Wektor::pomnoz(int d){
    a *= d;
    b *= d;
    c *= d;
}

Wektor Wektor::suma(Wektor s) {
    // a = a + s.a;
    // b += s.b;
    // c += s.c;

    return (a + s.a, b + s.b , c + s.c);

}

double Wektor::ilocz_skalarny(Wektor s) {
    return a*s.a + b*s.b + c*s.c;
}

Wektor Wektor::ilocz_wektorowy(Wektor s) {
    return Wektor (b*s.c -c*s.b, -(a*s.c - c*s.a), (a*s.b - b*s.a) );    
}

void Wektor::wypisz() {
    cout << "Wspolrzedne wektora: [" << a << "," << b << "," << c << "]\n";
}

int main() {
    Wektor w1 (2,4,-3);
    Wektor w2 (1,3);
    Wektor w3 (4);
    Wektor w4;

    w1.wypisz();  
    w2.wypisz();  
    w3.wypisz();    
    w4.wypisz();

    cout << "Dlug wekt: \n";
    cout << w1.dlugosc()<< endl;    
    cout << w2.dlugosc()<< endl;    
    cout << w3.dlugosc()<< endl;    
    cout << w4.dlugosc()<< endl;

    w2.pomnoz(4);
    cout <<"Wektor drugi po pomnozeniu przez 4: \n";
    w2.wypisz();

    w1.suma(w2);
    cout <<"Teraz sumuje wektor pierwszy i drugi. Oto wynik: \n";
    w1.wypisz();

    cout << "Iloczyn skalarny wektorow pierwszego i drugiego: " << w1.ilocz_skalarny(w2) << endl;

    Wektor w5;
    w5 = w1.ilocz_wektorowy(w2);
    w5.wypisz();

}