#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    const int MaxBroj(50), PragZaProlaz(55);
    int broj_kandidata;
    do{
        cout << "Koliko kandidata je pristupilo ispitu? ";
        cin >> broj_kandidata;
        if(broj_kandidata < 1 || broj_kandidata > MaxBroj) cout << "Broj mora biti od 1 do " << MaxBroj << "!" << endl;
    } while(broj_kandidata < 1 || broj_kandidata > MaxBroj);
    int poeni[MaxBroj];
    for(int i = 0; i < broj_kandidata; i++){
        cout << "Unesi broj poena za " << i + 1 << "kandidata: ";
        cin >> poeni[i];
    }
    cout << endl << "Kandidat      Status" << endl;
    for(int i = 0; i < broj_kandidata; i++){
        cout << setw(7) << i + 1 << ".";
        if(poeni[i] >= PragZaProlaz) cout << "POLOZIO" << endl;
        else cout << "PAO" << endl;
    }
}