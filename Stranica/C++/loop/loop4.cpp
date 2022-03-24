#include <iostream>
using namespace std;
int main(){
    cout << "Unesite brojeve koji ce se sabirati " << "- negativan broj oznacava prekid." << endl << endl;
    int suma(0), broj(0);
    do{
        suma += broj;
        cout << "Unesite broj: ";
        cin >> broj;
    }while(broj >= 0);
    cout << endl << "Suma unesenih brojeva je: " << suma << endl;
    return 0;
}