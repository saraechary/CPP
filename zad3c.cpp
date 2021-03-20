#include <iostream>
#include <cmath>
using namespace std;

//zad13
// int main() {
//     string imie;
//     cout << "podaj imie ";
//     cin >> imie;
//     int dlug = imie.length();
//     if (dlug> 8) {
//         cout <<"To imię jest bardzo długie!";
//     }
//     int licz = 0;
//     for (int i = 0 ; i< dlug ; i++){
//     if (imie[i] == 'a' || imie[i] == 'o' || imie[i] == 'e' || imie[i] == 'i' || imie[i] == 'u' || imie[i] == 'y')
//         licz++;
//     }
//     cout <<"Liczba samogłosek: " << licz;
// } 

//zad14
// int main() {
//     string imie;
//     cout << "podaj slowo ";
//     cin >> imie;
//     int dlug = imie.length();

//     for (int i = 0 ; i< dlug/2 ; i++){
//         char x;
//         x = imie[0+i];
//         imie[0+i]=imie[dlug-1-i];
//         imie[dlug -1-i] = x;
//     }
//     for (int i = 0 ; i< dlug ; i++){
//         cout << imie[i];    
//     }
// }

//zad15
// int main() {
//     string slowo;
//     cout << "podaj slowo ";
//     cin >> slowo;
//     int dlug = slowo.length();

//     bool zmienna = false;

//     if (slowo[dlug-1] == 'y' ||slowo[dlug-1] == 'a' ||slowo[dlug-1] == 'u' ||slowo[dlug-1] == 'i' ||slowo[dlug-1] == 'e' ||slowo[dlug-1] == 'o' ){
//         cout << "Podane słowo kończy się samogłoską.";
//     }
//     else {
//         cout << "Podane słowo nie kończy się samogłoską.";

//     }

//     for (int i = 0 ; i < dlug/2 ; i++) {
//         // char x;
//         // x = slowo[0+i];
//         // slowo[0+i]=slowo[dlug-1-i];
//         // slowo[dlug -1-i] = x;

//         if ( slowo[0+i]==slowo[dlug-1-i]){
//             // cout << "Podane słowo jest palindromem.";
//             zmienna = true;
//         }
//     }
//     if (zmienna == true) {
//         cout << "Podane słowo jest palindromem.";
//     }
//     else 
//         cout << "Podane słowo nie jest palindromem.";

// }


//zad16
// int main() {
//     int tab[6][6] = {};
//     int licz = 1;

//     for (int i = 0; i<6 ; i++) {
//         for (int j = 0 ; j <6 ; j++ ) {
//             tab[i][j] = licz;
//             licz++;
//             cout << tab[i][j] << "\t";
//         }
//         cout << endl;
//     }
//     cout << endl;


//     for (int j = 0 ; j <6 ; j++ ) {
//         cout << tab[5][j] - tab[0][j] << "\t";
//     }
    
// }

//zad17
// int main() {
//     int tab[5][5] = {};
//     int licz = 1;

//     for (int j = 0 ; j <5 ; j++ ) {
//         tab [0][j] = licz;
//         licz++;
//     }
//     for (int i = 1; i<5 ; i++) {
//         for (int j = 0 ; j <5 ; j++ ) {
//             tab [i][j] = (5-j)* tab [i-1][j];            
//         }
//     }

//     for (int i = 0; i<5 ; i++) {
//         for (int j = 0 ; j <5 ; j++ ) {
//             cout << tab[i][j] << "\t";
//         }
//         cout<< endl;
//     }
//     cout << endl;

//     int suma1 = 0;
//     int suma2 = 0;
//     for (int i = 0; i<5 ; i++) {
//         suma1 += tab[i][i];         
//         suma2 += tab[4-i][i];         
//         }
//     cout << suma1 << " " << suma2;


//     cout << "Maksymalne i minimalne elementy każdego wiersza: " << endl;

//     int max ;
//     int min ;  

//     for(int i = 0; i<5 ; i++) {
//         max = tab[i][0];
//         min = tab[i][0];    

//         for (int j = 0; j<5; j++){
//             if (tab[i][j]>max) {
//                 max = tab[i][j];
//             } 
//             if (tab[i][j]<min) {
//                 min = tab[i][j];
//             } 
//         }
//         cout << "Wiesz nr " << i+1 << ": max = " << max << ", min = " << min << endl;   
//     }
// }
    
//zad18
// int main() {
//     bool tab[10][10];

//     for (int i = 0; i<10 ; i++) {
//         for (int j = 0 ; j <10 ; j++ ) {

//             if ((i+1)%(j+1)==0 || ((i+1)+ (j+1))%2 != 0 )
//                 tab[i][j] = true;

//             else 
//                  tab[i][j] = false;

//         }
//     }

//     for (int i = 0; i<10 ; i++) {
//         for (int j = 0 ; j <10 ; j++ ) {
//             if (tab[i][j] == true) {
//                 cout << "+";
//             }
//             else 
//                 cout << "-";
//         }
//         cout << endl;
//     }

// }