#include <iostream>
using namespace std;
int main(){
    const int BrojMjeseci(12);      // Ukupan broj mjeseci
    double ukupno(0);               // Ukupna godisnja kolicina padavina
    int mjesec;                     // Redni broj mjeseca (1 - 12)
    mjesec = 1;
    while(mjesec <= BrojMjeseci){
        double padavine;
        cout << "Unesite kolicinu padavina u toku " << mjesec << ". mjeseca: ";
        cin >> padavine;
        ukupno += padavine;
        mjesec++;
}
    double prosjek = ukupno / BrojMjeseci;
    cout << "Prosjecna kolicina padavina je: " << prosjek << endl; 
    return 0;
}