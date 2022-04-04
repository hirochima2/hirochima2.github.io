#include <iostream>
using namespace std;

int broj_poziva(1);

void IspisiBrojPoziva(){
    cout << "Ovo je " << broj_poziva << ". poziv" << endl;
    broj_poziva++;
}
int main(){
    for(int i = 1; i <= 5; i++) IspisiBrojPoziva();
    IspisiBrojPoziva();
    return 0;
}