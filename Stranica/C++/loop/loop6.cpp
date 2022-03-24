#include <iostream>
using namespace std;
int main(){
    int broj;
    cout << "Unesite broj: ";
    cin >> broj;
    int suma(0), broj_cifara(0), broj_1(broj);
    if(broj == 0) broj_cifara = 1;
    while(broj != 0){
        suma += broj % 10;
        broj_cifara++;
        broj /=10;
    }
    cout << "Broj " << broj_1 << " ima " << broj_cifara << " cifara" << endl;
    cout << "Suma njegovih cifara je " << suma << endl;
    return 0;
}