#include <iostream>
using namespace std;
int main(){
    int broj;
    cout << "Unesite brojeve koji ce se sabirati " << "- negativan broj oznacava prekid." << endl << endl;
    cout << "Unesite broj: "; 
    cin >> broj;
    int suma(0); 
    while(broj >= 0) {
          suma += broj;
          cout << "Unesite broj: ";
          cin >> broj;
    }
    cout << "\nSuma unesenih brojeva je: " << suma << endl;
    return 0;

}