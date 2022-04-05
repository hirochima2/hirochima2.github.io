#include <iostream>
using namespace std;

int main(){
    int m, n;
    cout << "Ovaj program prikazuje sahovsku tablu. " << endl << endl;
    cout << "Unesite sirinu svakog kvadrata, u znakovima: ";
    cin >> m;
    cout << "Unesite visinu svakog kvadrata, u linijama: ";
    cin >> n;
    cout << endl << endl;
    for(int i = 0; i < 8 * n; i++){
        for(int k = 0; k < 8 * m; k++) cout << ((i / n + k / m) % 2 ? "*" : " ");
        cout << endl;
    }
    return 0;
}