#include <iostream>
#include <cmath>
using namespace std;

//dziedziczenie pozwala jednaj klasie odziedziczyc cos (zmienne, metody) po drugiej klasie 
//klasa dziedziczaca to klasa pochodna, klasa po ktorej klasa pochodna dziedziczy to klasa bazowa 

// class Czworokat {
//     public:
//         double a;
//         double b;
//         double c;
//         double d;

//     double obwod();

//     //konstruktor
//     Czworokat (double w, double x, double y, double z);
//     Czworokat();
// };

// double Czworokat::obwod() {
//     return a+b+c+d;
// }

// Czworokat::Czworokat(double w, double x, double y, double z){
//     a=w;
//     b=x;
//     c=y;
//     d=z;
// }
// Czworokat::Czworokat(){
//     a=1;
//     b=1;
//     c=1;
//     d=1;
// }

// //klasa pochodna rowno... dla ktorej klasa bazowa to czw...
// class Rownoleglobok : public Czworokat {
//     public:
//         //deklaracja konstruktorow
//         Rownoleglobok(double w, double x, double alfa);
//         Rownoleglobok();

//         //metoda do pola
//         double pole();

//         //zmienna przechowujaca kat
//         double kat;

// };

// Rownoleglobok::Rownoleglobok(double w, double x, double alfa) {
//     a=w;
//     b=x;
//     c=w;
//     d=x;   
//     kat = alfa;
// }

// Rownoleglobok::Rownoleglobok() {

// }

// double Rownoleglobok::pole() {
//     double pole;
//     pole = a*b*sin(2*M_PI*kat/360);
//     return pole;
// }

// class Prostokat : public Rownoleglobok {
//     public:
//         Prostokat();
//         Prostokat (double w, double x);

//     //deklaracja funkcji liczacej pole - przyslanianie nazw
//     double pole();
// };

// Prostokat::Prostokat (double w, double x){
//     a = w;
//     b=x;
//     c=w;
//     d=x;
// }

// Prostokat::Prostokat (){

// }

// double Prostokat::pole() {
//     return a*b;
// }

// int main() {
//     Czworokat czw = Czworokat(5,3,7,4);
//     cout << "obwod " << czw.obwod() << endl;

//     Rownoleglobok row = Rownoleglobok(2,6,30);
//     cout << "Pola row " << row.pole() << endl;
//     cout << "obwod row " << row.obwod() << endl;

//     Prostokat pr = Prostokat(4,5);
//     cout << "pole prost " << pr.pole() <<endl;
//     cout << "obwod prost " << pr.obwod() << endl;

// }

// sa 3 typy dziedziczenia: public, procteted, private. roznia sie one dostepem do dziedziczonych skladowych w klasie pochodnej

//public:
//public->public, proceted-> proteted, private -> private

//chronione
//public->procteted, proceted-> proteted, private -> private

//private:
//public->private, proceted-> private, private -> private

//domyslnie dziedziczenie jest prywatne

class Bazowa{
    public:
        int x = 5;
        void wypisz();
    protected:
        int y = 4;
    private:
        int z = 3;
};

void Bazowa::wypisz() {
    cout << " wart zmiennych " << x << " " << y << " " << z;
}

class Pochodna : public Bazowa { // proteted dziala
    public:
        void wypisz_pochodna();
};

void Pochodna::wypisz_pochodna() {
    cout << " wart zmiennych " << x << " " << y ; //bazowa z jest prywatna wiec sie nie wypisze
}

void pokaz(Pochodna obiekt) {
    cout << " wart zmiennych " << obiekt.x ; // jest dziedziczenie proteted cala klasa 

}

int main() {
    Pochodna obiekt;
    obiekt.wypisz_pochodna();

    pokaz (obiekt);
}