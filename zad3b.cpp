#include <iostream>
#include <cmath>
using namespace std;

//zad8
// int main(){
//     double tab1[5] = {1, 2, 3, 3, 4};
//     cout << tab1[0]<< " " << tab1[2] << "  " << tab1[4] << endl;

//     int tab2[20] = {};
//     for (int i = 0; i < 20 ; i++) {
//         cout << tab2[i] << " ";
//     }
//     int tab3[30] = {};
//     for (int i = 0; i < 30 ; i++) {
//     tab3[i] = 1 + 2*i;
//     cout << tab3[i] << " ";
//     }
// }

//zad9
// int szukaj (int tab[], int rozmiar, int element );
// int szukaj (int tab[], int rozmiar, int element ){
//     int licz = 0;
//     for (int i = 0; i<rozmiar ; i++) {
//         if (tab[i] == element) {
//             licz++;
//         }
//     }
//     if (licz != 0) {
//         cout << "Element o wartości "<< element << " został znaleziony w tablicy. Liczba wystąpień: " << licz;

//     }
//     else {
//         cout << "elemnru o wart " << element << " nie ma w tablicy";
//     }    
// }

// int main() {
//     int tab[10] = {2, 4, 7,1,1, 2, 3,3, 0, 5 };
//     // for (int i = 0; i<10 ; i+=2) {
//     //     cout << tab[i] << " ";
//     // }

//     // for (int i = 9; i>=0 ; i--) {
//     //         cout << tab[i] << " ";
//     //     }

//     // int suma = 0;
//     // for (int i = 0; i<10 ; i++) {
//     //     suma += tab[i];
//     // }
//     // cout << suma << endl;

//     // int max = tab[0];
//     // int min = tab[0];
//     // for (int i = 0; i<10 ; i++) {
//     //     if (tab[i] > max) {
//     //         max = tab[i];
//     //     }
//     //     if (tab[i]<min) {
//     //         min = tab[i];
//     //     }
//     // }
//     // cout << max << " " << min << endl;

//     // double srednia = (double)suma/10;
//     // cout << srednia << endl;

//     // int licznik = 0;
//     // for (int i = 0; i<10 ; i++) {
//     //     if (tab[i] > srednia) {
//     //         licznik++;
//     //     }
//     // }
//     // cout << licznik;

//     szukaj(tab, 10, 10);

// }


//zad10
// int main() {
//     int rozmiar, wybor;
//     cout << "podaj rozmiar ";
//     cin >> rozmiar;

//     cout << "Wielokrotnościami jakiej liczby ma zostać wypełniona tablica (do wyboru 2, 3 lub 5): ";
//     cin >> wybor;
    
//     int *tab =new int [rozmiar];
//     // if (wybor == 2 || wybor == 3 || wybor == 5)
//         // cout << "tablica: [" ;

//     switch (wybor) {
//     case 2:
//         for (int i = 0; i<rozmiar; i++ ) {
//         tab[i] = (i+1)*2; 
//         // cout  << tab[i] << ", ";
//         }
//         break;
//     case 3:
//         for (int i = 0; i<rozmiar; i++ ) {
//         tab[i] = (i+1)*3; 
//         // cout  << tab[i] << ", ";
//         }
//         break;
//     case 5:
//         for (int i = 0; i<rozmiar; i++ ) {
//         tab[i] = (i+1)*5; 
//         // cout  << tab[i] << ", ";        
//         }
//         break;

//     default:
//     cout <<"nie masz takkiej mozliwosci, sorka";
//         break;
//     }
    
//     cout << "tablica: [" ;
//     for (int i = 0; i < rozmiar-1 ; i++) {
//         cout << tab[i] <<", ";
//     }
//     cout << tab[rozmiar-1] <<"]\n";
    

//     if (rozmiar%2 == 0) {
//         cout <<"Tablica ma rozmiar parzysty, zmieniam elementy o indeksach parzystych.\n";
//         for (int i = 0; i < rozmiar-1 ; i++) {
//             if (i%2==0) {
//                 tab[i] = tab[i+1];
//             }
//         }
//         cout << "tablica po zmianie: [" ;
//         for (int i = 0; i < rozmiar-1 ; i++) {
//             cout << tab[i] <<", ";
//         }
//         cout << tab[rozmiar-1] <<"]";
//     }
//     else {
//         int iloczyn = 1;
//         cout <<"Tablica ma rozmiar nieparzysty, iloczyn wszystkich elementów tablicy opatrzonych indeksami nieparzystymi.\n";
//         for (int i = 0; i < rozmiar-1 ; i++) {
//             if (i%2!=0) {
//         iloczyn *= tab[i];            }
//         }

//         // for (int i = 1; i < rozmiar; i += 2) {
//         // iloczyn *= tab[i];
//         // }

//         cout << iloczyn;
//     }
 
// }


//zad11
// int main() {
//     int rozmiar, a;
//     cout << "Podaj rozmiar tablicy: ";
//     cin >> rozmiar;

//     int *tab = new int [rozmiar];

//     cout << "Wprowadź "<<rozmiar<< "liczb całkowitych:\n";
//     for (int i=0 ; i < rozmiar ; i++) {
//         cin >> a;
//         tab[i] = a;
//     }

//     int unikat, ile = 0;

//     cout << "wart unikatowe: ";
//     for (int i=0 ; i < rozmiar ; i++) {
//         unikat = 1;
//         // int wartosc = tab[i];
//         for (int j = 0; j < rozmiar ; j++) {
//             if (tab[i] == tab[j] && i != j) {
//                 unikat = 0;
//             }
//         }
//         if(unikat == 1){
//                 ile ++;
//                 cout << tab[i]<< " ";
        
//         }

//     }
//     cout<< "ilosc wart unikatowych : " << ile;
    
// }

//zad12
int main() {
    int tab [8] = {1, 6, 3, 8, 6, 2, 3, 4};

    bool zmiana = true;

    for (int i = 0; i<8; i++) { 
        cout << tab[i] << " ";
    } 
    cout << endl;

    while (zmiana == true) {
        zmiana = false;  
        for (int i = 7; i > 0 ;i-- ) {
            int x;
            if (tab[i-1]>tab[i]) {
                x = tab[i-1];
                tab[i-1] = tab[i];
                tab[i] = x;
                
                zmiana = true;
            }
        }
    }

    cout << "Posortowana tablica: ";
    for(int i = 0; i<8; i++) { 
    cout << tab[i] << " ";
    }

    
}