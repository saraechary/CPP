#include <iostream>
#include <cmath>
using namespace std;

/*
int main() {
    // if (warunek logiczny) {kod ktory sie wykona jesli warunek jest prawdziwy}

    int liczba;
    cout << "Podaj liczbe calkowita";
    cin >> liczba; 

    // if (liczba > 0) {
    //     cout << "Podana liczba jest wieksza od zera\n";
    // }
    // gdy kod jest jednolinikowy to mozna pominać klamry

    // if (liczba > 0) 
    //    cout << "Podana liczba jest wieksza od zera\n";
    // // bez klamer!

    int a = 1;

    if (a) {
        cout << "Warunek jest spełniony";
    }
    // wartosc warunku w ifie jest sprawdza w trakcie wynonywania czynnosci,
    // warunk to zmnienna bool zamiast niej moze byc zwykła liczba 

}


int main() {
    // zad policz pierwiastek z liczby jesli jest wiksza od zera

    int x = -2;
    cout << sqrt(x); // wynik -nan

    double a;
    cout << "podaj liczbe";
    cin >>a;

    if (a>=0 ) {
        cout << "Pierwiastek z tej liczby wynosi " << sqrt(a);

    }
    else {
        cout << "Wprowadzono liczbe ujemna";
    }
}


int main() {
    // zad na podstawie wieku czy jest niepełnoletni, pelnoletni czy senior
    // 0-17 , 18-65, 

    int wiek;
    cout << "podaj wybrany wiek: ";
    cin >> wiek;

    if (wiek >0 && wiek<= 17) {
        cout << "osoba niepełnoletnia";
    }
    else if (wiek >= 18 && wiek <= 65) 
        cout << "osoba pełnoletnia";
    else 
        cout << "senior";
    
    // if (wiek > 65)
    //  cout << "senior";
    //else if (wiek> 17) 
    //  cout << "pełnoletni";
    //else 
    //  cout << "niepelnoletni";

// && "i"
// || "lub"
}



int main() {
    //zad czy liczba jest podzielna przez 6

    int liczba;
    cout << "podaj wybrana liczbe: ";
    cin >> liczba;

    if ( liczba %2 == 0 && liczba %3 ==0) {
        cout <<"jest podzielna przez 6";
    
    }
    if ( liczba %2 == 0 ) {
        if (liczba %3 ==0) {
            cout <<"jest podzielna przez 6";

        }
}


int main() {

    // założmy ze gramy w rpg, i wybieramy postac
    // 1-wojownik, 2-mag, 3-złodziej

    int a;
    cout << "wybierz postac: 1-wojownik, 2-mag, 3-złodziej:  ";
    cin >> a;

    switch (a) {
        //obliczane jest na poczatku wyrazenie a, i sprawdane jest po kolei czy a jest równe 1/2/3
        case 1:
            cout << "wybrałeś wojownika";
            break; 
            //konczy działanie switch, działa az do kolejnego break
        case 2:
            cout << "wybrałeś maga";
            break;
        case 3:
            cout << "wybrałeś złodzieja";
            break;
        default:
            cout << "nie wybrałes zadnej postaci";
            //mowi co ma sie dziac w przypadku domyslnym, nie jest obowiazkowy
            // przypadek jesli nie bedzie liczby od 1-3
            //break; moze byc ale nie musi, nic nie zmieni
    }
}



int main() {
    //chcemy wypisac wszystkie liczby od 1 do 10
    //while  - while (warunek) {kod ktory sie wykonuje dokoki warunek jest spełniony}

    int i = 1;
    // while (i<=10 ) {
    //     cout << i << endl;
    //     i++;
    // }

    // do while - do {kod} while (warunek);
    // podobna petla ale kod wykona sie przynajmniej raz nawet jesli warunek nie bedzie spełniony!

    do {
        cout << i << endl;
        i++;
    } while (i <11); //średnik!!

}



int main() {
    // for - for(instrukcja inicjalizujaca ; warunek ; instrukcja kroku) {tresc petli}

    //wszystkie dwocyfrowe liczby podzielne przez 3

    int i;
    for (i = 12 ; i<100 ; i+=3 ) {
        cout << i << " ";
    }
    // na poczatku wykonywana jest tylko jeden raz istrukcja inicjalizujaca, nastepnie sprawdzamy wanrunek jesli jest spełniony to wykonywana jest resc petli 
    // po wykonaniu obiegu wykonywana istrukcja kroku. powtarzaa sie to az warunek przestanie byc spelniony

    
    for ( int i = 12 ; i<100 ; i+=3 ) {
        //lokalnosc zmiennych
        cout << i << " ";
    }
}



int main() {
    // instrukcja continue - konczy obecny obieg pentli bez wykonywania pozostałych instrukcji
    // działanie petli sie nie konczy, konczy sie tylko jeden obieg

    // chcemy wypisac wszystkie liczby od 1-100 z pominieciem podzilnych przez 7

    for (int i = 1; i<100 ; i++ ) {
        
        if (i%7 == 0) {
            continue; // przerywa tylko jeden obirg
        }
        cout << i << " ";
    }

    for (int i = 1; i<100 ; i++ ) {
        
        if (i%7 == 0) {
            break; // przerywa cala petle, calkowicie działanie
        }
        cout << i << " ";
    }
}



int main() {
    //uzytkownik podaje liczbe n i chce obliczyc 1^2 + 2^2 + ... + n^2

    int n;
    cout << "podaj liczbe: ";
    cin >> n;

    int suma = 0;

    for (int i = 1 ; i <= n ; i++ ) {
        suma = suma + i*i; // nie uzywamy i^2 !!
        
    }
    cout << suma;
}



int main() {
    //uzytkownik podaje 2 liczby a i b, chcemy podac wynik a^b

    int a,b;
    cout << "podaj podst potegi: ";
    cin >> a;
    cout << "podaj wykladnik potegi: ";
    cin >> b;

    //a^b = a*a*a..*a

    int wynik = a;
    for (int i = 2 ; i<=b ; i++) {
        wynik = wynik*a;
    } 
    cout << wynik;
}

*/
int main() {
    //chcemy wypisac m poczatkowych liczb poczatkowych i dla kazdej z nich chcemy wypisac n kolejnych wielokrotnoci
    // wypisanie- liczba: 4; wielokrotnosci: 4 8 12 16
    // liczba: 1; wielokrotnosci: 1 2 3 4 5 


    int m, n;
    cout << "podsj liczbe poczatkowych liczb naturalnych: ";
    cin >> m;
    cout << "podaj liczbe wielokrotnosci: ";
    cin >> n;

    
    for (int i = 1; i<=m ; i++) {
        
        cout << "\nliczba " << i << ", wielokrotnosci "; 

        for (int j=1 ; j<=n ; j++) {
            cout << i*j << " ";
        }
    } 
}