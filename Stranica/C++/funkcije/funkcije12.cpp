#include <iostream>
using namespace std;

const double PI(3.14159265);

// Stampa obim i povrsinu kruga sa poluprecnikom zadanim kao parametar
void ProracunajKrug(double r){
    cout << "Obim: " << 2 * PI * r << endl;
    cout << "Povrsina: " << PI * r * r << endl;
}
int main(){                     // Glavni program
    double poluprecnik;
    cin >> poluprecnik;
    ProracunajKrug(poluprecnik);
    return 0;
}