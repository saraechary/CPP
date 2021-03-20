#include <iostream>
#include <cmath>
using namespace std;

// chcielibysmy kazdemu nowo utworzonymu obiektowi danej klasy przypisywac jakies poczatkowe wybrane przez nas wartosci (rozne dla danych egzemplarzy)

//posluzymy sie tzw konstruktorem - funkcj skladowa (metoda) wywolywana automatycznie w momencie tworzenia nowego obiektu danej klasy. konstruktor musi miec nazwe dokladnie tka sama jak nazwa klasa

//chcemy stworzyc klase punkt, bedzie miala dwie skladowe zmienne - wspołrzedne x i y danego obiektu klasy Punkt 
//chcielibyśmy tworzac nowy obiekt klasy Punkt od razu przypisać mu wybrane wart tymże skadowym zmiennym

// class Punkt{
//     public:
//     int x, y;
    
//     //deklaracja kontruktora- taka sama nazwa jak klasa, konstruktor nic nie zwraca, nic przed nia nie ma
//     Punkt(int a, int b);

//     // deklaracja funkcji wypisujacej na ekran
//     void wypisz();
// };

// void Punkt::wypisz(){
//     cout << "wspolrzedne punktu: (" << x << ","<< y << ")\n";
// }
// // def konstruktora
// Punkt::Punkt (int a , int b){
//     x = a;
//     y = b;
// }

// int main() {
//     //tworzenie nowego obiektu klasy Punkt z zainicjowaniem wartosci jego zmiennych przy uzyciu konstruktora
//     Punkt p1 = Punkt(3,4);
//     p1.wypisz();

//     Punkt p2 = Punkt(-6,5);
//     p2.wypisz();

// }


//chcemy teraz aby konstruktorow bylo kika - na ewentualnosc gdyby uzytkownik stworzyl obiekt wprowadzajac argumenty w inny sposob np pominalby jeden z nich bo w trakcie tworzenia nie wie jeszcze jakie powinny byc ich wartosci
// wowczas stosujemy konstrukor przeciazony (przeładowany) - oznacza to ze tworzymy kilka definicji konstruktora wszytskie o tej samej nazwie ale w roznych wariantach - przyjmujace rozne zestawy argumentow
// to ktory konstruktor zostaie uruchomiony w trakci tworzenia nowego ubiektu wynika od kolejnosci i typu argumentow wywolania

//zdefinujmy dod 2 funkcje - obliczanie odleg dwoch punktow i w ktorej cwiartce


class Punkt{
    public:
    int x, y;
    char nazwa;

    void wypisz();

    //deklaracja konstruktorow
    Punkt(char c, int a, int b);
    Punkt(char c, int a);
    Punkt(char c);
    Punkt(); // konstruktor domniemany/domyslny - mozna wywolac bez podawania jakichkolwiek argumetow

    //deklaracja dodatkowych funkcji
    void odleglosc (Punkt b);
    void cwiartka ();

};
// definicje konstruktorow :
    //wariant1:
    Punkt::Punkt(char c, int a, int b){
        nazwa = c;
        x = a;
        y = b;
    }

    //wariant2:
    Punkt::Punkt(char c, int a){
        nazwa = c;
        x = a;
        y = 0; // dajemy jakas konkretna watosc
    }

        //wariant3:
    Punkt::Punkt(char c){
        nazwa = c;
        x = 0;
        y = 0;
    }

        //wariant4:
    Punkt::Punkt(){
        //zostawimy pusty, mozna
    }


// def dod funkcji
void Punkt::odleglosc(Punkt b) {
    double odl;
    odl = sqrt((x-b.x)*(x-b.x) + (y-b.y)*(y-b.y));

    cout << "odleglosc punktu " << nazwa << " do punktu " << b.nazwa << " wynosi " << odl << endl; 
}

void Punkt::cwiartka() {
    if (x>0 && y>0) {
        cout << "punkt " << nazwa << " znajduje sie w piwrwszej cwiatrce\n"; 
    }

    else if (x>0 && y<0) {
        cout << "punkt " << nazwa << " znajduje sie w 4 cwiatrce\n"; 
    }

    else if (x<0 && y<0) {
        cout << "punkt " << nazwa << " znajduje sie w 3 cwiatrce\n"; 
    }

    else if (x<0 && y>0) {
        cout << "punkt " << nazwa << " znajduje sie w 2 cwiatrce\n"; 
    }

    else {
        cout << "punkt " << nazwa << " lezy na jednej z osi\n"; 
    }

}

void Punkt::wypisz(){
    cout << "wspolrzedne punktu " << nazwa << " (" << x << ","<< y << ")\n";
}

int main() {
    //tworzenie nowego obiektu klasy Punkt z zainicjowaniem wartosci jego zmiennych przy uzyciu konstruktora
    Punkt p1 = Punkt('a',3,4);
    p1.wypisz();

    Punkt p2 = Punkt('b',5);
    p2.wypisz();

    Punkt p3 = Punkt('c');
    p3.wypisz();

    Punkt p4 = Punkt();
    p4.wypisz();

    Punkt p5 = Punkt('d',88,2);
    p5.wypisz();

    p1.odleglosc(p3);

    p1.cwiartka();
    p3.cwiartka();

}
