#include <iostream>
using namespace std;

void IspisiBrojPoziva(){
    static int broj_poziva(1);
    cout << "Ovo je " << broj_poziva <<". poziv" << endl;
    broj_poziva++;
}
int main(){
    for(int i = 1; i <= 5; i++) IspisiBrojPoziva();
    IspisiBrojPoziva();
    return 0;
}