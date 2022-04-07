#include <iostream>
using namespace std;

const double PI(3.141592654);

double Obim(double r){
    return 2 * PI * r;                  // Racuna obim kruga
}

double Povrsina(double r){
    return PI * r * r;                  // Racuna povrsinu kruga
}

void ProracunajKrug(double r){          // Stampa obim i povrsinu kruga
    cout << "Obim: " << Obim(r) << endl;
    cout << "Povrsina: " << Povrsina(r) << endl;
}

int main(){                            // Glavni program
    double poluprecnik;
    cin >> poluprecnik;
    ProracunajKrug(poluprecnik);
    return 0;
}