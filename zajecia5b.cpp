#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

//liczba pseudolosowa - liczba generowana przez algorytm majaca przypominac liczbe rzeczywiscie przypadkowa 

// int main() {

//     srand(time(0));
//     // ustawia pukt startowy do generowania liczb pseudolosowych w calym programie, wywolujemy tylko raz na samym poczatku
//     //time(0) zwraca sktualny czas systemu w postaci liczby, 
//     //kazdorazowo przy wywolaniu funkcji rand() jako ziarno (seed) - startowa liczba dla algorytmu bedzie wykorzystywana inna liczba

//     // int a;
//     // a = rand(); // calkowita pseudolosowa od 0 do pewnej maksymalnej 
//     // cout << a;

//     // chcemy wylosowac liczbe z 10-99:, wykorztujemy modulo

//     int x;
//     int poczatek = 10;
//     // rand()%90 daje liczbe z zakresu 0-89
//     x = poczatek + rand()%90;

//     cout << x;

//     for (int i = 0; i<20; i++  ){
//         cout << poczatek + rand()%90<<" ";

//     }
// }

// liczby preudolosowe przydatne w grach, symulacjach, obliczeniach numerycznych
//przyklad - liczenie (szacowanie z dowolnie duza dokladnoscia) prawdopodobienstwa korzystajac z prawa wielkich liczb 
// prawo wielkich liczb: z prawdopodobieństweiem dowolnie bliskim 1, mozna sie spodziewac ze przy dostatecznie wilekiej liczbie prob czestosc danego zdarzenia losowego bedzie sie dowolnie molo roznic od prawdopodobienstwa jedo wystapienia

// przyklad : oszacujemy p-two wyrzucenia 2 oczek na kosce do gry

// int main() {
//     int licznik = 0;
//     srand(time(0));

//     for (int i = 1; i <= 10000 ; i++) {
//         if ((rand()%6 +1) == 2) {
//             licznik++;
//         }
//     }
//     cout << "p-two" << (double) licznik/10000; //im wieksza liczba petli/prob to dokladiejszy wynik
// }

//w urnie znajduje sie 10 kul ponumerowanych od 1-10, 8 razy losujemy ze zracaniem. jakie jest prawdopodobienstwo ze przynajmiej 3 raazy 7 lub wieksza liczbe i ani razu nie wylosujemy kuli nr 2 ani nr 3

// int main() {
//     srand(time(0));

//     int licz_petla = 0; //zlicza wystapienia siodemki lub wiecej
//     int licz_ogol = 0; //zlicza przypadki w ktorych warunek zostal spelniony
//     int war = 0; // odpowiada za przechowanie info o tym czy warunek został spelniony
//                 // war = 0 - wartunek spelniony, war = 1 - nie spel
//     int a;

//     //petla z 1000 prob
//     for (int i = 1; i<=1000;i++ ){
//         licz_petla = 0;
//         war = 0;
        
//         for (int j = 1; j<9; j++) {
//             a = rand()%10 +1;

//             if (a>=7){
//                 licz_petla++;
//             }
//             else if (a==2 || a == 3) {
//                 war = 1;
//             } 
//         }

//         if (licz_petla >= 3 && war == 0) {
//             licz_ogol++;
//         }
//     }

//     cout << "P-two " << (double)licz_ogol/1000;
// }



//REKURENCJA
//funkcja reku to jest funk wywolujaca sama siebie, nalezy zapewnic mozliowsc zakonczenia rekurecji (mozliowsc nieskonczonej petli)

//np. liczenie silni

// int silnia(int n){
//     if (n<2) {
//         return 1;
//     }

//     return n*silnia(n-1);
// }

// int main(){
//     cout << silnia(4);
// }


//STRING - klasaa stworzona do operacji na ciagu znakow

// int main() {
//     // deef obiektow klasy string
//     //1:
//     string str = "kurs programowania";

//     //2: z uzyciel konstruntora
//     string inny = string("kurs 2 ");

//     cout<< str << inny;

//     //DZIALANIE NA PLIKACH - operatory
//     string nowy;

//     //przypisanie
//     nowy = str;
//     cout << nowy;

//     //sklejanie 
//     nowy = str + " " + inny; //przeciazenie operatora - nowa funkcjonalnosc
//     cout << nowy << endl;

//     //sprawdzanie dlugosci stringu /metoda/
//     cout << "dlug stringu: " << str.length() << endl; // to samo dla size()

//     //czyszczenie
//     nowy.clear();
//     cout << "po czyszczeniu " << nowy;

//     //sprawdzenie czy jest pusty
//     if (nowy.empty()) {//1 to pusty 
//         cout << "string o nazwie nowej jest pusty" << endl;
//     }

//     //string - mozna traktowac jako tablice znakow str[4] - indeks 4

//     //znaki pierwszy i ostatni
//     cout << "znak pierwszy " << str.front() << endl;
//     cout << "znak oststni " << str.back() << endl;

//     //zamiana liczbe na string - funkcja to_string
//     double a = 5.87;
//     nowy = to_string(a);

//     cout << nowy << endl;

//     //zamiana string na liczbe
//     nowy = "675.82";
//     //stoi - string to int , stod (double) , stof itp.
//     a = stod(nowy);
//     cout << "konwersja na string i dodanie " << a + 5 << endl;

//     //funkcja substr (pozycja pocztkowa, liczba znakow) - wycina kawalek stringu
//     nowy = str.substr(3, 7);
//     cout << nowy << endl;

//     //wyszukiwanie frag - funkcja find(), jesli funkcja znajdzie to zdroci jego pozycje (pozycje pierwszego znaku)
//     // jesli nie znjdzie to zwroci wart string::npos - najwieksza liczba calkowita w danym komputerze

//     if(str.find("program") != string::npos) {
//         cout << "znaleziono frag na pozycji " << str.find("program") <<endl;
//     }
// }

int main() {
    string nowy;
    // cin >> nowy;

    // dluzszy tekst z klawiatury - funkcja getline(strumien wejsciowy, nazwa stringa,ogranicznik(opcjonalny))
    // getline(cin,nowy);
    // cout << nowy;

    getline (cin, nowy, '-'); //myslnik juz sie nie liczy, jest to ogranicznik
    cout << nowy;

}