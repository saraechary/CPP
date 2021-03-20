#include <iostream>
using namespace std;

// w wielu jezykach mozna tworzyc wlasne typy danych. czyli oprocz int, double mozna definiowac wlasne typy
// taki nowy typ to nie tylko kilka liczb zebranych w calosc ale rowniez ich sposob zachowania jako calosci

// taki typ moze byc modelem jakiegos rzeczywistego obiektu np zmywarki ktory w komputerze mozna opisywac zespolem liczb i sposobow zachowan
// liczby to np. rok produkcji, złozycie wody itd
//sposoby zachowan - zbior funkcji ktore zmywarka moze wykonac np. mycie szybkie, mycie dokładne, suszenie itd.

// te liczby i funkcji (metody) zbieramy razem i tworzymy nowy typ danych - zmywarka

//nowy typ - czyli nowa klasa obietow
//klasa - typ danych np. zmywarka
//obiekt - konkretny egzemplarz danej klasy 

// definicja klasy:

    // class Moja_klasa { // zwyczajowo duza litera - nazwa
    //     // ciało klasy - skladowe zmienne i funkcje(metody)
    // }; // dajemy srednik!

// zazwyczaj w wiekszych programach kazda klase definujemy w osobnym pliku


//     class Samochod {
//         string nazwa;
//         int moc;
//     };

// // stworzylismy nowy typ danych (klase). kazdy egzemplarz bedzie mogl miec jakas wart przypisana do zmiennych nazwa i moc
// // na razie zdefiniowalismy klase, nie istnieje zaden egzemplarz 

// int main(){
//     // tworzenie egzemplarza klasy jakby iny(liczba)

//     Samochod sam1; // stworzylismy nowy egzemplarz (obiekt) klasy Samochod
//     // nazwa i moc sam1 nie jest okreslona jeszcze


// }

//     class Samochod {
//         public: // etykieta public - wystepujace skladowe sa dostepne rowniez spoza zakresu klasy
            
//         // inicjalizacja w klasie - nadajemy zmiennym wartosci juz w definicji klasy: 
//             string nazwa = "mazda 3";
//             int moc = 120;

//         private: // oznacza ze deklarowane skladnii sa dostepne tylko z wnetrza z danej klasy
//         // dla zmiennych oznacza to za moga byc odczytywane i moga byc zapisywane tylko poprzez funkcje nalezace do danej klasy
//         // wyswietlenie ziennej przebieg jest niemozliwe bo jest private
//         // dla funkcji oznacza to ze moga byc wywolywane tylko przez inne funk tej klasy
//             int przebieg = 5000;

//         // jest jeszcze etykieta proctected - like privated

//         //jesli nie napiszemy zadnej etykiety - domyslnie jest to private
//     };

// int main() { 
//     Samochod sam1;
    
//     //odwolanie sie do skladowych obietku (wart zmiennych) obiekt.nazwa_zmiennej
//     cout << "Nazwa: " << sam1.nazwa << endl;
//     cout << "Moc: " << sam1.moc << endl;
//     // cout << "Przebieg: " << sam1.przebieg << endl;

// }

// rezygnujemy z inicjalizacji w klasie 

class Samochod {
    private:
        int przebieg;
        // Silnik sil; // zmienna skladowa w klasie moze byc obiektem skladowym innej klasy
    public:
        string nazwa;
        int moc;

    // deklatacja funkcji skladowej (metody)
    void wpisz (string nazwa, int moc, int przebieg);

    //deklaracja funkcji wypisujacych na ekran wartosci zmiennych skladowych
    void wypisz();

};

// class Silnik {};

// funkcje skladowe mozna edefiniowac wewnatrz klasy ale najlepeij robic to tylko dla krótkich funkcji
// najczesciej definuje sie je poza cialem klasy

//skaldnia Samochod::wpisz informuje kompilator ze funkcja wpisz jest skladowa klasy Samochod
void Samochod::wpisz(string a, int b, int c) {
    nazwa = a;
    moc = b;
    przebieg = c;
}

void Samochod::wypisz() {
    cout << "Nazwa: " << nazwa << endl;
    cout << "Moc: " << moc << endl;
    cout << "Przebieg: " << przebieg << endl;
}

//argumentem funkcji moze byc obiekt nowej klasy
void pokaz(Samochod sam){
    cout << "Nazwa: " << sam.nazwa << endl;
    cout << "Moc: " << sam.moc << endl;
    // cout << "Przebieg: " << sam.przebieg << endl; to sie nie skompiluje bo privatee
}

int main() {
    Samochod sam1;

    // cout << "Moc: " << sam1.moc << endl; // przed przypisaniem wart, wart to smieci

    // funkcje skladowe wywolujemy na obiekckie piszac oniekt.nazwa_funkcji()
    sam1.wpisz("Mazda 3", 120, 50000);

//     cout << "Nazwa: " << sam1.nazwa << endl;
//     cout << "Moc: " << sam1.moc << endl;

    sam1.wypisz(); // wywoluje tez private

    pokaz(sam1);
}
