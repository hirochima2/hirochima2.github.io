#include <iostream>
using namespace std;

const double PI(3.141592654);

double poluprecnik;

// Stampa obim i povrsinu kruga sa poluprecnikom "poluprecnik"
void ProracunajKrug(){
    cout << "Obim: " << 2 * PI * poluprecnik << endl;
    cout << "Povrsina: " << PI * poluprecnik * poluprecnik << endl;
}
int main(){                 // Glavni program
    cin >> poluprecnik; 
    ProracunajKrug();
    return 0;
}