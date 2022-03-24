#include <iostream>
using namespace std;
int main(){
    int broj;
    cout << "Unesite broj: ";
    cin >> broj;
    int suma(0), broj_cifara(0), broj_1(broj);
    do{
        int cifra = broj % 10;      //Izdvojena cifra
        suma += cifra;
        broj_cifara++;
        broj /= 10;
    } while(broj != 0);
    cout << "Broj " << broj_1 << " ima " << broj_cifara << " cifara" << endl;
    cout << "Suma njegovih cifara je " << suma << endl;
    return 0;
}