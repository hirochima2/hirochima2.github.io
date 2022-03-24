#include <iostream>
using namespace std;
int main(){
    const int BrojMjeseci(12);      // Ukupan broj mjeseci
    double ukupno(0);               // Ukupna godisnja kolicina padavina
    int mjesec;                     // Redni broj mjeseca (1 - 12)
    for(mjesec = 1; mjesec <= BrojMjeseci; mjesec++) { 
        double padavine;
        cout << "Unesite količinu padavina u toku " << mjesec << ". mjeseca: ";
                  cin >> padavine;
                  ukupno += padavine;
        }
        double prosjek = ukupno / BrojMjeseci;
        cout << "Prosječna količina padavina je: " << prosjek << endl; 
        return 0;
}