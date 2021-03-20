#include <iostream>
using namespace std;

//zad1
// class Osoba {
//     public:
//         string imie;
//         int wiek;
//         double wzrost;
//         char plec;
    
//     void wpisz(string imie, int wiek, double wzrost, char plec);

//     void wypisz();
// };

// void Osoba::wpisz(string a, int b, double c, char d) {
//     imie = a;
//     wiek = b;
//     wzrost = c;
//     plec = d;
// }

// void Osoba::wypisz() {
//     cout << "Imie: " << imie << endl;
//     cout << "Wiek: " << wiek << endl;
//     cout << "Wzrost: " << wzrost << endl;
//     cout << "Plec: " << plec << endl;
// }

// double srednia (double a, double b, double c ,double d );
// double srednia (double a, double b, double c ,double d ){
//     double wynik;
//     wynik = (a+b+c+d)/4;
//     return wynik;
// }

// int main() {

//     // Osoba os1, os2, os3, os4;
//     Osoba os1;
//     os1.wpisz("ola", 18, 1.67, 'K');
//     os1.wypisz();

//     Osoba os2;
//     os2.wpisz("ula", 44, 1.40, 'K');
//     os2.wypisz();

//     Osoba os3;
//     os3.wpisz("adam", 24, 2.22, 'M');
//     os3.wypisz();

//     Osoba os4;
//     os4.wpisz("ala", 30, 1.77, 'K');
//     os4.wypisz();

//     cout << srednia(os1.wzrost, os2.wzrost, os3.wzrost, os4.wzrost);

// }


//zad2

class Pracownik {
    public:
        string imie;
        string nazwisko;


    void wpisz(string imie, string nazwisko, int pensja);

    void pokaz();

    void porownaj(Pracownik a);

    int podwyzka(int podwyzka);

    private:
        int pensja;
    protected:
        bool aktywny = true;
}; 

void Pracownik::wpisz(string a, string b, int c){
    imie = a;
    nazwisko = b;
    pensja = c;
}

void Pracownik::pokaz(){
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Pensja: " << pensja << endl;
    cout << "Uzytkownik jest " ;
    if (aktywny == true) 
        cout << "aktywny\n";
    else 
        cout << "nie jest aktywny\n";

}

void Pracownik::porownaj(Pracownik a){
    if (a.pensja > pensja) {
        cout << "pracownik " << a.imie << " " << a.nazwisko << " zarabia wiecej niz " << imie << " " << nazwisko << " o " << a.pensja - pensja << endl;
    }
    else if (a.pensja< pensja){
        cout << "pracownik " << a.imie << " " << a.nazwisko << " zarabia mniej niz " << imie << " " << nazwisko << " o " << pensja - a.pensja << endl;
    }
    else {
        cout << "pracownik " << a.imie << " " << a.nazwisko << " zarabia tyle samo co pracownik " << imie << " " << nazwisko  << endl;
    }

}

int Pracownik::podwyzka(int podwyzka){
    cout << "Pensja po podwyzce: " << pensja + podwyzka  << endl;

}

int main() {
    Pracownik prac1, prac2, prac3;

    prac1.wpisz("Adam", "nowak", 2222);
    prac2.wpisz("tania", "szmata", 3000);
    prac3.wpisz("Ola", "igla", 3000);

    prac1.pokaz();
    prac2.pokaz();
    prac3.pokaz();

    prac1.porownaj(prac2);
    prac2.porownaj(prac1);
    prac2.porownaj(prac3);

    cout << prac2.imie << " " << prac2.nazwisko << ": " << prac2.podwyzka(333); 

}